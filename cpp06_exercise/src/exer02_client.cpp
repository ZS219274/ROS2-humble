/*
需求：客户端需要提交目标点坐标，并解析响应结果
流程：
    0.动态解析传入的数据，作为目标点的坐标
    1.包含头文件
    2.初始化ros2客户端
    3.自定义节点
        3-1.构造函数创建客户端
        3-2.客户端连接服务端
        3-3.发送请求数据
    4.调用节点对象指针相关函数
    5.释放资源
*/

#include "rclcpp/rclcpp.hpp"
#include "demo_interfaces_base/srv/distance.hpp"
#include "turtlesim/msg/pose.hpp"

using Distance = demo_interfaces_base::srv::Distance;
using Pose = turtlesim::msg::Pose;

class DistanceClient: public rclcpp::Node {
public:
    DistanceClient(): Node("distance_client") {
        RCLCPP_INFO(this->get_logger(), "DistanceClient node created");
        this->client_ = create_client<Distance>("distance_service");
    }

    bool connect_to_server() {
        while (!client_->wait_for_service(std::chrono::seconds(1))) {
            if (!rclcpp::ok()) {
                RCLCPP_ERROR(this->get_logger(), "Interrupted while waiting for the service. Exiting.");
                return false;
            }
            RCLCPP_INFO(this->get_logger(), "Waiting for service to appear...");
        }
        return true;
    }

    rclcpp::Client<Distance>::FutureAndRequestId send_postion_request(float x, float y,  float theta) {
        auto request = std::make_shared<Distance::Request>();
        request->x = x;
        request->y = y;
        request->theta = theta;
        return client_->async_send_request(request);
    }

private:
    rclcpp::Client<Distance>::SharedPtr client_;
    
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    if(argc != 5) {
        RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Usage: 输入5个参数 x, y, theta");
        return 0;
    }
    auto x = atof(argv[1]);
    auto y = atof(argv[2]);
    auto theta = atof(argv[3]);

    auto node = std::make_shared<DistanceClient>();
    if(!node->connect_to_server()) {
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Failed to connect to server");
        return 1;
    }

    auto response = node->send_postion_request(x, y, theta);
    auto result = rclcpp::spin_until_future_complete(node, response);
    if (result == rclcpp::FutureReturnCode::SUCCESS) {
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Distance: %f", response.get()->distance);
    } else {
        RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Failed to call service calculate distance");
    }
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}