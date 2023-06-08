cmake_minimum_required(VERSION 3.5)
project(labust_msgs)
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
find_package( action_msgs REQUIRED)
find_package( auv_msgs REQUIRED)
find_package( builtin_interfaces REQUIRED)
find_package( class_loader REQUIRED)
find_package( console_bridge REQUIRED)
find_package( geographic_msgs REQUIRED)
find_package( geometry_msgs REQUIRED)
find_package( rclcpp REQUIRED)
find_package( rcutils REQUIRED)
find_package( std_msgs REQUIRED)
find_package( unique_identifier_msgs REQUIRED)
include_directories("/usr/local/MATLAB/R2023a/extern/include")
include_directories("/usr/local/MATLAB/R2023a/extern/include/MatlabDataArray")
include_directories("/usr/local/MATLAB/R2023a/toolbox/ros/include/ros2")
include_directories("include/labust_msgs")
set (CMAKE_SKIP_BUILD_RPATH false)
set (CMAKE_BUILD_WITH_INSTALL_RPATH true)
set (CMAKE_INSTALL_RPATH "${CMAKE_INSTALL_PREFIX}/lib")
set (CMAKE_INSTALL_RPATH_USE_LINK_PATH TRUE)
set(msg_files
  "msg/BodyForceReq.msg"
  "msg/BodyVelocityReq.msg"
  "msg/Bool6Axis.msg"
  "msg/ControllerInfo.msg"
  "msg/ControllerState.msg"
  "msg/CourseKeepingFA.msg"
  "msg/CourseKeepingUA.msg"
  "msg/DataEventsContainer.msg"
  "msg/DynamicPositioning.msg"
  "msg/EtaReference.msg"
  "msg/EventData.msg"
  "msg/ExternalEvent.msg"
  "msg/FSPathInfo.msg"
  "msg/Go2PointFA.msg"
  "msg/Go2PointUA.msg"
  "msg/GoalDescriptor.msg"
  "msg/HLMessage.msg"
  "msg/ISO.msg"
  "msg/IdentModel.msg"
  "msg/ManualConfiguration.msg"
  "msg/MissionSetup.msg"
  "msg/MissionStatus.msg"
  "msg/ModelParamsUpdate.msg"
  "msg/NanomodemPayload.msg"
  "msg/NanomodemRange.msg"
  "msg/NanomodemRequest.msg"
  "msg/NanomodemTDOA.msg"
  "msg/NavStsReq.msg"
  "msg/NuReference.msg"
  "msg/PIDParamsUpdate.msg"
  "msg/RPY.msg"
  "msg/RegisterController.msg"
  "msg/RelativePosition.msg"
  "msg/RhodamineAdc.msg"
  "msg/RhodamineData.msg"
  "msg/SendPrimitive.msg"
  "msg/StartNeptusParser.msg"
  "msg/StartParser.msg"
  "msg/TauReference.msg"
  "msg/Windup6Axis.msg"
)
set(srv_files
  "srv/ConfigureAxes.srv"
  "srv/ConfigureVelocityController.srv"
  "srv/ControllerSelect.srv"
  "srv/DockingPrimitiveService.srv"
  "srv/DockingService.srv"
  "srv/DynamicPositioningLLService.srv"
  "srv/DynamicPositioningPrimitiveService.srv"
  "srv/EnableControl.srv"
  "srv/EvaluateExpression.srv"
  "srv/Go2LLpointService.srv"
  "srv/Go2depthService.srv"
  "srv/Go2pointPrimitiveService.srv"
  "srv/Go2pointService.srv"
  "srv/LawnmoverService.srv"
  "srv/ManualConfigure.srv"
  "srv/ManualSelect.srv"
  "srv/PointerPrimitiveService.srv"
  "srv/RegisterController.srv"
  "srv/RegisterControllerV2.srv"
  "srv/RegisterControllerV3.srv"
  "srv/RelayControl.srv"
  "srv/RequestControl.srv"
  "srv/RequestExternalReference.srv"
  "srv/RosbagControl.srv"
  "srv/SelectNuSignal.srv"
  "srv/SelectTauSignal.srv"
  "srv/SetHLMode.srv"
  "srv/UnRegisterController.srv"
)
set(action_files
  "action/CourseKeeping.action"
  "action/Docking.action"
  "action/DynamicPositioning.action"
  "action/GoToPoint.action"
  "action/IdentifyModel.action"
  "action/TrackDiver.action"
)
rosidl_generate_interfaces(${PROJECT_NAME}
  ${msg_files}
  ${srv_files}
  ${action_files}
  DEPENDENCIES 
  action_msgs
  auv_msgs
  builtin_interfaces
  geographic_msgs
  geometry_msgs
  std_msgs
  unique_identifier_msgs
)
link_directories("/usr/local/MATLAB/R2023a/extern/bin/glnxa64")
# Library
add_library(
    labust_msgs_matlab 
    SHARED
    src/labust_msgs_BodyForceReq_message.cpp
    src/labust_msgs_BodyVelocityReq_message.cpp
    src/labust_msgs_Bool6Axis_message.cpp
    src/labust_msgs_ControllerInfo_message.cpp
    src/labust_msgs_ControllerState_message.cpp
    src/labust_msgs_CourseKeepingFA_message.cpp
    src/labust_msgs_CourseKeepingUA_message.cpp
    src/labust_msgs_DataEventsContainer_message.cpp
    src/labust_msgs_DynamicPositioning_message.cpp
    src/labust_msgs_EtaReference_message.cpp
    src/labust_msgs_EventData_message.cpp
    src/labust_msgs_ExternalEvent_message.cpp
    src/labust_msgs_FSPathInfo_message.cpp
    src/labust_msgs_Go2PointFA_message.cpp
    src/labust_msgs_Go2PointUA_message.cpp
    src/labust_msgs_GoalDescriptor_message.cpp
    src/labust_msgs_HLMessage_message.cpp
    src/labust_msgs_ISO_message.cpp
    src/labust_msgs_IdentModel_message.cpp
    src/labust_msgs_ManualConfiguration_message.cpp
    src/labust_msgs_MissionSetup_message.cpp
    src/labust_msgs_MissionStatus_message.cpp
    src/labust_msgs_ModelParamsUpdate_message.cpp
    src/labust_msgs_NanomodemPayload_message.cpp
    src/labust_msgs_NanomodemRange_message.cpp
    src/labust_msgs_NanomodemRequest_message.cpp
    src/labust_msgs_NanomodemTDOA_message.cpp
    src/labust_msgs_NavStsReq_message.cpp
    src/labust_msgs_NuReference_message.cpp
    src/labust_msgs_PIDParamsUpdate_message.cpp
    src/labust_msgs_RPY_message.cpp
    src/labust_msgs_RegisterController_message.cpp
    src/labust_msgs_RelativePosition_message.cpp
    src/labust_msgs_RhodamineAdc_message.cpp
    src/labust_msgs_RhodamineData_message.cpp
    src/labust_msgs_SendPrimitive_message.cpp
    src/labust_msgs_StartNeptusParser_message.cpp
    src/labust_msgs_StartParser_message.cpp
    src/labust_msgs_TauReference_message.cpp
    src/labust_msgs_Windup6Axis_message.cpp
    src/labust_msgs_ConfigureAxes_service.cpp
    src/labust_msgs_ConfigureVelocityController_service.cpp
    src/labust_msgs_ControllerSelect_service.cpp
    src/labust_msgs_DockingPrimitiveService_service.cpp
    src/labust_msgs_DockingService_service.cpp
    src/labust_msgs_DynamicPositioningLLService_service.cpp
    src/labust_msgs_DynamicPositioningPrimitiveService_service.cpp
    src/labust_msgs_EnableControl_service.cpp
    src/labust_msgs_EvaluateExpression_service.cpp
    src/labust_msgs_Go2LLpointService_service.cpp
    src/labust_msgs_Go2depthService_service.cpp
    src/labust_msgs_Go2pointPrimitiveService_service.cpp
    src/labust_msgs_Go2pointService_service.cpp
    src/labust_msgs_LawnmoverService_service.cpp
    src/labust_msgs_ManualConfigure_service.cpp
    src/labust_msgs_ManualSelect_service.cpp
    src/labust_msgs_PointerPrimitiveService_service.cpp
    src/labust_msgs_RegisterController_service.cpp
    src/labust_msgs_RegisterControllerV2_service.cpp
    src/labust_msgs_RegisterControllerV3_service.cpp
    src/labust_msgs_RelayControl_service.cpp
    src/labust_msgs_RequestControl_service.cpp
    src/labust_msgs_RequestExternalReference_service.cpp
    src/labust_msgs_RosbagControl_service.cpp
    src/labust_msgs_SelectNuSignal_service.cpp
    src/labust_msgs_SelectTauSignal_service.cpp
    src/labust_msgs_SetHLMode_service.cpp
    src/labust_msgs_UnRegisterController_service.cpp
    src/labust_msgs_CourseKeeping_action.cpp
    src/labust_msgs_Docking_action.cpp
    src/labust_msgs_DynamicPositioning_action.cpp
    src/labust_msgs_GoToPoint_action.cpp
    src/labust_msgs_IdentifyModel_action.cpp
    src/labust_msgs_TrackDiver_action.cpp
)
if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
target_compile_options(labust_msgs_matlab PUBLIC 
  $<$<OR:$<COMPILE_LANGUAGE:CXX>,$<COMPILE_LANGUAGE:C>>:
  -Wall -Wextra -Wpedantic
  >)
