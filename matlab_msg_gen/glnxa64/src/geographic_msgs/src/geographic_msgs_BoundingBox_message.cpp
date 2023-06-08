// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for geographic_msgs/BoundingBox
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
#include "geographic_msgs/msg/bounding_box.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class GEOGRAPHIC_MSGS_EXPORT ros2_geographic_msgs_msg_BoundingBox_common : public MATLABROS2MsgInterface<geographic_msgs::msg::BoundingBox> {
  public:
    virtual ~ros2_geographic_msgs_msg_BoundingBox_common(){}
    virtual void copy_from_struct(geographic_msgs::msg::BoundingBox* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const geographic_msgs::msg::BoundingBox* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_geographic_msgs_msg_BoundingBox_common::copy_from_struct(geographic_msgs::msg::BoundingBox* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //min_pt
        const matlab::data::StructArray min_pt_arr = arr["min_pt"];
        auto msgClassPtr_min_pt = getCommonObject<geographic_msgs::msg::GeoPoint>("ros2_geographic_msgs_msg_GeoPoint_common",loader);
        msgClassPtr_min_pt->copy_from_struct(&msg->min_pt,min_pt_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'min_pt' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'min_pt' is wrong type; expected a struct.");
    }
    try {
        //max_pt
        const matlab::data::StructArray max_pt_arr = arr["max_pt"];
        auto msgClassPtr_max_pt = getCommonObject<geographic_msgs::msg::GeoPoint>("ros2_geographic_msgs_msg_GeoPoint_common",loader);
        msgClassPtr_max_pt->copy_from_struct(&msg->max_pt,max_pt_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'max_pt' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'max_pt' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_geographic_msgs_msg_BoundingBox_common::get_arr(MDFactory_T& factory, const geographic_msgs::msg::BoundingBox* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","min_pt","max_pt"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("geographic_msgs/BoundingBox");
    // min_pt
    auto currentElement_min_pt = (msg + ctr)->min_pt;
    auto msgClassPtr_min_pt = getCommonObject<geographic_msgs::msg::GeoPoint>("ros2_geographic_msgs_msg_GeoPoint_common",loader);
    outArray[ctr]["min_pt"] = msgClassPtr_min_pt->get_arr(factory, &currentElement_min_pt, loader);
    // max_pt
    auto currentElement_max_pt = (msg + ctr)->max_pt;
    auto msgClassPtr_max_pt = getCommonObject<geographic_msgs::msg::GeoPoint>("ros2_geographic_msgs_msg_GeoPoint_common",loader);
    outArray[ctr]["max_pt"] = msgClassPtr_max_pt->get_arr(factory, &currentElement_max_pt, loader);
    }
    return std::move(outArray);
  } 
class GEOGRAPHIC_MSGS_EXPORT ros2_geographic_msgs_BoundingBox_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_geographic_msgs_BoundingBox_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_geographic_msgs_BoundingBox_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<geographic_msgs::msg::BoundingBox,ros2_geographic_msgs_msg_BoundingBox_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_geographic_msgs_BoundingBox_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<geographic_msgs::msg::BoundingBox,ros2_geographic_msgs_msg_BoundingBox_common>>();
  }
  std::shared_ptr<void> ros2_geographic_msgs_BoundingBox_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<geographic_msgs::msg::BoundingBox>();
    ros2_geographic_msgs_msg_BoundingBox_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_geographic_msgs_BoundingBox_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_geographic_msgs_msg_BoundingBox_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (geographic_msgs::msg::BoundingBox*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_geographic_msgs_msg_BoundingBox_common, MATLABROS2MsgInterface<geographic_msgs::msg::BoundingBox>)
CLASS_LOADER_REGISTER_CLASS(ros2_geographic_msgs_BoundingBox_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER