// Copyright 2021-2022 The MathWorks, Inc.
// Common copy functions for labust_msgs/PointerPrimitiveServiceRequest
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
#include "labust_msgs/srv/pointer_primitive_service.hpp"
#include "visibility_control.h"
#ifndef FOUNDATION_MATLABDATA_API
#include "MDArray.hpp"
#include "StructArray.hpp"
#include "TypedArrayRef.hpp"
#include "Struct.hpp"
#include "ArrayFactory.hpp"
#include "StructRef.hpp"
#include "Reference.hpp"
#endif
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
#include "ROS2ServiceTemplates.hpp"
class LABUST_MSGS_EXPORT ros2_labust_msgs_msg_PointerPrimitiveServiceRequest_common : public MATLABROS2MsgInterface<labust_msgs::srv::PointerPrimitiveService::Request> {
  public:
    virtual ~ros2_labust_msgs_msg_PointerPrimitiveServiceRequest_common(){}
    virtual void copy_from_struct(labust_msgs::srv::PointerPrimitiveService::Request* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    virtual MDArray_T get_arr(MDFactory_T& factory, const labust_msgs::srv::PointerPrimitiveService::Request* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_labust_msgs_msg_PointerPrimitiveServiceRequest_common::copy_from_struct(labust_msgs::srv::PointerPrimitiveService::Request* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //radius
        const matlab::data::TypedArray<float> radius_arr = arr["radius"];
        msg->radius = radius_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'radius' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'radius' is wrong type; expected a single.");
    }
    try {
        //vertical_offset
        const matlab::data::TypedArray<float> vertical_offset_arr = arr["vertical_offset"];
        msg->vertical_offset = vertical_offset_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'vertical_offset' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'vertical_offset' is wrong type; expected a single.");
    }
    try {
        //guidance_target
        const matlab::data::StructArray guidance_target_arr = arr["guidance_target"];
        auto msgClassPtr_guidance_target = getCommonObject<geometry_msgs::msg::Point>("ros2_geometry_msgs_msg_Point_common",loader);
        msgClassPtr_guidance_target->copy_from_struct(&msg->guidance_target,guidance_target_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'guidance_target' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'guidance_target' is wrong type; expected a struct.");
    }
    try {
        //guidance_enable
        const matlab::data::TypedArray<bool> guidance_enable_arr = arr["guidance_enable"];
        msg->guidance_enable = guidance_enable_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'guidance_enable' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'guidance_enable' is wrong type; expected a logical.");
    }
    try {
        //wrapping_enable
        const matlab::data::TypedArray<bool> wrapping_enable_arr = arr["wrapping_enable"];
        msg->wrapping_enable = wrapping_enable_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'wrapping_enable' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'wrapping_enable' is wrong type; expected a logical.");
    }
    try {
        //fov_guidance
        const matlab::data::TypedArray<bool> fov_guidance_arr = arr["fov_guidance"];
        msg->fov_guidance = fov_guidance_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'fov_guidance' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'fov_guidance' is wrong type; expected a logical.");
    }
    try {
        //streamline_orientation
        const matlab::data::TypedArray<bool> streamline_orientation_arr = arr["streamline_orientation"];
        msg->streamline_orientation = streamline_orientation_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'streamline_orientation' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'streamline_orientation' is wrong type; expected a logical.");
    }
    try {
        //guidance_topic
        const matlab::data::CharArray guidance_topic_arr = arr["guidance_topic"];
        msg->guidance_topic = guidance_topic_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'guidance_topic' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'guidance_topic' is wrong type; expected a string.");
    }
    try {
        //radius_topic
        const matlab::data::CharArray radius_topic_arr = arr["radius_topic"];
        msg->radius_topic = radius_topic_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'radius_topic' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'radius_topic' is wrong type; expected a string.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_labust_msgs_msg_PointerPrimitiveServiceRequest_common::get_arr(MDFactory_T& factory, const labust_msgs::srv::PointerPrimitiveService::Request* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","radius","vertical_offset","guidance_target","guidance_enable","wrapping_enable","fov_guidance","streamline_orientation","guidance_topic","radius_topic"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("labust_msgs/PointerPrimitiveServiceRequest");
    // radius
    auto currentElement_radius = (msg + ctr)->radius;
    outArray[ctr]["radius"] = factory.createScalar(currentElement_radius);
    // vertical_offset
    auto currentElement_vertical_offset = (msg + ctr)->vertical_offset;
    outArray[ctr]["vertical_offset"] = factory.createScalar(currentElement_vertical_offset);
    // guidance_target
    auto currentElement_guidance_target = (msg + ctr)->guidance_target;
    auto msgClassPtr_guidance_target = getCommonObject<geometry_msgs::msg::Point>("ros2_geometry_msgs_msg_Point_common",loader);
    outArray[ctr]["guidance_target"] = msgClassPtr_guidance_target->get_arr(factory, &currentElement_guidance_target, loader);
    // guidance_enable
    auto currentElement_guidance_enable = (msg + ctr)->guidance_enable;
    outArray[ctr]["guidance_enable"] = factory.createScalar(currentElement_guidance_enable);
    // wrapping_enable
    auto currentElement_wrapping_enable = (msg + ctr)->wrapping_enable;
    outArray[ctr]["wrapping_enable"] = factory.createScalar(currentElement_wrapping_enable);
    // fov_guidance
    auto currentElement_fov_guidance = (msg + ctr)->fov_guidance;
    outArray[ctr]["fov_guidance"] = factory.createScalar(currentElement_fov_guidance);
    // streamline_orientation
    auto currentElement_streamline_orientation = (msg + ctr)->streamline_orientation;
    outArray[ctr]["streamline_orientation"] = factory.createScalar(currentElement_streamline_orientation);
    // guidance_topic
    auto currentElement_guidance_topic = (msg + ctr)->guidance_topic;
    outArray[ctr]["guidance_topic"] = factory.createCharArray(currentElement_guidance_topic);
    // radius_topic
    auto currentElement_radius_topic = (msg + ctr)->radius_topic;
    outArray[ctr]["radius_topic"] = factory.createCharArray(currentElement_radius_topic);
    }
    return std::move(outArray);
  }
class LABUST_MSGS_EXPORT ros2_labust_msgs_msg_PointerPrimitiveServiceResponse_common : public MATLABROS2MsgInterface<labust_msgs::srv::PointerPrimitiveService::Response> {
  public:
    virtual ~ros2_labust_msgs_msg_PointerPrimitiveServiceResponse_common(){}
    virtual void copy_from_struct(labust_msgs::srv::PointerPrimitiveService::Response* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    virtual MDArray_T get_arr(MDFactory_T& factory, const labust_msgs::srv::PointerPrimitiveService::Response* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_labust_msgs_msg_PointerPrimitiveServiceResponse_common::copy_from_struct(labust_msgs::srv::PointerPrimitiveService::Response* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //status
        const matlab::data::TypedArray<bool> status_arr = arr["status"];
        msg->status = status_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'status' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'status' is wrong type; expected a logical.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_labust_msgs_msg_PointerPrimitiveServiceResponse_common::get_arr(MDFactory_T& factory, const labust_msgs::srv::PointerPrimitiveService::Response* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","status"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("labust_msgs/PointerPrimitiveServiceResponse");
    // status
    auto currentElement_status = (msg + ctr)->status;
    outArray[ctr]["status"] = factory.createScalar(currentElement_status);
    }
    return std::move(outArray);
  } 
class LABUST_MSGS_EXPORT ros2_labust_msgs_PointerPrimitiveService_service : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_labust_msgs_PointerPrimitiveService_service(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
    virtual std::shared_ptr<MATLABSvcServerInterface> generateSvcServerInterface();
    virtual std::shared_ptr<MATLABSvcClientInterface> generateSvcClientInterface();
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_labust_msgs_PointerPrimitiveService_service::generatePublisherInterface(ElementType type){
    if(type == eRequest){
        return std::make_shared<ROS2PublisherImpl<labust_msgs::srv::PointerPrimitiveService::Request,ros2_labust_msgs_msg_PointerPrimitiveServiceRequest_common>>();
    }else if(type == eResponse){
        return std::make_shared<ROS2PublisherImpl<labust_msgs::srv::PointerPrimitiveService::Response,ros2_labust_msgs_msg_PointerPrimitiveServiceResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
  std::shared_ptr<MATLABSubscriberInterface> 
          ros2_labust_msgs_PointerPrimitiveService_service::generateSubscriberInterface(ElementType type){
    if(type == eRequest){
        return std::make_shared<ROS2SubscriberImpl<labust_msgs::srv::PointerPrimitiveService::Request,ros2_labust_msgs_msg_PointerPrimitiveServiceRequest_common>>();
    }else if(type == eResponse){
        return std::make_shared<ROS2SubscriberImpl<labust_msgs::srv::PointerPrimitiveService::Response,ros2_labust_msgs_msg_PointerPrimitiveServiceResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
  std::shared_ptr<void> ros2_labust_msgs_PointerPrimitiveService_service::generateCppMessage(ElementType type, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    if(type == eRequest){
        auto msg = std::make_shared<labust_msgs::srv::PointerPrimitiveService::Request>();
        ros2_labust_msgs_msg_PointerPrimitiveServiceRequest_common commonObj;
        commonObj.mCommonObjMap = commonObjMap;
        commonObj.copy_from_struct(msg.get(), arr[0], loader);
        return msg;
    }else if(type == eResponse){
        auto msg = std::make_shared<labust_msgs::srv::PointerPrimitiveService::Response>();
        ros2_labust_msgs_msg_PointerPrimitiveServiceResponse_common commonObj;
        commonObj.mCommonObjMap = commonObjMap;
        commonObj.copy_from_struct(msg.get(), arr[0], loader);
        return msg;
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
  std::shared_ptr<MATLABSvcServerInterface> 
          ros2_labust_msgs_PointerPrimitiveService_service::generateSvcServerInterface(){
    return std::make_shared<ROS2SvcServerImpl<labust_msgs::srv::PointerPrimitiveService,labust_msgs::srv::PointerPrimitiveService::Request,labust_msgs::srv::PointerPrimitiveService::Response,ros2_labust_msgs_msg_PointerPrimitiveServiceRequest_common,ros2_labust_msgs_msg_PointerPrimitiveServiceResponse_common>>();
  }
  std::shared_ptr<MATLABSvcClientInterface> 
          ros2_labust_msgs_PointerPrimitiveService_service::generateSvcClientInterface(){
    return std::make_shared<ROS2SvcClientImpl<labust_msgs::srv::PointerPrimitiveService,labust_msgs::srv::PointerPrimitiveService::Request,labust_msgs::srv::PointerPrimitiveService::Response,ros2_labust_msgs_msg_PointerPrimitiveServiceRequest_common,ros2_labust_msgs_msg_PointerPrimitiveServiceResponse_common,rclcpp::Client<labust_msgs::srv::PointerPrimitiveService>::SharedFuture>>();
  }
  matlab::data::StructArray ros2_labust_msgs_PointerPrimitiveService_service::generateMLMessage(ElementType type, 
                                                    void*  msgPtr ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    if(type == eRequest){
	    ros2_labust_msgs_msg_PointerPrimitiveServiceRequest_common commonObj;	
        commonObj.mCommonObjMap = commonObjMap;
	    MDFactory_T factory;
	    return commonObj.get_arr(factory, (labust_msgs::srv::PointerPrimitiveService::Request*)msgPtr, loader);
    }else if(type == eResponse){
        ros2_labust_msgs_msg_PointerPrimitiveServiceResponse_common commonObj;	
        commonObj.mCommonObjMap = commonObjMap;	
	    MDFactory_T factory;
	    return commonObj.get_arr(factory, (labust_msgs::srv::PointerPrimitiveService::Response*)msgPtr, loader);
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_msg_PointerPrimitiveServiceRequest_common, MATLABROS2MsgInterface<labust_msgs::srv::PointerPrimitiveService::Request>)
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_msg_PointerPrimitiveServiceResponse_common, MATLABROS2MsgInterface<labust_msgs::srv::PointerPrimitiveService::Response>)
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_PointerPrimitiveService_service, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
