// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for labust_msgs/SendPrimitive
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
#include "labust_msgs/msg/send_primitive.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class LABUST_MSGS_EXPORT ros2_labust_msgs_msg_SendPrimitive_common : public MATLABROS2MsgInterface<labust_msgs::msg::SendPrimitive> {
  public:
    virtual ~ros2_labust_msgs_msg_SendPrimitive_common(){}
    virtual void copy_from_struct(labust_msgs::msg::SendPrimitive* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const labust_msgs::msg::SendPrimitive* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_labust_msgs_msg_SendPrimitive_common::copy_from_struct(labust_msgs::msg::SendPrimitive* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //primitive_id
        const matlab::data::TypedArray<int32_t> primitive_id_arr = arr["primitive_id"];
        msg->primitive_id = primitive_id_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'primitive_id' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'primitive_id' is wrong type; expected a int32.");
    }
    try {
        //primitive_data
        const matlab::data::TypedArray<uint8_t> primitive_data_arr = arr["primitive_data"];
        size_t nelem = primitive_data_arr.getNumberOfElements();
        	msg->primitive_data.resize(nelem);
        	std::copy(primitive_data_arr.begin(), primitive_data_arr.begin()+nelem, msg->primitive_data.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'primitive_data' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'primitive_data' is wrong type; expected a uint8.");
    }
    try {
        //event
        const matlab::data::StructArray event_arr = arr["event"];
        auto msgClassPtr_event = getCommonObject<labust_msgs::msg::EventData>("ros2_labust_msgs_msg_EventData_common",loader);
        msgClassPtr_event->copy_from_struct(&msg->event,event_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'event' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'event' is wrong type; expected a struct.");
    }
    try {
        //primitive_string
        const matlab::data::StructArray primitive_string_arr = arr["primitive_string"];
        auto msgClassPtr_primitive_string = getCommonObject<std_msgs::msg::String>("ros2_std_msgs_msg_String_common",loader);
        msgClassPtr_primitive_string->copy_from_struct(&msg->primitive_string,primitive_string_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'primitive_string' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'primitive_string' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_labust_msgs_msg_SendPrimitive_common::get_arr(MDFactory_T& factory, const labust_msgs::msg::SendPrimitive* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","primitive_id","primitive_data","event","primitive_string"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("labust_msgs/SendPrimitive");
    // primitive_id
    auto currentElement_primitive_id = (msg + ctr)->primitive_id;
    outArray[ctr]["primitive_id"] = factory.createScalar(currentElement_primitive_id);
    // primitive_data
    auto currentElement_primitive_data = (msg + ctr)->primitive_data;
    outArray[ctr]["primitive_data"] = factory.createArray<labust_msgs::msg::SendPrimitive::_primitive_data_type::const_iterator, uint8_t>({currentElement_primitive_data.size(), 1}, currentElement_primitive_data.begin(), currentElement_primitive_data.end());
    // event
    auto currentElement_event = (msg + ctr)->event;
    auto msgClassPtr_event = getCommonObject<labust_msgs::msg::EventData>("ros2_labust_msgs_msg_EventData_common",loader);
    outArray[ctr]["event"] = msgClassPtr_event->get_arr(factory, &currentElement_event, loader);
    // primitive_string
    auto currentElement_primitive_string = (msg + ctr)->primitive_string;
    auto msgClassPtr_primitive_string = getCommonObject<std_msgs::msg::String>("ros2_std_msgs_msg_String_common",loader);
    outArray[ctr]["primitive_string"] = msgClassPtr_primitive_string->get_arr(factory, &currentElement_primitive_string, loader);
    }
    return std::move(outArray);
  } 
class LABUST_MSGS_EXPORT ros2_labust_msgs_SendPrimitive_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_labust_msgs_SendPrimitive_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_labust_msgs_SendPrimitive_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<labust_msgs::msg::SendPrimitive,ros2_labust_msgs_msg_SendPrimitive_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_labust_msgs_SendPrimitive_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<labust_msgs::msg::SendPrimitive,ros2_labust_msgs_msg_SendPrimitive_common>>();
  }
  std::shared_ptr<void> ros2_labust_msgs_SendPrimitive_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<labust_msgs::msg::SendPrimitive>();
    ros2_labust_msgs_msg_SendPrimitive_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_labust_msgs_SendPrimitive_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_labust_msgs_msg_SendPrimitive_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (labust_msgs::msg::SendPrimitive*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_msg_SendPrimitive_common, MATLABROS2MsgInterface<labust_msgs::msg::SendPrimitive>)
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_SendPrimitive_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER