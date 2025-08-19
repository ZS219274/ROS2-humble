#include "rclcpp/rclcpp.hpp"

class ParamClient : public rclcpp::Node {
public:
    ParamClient() : Node("param_client") {
        param_client_ = std::make_shared<rclcpp::SyncParametersClient>(this, "param_server");
    }

    bool connect_server() {
        while (!param_client_->wait_for_service(std::chrono::seconds(1))) {
            if (!rclcpp::ok()){
                RCLCPP_ERROR(this->get_logger(), "Interrupted while waiting for the service. Exiting.");
                return false;
            }
            RCLCPP_INFO(this->get_logger(), "Service is ready.");
        }
        return true;
    }

    void get_param() {
        RCLCPP_INFO(this->get_logger(), "--------------Getting parameters-----------");
        auto Name = param_client_->get_parameter<std::string>("Name");
        RCLCPP_INFO(this->get_logger(), "Name: %s", Name.c_str());
        auto params = param_client_->get_parameters({"Name", "Age", "Height", "Sex", "appearence", "hobbits", "color",  "is_married"});
        for (auto param : params) {
            RCLCPP_INFO(this->get_logger(), "Param: %s, %s", param.get_name().c_str(), param.value_to_string().c_str());
        }
        RCLCPP_INFO(this->get_logger(), "--------------Getting parameters over-----------");
    }

    void set_param() {
        RCLCPP_INFO(this->get_logger(), "--------------Setting parameters-----------");
        rclcpp::Parameter is_married("is_married", "No");
        param_client_->set_parameters({is_married});
        RCLCPP_INFO(this->get_logger(), "-----------Setting parameters over-----------");
    }

private:
    rclcpp::SyncParametersClient::SharedPtr param_client_;
};

int main(int argc, char **argv) {
    rclcpp::init(argc, argv);
    auto client = std::make_shared<ParamClient>();
    if (!client->connect_server()) {
        RCLCPP_INFO(client->get_logger(), "Failed to connect to server.");
        return 1;
    }
    client->get_param();
    client->set_param();
    client->get_param();
    rclcpp::shutdown();
    return 0;
}