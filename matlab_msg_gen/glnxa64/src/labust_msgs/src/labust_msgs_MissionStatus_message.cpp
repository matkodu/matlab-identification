// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for labust_msgs/MissionStatus
#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable : 4100)
#pragma warning(disable : 4265)
#pragma warning(disable : 4456)
#pragma warning(disable : 4458)
#pragma warning(disable : 4946)
#pragma warning(disable : 4244)
#else
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpedantic"
#pragma GCC diagnostic ignored "-Wunused-local-typedefs"
#pragma GCC diagnostic ignored "-Wredundant-decls"
#pragma GCC diagnostic ignored "-Wnon-virtual-dtor"
#pragma GCC diagnostic ignored "-Wdelete-non-virtual-dtor"
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wshadow"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif //_MSC_VER
#include "rclcpp/rclcpp.hpp"
#include "labust_msgs/msg/mission_status.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class LABUST_MSGS_EXPORT ros2_labust_msgs_msg_MissionStatus_common : public MATLABROS2MsgInterface<labust_msgs::msg::MissionStatus> {
  public:
    virtual ~ros2_labust_msgs_msg_MissionStatus_common(){}
    virtual void copy_from_struct(labust_msgs::msg::MissionStatus* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const labust_msgs::msg::MissionStatus* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_labust_msgs_msg_MissionStatus_common::copy_from_struct(labust_msgs::msg::MissionStatus* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //mission_active
        const matlab::data::TypedArray<bool> mission_active_arr = arr["mission_active"];
        msg->mission_active = mission_active_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'mission_active' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'mission_active' is wrong type; expected a logical.");
    }
    try {
        //active_primitive
        const matlab::data::CharArray active_primitive_arr = arr["active_primitive"];
        msg->active_primitive = active_primitive_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'active_primitive' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'active_primitive' is wrong type; expected a string.");
    }
    try {
        //mission_execution_ready
        const matlab::data::TypedArray<bool> mission_execution_ready_arr = arr["mission_execution_ready"];
        msg->mission_execution_ready = mission_execution_ready_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'mission_execution_ready' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'mission_execution_ready' is wrong type; expected a logical.");
    }
    try {
        //manual_enabled
        const matlab::data::TypedArray<bool> manual_enabled_arr = arr["manual_enabled"];
        msg->manual_enabled = manual_enabled_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'manual_enabled' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'manual_enabled' is wrong type; expected a logical.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_labust_msgs_msg_MissionStatus_common::get_arr(MDFactory_T& factory, const labust_msgs::msg::MissionStatus* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","mission_active","active_primitive","mission_execution_ready","manual_enabled"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("labust_msgs/MissionStatus");
    // mission_active
    auto currentElement_mission_active = (msg + ctr)->mission_active;
    outArray[ctr]["mission_active"] = factory.createScalar(currentElement_mission_active);
    // active_primitive
    auto currentElement_active_primitive = (msg + ctr)->active_primitive;
    outArray[ctr]["active_primitive"] = factory.createCharArray(currentElement_active_primitive);
    // mission_execution_ready
    auto currentElement_mission_execution_ready = (msg + ctr)->mission_execution_ready;
    outArray[ctr]["mission_execution_ready"] = factory.createScalar(currentElement_mission_execution_ready);
    // manual_enabled
    auto currentElement_manual_enabled = (msg + ctr)->manual_enabled;
    outArray[ctr]["manual_enabled"] = factory.createScalar(currentElement_manual_enabled);
    }
    return std::move(outArray);
  } 
class LABUST_MSGS_EXPORT ros2_labust_msgs_MissionStatus_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_labust_msgs_MissionStatus_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_labust_msgs_MissionStatus_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<labust_msgs::msg::MissionStatus,ros2_labust_msgs_msg_MissionStatus_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_labust_msgs_MissionStatus_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<labust_msgs::msg::MissionStatus,ros2_labust_msgs_msg_MissionStatus_common>>();
  }
  std::shared_ptr<void> ros2_labust_msgs_MissionStatus_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<labust_msgs::msg::MissionStatus>();
    ros2_labust_msgs_msg_MissionStatus_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_labust_msgs_MissionStatus_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_labust_msgs_msg_MissionStatus_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (labust_msgs::msg::MissionStatus*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_msg_MissionStatus_common, MATLABROS2MsgInterface<labust_msgs::msg::MissionStatus>)
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_MissionStatus_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER