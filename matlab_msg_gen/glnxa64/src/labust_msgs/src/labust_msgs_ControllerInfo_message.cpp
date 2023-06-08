// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for labust_msgs/ControllerInfo
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
#include "labust_msgs/msg/controller_info.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class LABUST_MSGS_EXPORT ros2_labust_msgs_msg_ControllerInfo_common : public MATLABROS2MsgInterface<labust_msgs::msg::ControllerInfo> {
  public:
    virtual ~ros2_labust_msgs_msg_ControllerInfo_common(){}
    virtual void copy_from_struct(labust_msgs::msg::ControllerInfo* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const labust_msgs::msg::ControllerInfo* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_labust_msgs_msg_ControllerInfo_common::copy_from_struct(labust_msgs::msg::ControllerInfo* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //manual_topic
        const matlab::data::CharArray manual_topic_arr = arr["manual_topic"];
        msg->manual_topic = manual_topic_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'manual_topic' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'manual_topic' is wrong type; expected a string.");
    }
    try {
        //external_topic
        const matlab::data::CharArray external_topic_arr = arr["external_topic"];
        msg->external_topic = external_topic_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'external_topic' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'external_topic' is wrong type; expected a string.");
    }
    try {
        //state_topic
        const matlab::data::CharArray state_topic_arr = arr["state_topic"];
        msg->state_topic = state_topic_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'state_topic' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'state_topic' is wrong type; expected a string.");
    }
    try {
        //tracking_topic
        const matlab::data::CharArray tracking_topic_arr = arr["tracking_topic"];
        msg->tracking_topic = tracking_topic_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'tracking_topic' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'tracking_topic' is wrong type; expected a string.");
    }
    try {
        //state
        const matlab::data::TypedArray<uint8_t> state_arr = arr["state"];
        msg->state = state_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'state' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'state' is wrong type; expected a uint8.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_labust_msgs_msg_ControllerInfo_common::get_arr(MDFactory_T& factory, const labust_msgs::msg::ControllerInfo* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","DISABLED","MANUAL","EXTERNAL","TRACKING","manual_topic","external_topic","state_topic","tracking_topic","state"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("labust_msgs/ControllerInfo");
    // DISABLED
    auto currentElement_DISABLED = (msg + ctr)->DISABLED;
    outArray[ctr]["DISABLED"] = factory.createScalar(currentElement_DISABLED);
    // MANUAL
    auto currentElement_MANUAL = (msg + ctr)->MANUAL;
    outArray[ctr]["MANUAL"] = factory.createScalar(currentElement_MANUAL);
    // EXTERNAL
    auto currentElement_EXTERNAL = (msg + ctr)->EXTERNAL;
    outArray[ctr]["EXTERNAL"] = factory.createScalar(currentElement_EXTERNAL);
    // TRACKING
    auto currentElement_TRACKING = (msg + ctr)->TRACKING;
    outArray[ctr]["TRACKING"] = factory.createScalar(currentElement_TRACKING);
    // manual_topic
    auto currentElement_manual_topic = (msg + ctr)->manual_topic;
    outArray[ctr]["manual_topic"] = factory.createCharArray(currentElement_manual_topic);
    // external_topic
    auto currentElement_external_topic = (msg + ctr)->external_topic;
    outArray[ctr]["external_topic"] = factory.createCharArray(currentElement_external_topic);
    // state_topic
    auto currentElement_state_topic = (msg + ctr)->state_topic;
    outArray[ctr]["state_topic"] = factory.createCharArray(currentElement_state_topic);
    // tracking_topic
    auto currentElement_tracking_topic = (msg + ctr)->tracking_topic;
    outArray[ctr]["tracking_topic"] = factory.createCharArray(currentElement_tracking_topic);
    // state
    auto currentElement_state = (msg + ctr)->state;
    outArray[ctr]["state"] = factory.createScalar(currentElement_state);
    }
    return std::move(outArray);
  } 
class LABUST_MSGS_EXPORT ros2_labust_msgs_ControllerInfo_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_labust_msgs_ControllerInfo_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_labust_msgs_ControllerInfo_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<labust_msgs::msg::ControllerInfo,ros2_labust_msgs_msg_ControllerInfo_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_labust_msgs_ControllerInfo_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<labust_msgs::msg::ControllerInfo,ros2_labust_msgs_msg_ControllerInfo_common>>();
  }
  std::shared_ptr<void> ros2_labust_msgs_ControllerInfo_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<labust_msgs::msg::ControllerInfo>();
    ros2_labust_msgs_msg_ControllerInfo_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_labust_msgs_ControllerInfo_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_labust_msgs_msg_ControllerInfo_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (labust_msgs::msg::ControllerInfo*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_msg_ControllerInfo_common, MATLABROS2MsgInterface<labust_msgs::msg::ControllerInfo>)
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_ControllerInfo_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER