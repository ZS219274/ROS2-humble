/*
    需求：处理客户端发送的请求（目标点），控制乌龟向目标点移动，且要连续反馈剩余距离
    流程：
        1. 包含头文件
        2. 初始化 ros2 客户端
        3. 定义节点类
            3-1.创建原生乌龟位姿订阅方，获取当前乌龟坐标
            3-2.创建速度指令发布方，控制乌龟运动
            3-3.创建一个动作服务端;
            3-4.解析动作客户端提交的数据；
            3-5.处理客户端的取消请求操作
            3-6.实现主逻辑(耗时操作，启动新线程)
            3-7.子线程中产生连续反馈，并响应最终结果
        4.调用spin()
        5.资源释放
*/


#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "demo_interfaces_base/action/real_time_distance.hpp"
#include "turtlesim/msg/pose.hpp"
#include "geometry_msgs/msg/twist.hpp"

using RealTimeDistance = demo_interfaces_base::action::RealTimeDistance;
using Pose = turtlesim::msg::Pose;
using Twist = geometry_msgs::msg::Twist;
using std::placeholders::_1;
using std::placeholders::_2;

class RealtimeDistanceActionServer : public rclcpp::Node {
public:
    explicit RealtimeDistanceActionServer(const rclcpp::NodeOptions options = rclcpp::NodeOptions()) : Node("realtime_distance_action_server", options)
    {
        RCLCPP_INFO(this->get_logger(), "RealtimeDistanceActionServer has created...");
        this->realTimeActionServer_ = rclcpp_action::create_server<RealTimeDistance>(this, "realtime_distance",
            std::bind(&RealtimeDistanceActionServer::handle_goal, this, _1, _2),
            std::bind(&RealtimeDistanceActionServer::handle_cancel, this, _1),
            std::bind(&RealtimeDistanceActionServer::handle_accepted, this, _1));
        this->sub_ = this->create_subscription<turtlesim::msg::Pose>("/turtle1/pose", 10, std::bind(&RealtimeDistanceActionServer::pose_callback, this, _1));
        this->pub_ = this->create_publisher<Twist>("/t2/turtle1/cmd_vel", 10);
    }

    rclcpp_action::GoalResponse handle_goal(const rclcpp_action::GoalUUID & uuid, std::shared_ptr<const RealTimeDistance::Goal> goal) {
        (void)uuid;
        (void)goal;
        RCLCPP_INFO(this->get_logger(), "Received goal request");
        if (goal->goal_x < 0.0 || goal->goal_y < 0.0 || goal->goal_x > 11.8 || goal->goal_y > 11.8) {
            RCLCPP_INFO(this->get_logger(), "Invalid goal received");
            return rclcpp_action::GoalResponse::REJECT;
        }
        return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;

    }

    rclcpp_action::CancelResponse handle_cancel(const std::shared_ptr<rclcpp_action::ServerGoalHandle<RealTimeDistance>> goal_handle) {
        (void)goal_handle;
        RCLCPP_INFO(this->get_logger(), "Received request to cancel goal");
        return rclcpp_action::CancelResponse::ACCEPT;
    }

    void handle_accepted(std::shared_ptr<rclcpp_action::ServerGoalHandle<RealTimeDistance>> goal_handle) {
        (void)goal_handle;
        std::thread{std::bind(&RealtimeDistanceActionServer::execute, this, std::placeholders::_1), goal_handle}.detach();
    }

    void execute(const std::shared_ptr<rclcpp_action::ServerGoalHandle<RealTimeDistance>> goal_handle) {
        RCLCPP_INFO(this->get_logger(), "Executing goal");
        rclcpp::Rate loop_rate(10);
        auto result = std::make_shared<RealTimeDistance::Result>();
        auto feedback = std::make_shared<RealTimeDistance::Feedback>();
        geometry_msgs::msg::Twist twist;

        while (true) {
            // 如果要取消任务，那么需要特殊处理
            if (goal_handle->is_canceling()) {
                goal_handle->canceled(result);
                return;
            }
            // 解析目标点坐标与原生乌龟实时坐标
            float goal_x = goal_handle->get_goal()->goal_x;
            float goal_y = goal_handle->get_goal()->goal_y;

            // 计算剩余距离，并发布
            float distance_x =  goal_x - serverPose.x;
            float distance_y =  goal_y - serverPose.y;
            float distance = std::sqrt(distance_x * distance_x + distance_y * distance_y);
            feedback->current_distance = distance;
            goal_handle->publish_feedback(feedback);

            // 根据剩余距离计算速度指令并发布
            float scale = 0.5;
            float linear_x = distance_x * scale;
            float linear_y = distance_y * scale;
            twist.linear.x = linear_x;
            twist.linear.y = linear_y;
            pub_->publish(twist);

            // 循环结束条件
            if (distance <= 0.05) {
                //乌龟与目标点的实际距离小于0.05时，结束导航
                RCLCPP_INFO(this->get_logger(), "目标点已到达");
                break;
            }
            loop_rate.sleep();
        }
        if (rclcpp::ok()) {
            result->turtle_x = serverPose.x;
            result->turtle_y = serverPose.y;
            goal_handle->succeed(result);
        }
    }

    void pose_callback(const turtlesim::msg::Pose msg) {
        serverPose.x = msg.x;
        serverPose.y = msg.y;
        serverPose.theta = msg.theta;
    }
    
private:
    rclcpp_action::Server<RealTimeDistance>::SharedPtr realTimeActionServer_;
    rclcpp::Subscription<Pose>::SharedPtr sub_;
    rclcpp::Publisher<Twist>::SharedPtr pub_;
    Pose serverPose;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<RealtimeDistanceActionServer>());
    rclcpp::shutdown();
    return 0;
}