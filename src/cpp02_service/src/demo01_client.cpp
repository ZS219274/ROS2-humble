#include "rclcpp/rclcpp.hpp"
#include "base_interfaces_demo/srv/add_ints.hpp"

class AddIntsClient : public rclcpp::Node {
public:
    AddIntsClient() : Node("add_ints_client")
    {
        client_ = this->create_client<base_interfaces_demo::srv::AddInts>("add_ints");
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"),"客户端创建，等待连接服务端！");
    }

    bool connect_to_service()
    {
        while (!client_->wait_for_service(std::chrono::seconds(1))) {
            if (!rclcpp::ok()) {
                RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "客户端被中断，无法连接服务端！");
                return false;
            }
            RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "等待服务端连接...");
        }
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "成功连接到服务端！");
        return true;
    }

     /**
     * @brief 发送加法请求到服务端
     * 
     * 创建一个AddInts服务请求，设置两个整数参数，并异步发送给服务端
     * 
     * @param num1 加法运算的第一个整数
     * @param num2 加法运算的第二个整数
     * @return 返回FutureAndRequestId对象，用于获取异步请求的结果
     */
    rclcpp::Client<base_interfaces_demo::srv::AddInts>::FutureAndRequestId send_request(int32_t num1, int32_t num2)
    {
        auto requset = std::make_shared<base_interfaces_demo::srv::AddInts::Request>();
        requset->num1 = num1;
        requset->num2 = num2;
        return client_->async_send_request(requset);
    }
private:
    rclcpp::Client<base_interfaces_demo::srv::AddInts>::SharedPtr client_; 
};

int main(int argc, char **argv)
{
    if(argc != 3) {
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Usage: add_ints_client <num1> <num2>");
        return 1;
    }

    rclcpp::init(argc, argv);
    auto client = std::make_shared<AddIntsClient>();
    bool flag = client->connect_to_service();
    if (!flag) {
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "无法连接到服务端！");
        return 0;
    }

    auto response = client->send_request(atoi(argv[1]), atoi(argv[2]));
    if (rclcpp::spin_until_future_complete(client, response) == rclcpp::FutureReturnCode::SUCCESS) {
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "请求成功");
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "响应数据为：%d", response.get()->sum);
    } else if (rclcpp::spin_until_future_complete(client, response) == rclcpp::FutureReturnCode::TIMEOUT) {
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "请求超时！");
    } else {
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "请求失败！");
    }
    rclcpp::shutdown();
    return 0;
}