// Copyright 2021-2022 The MathWorks, Inc.
// Common copy functions for labust_msgs/DynamicPositioningPrimitiveServiceRequest
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
#include "labust_msgs/srv/dynamic_positioning_primitive_service.hpp"
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
class LABUST_MSGS_EXPORT ros2_labust_msgs_msg_DynamicPositioningPrimitiveServiceRequest_common : public MATLABROS2MsgInterface<labust_msgs::srv::DynamicPositioningPrimitiveService::Request> {
  public:
    virtual ~ros2_labust_msgs_msg_DynamicPositioningPrimitiveServiceRequest_common(){}
    virtual void copy_from_struct(labust_msgs::srv::DynamicPositioningPrimitiveService::Request* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    virtual MDArray_T get_arr(MDFactory_T& factory, const labust_msgs::srv::DynamicPositioningPrimitiveService::Request* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_labust_msgs_msg_DynamicPositioningPrimitiveServiceRequest_common::copy_from_struct(labust_msgs::srv::DynamicPositioningPrimitiveService::Request* msg, const matlab::data::Struct& arr,
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
    try {
        //heading
        const matlab::data::TypedArray<double> heading_arr = arr["heading"];
        msg->heading = heading_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'heading' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'heading' is wrong type; expected a double.");
    }
    try {
        //north_enable
        const matlab::data::TypedArray<bool> north_enable_arr = arr["north_enable"];
        msg->north_enable = north_enable_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'north_enable' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'north_enable' is wrong type; expected a logical.");
    }
    try {
        //east_enable
        const matlab::data::TypedArray<bool> east_enable_arr = arr["east_enable"];
        msg->east_enable = east_enable_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'east_enable' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'east_enable' is wrong type; expected a logical.");
    }
    try {
        //depth_enable
        const matlab::data::TypedArray<bool> depth_enable_arr = arr["depth_enable"];
        msg->depth_enable = depth_enable_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'depth_enable' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'depth_enable' is wrong type; expected a logical.");
    }
    try {
        //heading_enable
        const matlab::data::TypedArray<bool> heading_enable_arr = arr["heading_enable"];
        msg->heading_enable = heading_enable_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'heading_enable' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'heading_enable' is wrong type; expected a logical.");
    }
    try {
        //altitude_enable
        const matlab::data::TypedArray<bool> altitude_enable_arr = arr["altitude_enable"];
        msg->altitude_enable = altitude_enable_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'altitude_enable' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'altitude_enable' is wrong type; expected a logical.");
    }
    try {
        //target_topic_enable
        const matlab::data::TypedArray<bool> target_topic_enable_arr = arr["target_topic_enable"];
        msg->target_topic_enable = target_topic_enable_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'target_topic_enable' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'target_topic_enable' is wrong type; expected a logical.");
    }
    try {
        //track_heading_enable
        const matlab::data::TypedArray<bool> track_heading_enable_arr = arr["track_heading_enable"];
        msg->track_heading_enable = track_heading_enable_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'track_heading_enable' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'track_heading_enable' is wrong type; expected a logical.");
    }
    try {
        //point_to_target
        const matlab::data::TypedArray<bool> point_to_target_arr = arr["point_to_target"];
        msg->point_to_target = point_to_target_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'point_to_target' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'point_to_target' is wrong type; expected a logical.");
    }
    try {
        //target_topic
        const matlab::data::CharArray target_topic_arr = arr["target_topic"];
        msg->target_topic = target_topic_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'target_topic' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'target_topic' is wrong type; expected a string.");
    }
    try {
        //heading_topic
        const matlab::data::CharArray heading_topic_arr = arr["heading_topic"];
        msg->heading_topic = heading_topic_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'heading_topic' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'heading_topic' is wrong type; expected a string.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_labust_msgs_msg_DynamicPositioningPrimitiveServiceRequest_common::get_arr(MDFactory_T& factory, const labust_msgs::srv::DynamicPositioningPrimitiveService::Request* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","north","east","depth","heading","north_enable","east_enable","depth_enable","heading_enable","altitude_enable","target_topic_enable","track_heading_enable","point_to_target","target_topic","heading_topic"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("labust_msgs/DynamicPositioningPrimitiveServiceRequest");
    // north
    auto currentElement_north = (msg + ctr)->north;
    outArray[ctr]["north"] = factory.createScalar(currentElement_north);
    // east
    auto currentElement_east = (msg + ctr)->east;
    outArray[ctr]["east"] = factory.createScalar(currentElement_east);
    // depth
    auto currentElement_depth = (msg + ctr)->depth;
    outArray[ctr]["depth"] = factory.createScalar(currentElement_depth);
    // heading
    auto currentElement_heading = (msg + ctr)->heading;
    outArray[ctr]["heading"] = factory.createScalar(currentElement_heading);
    // north_enable
    auto currentElement_north_enable = (msg + ctr)->north_enable;
    outArray[ctr]["north_enable"] = factory.createScalar(currentElement_north_enable);
    // east_enable
    auto currentElement_east_enable = (msg + ctr)->east_enable;
    outArray[ctr]["east_enable"] = factory.createScalar(currentElement_east_enable);
    // depth_enable
    auto currentElement_depth_enable = (msg + ctr)->depth_enable;
    outArray[ctr]["depth_enable"] = factory.createScalar(currentElement_depth_enable);
    // heading_enable
    auto currentElement_heading_enable = (msg + ctr)->heading_enable;
    outArray[ctr]["heading_enable"] = factory.createScalar(currentElement_heading_enable);
    // altitude_enable
    auto currentElement_altitude_enable = (msg + ctr)->altitude_enable;
    outArray[ctr]["altitude_enable"] = factory.createScalar(currentElement_altitude_enable);
    // target_topic_enable
    auto currentElement_target_topic_enable = (msg + ctr)->target_topic_enable;
    outArray[ctr]["target_topic_enable"] = factory.createScalar(currentElement_target_topic_enable);
    // track_heading_enable
    auto currentElement_track_heading_enable = (msg + ctr)->track_heading_enable;
    outArray[ctr]["track_heading_enable"] = factory.createScalar(currentElement_track_heading_enable);
    // point_to_target
    auto currentElement_point_to_target = (msg + ctr)->point_to_target;
    outArray[ctr]["point_to_target"] = factory.createScalar(currentElement_point_to_target);
    // target_topic
    auto currentElement_target_topic = (msg + ctr)->target_topic;
    outArray[ctr]["target_topic"] = factory.createCharArray(currentElement_target_topic);
    // heading_topic
    auto currentElement_heading_topic = (msg + ctr)->heading_topic;
    outArray[ctr]["heading_topic"] = factory.createCharArray(currentElement_heading_topic);
    }
    return std::move(outArray);
  }
class LABUST_MSGS_EXPORT ros2_labust_msgs_msg_DynamicPositioningPrimitiveServiceResponse_common : public MATLABROS2MsgInterface<labust_msgs::srv::DynamicPositioningPrimitiveService::Response> {
  public:
    virtual ~ros2_labust_msgs_msg_DynamicPositioningPrimitiveServiceResponse_common(){}
    virtual void copy_from_struct(labust_msgs::srv::DynamicPositioningPrimitiveService::Response* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    virtual MDArray_T get_arr(MDFactory_T& factory, const labust_msgs::srv::DynamicPositioningPrimitiveService::Response* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_labust_msgs_msg_DynamicPositioningPrimitiveServiceResponse_common::copy_from_struct(labust_msgs::srv::DynamicPositioningPrimitiveService::Response* msg, const matlab::data::Struct& arr,
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
  MDArray_T ros2_labust_msgs_msg_DynamicPositioningPrimitiveServiceResponse_common::get_arr(MDFactory_T& factory, const labust_msgs::srv::DynamicPositioningPrimitiveService::Response* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","status"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("labust_msgs/DynamicPositioningPrimitiveServiceResponse");
    // status
    auto currentElement_status = (msg + ctr)->status;
    outArray[ctr]["status"] = factory.createScalar(currentElement_status);
    }
    return std::move(outArray);
  } 
class LABUST_MSGS_EXPORT ros2_labust_msgs_DynamicPositioningPrimitiveService_service : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_labust_msgs_DynamicPositioningPrimitiveService_service(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
    virtual std::shared_ptr<MATLABSvcServerInterface> generateSvcServerInterface();
    virtual std::shared_ptr<MATLABSvcClientInterface> generateSvcClientInterface();
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_labust_msgs_DynamicPositioningPrimitiveService_service::generatePublisherInterface(ElementType type){
    if(type == eRequest){
        return std::make_shared<ROS2PublisherImpl<labust_msgs::srv::DynamicPositioningPrimitiveService::Request,ros2_labust_msgs_msg_DynamicPositioningPrimitiveServiceRequest_common>>();
    }else if(type == eResponse){
        return std::make_shared<ROS2PublisherImpl<labust_msgs::srv::DynamicPositioningPrimitiveService::Response,ros2_labust_msgs_msg_DynamicPositioningPrimitiveServiceResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
  std::shared_ptr<MATLABSubscriberInterface> 
          ros2_labust_msgs_DynamicPositioningPrimitiveService_service::generateSubscriberInterface(ElementType type){
    if(type == eRequest){
        return std::make_shared<ROS2SubscriberImpl<labust_msgs::srv::DynamicPositioningPrimitiveService::Request,ros2_labust_msgs_msg_DynamicPositioningPrimitiveServiceRequest_common>>();
    }else if(type == eResponse){
        return std::make_shared<ROS2SubscriberImpl<labust_msgs::srv::DynamicPositioningPrimitiveService::Response,ros2_labust_msgs_msg_DynamicPositioningPrimitiveServiceResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
  std::shared_ptr<void> ros2_labust_msgs_DynamicPositioningPrimitiveService_service::generateCppMessage(ElementType type, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    if(type == eRequest){
        auto msg = std::make_shared<labust_msgs::srv::DynamicPositioningPrimitiveService::Request>();
        ros2_labust_msgs_msg_DynamicPositioningPrimitiveServiceRequest_common commonObj;
        commonObj.mCommonObjMap = commonObjMap;
        commonObj.copy_from_struct(msg.get(), arr[0], loader);
        return msg;
    }else if(type == eResponse){
        auto msg = std::make_shared<labust_msgs::srv::DynamicPositioningPrimitiveService::Response>();
        ros2_labust_msgs_msg_DynamicPositioningPrimitiveServiceResponse_common commonObj;
        commonObj.mCommonObjMap = commonObjMap;
        commonObj.copy_from_struct(msg.get(), arr[0], loader);
        return msg;
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
  std::shared_ptr<MATLABSvcServerInterface> 
          ros2_labust_msgs_DynamicPositioningPrimitiveService_service::generateSvcServerInterface(){
    return std::make_shared<ROS2SvcServerImpl<labust_msgs::srv::DynamicPositioningPrimitiveService,labust_msgs::srv::DynamicPositioningPrimitiveService::Request,labust_msgs::srv::DynamicPositioningPrimitiveService::Response,ros2_labust_msgs_msg_DynamicPositioningPrimitiveServiceRequest_common,ros2_labust_msgs_msg_DynamicPositioningPrimitiveServiceResponse_common>>();
  }
  std::shared_ptr<MATLABSvcClientInterface> 
          ros2_labust_msgs_DynamicPositioningPrimitiveService_service::generateSvcClientInterface(){
    return std::make_shared<ROS2SvcClientImpl<labust_msgs::srv::DynamicPositioningPrimitiveService,labust_msgs::srv::DynamicPositioningPrimitiveService::Request,labust_msgs::srv::DynamicPositioningPrimitiveService::Response,ros2_labust_msgs_msg_DynamicPositioningPrimitiveServiceRequest_common,ros2_labust_msgs_msg_DynamicPositioningPrimitiveServiceResponse_common,rclcpp::Client<labust_msgs::srv::DynamicPositioningPrimitiveService>::SharedFuture>>();
  }
  matlab::data::StructArray ros2_labust_msgs_DynamicPositioningPrimitiveService_service::generateMLMessage(ElementType type, 
                                                    void*  msgPtr ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    if(type == eRequest){
	    ros2_labust_msgs_msg_DynamicPositioningPrimitiveServiceRequest_common commonObj;	
        commonObj.mCommonObjMap = commonObjMap;
	    MDFactory_T factory;
	    return commonObj.get_arr(factory, (labust_msgs::srv::DynamicPositioningPrimitiveService::Request*)msgPtr, loader);
    }else if(type == eResponse){
        ros2_labust_msgs_msg_DynamicPositioningPrimitiveServiceResponse_common commonObj;	
        commonObj.mCommonObjMap = commonObjMap;	
	    MDFactory_T factory;
	    return commonObj.get_arr(factory, (labust_msgs::srv::DynamicPositioningPrimitiveService::Response*)msgPtr, loader);
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_msg_DynamicPositioningPrimitiveServiceRequest_common, MATLABROS2MsgInterface<labust_msgs::srv::DynamicPositioningPrimitiveService::Request>)
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_msg_DynamicPositioningPrimitiveServiceResponse_common, MATLABROS2MsgInterface<labust_msgs::srv::DynamicPositioningPrimitiveService::Response>)
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_DynamicPositioningPrimitiveService_service, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
