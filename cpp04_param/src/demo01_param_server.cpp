#include "rclcpp/rclcpp.hpp"

class ParamServer : public rclcpp::Node {
public:
  ParamServer() : Node("param_server",
    rclcpp::NodeOptions().allow_undeclared_parameters(true)) {
  }

  void declare_params() {
    RCLCPP_INFO(this->get_logger(), "------------------声明参数------------------");
    this->declare_parameter("Name", "LiHua");
    this->declare_parameter("Age", 18);
    this->declare_parameter("Height", 1.70);
    this->set_parameter(rclcpp::Parameter("Sex", "Man"));
    RCLCPP_INFO(this->get_logger(), "------------------声明参数结束------------------");
  }

  void get_params() {
    RCLCPP_INFO(this->get_logger(), "------------------获取参数------------------");
    std::string name = this->get_parameter("Name").as_string();
    RCLCPP_INFO(this->get_logger(), "Name: %s", name.c_str());

    RCLCPP_INFO(this->get_logger(), "-----------------获取所有参数------------------");
    auto params = this->get_parameters({"Name", "Age", "Height", "Sex", "appearence", "color", "hobbits"});
    for (auto & param : params) {
      RCLCPP_INFO(this->get_logger(), "%s: %s", param.get_name().c_str(),
        param.value_to_string().c_str());
    }
    RCLCPP_INFO(this->get_logger(), "-----------------获取参数结束------------------");
  }

  void set_params() {
    RCLCPP_INFO(this->get_logger(), "------------------设置参数------------------");
    this->set_parameter(rclcpp::Parameter("hobbits", "swimming"));
    rclcpp::Parameter p1("appearence", "handsome");
    rclcpp::Parameter p2("color", "asian");
    this->set_parameters({p1, p2});
    RCLCPP_INFO(this->get_logger(), "------------------设置参数结束------------------");
  }

  void del_params() {
    RCLCPP_INFO(this->get_logger(), "------------------删除参数------------------");
    this->undeclare_parameter("Sex");
    this->undeclare_parameter("hobbits");
    this->undeclare_parameter("appearence");
    RCLCPP_INFO(this->get_logger(), "------------------删除参数结束------------------");
  }

  void update_params() {
    RCLCPP_INFO(this->get_logger(), "------------------更新参数------------------");
    this->set_parameters({rclcpp::Parameter("Name", "ZhangSan")});
    this->set_parameters({rclcpp::Parameter("Age", 20)});
    this->set_parameters({rclcpp::Parameter("Height", 1.80)});
    this->set_parameters({rclcpp::Parameter("Sex", "Woman")});
    this->set_parameters({rclcpp::Parameter("hobbits", "running")});
    this->set_parameters({rclcpp::Parameter("appearence", "beautiful")});
    RCLCPP_INFO(this->get_logger(), "------------------更新参数结束------------------");
  }
};

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<ParamServer>();
  node->declare_params();
  node->get_params();
  node->update_params();
  node->get_params();
  node->set_params();
  node->get_params();
  node->del_params();
  node->get_params();
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}
