// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for labust_msgs/ISO
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
#include "labust_msgs/msg/iso.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class LABUST_MSGS_EXPORT ros2_labust_msgs_msg_ISO_common : public MATLABROS2MsgInterface<labust_msgs::msg::ISO> {
  public:
    virtual ~ros2_labust_msgs_msg_ISO_common(){}
    virtual void copy_from_struct(labust_msgs::msg::ISO* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const labust_msgs::msg::ISO* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_labust_msgs_msg_ISO_common::copy_from_struct(labust_msgs::msg::ISO* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //dof
        const matlab::data::TypedArray<int32_t> dof_arr = arr["dof"];
        msg->dof = dof_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'dof' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'dof' is wrong type; expected a int32.");
    }
    try {
        //command
        const matlab::data::TypedArray<float> command_arr = arr["command"];
        msg->command = command_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'command' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'command' is wrong type; expected a single.");
    }
    try {
        //hysteresis
        const matlab::data::TypedArray<float> hysteresis_arr = arr["hysteresis"];
        msg->hysteresis = hysteresis_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'hysteresis' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'hysteresis' is wrong type; expected a single.");
    }
    try {
        //reference
        const matlab::data::TypedArray<float> reference_arr = arr["reference"];
        msg->reference = reference_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'reference' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'reference' is wrong type; expected a single.");
    }
    try {
        //sampling_rate
        const matlab::data::TypedArray<float> sampling_rate_arr = arr["sampling_rate"];
        msg->sampling_rate = sampling_rate_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'sampling_rate' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'sampling_rate' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_labust_msgs_msg_ISO_common::get_arr(MDFactory_T& factory, const labust_msgs::msg::ISO* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","dof","command","hysteresis","reference","sampling_rate"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("labust_msgs/ISO");
    // dof
    auto currentElement_dof = (msg + ctr)->dof;
    outArray[ctr]["dof"] = factory.createScalar(currentElement_dof);
    // command
    auto currentElement_command = (msg + ctr)->command;
    outArray[ctr]["command"] = factory.createScalar(currentElement_command);
    // hysteresis
    auto currentElement_hysteresis = (msg + ctr)->hysteresis;
    outArray[ctr]["hysteresis"] = factory.createScalar(currentElement_hysteresis);
    // reference
    auto currentElement_reference = (msg + ctr)->reference;
    outArray[ctr]["reference"] = factory.createScalar(currentElement_reference);
    // sampling_rate
    auto currentElement_sampling_rate = (msg + ctr)->sampling_rate;
    outArray[ctr]["sampling_rate"] = factory.createScalar(currentElement_sampling_rate);
    }
    return std::move(outArray);
  } 
class LABUST_MSGS_EXPORT ros2_labust_msgs_ISO_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_labust_msgs_ISO_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_labust_msgs_ISO_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<labust_msgs::msg::ISO,ros2_labust_msgs_msg_ISO_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_labust_msgs_ISO_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<labust_msgs::msg::ISO,ros2_labust_msgs_msg_ISO_common>>();
  }
  std::shared_ptr<void> ros2_labust_msgs_ISO_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<labust_msgs::msg::ISO>();
    ros2_labust_msgs_msg_ISO_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_labust_msgs_ISO_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_labust_msgs_msg_ISO_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (labust_msgs::msg::ISO*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_msg_ISO_common, MATLABROS2MsgInterface<labust_msgs::msg::ISO>)
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_ISO_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER