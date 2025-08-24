##需求：演示node节点的使用

from launch import LaunchDescription
from launch_ros.actions import Node



"""
    构造函数说明：
        :param: package 被执行的程序所属的功能包
        :param: executable 可执行程序
        :param: name 节点名称
        :param: namespace 节点所属的命名空间
        :param: remappings 实现话题映射
        :param: argments 为节点传参
        
        :param: exec_name 设置程序标签
        :param: parammeters 设置参数
        :param: ros_arguments 为节点传参
        
        :param: exec_name 节点标签
        :param: parameters 设置节点参数
"""

from ament_index_python.packages import get_package_share_directory
import os

def generate_launch_description():
    turtle1 = Node(
        package='turtlesim',
        executable='turtlesim_node',
        name = "my_label",
        ros_arguments=["--remap", "__ns:=/t2"]
    )

    turtle2 = Node(
        package='turtlesim',
        executable='turtlesim_node',
        name = "my_label2",
        ros_arguments=["--remap", "__ns:=/t1"],
        respawn=True, ## 关闭自动重启
        #设置参数
        # parameters=[{"background_b": 255, "background_g": 1, "background_r": 0}]
        #加载参数（yaml文件的绝对路径）
        # parameters=["/home/ros2/ws_tools/src/install/cpp01_launch/share/cpp01_launch/config/t1_my_label2.yaml"]
        #加载参数（yaml文件的相对路径）推荐使用
        parameters=[os.path.join(get_package_share_directory('cpp01_launch'), 'config', 't1__my_label2.yaml')]
    )   
    return LaunchDescription([turtle1, turtle2]) 