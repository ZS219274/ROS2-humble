/*
    需求：更改乌龟背景色
    步骤：
        1.包含头文件；
        2.初始化 ros客户端；
        3.自定义节点类；
            3-1.创建客户端
            3-2.连接服务端
            3-3.更新参数
        4.spin函数
        5.回收资源
*/

#include "rclcpp/rclcpp.hpp"

class ParamClient : public rclcpp::Node {
public:
    ParamClient() : Node("param_server", rclcpp::NodeOptions().allow_undeclared_parameters(true)) {
        RCLCPP_INFO(this->get_logger(), "param_server is created...");
        client_ = std::make_shared<rclcpp::SyncParametersClient>(this, "/turtlesim");
        
    }
    
    bool connect_to_server() {
        while (!client_->wait_for_service(std::chrono::seconds(1))) {
            RCLCPP_INFO(this->get_logger(), "waiting for service failed.");
            return false;
        }
        if(!rclcpp::ok()) {
            RCLCPP_INFO(this->get_logger(), "rclcpp is not ok.");
            return false;
        }
        return true;
    }

    void update_param() {
        auto params = client_->get_parameters({"background_r", "background_g", "background_b"});
        auto [red, green, blue] = std::make_tuple(params[0].as_int(), params[1].as_int(), params[2].as_int());

        rclcpp::Rate rate_loop(30.0);
        while (rclcpp::ok()) {
            red += 1;
            if (red > 255) {
                red = red % 256;
            }
            client_->set_parameters({rclcpp::Parameter("background_r", red)});
            rate_loop.sleep();
        }
    }

private:
    rclcpp::SyncParametersClient::SharedPtr client_;

};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto client = std::make_shared<ParamClient>();
    if (!client->connect_to_server()) {
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "service not available");
        return 1;
    }
    client->update_param();

    rclcpp::shutdown();
    return 0;
}