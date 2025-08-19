#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "demo_interfaces_base/action/action.hpp"

using Action = demo_interfaces_base::action::Action;
using namespace std::placeholders;

class ActionServer : public rclcpp::Node {
public:
  explicit ActionServer(const rclcpp::NodeOptions & options = rclcpp::NodeOptions()) :
    Node("action_server", options)
  {
    this->action_server_ = rclcpp_action::create_server<Action>(
      this,
      "action",
      std::bind(&ActionServer::handle_goal, this, _1, _2),
      std::bind(&ActionServer::handle_cancel, this, _1),
      std::bind(&ActionServer::handle_accepted, this, _1));
  }

private:
  rclcpp_action::Server<Action>::SharedPtr action_server_;
  //GoalResponse(const GoalUUID &, std::shared_ptr<const typename ActionT::Goal>)>
  rclcpp_action::GoalResponse handle_goal(const rclcpp_action::GoalUUID & uuid,
    std::shared_ptr<const Action::Goal> goal)
  {
    RCLCPP_INFO(this->get_logger(), "Received goal request");
    (void)uuid;
    RCLCPP_INFO(this->get_logger(), "Goal accepted num: %ld", goal->num);
    if(goal->num < 0) {
      RCLCPP_INFO(this->get_logger(), "Invalid num");
      return rclcpp_action::GoalResponse::REJECT;
    }
    return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
  }

  rclcpp_action::CancelResponse handle_cancel(
    const std::shared_ptr<rclcpp_action::ServerGoalHandle<Action>> goal_handle)
  {
    RCLCPP_INFO(this->get_logger(), "Received request to cancel goal");
    (void)goal_handle;
    return rclcpp_action::CancelResponse::ACCEPT;
  }

  void handle_accepted(const std::shared_ptr<rclcpp_action::ServerGoalHandle<Action>> goal_handle)
  {
    (void)goal_handle;
    RCLCPP_INFO(this->get_logger(), "Goal accepted");
    std::thread{std::bind(&ActionServer::execute, this, std::placeholders::_1), goal_handle}.detach();
  }

  void execute(const std::shared_ptr<rclcpp_action::ServerGoalHandle<Action>> goal_handle) {
    RCLCPP_INFO(this->get_logger(), "Executing goal");
    rclcpp::Rate loop_rate(500);
    const auto goal = goal_handle->get_goal();
    auto feedback = std::make_shared<Action::Feedback>();
    auto result = std::make_shared<Action::Result>();
    int32_t sum = 0;
    for (int i = 0; i < goal->num &&  rclcpp::ok(); ++i) {
      sum += i;
      if (goal_handle->is_canceling()) {
        result->sum = sum;
        goal_handle->canceled(result);
        RCLCPP_INFO(this->get_logger(), "Goal Canceled");
        return;
      }
      feedback->progress = (double_t)i / goal->num;
      goal_handle->publish_feedback(feedback);
      RCLCPP_INFO(this->get_logger(), "progress: %.2f", feedback->progress);
    }
    if (rclcpp::ok()) {
      result->sum = sum;
      goal_handle->succeed(result);
      RCLCPP_INFO(this->get_logger(), "Task finished Result: %ld", result->sum);
    }
  }
};

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<ActionServer>();
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}
