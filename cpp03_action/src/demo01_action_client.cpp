#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "demo_interfaces_base/action/action.hpp"

using Action = demo_interfaces_base::action::Action;
using GoalHandle = rclcpp_action::ClientGoalHandle<Action>;

namespace demo_action_client {
class ActionClient : public rclcpp::Node {
public:
    ActionClient(const rclcpp::NodeOptions options = rclcpp::NodeOptions()) : Node("action_client", options) {
        this->action_client_ = rclcpp_action::create_client<Action>(this, "action");
    }

    void send_goal(int64_t num)
    {
        auto goal_msg = Action::Goal();
        goal_msg.num = num;
        if (goal_msg.num <= 0) {
            RCLCPP_INFO(this->get_logger(), "num must be greater than 0");
            return;
        }
        if (!action_client_) {
            RCLCPP_INFO(this->get_logger(), "action client not initialized");
            return;
        }
        if (!action_client_->wait_for_action_server()) {
            RCLCPP_INFO(this->get_logger(), "connected failed");
        } else {
            RCLCPP_INFO(this->get_logger(), "connected success");
        }

        auto send_goal_options = rclcpp_action::Client<Action>::SendGoalOptions();
        send_goal_options.goal_response_callback = std::bind(&ActionClient::goal_response_callback, this, std::placeholders::_1);
        send_goal_options.feedback_callback = std::bind(&ActionClient::feedback_callback, this, std::placeholders::_1, std::placeholders::_2);
        send_goal_options.result_callback = std::bind(&ActionClient::result_callback, this, std::placeholders::_1);

        auto send_goal_future = action_client_->async_send_goal(goal_msg, send_goal_options);
    }

private:
    rclcpp_action::Client<Action>::SharedPtr action_client_;

    void goal_response_callback(GoalHandle::SharedPtr goal_handle) {
        if (!goal_handle) {
            RCLCPP_INFO(this->get_logger(), "Goal was rejected by server");
        } else {
            RCLCPP_INFO(this->get_logger(), "Goal accepted by server, waiting for result");
        }
    }

    void feedback_callback(GoalHandle::SharedPtr goal_handle, const std::shared_ptr<const GoalHandle::Feedback> feedback) {
        (void)goal_handle;
        RCLCPP_INFO(this->get_logger(), "Received feedback");
        auto progress = (int32_t)(feedback->progress * 100);
        RCLCPP_INFO(this->get_logger(), "Progress: %d%%", progress);
    }

    void result_callback(const GoalHandle::WrappedResult &result) {
        switch (result.code)
        {
        case rclcpp_action::ResultCode::SUCCEEDED:
            RCLCPP_INFO(this->get_logger(), "Action succeeded :) sum: %ld", result.result->sum);
            break;
        case rclcpp_action::ResultCode::ABORTED:
            RCLCPP_ERROR(this->get_logger(), "Action aborted :(");
        case rclcpp_action::ResultCode::CANCELED:
            RCLCPP_ERROR(this->get_logger(), "Action canceled :(");
        default:
            RCLCPP_ERROR(this->get_logger(), "Unknown result code");
            break;
        }
    }
};
}  // namespace demo_action_client

int main(int argc, char ** argv) {
    rclcpp::init(argc, argv);
    auto node = std::make_shared<demo_action_client::ActionClient>();
    node->send_goal(1000);
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}