// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for labust_msgs/RhodamineAdc
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
#include "labust_msgs/msg/rhodamine_adc.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class LABUST_MSGS_EXPORT ros2_labust_msgs_msg_RhodamineAdc_common : public MATLABROS2MsgInterface<labust_msgs::msg::RhodamineAdc> {
  public:
    virtual ~ros2_labust_msgs_msg_RhodamineAdc_common(){}
    virtual void copy_from_struct(labust_msgs::msg::RhodamineAdc* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const labust_msgs::msg::RhodamineAdc* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_labust_msgs_msg_RhodamineAdc_common::copy_from_struct(labust_msgs::msg::RhodamineAdc* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //adc
        const matlab::data::TypedArray<uint16_t> adc_arr = arr["adc"];
        msg->adc = adc_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'adc' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'adc' is wrong type; expected a uint16.");
    }
    try {
        //gain
        const matlab::data::TypedArray<uint8_t> gain_arr = arr["gain"];
        msg->gain = gain_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'gain' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'gain' is wrong type; expected a uint8.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_labust_msgs_msg_RhodamineAdc_common::get_arr(MDFactory_T& factory, const labust_msgs::msg::RhodamineAdc* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","adc","gain"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("labust_msgs/RhodamineAdc");
    // adc
    auto currentElement_adc = (msg + ctr)->adc;
    outArray[ctr]["adc"] = factory.createScalar(currentElement_adc);
    // gain
    auto currentElement_gain = (msg + ctr)->gain;
    outArray[ctr]["gain"] = factory.createScalar(currentElement_gain);
    }
    return std::move(outArray);
  } 
class LABUST_MSGS_EXPORT ros2_labust_msgs_RhodamineAdc_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_labust_msgs_RhodamineAdc_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_labust_msgs_RhodamineAdc_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<labust_msgs::msg::RhodamineAdc,ros2_labust_msgs_msg_RhodamineAdc_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_labust_msgs_RhodamineAdc_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<labust_msgs::msg::RhodamineAdc,ros2_labust_msgs_msg_RhodamineAdc_common>>();
  }
  std::shared_ptr<void> ros2_labust_msgs_RhodamineAdc_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<labust_msgs::msg::RhodamineAdc>();
    ros2_labust_msgs_msg_RhodamineAdc_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_labust_msgs_RhodamineAdc_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_labust_msgs_msg_RhodamineAdc_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (labust_msgs::msg::RhodamineAdc*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_msg_RhodamineAdc_common, MATLABROS2MsgInterface<labust_msgs::msg::RhodamineAdc>)
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_RhodamineAdc_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER