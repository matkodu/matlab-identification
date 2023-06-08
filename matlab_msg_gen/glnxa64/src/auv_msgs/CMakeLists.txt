cmake_minimum_required(VERSION 3.5)
project(auv_msgs)
set(CMAKE_VERBOSE_MAKEFILE ON)
# Set CMAKE_BUILD_TYPE
set(CMAKE_BUILD_TYPE Release)
# Default to C99
if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()
# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()
if(ALIAS_ROS2_TF2)
  add_definitions(-Dtf2=ros2_tf2)
  add_definitions(-Dtf2_ros=ros2_tf2_ros)
  add_definitions(-Dmessage_filters=ros2_message_filters)
endif()
# find dependencies
find_package(ament_cmake REQUIRED)
find_package(ament_cmake_ros REQUIRED)
find_package(rosidl_typesupport_c REQUIRED)
find_package(rosidl_typesupport_cpp REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package( class_loader REQUIRED)
find_package( console_bridge REQUIRED)
find_package( geographic_msgs REQUIRED)
find_package( geometry_msgs REQUIRED)
find_package( rclcpp REQUIRED)
find_package( rcutils REQUIRED)
find_package( std_msgs REQUIRED)
include_directories("/usr/local/MATLAB/R2023a/extern/include")
include_directories("/usr/local/MATLAB/R2023a/extern/include/MatlabDataArray")
include_directories("/usr/local/MATLAB/R2023a/toolbox/ros/include/ros2")
include_directories("include/auv_msgs")
set (CMAKE_SKIP_BUILD_RPATH false)
set (CMAKE_BUILD_WITH_INSTALL_RPATH true)
set (CMAKE_INSTALL_RPATH "${CMAKE_INSTALL_PREFIX}/lib")
set (CMAKE_INSTALL_RPATH_USE_LINK_PATH TRUE)
set(msg_files
  "msg/BodyForceRequest.msg"
  "msg/BodyVelocityRequest.msg"
  "msg/NED.msg"
  "msg/NEDArray.msg"
  "msg/NavigationStatus.msg"
  "msg/VehiclePose.msg"
  "msg/VehiclePoseArray.msg"
  "msg/WorldWaypointRequest.msg"
)
set(srv_files
)
set(action_files
)
rosidl_generate_interfaces(${PROJECT_NAME}
  ${msg_files}
  ${srv_files}
  ${action_files}
  DEPENDENCIES 
  geographic_msgs
  geometry_msgs
  std_msgs
)
link_directories("/usr/local/MATLAB/R2023a/extern/bin/glnxa64")
# Library
add_library(
    auv_msgs_matlab 
    SHARED
    src/auv_msgs_BodyForceRequest_message.cpp
    src/auv_msgs_BodyVelocityRequest_message.cpp
    src/auv_msgs_NED_message.cpp
    src/auv_msgs_NEDArray_message.cpp
    src/auv_msgs_NavigationStatus_message.cpp
    src/auv_msgs_VehiclePose_message.cpp
    src/auv_msgs_VehiclePoseArray_message.cpp
    src/auv_msgs_WorldWaypointRequest_message.cpp
)
if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
target_compile_options(auv_msgs_matlab PUBLIC 
  $<$<OR:$<COMPILE_LANGUAGE:CXX>,$<COMPILE_LANGUAGE:C>>:
  -Wall -Wextra -Wpedantic
  >)
endif()
target_include_directories(auv_msgs_matlab PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)
target_link_libraries( auv_msgs_matlab
	"/usr/local/MATLAB/R2023a/sys/os/glnxa64/orig/libstdc++.so.6"
	"/usr/local/MATLAB/R2023a/extern/bin/glnxa64/libMatlabDataArray.so"
	${CMAKE_DL_LIBS}
	)
ament_target_dependencies(
  auv_msgs_matlab
  "class_loader"
  "console_bridge"
  "geographic_msgs"
  "geometry_msgs"
  "rclcpp"
  "rcutils"
  "std_msgs"
)
rosidl_target_interfaces(
	  auv_msgs_matlab
      ${PROJECT_NAME} "rosidl_typesupport_cpp")
# Causes the visibility macros to use dllexport rather than dllimport,
# which is appropriate when building the dll but not consuming it.
target_compile_definitions(auv_msgs_matlab PRIVATE "AUV_MSGS_BUILDING_LIBRARY")
install(
  DIRECTORY include/
  DESTINATION include
)
install(
  TARGETS auv_msgs_matlab
  EXPORT export_${PROJECT_NAME}
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION bin
)
install (DIRECTORY m/ DESTINATION m/ FILES_MATCHING PATTERN "*.m")
ament_export_include_directories(
  include
)
ament_export_libraries(
  auv_msgs_matlab
)
foreach(file_i ${CUDA_BINS})
add_custom_command(
                   TARGET 
                   POST_BUILD
                   COMMAND ${CMAKE_COMMAND}
                   ARGS -E copy ${PROJECT_SOURCE_DIR}/src/${file_i} ${CMAKE_INSTALL_PREFIX}/_ert_rtw/${file_i}
				   )
add_custom_command(
                   TARGET 
                   POST_BUILD
                   COMMAND ${CMAKE_COMMAND}
                   ARGS -E copy ${PROJECT_SOURCE_DIR}/src/${file_i} ${CMAKE_INSTALL_PREFIX}/codegen/exe//${file_i}
				   )				   
endforeach(file_i)
ament_package()
# Generated on Fri Jun 02 17:40:56 2023
