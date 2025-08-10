#include "rclcpp/rclcpp.hpp"

class ParamClient : public rclcpp::Node {
public:
    ParamClient() : Node("param_client") {
        client_ = std::make_shared<rclcpp::SyncParametersClient>(this, "param_server");
        if (!client_) {
            RCLCPP_INFO(this->get_logger(), "param_client node has created.");
        }
    }

    bool connect_server(){
        while (!client_->wait_for_service(std::chrono::seconds(1))){
            RCLCPP_INFO(this->get_logger(), "Waiting for service...");
            if (!rclcpp::ok()) {
                return false;
            }
            RCLCPP_INFO(this->get_logger(), "param_client node connecting to param_server.");
        }
        return true;
    }

    void get_params(){
        RCLCPP_INFO(this->get_logger(), "----------客户端查询---------");
        std::vector<std::string> keys = {"name", "age", "height"};
        std::vector<rclcpp::Parameter> params = client_->get_parameters(keys);
        for (auto &param : params) {
            RCLCPP_INFO(this->get_logger(), "key: %s, value: %s",
                param.get_name().c_str(), param.value_to_string().c_str());
        }
        
        auto age = client_->get_parameter<int>("age");
        auto height = client_->get_parameter<double>("height");
        auto name = client_->get_parameter<std::string>("name");
        RCLCPP_INFO(this->get_logger(), "name: %d", age);
        RCLCPP_INFO(this->get_logger(), "height: %f", height);
        RCLCPP_INFO(this->get_logger(), "name: %s", name.c_str());

        RCLCPP_INFO(this->get_logger(), "是否存在age参数: %s", client_->has_parameter("age") ? "存在" : "不存在");
        RCLCPP_INFO(this->get_logger(), "是否存在sex参数: %s", client_->has_parameter("sex") ? "存在" : "不存在");
        if (client_->has_parameter("sex")) {
            RCLCPP_INFO(this->get_logger(), "sex: %s", client_->get_parameter<std::string>("sex").c_str());
        }
    }   

    void update_params(){
        RCLCPP_INFO(this->get_logger(), "-------------客户端修改参数-------------");
        client_->set_parameters({
            rclcpp::Parameter("age", 18),
            rclcpp::Parameter("height", 1.8),
            rclcpp::Parameter("name", "jay"),
            rclcpp::Parameter("sex", "male")
        });
    }

    void del_params(){
        RCLCPP_INFO(this->get_logger(), "-------------客户端删除参数-------------");
        client_->delete_parameters({"age", "height"});
        auto params = client_->get_parameters({"age", "height"});
        for (auto& param : params) {
            if (param.get_type() != rclcpp::ParameterType::PARAMETER_NOT_SET) {
                RCLCPP_INFO(this->get_logger(), "参数%s已被成功删除", param.get_name().c_str());
            } else {
                RCLCPP_INFO(this->get_logger(), "参数%s删除失败, 值为%s", param.get_name().c_str(), param.value_to_string().c_str());
            }
        }
    }

private:
    std::shared_ptr<rclcpp::SyncParametersClient> client_;    
};

int main(int argc, char **argv) 
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<ParamClient>();
    bool flag = node->connect_server();
    if (!flag) {
        RCLCPP_INFO(node->get_logger(), "can not connect to server");
        return 0;
    }
    node->get_params();
    node->update_params();
    node->get_params();
    node->del_params();
    node->get_params();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}