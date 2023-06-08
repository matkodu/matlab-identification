// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for labust_msgs/EventData
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
#include "labust_msgs/msg/event_data.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class LABUST_MSGS_EXPORT ros2_labust_msgs_msg_EventData_common : public MATLABROS2MsgInterface<labust_msgs::msg::EventData> {
  public:
    virtual ~ros2_labust_msgs_msg_EventData_common(){}
    virtual void copy_from_struct(labust_msgs::msg::EventData* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const labust_msgs::msg::EventData* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_labust_msgs_msg_EventData_common::copy_from_struct(labust_msgs::msg::EventData* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //timeout
        const matlab::data::TypedArray<float> timeout_arr = arr["timeout"];
        msg->timeout = timeout_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'timeout' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'timeout' is wrong type; expected a single.");
    }
    try {
        //on_event_next
        const matlab::data::TypedArray<uint8_t> on_event_next_arr = arr["on_event_next"];
        size_t nelem = on_event_next_arr.getNumberOfElements();
        	msg->on_event_next.resize(nelem);
        	std::copy(on_event_next_arr.begin(), on_event_next_arr.begin()+nelem, msg->on_event_next.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'on_event_next' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'on_event_next' is wrong type; expected a uint8.");
    }
    try {
        //on_event_next_active
        const matlab::data::TypedArray<uint8_t> on_event_next_active_arr = arr["on_event_next_active"];
        size_t nelem = on_event_next_active_arr.getNumberOfElements();
        	msg->on_event_next_active.resize(nelem);
        	std::copy(on_event_next_active_arr.begin(), on_event_next_active_arr.begin()+nelem, msg->on_event_next_active.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'on_event_next_active' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'on_event_next_active' is wrong type; expected a uint8.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_labust_msgs_msg_EventData_common::get_arr(MDFactory_T& factory, const labust_msgs::msg::EventData* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","timeout","on_event_next","on_event_next_active"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("labust_msgs/EventData");
    // timeout
    auto currentElement_timeout = (msg + ctr)->timeout;
    outArray[ctr]["timeout"] = factory.createScalar(currentElement_timeout);
    // on_event_next
    auto currentElement_on_event_next = (msg + ctr)->on_event_next;
    outArray[ctr]["on_event_next"] = factory.createArray<labust_msgs::msg::EventData::_on_event_next_type::const_iterator, uint8_t>({currentElement_on_event_next.size(), 1}, currentElement_on_event_next.begin(), currentElement_on_event_next.end());
    // on_event_next_active
    auto currentElement_on_event_next_active = (msg + ctr)->on_event_next_active;
    outArray[ctr]["on_event_next_active"] = factory.createArray<labust_msgs::msg::EventData::_on_event_next_active_type::const_iterator, uint8_t>({currentElement_on_event_next_active.size(), 1}, currentElement_on_event_next_active.begin(), currentElement_on_event_next_active.end());
    }
    return std::move(outArray);
  } 
class LABUST_MSGS_EXPORT ros2_labust_msgs_EventData_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_labust_msgs_EventData_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_labust_msgs_EventData_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<labust_msgs::msg::EventData,ros2_labust_msgs_msg_EventData_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_labust_msgs_EventData_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<labust_msgs::msg::EventData,ros2_labust_msgs_msg_EventData_common>>();
  }
  std::shared_ptr<void> ros2_labust_msgs_EventData_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<labust_msgs::msg::EventData>();
    ros2_labust_msgs_msg_EventData_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_labust_msgs_EventData_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_labust_msgs_msg_EventData_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (labust_msgs::msg::EventData*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_msg_EventData_common, MATLABROS2MsgInterface<labust_msgs::msg::EventData>)
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_EventData_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER