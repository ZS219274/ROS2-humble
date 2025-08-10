#include "rclcpp/rclcpp.hpp"

class ParamServer : public rclcpp::Node {
public:
    //如果允许修改参数，需要先声明NodeOptions可删除参数(Node构造函数默认不允许删除)，并设置allow_undeclared_parameters为true
    ParamServer() : Node("param_server", rclcpp::NodeOptions().allow_undeclared_parameters(true)) {
        RCLCPP_INFO(this->get_logger(), "param_server node has created!");  
    }

    void declare_params(){
        RCLCPP_INFO(this->get_logger(), "--------------------增-------------------");
        this->declare_parameter("name", "tom");
        this->declare_parameter("age", 18);
        this->declare_parameter("height", 1.75);
        this->set_parameter(rclcpp::Parameter("del_test", "11"));
    }
    void get_params(){
        RCLCPP_INFO(this->get_logger(), "--------------------查-------------------");
        //获取指定参数
        auto name = this->get_parameter("name").as_string();
        RCLCPP_INFO(this->get_logger(), "name: %s", name.c_str());
        //获取一些参数
        auto params = this->get_parameters({"name", "age", "height"});
        for (auto & param : params) {
            //打印键值
            RCLCPP_INFO(this->get_logger(), "param: %s = %s", param.get_name().c_str(), param.value_to_string().c_str());
        }
        RCLCPP_INFO(this->get_logger(), "是否包含：%s", this->has_parameter("name") ? "是" : "否");
        RCLCPP_INFO(this->get_logger(), "是否包含：%s", this->has_parameter("age") ? "是" : "否");
        RCLCPP_INFO(this->get_logger(), "是否包含：%s", this->has_parameter("height") ? "是" : "否");
        RCLCPP_INFO(this->get_logger(), "是否包含：%s", this->has_parameter("sex") ? "是" : "否");
    }
    void update_params(){
        RCLCPP_INFO(this->get_logger(), "--------------------改-------------------");
        this->set_parameters({
            rclcpp::Parameter("name", "jay"),
            rclcpp::Parameter("age", 25),
            rclcpp::Parameter("height", 1.8)
        });
    }
    void del_params(){
        RCLCPP_INFO(this->get_logger(), "--------------------删-------------------");
        this->undeclare_parameter("del_test");
        RCLCPP_INFO(this->get_logger(), "是否包含del_test参数: %s", this->has_parameter("del_test") ? "是" : "否");
    }
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<ParamServer>();
    node->declare_params();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}