// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for labust_msgs/ExternalEvent
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
#include "labust_msgs/msg/external_event.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class LABUST_MSGS_EXPORT ros2_labust_msgs_msg_ExternalEvent_common : public MATLABROS2MsgInterface<labust_msgs::msg::ExternalEvent> {
  public:
    virtual ~ros2_labust_msgs_msg_ExternalEvent_common(){}
    virtual void copy_from_struct(labust_msgs::msg::ExternalEvent* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const labust_msgs::msg::ExternalEvent* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_labust_msgs_msg_ExternalEvent_common::copy_from_struct(labust_msgs::msg::ExternalEvent* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //id
        const matlab::data::TypedArray<int32_t> id_arr = arr["id"];
        msg->id = id_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'id' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'id' is wrong type; expected a int32.");
    }
    try {
        //description
        const matlab::data::CharArray description_arr = arr["description"];
        msg->description = description_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'description' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'description' is wrong type; expected a string.");
    }
    try {
        //value
        const matlab::data::TypedArray<float> value_arr = arr["value"];
        msg->value = value_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'value' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'value' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_labust_msgs_msg_ExternalEvent_common::get_arr(MDFactory_T& factory, const labust_msgs::msg::ExternalEvent* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","id","description","value"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("labust_msgs/ExternalEvent");
    // id
    auto currentElement_id = (msg + ctr)->id;
    outArray[ctr]["id"] = factory.createScalar(currentElement_id);
    // description
    auto currentElement_description = (msg + ctr)->description;
    outArray[ctr]["description"] = factory.createCharArray(currentElement_description);
    // value
    auto currentElement_value = (msg + ctr)->value;
    outArray[ctr]["value"] = factory.createScalar(currentElement_value);
    }
    return std::move(outArray);
  } 
class LABUST_MSGS_EXPORT ros2_labust_msgs_ExternalEvent_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_labust_msgs_ExternalEvent_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_labust_msgs_ExternalEvent_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<labust_msgs::msg::ExternalEvent,ros2_labust_msgs_msg_ExternalEvent_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_labust_msgs_ExternalEvent_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<labust_msgs::msg::ExternalEvent,ros2_labust_msgs_msg_ExternalEvent_common>>();
  }
  std::shared_ptr<void> ros2_labust_msgs_ExternalEvent_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<labust_msgs::msg::ExternalEvent>();
    ros2_labust_msgs_msg_ExternalEvent_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_labust_msgs_ExternalEvent_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_labust_msgs_msg_ExternalEvent_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (labust_msgs::msg::ExternalEvent*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_msg_ExternalEvent_common, MATLABROS2MsgInterface<labust_msgs::msg::ExternalEvent>)
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_ExternalEvent_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER