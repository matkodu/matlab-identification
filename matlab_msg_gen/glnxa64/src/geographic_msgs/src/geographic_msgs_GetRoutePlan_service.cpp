// Copyright 2021-2022 The MathWorks, Inc.
// Common copy functions for geographic_msgs/GetRoutePlanRequest
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
#include "geographic_msgs/srv/get_route_plan.hpp"
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
class GEOGRAPHIC_MSGS_EXPORT ros2_geographic_msgs_msg_GetRoutePlanRequest_common : public MATLABROS2MsgInterface<geographic_msgs::srv::GetRoutePlan::Request> {
  public:
    virtual ~ros2_geographic_msgs_msg_GetRoutePlanRequest_common(){}
    virtual void copy_from_struct(geographic_msgs::srv::GetRoutePlan::Request* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    virtual MDArray_T get_arr(MDFactory_T& factory, const geographic_msgs::srv::GetRoutePlan::Request* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_geographic_msgs_msg_GetRoutePlanRequest_common::copy_from_struct(geographic_msgs::srv::GetRoutePlan::Request* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //network
        const matlab::data::StructArray network_arr = arr["network"];
        auto msgClassPtr_network = getCommonObject<unique_identifier_msgs::msg::UUID>("ros2_unique_identifier_msgs_msg_UUID_common",loader);
        msgClassPtr_network->copy_from_struct(&msg->network,network_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'network' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'network' is wrong type; expected a struct.");
    }
    try {
        //start
        const matlab::data::StructArray start_arr = arr["start"];
        auto msgClassPtr_start = getCommonObject<unique_identifier_msgs::msg::UUID>("ros2_unique_identifier_msgs_msg_UUID_common",loader);
        msgClassPtr_start->copy_from_struct(&msg->start,start_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'start' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'start' is wrong type; expected a struct.");
    }
    try {
        //goal
        const matlab::data::StructArray goal_arr = arr["goal"];
        auto msgClassPtr_goal = getCommonObject<unique_identifier_msgs::msg::UUID>("ros2_unique_identifier_msgs_msg_UUID_common",loader);
        msgClassPtr_goal->copy_from_struct(&msg->goal,goal_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'goal' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'goal' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_geographic_msgs_msg_GetRoutePlanRequest_common::get_arr(MDFactory_T& factory, const geographic_msgs::srv::GetRoutePlan::Request* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","network","start","goal"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("geographic_msgs/GetRoutePlanRequest");
    // network
    auto currentElement_network = (msg + ctr)->network;
    auto msgClassPtr_network = getCommonObject<unique_identifier_msgs::msg::UUID>("ros2_unique_identifier_msgs_msg_UUID_common",loader);
    outArray[ctr]["network"] = msgClassPtr_network->get_arr(factory, &currentElement_network, loader);
    // start
    auto currentElement_start = (msg + ctr)->start;
    auto msgClassPtr_start = getCommonObject<unique_identifier_msgs::msg::UUID>("ros2_unique_identifier_msgs_msg_UUID_common",loader);
    outArray[ctr]["start"] = msgClassPtr_start->get_arr(factory, &currentElement_start, loader);
    // goal
    auto currentElement_goal = (msg + ctr)->goal;
    auto msgClassPtr_goal = getCommonObject<unique_identifier_msgs::msg::UUID>("ros2_unique_identifier_msgs_msg_UUID_common",loader);
    outArray[ctr]["goal"] = msgClassPtr_goal->get_arr(factory, &currentElement_goal, loader);
    }
    return std::move(outArray);
  }
class GEOGRAPHIC_MSGS_EXPORT ros2_geographic_msgs_msg_GetRoutePlanResponse_common : public MATLABROS2MsgInterface<geographic_msgs::srv::GetRoutePlan::Response> {
  public:
    virtual ~ros2_geographic_msgs_msg_GetRoutePlanResponse_common(){}
    virtual void copy_from_struct(geographic_msgs::srv::GetRoutePlan::Response* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    virtual MDArray_T get_arr(MDFactory_T& factory, const geographic_msgs::srv::GetRoutePlan::Response* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_geographic_msgs_msg_GetRoutePlanResponse_common::copy_from_struct(geographic_msgs::srv::GetRoutePlan::Response* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //success
        const matlab::data::TypedArray<bool> success_arr = arr["success"];
        msg->success = success_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'success' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'success' is wrong type; expected a logical.");
    }
    try {
        //status
        const matlab::data::CharArray status_arr = arr["status"];
        msg->status = status_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'status' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'status' is wrong type; expected a string.");
    }
    try {
        //plan
        const matlab::data::StructArray plan_arr = arr["plan"];
        auto msgClassPtr_plan = getCommonObject<geographic_msgs::msg::RoutePath>("ros2_geographic_msgs_msg_RoutePath_common",loader);
        msgClassPtr_plan->copy_from_struct(&msg->plan,plan_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'plan' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'plan' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_geographic_msgs_msg_GetRoutePlanResponse_common::get_arr(MDFactory_T& factory, const geographic_msgs::srv::GetRoutePlan::Response* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","success","status","plan"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("geographic_msgs/GetRoutePlanResponse");
    // success
    auto currentElement_success = (msg + ctr)->success;
    outArray[ctr]["success"] = factory.createScalar(currentElement_success);
    // status
    auto currentElement_status = (msg + ctr)->status;
    outArray[ctr]["status"] = factory.createCharArray(currentElement_status);
    // plan
    auto currentElement_plan = (msg + ctr)->plan;
    auto msgClassPtr_plan = getCommonObject<geographic_msgs::msg::RoutePath>("ros2_geographic_msgs_msg_RoutePath_common",loader);
    outArray[ctr]["plan"] = msgClassPtr_plan->get_arr(factory, &currentElement_plan, loader);
    }
    return std::move(outArray);
  } 
class GEOGRAPHIC_MSGS_EXPORT ros2_geographic_msgs_GetRoutePlan_service : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_geographic_msgs_GetRoutePlan_service(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
    virtual std::shared_ptr<MATLABSvcServerInterface> generateSvcServerInterface();
    virtual std::shared_ptr<MATLABSvcClientInterface> generateSvcClientInterface();
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_geographic_msgs_GetRoutePlan_service::generatePublisherInterface(ElementType type){
    if(type == eRequest){
        return std::make_shared<ROS2PublisherImpl<geographic_msgs::srv::GetRoutePlan::Request,ros2_geographic_msgs_msg_GetRoutePlanRequest_common>>();
    }else if(type == eResponse){
        return std::make_shared<ROS2PublisherImpl<geographic_msgs::srv::GetRoutePlan::Response,ros2_geographic_msgs_msg_GetRoutePlanResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
  std::shared_ptr<MATLABSubscriberInterface> 
          ros2_geographic_msgs_GetRoutePlan_service::generateSubscriberInterface(ElementType type){
    if(type == eRequest){
        return std::make_shared<ROS2SubscriberImpl<geographic_msgs::srv::GetRoutePlan::Request,ros2_geographic_msgs_msg_GetRoutePlanRequest_common>>();
    }else if(type == eResponse){
        return std::make_shared<ROS2SubscriberImpl<geographic_msgs::srv::GetRoutePlan::Response,ros2_geographic_msgs_msg_GetRoutePlanResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
  std::shared_ptr<void> ros2_geographic_msgs_GetRoutePlan_service::generateCppMessage(ElementType type, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    if(type == eRequest){
        auto msg = std::make_shared<geographic_msgs::srv::GetRoutePlan::Request>();
        ros2_geographic_msgs_msg_GetRoutePlanRequest_common commonObj;
        commonObj.mCommonObjMap = commonObjMap;
        commonObj.copy_from_struct(msg.get(), arr[0], loader);
        return msg;
    }else if(type == eResponse){
        auto msg = std::make_shared<geographic_msgs::srv::GetRoutePlan::Response>();
        ros2_geographic_msgs_msg_GetRoutePlanResponse_common commonObj;
        commonObj.mCommonObjMap = commonObjMap;
        commonObj.copy_from_struct(msg.get(), arr[0], loader);
        return msg;
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
  std::shared_ptr<MATLABSvcServerInterface> 
          ros2_geographic_msgs_GetRoutePlan_service::generateSvcServerInterface(){
    return std::make_shared<ROS2SvcServerImpl<geographic_msgs::srv::GetRoutePlan,geographic_msgs::srv::GetRoutePlan::Request,geographic_msgs::srv::GetRoutePlan::Response,ros2_geographic_msgs_msg_GetRoutePlanRequest_common,ros2_geographic_msgs_msg_GetRoutePlanResponse_common>>();
  }
  std::shared_ptr<MATLABSvcClientInterface> 
          ros2_geographic_msgs_GetRoutePlan_service::generateSvcClientInterface(){
    return std::make_shared<ROS2SvcClientImpl<geographic_msgs::srv::GetRoutePlan,geographic_msgs::srv::GetRoutePlan::Request,geographic_msgs::srv::GetRoutePlan::Response,ros2_geographic_msgs_msg_GetRoutePlanRequest_common,ros2_geographic_msgs_msg_GetRoutePlanResponse_common,rclcpp::Client<geographic_msgs::srv::GetRoutePlan>::SharedFuture>>();
  }
  matlab::data::StructArray ros2_geographic_msgs_GetRoutePlan_service::generateMLMessage(ElementType type, 
                                                    void*  msgPtr ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    if(type == eRequest){
	    ros2_geographic_msgs_msg_GetRoutePlanRequest_common commonObj;	
        commonObj.mCommonObjMap = commonObjMap;
	    MDFactory_T factory;
	    return commonObj.get_arr(factory, (geographic_msgs::srv::GetRoutePlan::Request*)msgPtr, loader);
    }else if(type == eResponse){
        ros2_geographic_msgs_msg_GetRoutePlanResponse_common commonObj;	
        commonObj.mCommonObjMap = commonObjMap;	
	    MDFactory_T factory;
	    return commonObj.get_arr(factory, (geographic_msgs::srv::GetRoutePlan::Response*)msgPtr, loader);
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_geographic_msgs_msg_GetRoutePlanRequest_common, MATLABROS2MsgInterface<geographic_msgs::srv::GetRoutePlan::Request>)
CLASS_LOADER_REGISTER_CLASS(ros2_geographic_msgs_msg_GetRoutePlanResponse_common, MATLABROS2MsgInterface<geographic_msgs::srv::GetRoutePlan::Response>)
CLASS_LOADER_REGISTER_CLASS(ros2_geographic_msgs_GetRoutePlan_service, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