endif()
target_include_directories(labust_msgs_matlab PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)
target_link_libraries( labust_msgs_matlab
	"/usr/local/MATLAB/R2023a/sys/os/glnxa64/orig/libstdc++.so.6"
	"/usr/local/MATLAB/R2023a/extern/bin/glnxa64/libMatlabDataArray.so"
	"/usr/local/MATLAB/R2023a/sys/ros2/glnxa64/ros2/lib/librclcpp_action.so"
	${CMAKE_DL_LIBS}
	)
ament_target_dependencies(
  labust_msgs_matlab
  "action_msgs"
  "auv_msgs"
  "builtin_interfaces"
  "class_loader"
  "console_bridge"
  "geographic_msgs"
  "geometry_msgs"
  "rclcpp"
  "rcutils"
  "std_msgs"
  "unique_identifier_msgs"
)
rosidl_target_interfaces(
	  labust_msgs_matlab
      ${PROJECT_NAME} "rosidl_typesupport_cpp")
# Causes the visibility macros to use dllexport rather than dllimport,
# which is appropriate when building the dll but not consuming it.
target_compile_definitions(labust_msgs_matlab PRIVATE "LABUST_MSGS_BUILDING_LIBRARY")
install(
  DIRECTORY include/
  DESTINATION include
)
ament_export_targets(export_${PROJECT_NAME} HAS_LIBRARY_TARGET)
ament_export_dependencies(
  action_msgs
  auv_msgs
  builtin_interfaces
  class_loader
  console_bridge
  geographic_msgs
  geometry_msgs
  rclcpp
  rcutils
  std_msgs
  unique_identifier_msgs
)
install(
  TARGETS labust_msgs_matlab
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
  labust_msgs_matlab
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
# Generated on Fri Jun 02 17:41:11 2023
