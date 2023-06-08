// Copyright 2021-2022 The MathWorks, Inc.
// Common copy functions for labust_msgs/Go2pointPrimitiveServiceRequest
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
#include "labust_msgs/srv/go2point_primitive_service.hpp"
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
class LABUST_MSGS_EXPORT ros2_labust_msgs_msg_Go2pointPrimitiveServiceRequest_common : public MATLABROS2MsgInterface<labust_msgs::srv::Go2pointPrimitiveService::Request> {
  public:
    virtual ~ros2_labust_msgs_msg_Go2pointPrimitiveServiceRequest_common(){}
    virtual void copy_from_struct(labust_msgs::srv::Go2pointPrimitiveService::Request* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    virtual MDArray_T get_arr(MDFactory_T& factory, const labust_msgs::srv::Go2pointPrimitiveService::Request* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_labust_msgs_msg_Go2pointPrimitiveServiceRequest_common::copy_from_struct(labust_msgs::srv::Go2pointPrimitiveService::Request* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //fully_actuated_enable
        const matlab::data::TypedArray<bool> fully_actuated_enable_arr = arr["fully_actuated_enable"];
        msg->fully_actuated_enable = fully_actuated_enable_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'fully_actuated_enable' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'fully_actuated_enable' is wrong type; expected a logical.");
    }
    try {
        //point
        const matlab::data::StructArray point_arr = arr["point"];
        auto msgClassPtr_point = getCommonObject<geometry_msgs::msg::Point>("ros2_geometry_msgs_msg_Point_common",loader);
        msgClassPtr_point->copy_from_struct(&msg->point,point_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'point' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'point' is wrong type; expected a struct.");
    }
    try {
        //heading
        const matlab::data::TypedArray<float> heading_arr = arr["heading"];
        msg->heading = heading_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'heading' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'heading' is wrong type; expected a single.");
    }
    try {
        //speed
        const matlab::data::TypedArray<float> speed_arr = arr["speed"];
        msg->speed = speed_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'speed' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'speed' is wrong type; expected a single.");
    }
    try {
        //victory_radius
        const matlab::data::TypedArray<float> victory_radius_arr = arr["victory_radius"];
        msg->victory_radius = victory_radius_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'victory_radius' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'victory_radius' is wrong type; expected a single.");
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
        //heading_topic
        const matlab::data::CharArray heading_topic_arr = arr["heading_topic"];
        msg->heading_topic = heading_topic_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'heading_topic' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'heading_topic' is wrong type; expected a string.");
    }
    try {
        //speed_topic
        const matlab::data::CharArray speed_topic_arr = arr["speed_topic"];
        msg->speed_topic = speed_topic_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'speed_topic' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'speed_topic' is wrong type; expected a string.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_labust_msgs_msg_Go2pointPrimitiveServiceRequest_common::get_arr(MDFactory_T& factory, const labust_msgs::srv::Go2pointPrimitiveService::Request* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","fully_actuated_enable","point","heading","speed","victory_radius","north_enable","east_enable","depth_enable","heading_enable","altitude_enable","heading_topic","speed_topic"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("labust_msgs/Go2pointPrimitiveServiceRequest");
    // fully_actuated_enable
    auto currentElement_fully_actuated_enable = (msg + ctr)->fully_actuated_enable;
    outArray[ctr]["fully_actuated_enable"] = factory.createScalar(currentElement_fully_actuated_enable);
    // point
    auto currentElement_point = (msg + ctr)->point;
    auto msgClassPtr_point = getCommonObject<geometry_msgs::msg::Point>("ros2_geometry_msgs_msg_Point_common",loader);
    outArray[ctr]["point"] = msgClassPtr_point->get_arr(factory, &currentElement_point, loader);
    // heading
    auto currentElement_heading = (msg + ctr)->heading;
    outArray[ctr]["heading"] = factory.createScalar(currentElement_heading);
    // speed
    auto currentElement_speed = (msg + ctr)->speed;
    outArray[ctr]["speed"] = factory.createScalar(currentElement_speed);
    // victory_radius
    auto currentElement_victory_radius = (msg + ctr)->victory_radius;
    outArray[ctr]["victory_radius"] = factory.createScalar(currentElement_victory_radius);
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
    // heading_topic
    auto currentElement_heading_topic = (msg + ctr)->heading_topic;
    outArray[ctr]["heading_topic"] = factory.createCharArray(currentElement_heading_topic);
    // speed_topic
    auto currentElement_speed_topic = (msg + ctr)->speed_topic;
    outArray[ctr]["speed_topic"] = factory.createCharArray(currentElement_speed_topic);
    }
    return std::move(outArray);
  }
class LABUST_MSGS_EXPORT ros2_labust_msgs_msg_Go2pointPrimitiveServiceResponse_common : public MATLABROS2MsgInterface<labust_msgs::srv::Go2pointPrimitiveService::Response> {
  public:
    virtual ~ros2_labust_msgs_msg_Go2pointPrimitiveServiceResponse_common(){}
    virtual void copy_from_struct(labust_msgs::srv::Go2pointPrimitiveService::Response* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    virtual MDArray_T get_arr(MDFactory_T& factory, const labust_msgs::srv::Go2pointPrimitiveService::Response* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_labust_msgs_msg_Go2pointPrimitiveServiceResponse_common::copy_from_struct(labust_msgs::srv::Go2pointPrimitiveService::Response* msg, const matlab::data::Struct& arr,
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
  MDArray_T ros2_labust_msgs_msg_Go2pointPrimitiveServiceResponse_common::get_arr(MDFactory_T& factory, const labust_msgs::srv::Go2pointPrimitiveService::Response* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","status"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("labust_msgs/Go2pointPrimitiveServiceResponse");
    // status
    auto currentElement_status = (msg + ctr)->status;
    outArray[ctr]["status"] = factory.createScalar(currentElement_status);
    }
    return std::move(outArray);
  } 
class LABUST_MSGS_EXPORT ros2_labust_msgs_Go2pointPrimitiveService_service : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_labust_msgs_Go2pointPrimitiveService_service(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
    virtual std::shared_ptr<MATLABSvcServerInterface> generateSvcServerInterface();
    virtual std::shared_ptr<MATLABSvcClientInterface> generateSvcClientInterface();
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_labust_msgs_Go2pointPrimitiveService_service::generatePublisherInterface(ElementType type){
    if(type == eRequest){
        return std::make_shared<ROS2PublisherImpl<labust_msgs::srv::Go2pointPrimitiveService::Request,ros2_labust_msgs_msg_Go2pointPrimitiveServiceRequest_common>>();
    }else if(type == eResponse){
        return std::make_shared<ROS2PublisherImpl<labust_msgs::srv::Go2pointPrimitiveService::Response,ros2_labust_msgs_msg_Go2pointPrimitiveServiceResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
  std::shared_ptr<MATLABSubscriberInterface> 
          ros2_labust_msgs_Go2pointPrimitiveService_service::generateSubscriberInterface(ElementType type){
    if(type == eRequest){
        return std::make_shared<ROS2SubscriberImpl<labust_msgs::srv::Go2pointPrimitiveService::Request,ros2_labust_msgs_msg_Go2pointPrimitiveServiceRequest_common>>();
    }else if(type == eResponse){
        return std::make_shared<ROS2SubscriberImpl<labust_msgs::srv::Go2pointPrimitiveService::Response,ros2_labust_msgs_msg_Go2pointPrimitiveServiceResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
  std::shared_ptr<void> ros2_labust_msgs_Go2pointPrimitiveService_service::generateCppMessage(ElementType type, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    if(type == eRequest){
        auto msg = std::make_shared<labust_msgs::srv::Go2pointPrimitiveService::Request>();
        ros2_labust_msgs_msg_Go2pointPrimitiveServiceRequest_common commonObj;
        commonObj.mCommonObjMap = commonObjMap;
        commonObj.copy_from_struct(msg.get(), arr[0], loader);
        return msg;
    }else if(type == eResponse){
        auto msg = std::make_shared<labust_msgs::srv::Go2pointPrimitiveService::Response>();
        ros2_labust_msgs_msg_Go2pointPrimitiveServiceResponse_common commonObj;
        commonObj.mCommonObjMap = commonObjMap;
        commonObj.copy_from_struct(msg.get(), arr[0], loader);
        return msg;
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
  std::shared_ptr<MATLABSvcServerInterface> 
          ros2_labust_msgs_Go2pointPrimitiveService_service::generateSvcServerInterface(){
    return std::make_shared<ROS2SvcServerImpl<labust_msgs::srv::Go2pointPrimitiveService,labust_msgs::srv::Go2pointPrimitiveService::Request,labust_msgs::srv::Go2pointPrimitiveService::Response,ros2_labust_msgs_msg_Go2pointPrimitiveServiceRequest_common,ros2_labust_msgs_msg_Go2pointPrimitiveServiceResponse_common>>();
  }
  std::shared_ptr<MATLABSvcClientInterface> 
          ros2_labust_msgs_Go2pointPrimitiveService_service::generateSvcClientInterface(){
    return std::make_shared<ROS2SvcClientImpl<labust_msgs::srv::Go2pointPrimitiveService,labust_msgs::srv::Go2pointPrimitiveService::Request,labust_msgs::srv::Go2pointPrimitiveService::Response,ros2_labust_msgs_msg_Go2pointPrimitiveServiceRequest_common,ros2_labust_msgs_msg_Go2pointPrimitiveServiceResponse_common,rclcpp::Client<labust_msgs::srv::Go2pointPrimitiveService>::SharedFuture>>();
  }
  matlab::data::StructArray ros2_labust_msgs_Go2pointPrimitiveService_service::generateMLMessage(ElementType type, 
                                                    void*  msgPtr ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    if(type == eRequest){
	    ros2_labust_msgs_msg_Go2pointPrimitiveServiceRequest_common commonObj;	
        commonObj.mCommonObjMap = commonObjMap;
	    MDFactory_T factory;
	    return commonObj.get_arr(factory, (labust_msgs::srv::Go2pointPrimitiveService::Request*)msgPtr, loader);
    }else if(type == eResponse){
        ros2_labust_msgs_msg_Go2pointPrimitiveServiceResponse_common commonObj;	
        commonObj.mCommonObjMap = commonObjMap;	
	    MDFactory_T factory;
	    return commonObj.get_arr(factory, (labust_msgs::srv::Go2pointPrimitiveService::Response*)msgPtr, loader);
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_msg_Go2pointPrimitiveServiceRequest_common, MATLABROS2MsgInterface<labust_msgs::srv::Go2pointPrimitiveService::Request>)
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_msg_Go2pointPrimitiveServiceResponse_common, MATLABROS2MsgInterface<labust_msgs::srv::Go2pointPrimitiveService::Response>)
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_Go2pointPrimitiveService_service, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
