// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for auv_msgs/NED
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
#include "auv_msgs/msg/ned.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class AUV_MSGS_EXPORT ros2_auv_msgs_msg_NED_common : public MATLABROS2MsgInterface<auv_msgs::msg::NED> {
  public:
    virtual ~ros2_auv_msgs_msg_NED_common(){}
    virtual void copy_from_struct(auv_msgs::msg::NED* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const auv_msgs::msg::NED* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_auv_msgs_msg_NED_common::copy_from_struct(auv_msgs::msg::NED* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //north
        const matlab::data::TypedArray<double> north_arr = arr["north"];
        msg->north = north_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'north' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'north' is wrong type; expected a double.");
    }
    try {
        //east
        const matlab::data::TypedArray<double> east_arr = arr["east"];
        msg->east = east_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'east' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'east' is wrong type; expected a double.");
    }
    try {
        //depth
        const matlab::data::TypedArray<double> depth_arr = arr["depth"];
        msg->depth = depth_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'depth' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'depth' is wrong type; expected a double.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_auv_msgs_msg_NED_common::get_arr(MDFactory_T& factory, const auv_msgs::msg::NED* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","north","east","depth"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("auv_msgs/NED");
    // north
    auto currentElement_north = (msg + ctr)->north;
    outArray[ctr]["north"] = factory.createScalar(currentElement_north);
    // east
    auto currentElement_east = (msg + ctr)->east;
    outArray[ctr]["east"] = factory.createScalar(currentElement_east);
    // depth
    auto currentElement_depth = (msg + ctr)->depth;
    outArray[ctr]["depth"] = factory.createScalar(currentElement_depth);
    }
    return std::move(outArray);
  } 
class AUV_MSGS_EXPORT ros2_auv_msgs_NED_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_auv_msgs_NED_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_auv_msgs_NED_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<auv_msgs::msg::NED,ros2_auv_msgs_msg_NED_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_auv_msgs_NED_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<auv_msgs::msg::NED,ros2_auv_msgs_msg_NED_common>>();
  }
  std::shared_ptr<void> ros2_auv_msgs_NED_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<auv_msgs::msg::NED>();
    ros2_auv_msgs_msg_NED_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_auv_msgs_NED_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_auv_msgs_msg_NED_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (auv_msgs::msg::NED*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_auv_msgs_msg_NED_common, MATLABROS2MsgInterface<auv_msgs::msg::NED>)
CLASS_LOADER_REGISTER_CLASS(ros2_auv_msgs_NED_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER