cmake_minimum_required(VERSION 3.8)
project(cpp01_topic)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(demo_interfaces_base REQUIRED)

add_executable(demo01_pub_str src/demo01_pub_str.cpp)
ament_target_dependencies(
  demo01_pub_str
  "rclcpp"
  "std_msgs"
)

add_executable(demo01_sub_str src/demo01_sub_str.cpp)
ament_target_dependencies(
  demo01_sub_str
  "rclcpp"
  "std_msgs"
)

add_executable(demo01_pub_stu src/demo01_pub_stu.cpp)
ament_target_dependencies(
  demo01_pub_stu
  "rclcpp"
  "std_msgs"
  "demo_interfaces_base"
)

add_executable(demo01_sub_stu src/demo01_sub_stu.cpp)
ament_target_dependencies(
  demo01_sub_stu
  "rclcpp"
  "std_msgs"
  "demo_interfaces_base"
)

install(TARGETS
  demo01_pub_str
  demo01_sub_str
  demo01_pub_stu
  demo01_sub_stu
DESTINATION lib/${PROJECT_NAME})

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
