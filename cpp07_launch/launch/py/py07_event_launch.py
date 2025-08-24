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
from launch.event_handlers import OnProcessStart, OnProcessExit
from launch.actions import ExecuteProcess, RegisterEventHandler,LogInfo
# 获取功能包下share 目录路径-------
# from ament_index_python.packages import get_package_share_directory
"""
 需求:为turtlesim_node绑定事件,
    节点启动时，执行生成新的乌龟的程序，节点关闭时，执行日志输出   
"""
def generate_launch_description():
    turtle = Node(
        package = "turtlesim",
        executable = "turtlesim_node"
    )
    # ros2 service call /spawn turtlesim/srv/Spawn "{'x':8.0, 'y':4.0}"
    spawn = ExecuteProcess(
        cmd = ["ros2 service call /spawn turtlesim/srv/Spawn \"{'x':8.0, 'y':4.0}\""],
        output = "both",
        shell = True
    )
    # 注册事件 在新位置生成乌龟的事件
    event_start = RegisterEventHandler(
        event_handler = OnProcessStart(
            target_action = turtle, #事件源
            on_start = spawn #生成
        )
    )
    #注册时间2
    event_exit = RegisterEventHandler(
        event_handler = OnProcessExit(
            target_action = turtle,
            on_exit = LogInfo(msg="turtle exit")
        )
    )
    return LaunchDescription([turtle, event_start, event_exit])