from launch import LaunchDescription
from launch_ros.actions import Node
# 封装终端指令相关类--------------
# from launch.actions import ExecuteProcess
# from launch.substitutions import FindExecutable
# 参数声明与获取-----------------
# from launch.actions import DeclareLaunchArgument
# from launch.substitutions import LaunchConfiguration
# 文件包含相关-------------------
# from launch.actions import IncludeLaunchDescription
# from launch.launch_description_sources import PythonLaunchDescriptionSource
# 分组相关----------------------
# from launch_ros.actions import PushRosNamespace
# from launch.actions import GroupAction
# 事件相关----------------------
# from launch.event_handlers import OnProcessStart, OnProcessExit
# from launch.actions import ExecuteProcess, RegisterEventHandler,LogInfo
# 获取功能包下share 目录路径-------
# from ament_index_python.packages import get_package_share_directory
"""
    需求：在launch文件启动时,动态设置turtlesim_node的背景色
    步骤：
        1.声明参数（变量）
        2.调用参数（变量）
        3.执行launch文件时, 动态传入参数
"""
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration

def generate_launch_description():
    # 1.声明参数（变量）
    bg_r = DeclareLaunchArgument(name= "_r", default_value='25')
    bg_b = DeclareLaunchArgument(name="_b", default_value='34')
    bg_g = DeclareLaunchArgument(name="_g", default_value='98')
    # 2.调用参数（变量）
    turtle = Node(
        package='turtlesim',
        executable='turtlesim_node',
        parameters=[{
            "background_r": LaunchConfiguration("_r"),
            "background_b": LaunchConfiguration("_b"),
            "background_g": LaunchConfiguration("_g")
        }]
    )
    
    return LaunchDescription([bg_b, bg_g, bg_r, turtle]) #注意参数设置在节点前