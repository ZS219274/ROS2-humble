/* 
* 需求：订阅乌龟的位姿信息，解析出线速度和角速度，生成并发布控制乌龟2的速度指令
* 明确：
*     订阅话题：/turtle/pose
*     订阅消息：turtlesim::msg::Pose
*             x : 0.0
*             y : 0.0
*             theta : 0.0
*             linear_velocity : 0.0
*      发布话题：/turtle/cmd_vel  
*      发布消息：geometry_msgs::msg::Twist
*             linear :
*               x : 0.0 ----前后
*               y : 0.0 ----左右
*               z : 0.0 ----上下
*             angular :
*               x : 0.0 ----翻滚
*               y : 0.0 ----俯仰
*               z : 0.0 ----左右转 
*      流程：
*         1.包含头文件
*         2.初始化Ros2客户端库
*         3.自定义节点类
*           3.1.创建发布方
*           3.2.创建订阅方（订阅乌龟1的位姿，解析速度）
*           3.3.处理订阅到的数据，处理速度，生成并发布控制乌龟2的运动信息
*         4.调用spin函数
*         5.释放资源     
*         Bug描述：乌龟1后退时，乌龟2仍然前进 BUG
*         Bug原因：和乌龟位姿发布有关，当乌龟1后退时，位姿发布的乌龟1的线速度信息仍为正数
*/

// 1.包含头文件
#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "turtlesim/msg/pose.hpp"

// 3.自定义节点类
class Exer01PubSubNode : public rclcpp::Node {
public:
  Exer01PubSubNode() : Node("exer01_pub_sub_node"){
    RCLCPP_INFO(this->get_logger(), "exer01_pub_sub_node 已经创建.");
    //3.1创建发布方
    pub_ = this->create_publisher<geometry_msgs::msg::Twist>("/t2/turtle1/cmd_vel", 10);
    //3.2创建订阅方(订阅乌龟1位姿，解析速度)
    sub_ = this->create_subscription<turtlesim::msg::Pose>("/turtle1/pose", 10,
        std::bind(&Exer01PubSubNode::pose_callback, this, std::placeholders::_1));
  }

private:
  void pose_callback(const turtlesim::msg::Pose & pose_msg) {
      geometry_msgs::msg::Twist twist;
      twist.angular.z = - pose_msg.angular_velocity;
      if (twist.angular.z < 0) {
        twist.linear.x = - pose_msg.linear_velocity;
      }
      twist.linear.x = pose_msg.linear_velocity;
      
      pub_->publish(twist);
      RCLCPP_INFO(this->get_logger(), "Published linear velocity: %f, angular velocity: %f", twist.linear.x, twist.angular.z);
    }

  rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr pub_;
  rclcpp::Subscription<turtlesim::msg::Pose>::SharedPtr sub_;
};

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<Exer01PubSubNode>());
  rclcpp::shutdown();
  return 0;
}
