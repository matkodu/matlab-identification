// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for labust_msgs/DataEventsContainer
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
#include "labust_msgs/msg/data_events_container.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class LABUST_MSGS_EXPORT ros2_labust_msgs_msg_DataEventsContainer_common : public MATLABROS2MsgInterface<labust_msgs::msg::DataEventsContainer> {
  public:
    virtual ~ros2_labust_msgs_msg_DataEventsContainer_common(){}
    virtual void copy_from_struct(labust_msgs::msg::DataEventsContainer* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const labust_msgs::msg::DataEventsContainer* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_labust_msgs_msg_DataEventsContainer_common::copy_from_struct(labust_msgs::msg::DataEventsContainer* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //state_var
        const matlab::data::StructArray state_var_arr = arr["state_var"];
        auto msgClassPtr_state_var = getCommonObject<std_msgs::msg::Float64MultiArray>("ros2_std_msgs_msg_Float64MultiArray_common",loader);
        msgClassPtr_state_var->copy_from_struct(&msg->state_var,state_var_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'state_var' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'state_var' is wrong type; expected a struct.");
    }
    try {
        //mission_var
        const matlab::data::StructArray mission_var_arr = arr["mission_var"];
        auto msgClassPtr_mission_var = getCommonObject<std_msgs::msg::Float64MultiArray>("ros2_std_msgs_msg_Float64MultiArray_common",loader);
        msgClassPtr_mission_var->copy_from_struct(&msg->mission_var,mission_var_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'mission_var' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'mission_var' is wrong type; expected a struct.");
    }
    try {
        //events_var
        const matlab::data::TypedArray<uint8_t> events_var_arr = arr["events_var"];
        size_t nelem = events_var_arr.getNumberOfElements();
        	msg->events_var.resize(nelem);
        	std::copy(events_var_arr.begin(), events_var_arr.begin()+nelem, msg->events_var.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'events_var' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'events_var' is wrong type; expected a uint8.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_labust_msgs_msg_DataEventsContainer_common::get_arr(MDFactory_T& factory, const labust_msgs::msg::DataEventsContainer* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","state_var","mission_var","events_var"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("labust_msgs/DataEventsContainer");
    // state_var
    auto currentElement_state_var = (msg + ctr)->state_var;
    auto msgClassPtr_state_var = getCommonObject<std_msgs::msg::Float64MultiArray>("ros2_std_msgs_msg_Float64MultiArray_common",loader);
    outArray[ctr]["state_var"] = msgClassPtr_state_var->get_arr(factory, &currentElement_state_var, loader);
    // mission_var
    auto currentElement_mission_var = (msg + ctr)->mission_var;
    auto msgClassPtr_mission_var = getCommonObject<std_msgs::msg::Float64MultiArray>("ros2_std_msgs_msg_Float64MultiArray_common",loader);
    outArray[ctr]["mission_var"] = msgClassPtr_mission_var->get_arr(factory, &currentElement_mission_var, loader);
    // events_var
    auto currentElement_events_var = (msg + ctr)->events_var;
    outArray[ctr]["events_var"] = factory.createArray<labust_msgs::msg::DataEventsContainer::_events_var_type::const_iterator, uint8_t>({currentElement_events_var.size(), 1}, currentElement_events_var.begin(), currentElement_events_var.end());
    }
    return std::move(outArray);
  } 
class LABUST_MSGS_EXPORT ros2_labust_msgs_DataEventsContainer_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_labust_msgs_DataEventsContainer_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_labust_msgs_DataEventsContainer_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<labust_msgs::msg::DataEventsContainer,ros2_labust_msgs_msg_DataEventsContainer_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_labust_msgs_DataEventsContainer_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<labust_msgs::msg::DataEventsContainer,ros2_labust_msgs_msg_DataEventsContainer_common>>();
  }
  std::shared_ptr<void> ros2_labust_msgs_DataEventsContainer_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<labust_msgs::msg::DataEventsContainer>();
    ros2_labust_msgs_msg_DataEventsContainer_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_labust_msgs_DataEventsContainer_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_labust_msgs_msg_DataEventsContainer_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (labust_msgs::msg::DataEventsContainer*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_msg_DataEventsContainer_common, MATLABROS2MsgInterface<labust_msgs::msg::DataEventsContainer>)
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_DataEventsContainer_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER