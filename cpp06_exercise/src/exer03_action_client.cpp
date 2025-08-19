/*
    0.解析launch传入的参数
    1. 包含头文件
    2. 初始化ROS2客户端
    3.  自定义节点
        3-1.创建动作客户端
        3-2.连接服务器，发送请求
        3-3.处理目标值相关响应结果
        3-4.处理连续反馈
        3-5.处理最终响应
    4.调用spin函数，并传入节点对象指针
    5. 释放资源
*/


#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "turtlesim/msg/pose.hpp"
#include "demo_interfaces_base/action/real_time_distance.hpp"

using RealTimeDistance = demo_interfaces_base::action::RealTimeDistance;
using Pose = turtlesim::msg::Pose;


class RealtimeDistanceActionClient : public rclcpp::Node {
public:
    explicit RealtimeDistanceActionClient(const rclcpp::NodeOptions &options = rclcpp::NodeOptions()) 
        : Node("realtime_distance_action_client", options)
    {
        RCLCPP_INFO(this->get_logger(), "RealtimeDistanceActionClient 已经创建...");
        client_ = rclcpp_action::create_client<RealTimeDistance>(this, "realtime_distance");           
    }

    bool connect_to_server(){
        if (!client_) {
            RCLCPP_ERROR(this->get_logger(), "Action client not initialized.");
            return false;
        }
        if (!client_->wait_for_action_server(std::chrono::seconds(1))) {
            RCLCPP_ERROR(this->get_logger(), "Action server did not responde within timeout.");
            return false;
        }
        return true;
    }

    void send_goal(float x, float y){
        if (x < 0.0 || y < 0.0 || x > 11.8 || y > 11.8) {
            RCLCPP_ERROR(this->get_logger(), "Invalid goal. x and y must be between 0.0 and 11.8.");
            return;
        }
        auto goal_msg = RealTimeDistance::Goal();
        goal_msg.goal_x = x;
        goal_msg.goal_y = y;
        
        auto send_goal_options = rclcpp_action::Client<RealTimeDistance>::SendGoalOptions();
        send_goal_options.goal_response_callback =
            std::bind(&RealtimeDistanceActionClient::goal_response_callback, this, std::placeholders::_1);
        send_goal_options.feedback_callback =
            std::bind(&RealtimeDistanceActionClient::feedback_callback, this, std::placeholders::_1, std::placeholders::_2);
        send_goal_options.result_callback =
            std::bind(&RealtimeDistanceActionClient::result_callback, this, std::placeholders::_1);
        client_->async_send_goal(goal_msg, send_goal_options);
    }

private:
    void goal_response_callback(rclcpp_action::ClientGoalHandle<RealTimeDistance>::SharedPtr goal_handle) {
        if (!goal_handle) {
            RCLCPP_ERROR(this->get_logger(), "Goal was rejected by server");
            return;
        }
        RCLCPP_INFO(this->get_logger(), "Goal accepted by server, waiting for result");
    }
    void feedback_callback(rclcpp_action::ClientGoalHandle<RealTimeDistance>::SharedPtr goal_handle,
        const std::shared_ptr<const RealTimeDistance::Feedback> feedback) {
            (void)goal_handle;
            auto dis = feedback->current_distance;
            RCLCPP_INFO(this->get_logger(), "Current distance: %f", dis);
    }

    void result_callback(const rclcpp_action::ClientGoalHandle<RealTimeDistance>::WrappedResult &result) {
        switch (result.code){
            case rclcpp_action::ResultCode::SUCCEEDED:
                RCLCPP_INFO(this->get_logger(), "Result: x:%f, y:%f", result.result->turtle_x, result.result->turtle_y);
                break;
            case rclcpp_action::ResultCode::ABORTED:
                RCLCPP_ERROR(this->get_logger(), "Goal was aborted");
            case rclcpp_action::ResultCode::CANCELED:
                RCLCPP_ERROR(this->get_logger(), "Goal was canceled");
            default:
                RCLCPP_ERROR(this->get_logger(), "Unknown result code");
                return;
        }
    }
    rclcpp_action::Client<RealTimeDistance>::SharedPtr client_;
    turtlesim::msg::Pose pose;
};  

int main(int argc, char **argv)
{
     rclcpp::init(argc, argv);
    //解析传入的参数
    if (argc != 5){
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Usage: realtime_distance_action_client <x> <y> <z> <t>");
        return 1;
    }
    auto node = std::make_shared<RealtimeDistanceActionClient>();
    if (!node->connect_to_server()) {
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Action server has not been started.");
        return 1;
    }
    node->send_goal(6.0 ,7.0);
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}