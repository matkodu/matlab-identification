// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for labust_msgs/MissionSetup
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
#include "labust_msgs/msg/mission_setup.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class LABUST_MSGS_EXPORT ros2_labust_msgs_msg_MissionSetup_common : public MATLABROS2MsgInterface<labust_msgs::msg::MissionSetup> {
  public:
    virtual ~ros2_labust_msgs_msg_MissionSetup_common(){}
    virtual void copy_from_struct(labust_msgs::msg::MissionSetup* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const labust_msgs::msg::MissionSetup* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_labust_msgs_msg_MissionSetup_common::copy_from_struct(labust_msgs::msg::MissionSetup* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //mission_params
        const matlab::data::CharArray mission_params_arr = arr["mission_params"];
        msg->mission_params = mission_params_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'mission_params' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'mission_params' is wrong type; expected a string.");
    }
    try {
        //mission_events
        const matlab::data::CharArray mission_events_arr = arr["mission_events"];
        msg->mission_events = mission_events_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'mission_events' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'mission_events' is wrong type; expected a string.");
    }
    try {
        //mission_offset
        const matlab::data::StructArray mission_offset_arr = arr["mission_offset"];
        auto msgClassPtr_mission_offset = getCommonObject<auv_msgs::msg::NED>("ros2_auv_msgs_msg_NED_common",loader);
        msgClassPtr_mission_offset->copy_from_struct(&msg->mission_offset,mission_offset_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'mission_offset' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'mission_offset' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_labust_msgs_msg_MissionSetup_common::get_arr(MDFactory_T& factory, const labust_msgs::msg::MissionSetup* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","mission_params","mission_events","mission_offset"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("labust_msgs/MissionSetup");
    // mission_params
    auto currentElement_mission_params = (msg + ctr)->mission_params;
    outArray[ctr]["mission_params"] = factory.createCharArray(currentElement_mission_params);
    // mission_events
    auto currentElement_mission_events = (msg + ctr)->mission_events;
    outArray[ctr]["mission_events"] = factory.createCharArray(currentElement_mission_events);
    // mission_offset
    auto currentElement_mission_offset = (msg + ctr)->mission_offset;
    auto msgClassPtr_mission_offset = getCommonObject<auv_msgs::msg::NED>("ros2_auv_msgs_msg_NED_common",loader);
    outArray[ctr]["mission_offset"] = msgClassPtr_mission_offset->get_arr(factory, &currentElement_mission_offset, loader);
    }
    return std::move(outArray);
  } 
class LABUST_MSGS_EXPORT ros2_labust_msgs_MissionSetup_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_labust_msgs_MissionSetup_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_labust_msgs_MissionSetup_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<labust_msgs::msg::MissionSetup,ros2_labust_msgs_msg_MissionSetup_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_labust_msgs_MissionSetup_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<labust_msgs::msg::MissionSetup,ros2_labust_msgs_msg_MissionSetup_common>>();
  }
  std::shared_ptr<void> ros2_labust_msgs_MissionSetup_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<labust_msgs::msg::MissionSetup>();
    ros2_labust_msgs_msg_MissionSetup_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_labust_msgs_MissionSetup_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_labust_msgs_msg_MissionSetup_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (labust_msgs::msg::MissionSetup*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_msg_MissionSetup_common, MATLABROS2MsgInterface<labust_msgs::msg::MissionSetup>)
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_MissionSetup_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER