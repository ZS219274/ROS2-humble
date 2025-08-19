#include "rclcpp/rclcpp.hpp"
#include "demo_interfaces_base/srv/calculation.hpp"


class MyClient : public rclcpp::Node {
public:
    MyClient() : Node("client") {
        client_ = create_client<demo_interfaces_base::srv::Calculation>("service");
    }

    bool connect_server() {
        while (!client_->wait_for_service(std::chrono::seconds(1))) {
            if (!rclcpp::ok()) {
                RCLCPP_ERROR(get_logger(), "Interrupted while waiting for the service. Exiting.");
                return false;
            }
            RCLCPP_INFO(get_logger(), "Waiting for service...");
        }
        return true;
    }

    rclcpp::Client<demo_interfaces_base::srv::Calculation>::FutureAndRequestId send_request(int32_t num1, int32_t num2)
    {
        auto request = std::make_shared<demo_interfaces_base::srv::Calculation::Request>();
        request->num1 = num1;
        request->num2 = num2;
        return client_->async_send_request(request);
    }

private:
    rclcpp::Client<demo_interfaces_base::srv::Calculation>::SharedPtr client_;  
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);

    if(argc != 3) {
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Usage: client NUM1 NUM2");
        return 1;
    }

    auto client = std::make_shared<MyClient>();
    bool flag = client->connect_server();
    if (!flag){
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Failed to connect to server");
    }

    auto response = client->send_request(atoi(argv[1]), atoi(argv[2]));

    auto res = rclcpp::spin_until_future_complete(client, response);
    if (res == rclcpp::FutureReturnCode::SUCCESS) {
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Result: %d", response.get()->sum);
    } else {
        RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Failed to call service");
    }    
    rclcpp::shutdown();
    return 0;
}