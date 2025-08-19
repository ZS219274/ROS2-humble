/*
需求：解析客户端提交的目标点坐标，获取原生乌龟坐标，计算二者距离并响应回客户端
流程：
    1.包含头文件
    2.初始化ros2客户端
    3.自定义节点
        3-1.创建一个订阅方（原生乌龟位姿 /turtle1/pose）;
        3-2.创建一个服务端
        3-3.回调函数需要解析客户端数据并响应结果到客户端
    4.调用spin函数，并传入节点对象指针
    5.释放资源
*/

#include "rclcpp/rclcpp.hpp"
#include "demo_interfaces_base/srv/distance.hpp"
#include "turtlesim/msg/pose.hpp"

using Distance = demo_interfaces_base::srv::Distance;
using Pose = turtlesim::msg::Pose;

class DistanceService : public rclcpp::Node {
public:
    DistanceService() : Node("distance_service") {
        RCLCPP_INFO(this->get_logger(), "Distance Service node started");
        this->service_ = this->create_service<Distance>("distance_service",
            std::bind(&DistanceService::distance_callback, this, std::placeholders::_1, std::placeholders::_2));
        this->subscription_ = this->create_subscription<Pose>("/turtle1/pose", 10,
            std::bind(&DistanceService::pose_callback, this, std::placeholders::_1));
    }

private:
    void pose_callback(const Pose& msg) {
        pose_.x = msg.x;
        pose_.y = msg.y;
        pose_.theta = msg.theta;
    }
    void distance_callback(const std::shared_ptr<Distance::Request> request, std::shared_ptr<Distance::Response> response) {
        float x = request->x - pose_.x;
        float y = request->y - pose_.y;
        response->distance = std::sqrt(x*x + y*y);
        RCLCPP_INFO(this->get_logger(), "Distance to (%f, %f) is %f", request->x, request->y, response->distance);
    }
    rclcpp::Service<Distance>::SharedPtr service_;
    rclcpp::Subscription<Pose>::SharedPtr subscription_;
    Pose pose_;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<DistanceService>());
    rclcpp::shutdown();
    return 0;
}