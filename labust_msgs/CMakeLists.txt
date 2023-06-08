cmake_minimum_required(VERSION 3.5)
project(labust_msgs)

# Default to C99
if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(actionlib_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(std_msgs REQUIRED)
find_package(auv_msgs REQUIRED)
find_package(geographic_msgs REQUIRED)
find_package(builtin_interfaces REQUIRED)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # uncomment the line when a copyright and license is not present in all source files
  #set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # uncomment the line when this package is not in a git repo
  #set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

find_package(rosidl_default_generators REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  msg/Bool6Axis.msg
  msg/FSPathInfo.msg
  msg/Windup6Axis.msg
  msg/GoalDescriptor.msg
  msg/RPY.msg
  msg/BodyForceReq.msg
  msg/BodyVelocityReq.msg
  msg/NavStsReq.msg
  msg/HLMessage.msg
  msg/ModelParamsUpdate.msg
  msg/PIDParamsUpdate.msg
  msg/ControllerState.msg
  msg/ControllerInfo.msg
  msg/ManualConfiguration.msg
  msg/RelativePosition.msg
  msg/StartParser.msg
  msg/StartNeptusParser.msg
  msg/SendPrimitive.msg
  msg/EventData.msg
  msg/Go2PointFA.msg
  msg/Go2PointUA.msg
  msg/DynamicPositioning.msg
  msg/CourseKeepingFA.msg
  msg/CourseKeepingUA.msg
  msg/ISO.msg
  msg/ExternalEvent.msg
  msg/MissionSetup.msg
  msg/MissionStatus.msg
  msg/DataEventsContainer.msg
  msg/RhodamineAdc.msg
  msg/RhodamineData.msg
  msg/NanomodemPayload.msg
  msg/NanomodemRange.msg
  msg/NanomodemTDOA.msg
  msg/NanomodemRequest.msg
  msg/TauReference.msg
  msg/NuReference.msg
  msg/EtaReference.msg
  msg/IdentModel.msg
  srv/SetHLMode.srv
  srv/EnableControl.srv
  srv/RegisterController.srv
  srv/RegisterControllerV2.srv
  srv/RegisterControllerV3.srv
  srv/UnRegisterController.srv
  srv/ConfigureAxes.srv
  srv/ConfigureVelocityController.srv
  srv/ControllerSelect.srv
  srv/ManualSelect.srv
  srv/ManualConfigure.srv
  srv/EvaluateExpression.srv
  srv/RelayControl.srv
  srv/RosbagControl.srv
  srv/Go2depthService.srv
  srv/Go2LLpointService.srv
  srv/Go2pointService.srv
  srv/Go2pointPrimitiveService.srv
  srv/PointerPrimitiveService.srv
  srv/LawnmoverService.srv
  srv/DynamicPositioningLLService.srv
  srv/DynamicPositioningPrimitiveService.srv
  srv/DockingPrimitiveService.srv
  srv/DockingService.srv
  srv/RequestControl.srv
  srv/RequestExternalReference.srv
  srv/SelectNuSignal.srv
  srv/SelectTauSignal.srv
  action/IdentifyModel.action
  action/CourseKeeping.action
  action/GoToPoint.action
  action/DynamicPositioning.action
  action/TrackDiver.action
  action/Docking.action
  DEPENDENCIES
  builtin_interfaces
  actionlib_msgs
  geometry_msgs
  std_msgs
  auv_msgs
  geographic_msgs
)

ament_package()
