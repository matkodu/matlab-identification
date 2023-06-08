// Copyright 2021-2022 The MathWorks, Inc.
// Common copy functions for geographic_msgs/GetGeoPathRequest
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
#include "geographic_msgs/srv/get_geo_path.hpp"
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
class GEOGRAPHIC_MSGS_EXPORT ros2_geographic_msgs_msg_GetGeoPathRequest_common : public MATLABROS2MsgInterface<geographic_msgs::srv::GetGeoPath::Request> {
  public:
    virtual ~ros2_geographic_msgs_msg_GetGeoPathRequest_common(){}
    virtual void copy_from_struct(geographic_msgs::srv::GetGeoPath::Request* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    virtual MDArray_T get_arr(MDFactory_T& factory, const geographic_msgs::srv::GetGeoPath::Request* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_geographic_msgs_msg_GetGeoPathRequest_common::copy_from_struct(geographic_msgs::srv::GetGeoPath::Request* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //start
        const matlab::data::StructArray start_arr = arr["start"];
        auto msgClassPtr_start = getCommonObject<geographic_msgs::msg::GeoPoint>("ros2_geographic_msgs_msg_GeoPoint_common",loader);
        msgClassPtr_start->copy_from_struct(&msg->start,start_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'start' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'start' is wrong type; expected a struct.");
    }
    try {
        //goal
        const matlab::data::StructArray goal_arr = arr["goal"];
        auto msgClassPtr_goal = getCommonObject<geographic_msgs::msg::GeoPoint>("ros2_geographic_msgs_msg_GeoPoint_common",loader);
        msgClassPtr_goal->copy_from_struct(&msg->goal,goal_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'goal' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'goal' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_geographic_msgs_msg_GetGeoPathRequest_common::get_arr(MDFactory_T& factory, const geographic_msgs::srv::GetGeoPath::Request* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","start","goal"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("geographic_msgs/GetGeoPathRequest");
    // start
    auto currentElement_start = (msg + ctr)->start;
    auto msgClassPtr_start = getCommonObject<geographic_msgs::msg::GeoPoint>("ros2_geographic_msgs_msg_GeoPoint_common",loader);
    outArray[ctr]["start"] = msgClassPtr_start->get_arr(factory, &currentElement_start, loader);
    // goal
    auto currentElement_goal = (msg + ctr)->goal;
    auto msgClassPtr_goal = getCommonObject<geographic_msgs::msg::GeoPoint>("ros2_geographic_msgs_msg_GeoPoint_common",loader);
    outArray[ctr]["goal"] = msgClassPtr_goal->get_arr(factory, &currentElement_goal, loader);
    }
    return std::move(outArray);
  }
class GEOGRAPHIC_MSGS_EXPORT ros2_geographic_msgs_msg_GetGeoPathResponse_common : public MATLABROS2MsgInterface<geographic_msgs::srv::GetGeoPath::Response> {
  public:
    virtual ~ros2_geographic_msgs_msg_GetGeoPathResponse_common(){}
    virtual void copy_from_struct(geographic_msgs::srv::GetGeoPath::Response* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    virtual MDArray_T get_arr(MDFactory_T& factory, const geographic_msgs::srv::GetGeoPath::Response* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_geographic_msgs_msg_GetGeoPathResponse_common::copy_from_struct(geographic_msgs::srv::GetGeoPath::Response* msg, const matlab::data::Struct& arr,
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
        auto msgClassPtr_plan = getCommonObject<geographic_msgs::msg::GeoPath>("ros2_geographic_msgs_msg_GeoPath_common",loader);
        msgClassPtr_plan->copy_from_struct(&msg->plan,plan_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'plan' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'plan' is wrong type; expected a struct.");
    }
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
        //start_seg
        const matlab::data::StructArray start_seg_arr = arr["start_seg"];
        auto msgClassPtr_start_seg = getCommonObject<unique_identifier_msgs::msg::UUID>("ros2_unique_identifier_msgs_msg_UUID_common",loader);
        msgClassPtr_start_seg->copy_from_struct(&msg->start_seg,start_seg_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'start_seg' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'start_seg' is wrong type; expected a struct.");
    }
    try {
        //goal_seg
        const matlab::data::StructArray goal_seg_arr = arr["goal_seg"];
        auto msgClassPtr_goal_seg = getCommonObject<unique_identifier_msgs::msg::UUID>("ros2_unique_identifier_msgs_msg_UUID_common",loader);
        msgClassPtr_goal_seg->copy_from_struct(&msg->goal_seg,goal_seg_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'goal_seg' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'goal_seg' is wrong type; expected a struct.");
    }
    try {
        //distance
        const matlab::data::TypedArray<double> distance_arr = arr["distance"];
        msg->distance = distance_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'distance' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'distance' is wrong type; expected a double.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_geographic_msgs_msg_GetGeoPathResponse_common::get_arr(MDFactory_T& factory, const geographic_msgs::srv::GetGeoPath::Response* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","success","status","plan","network","start_seg","goal_seg","distance"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("geographic_msgs/GetGeoPathResponse");
    // success
    auto currentElement_success = (msg + ctr)->success;
    outArray[ctr]["success"] = factory.createScalar(currentElement_success);
    // status
    auto currentElement_status = (msg + ctr)->status;
    outArray[ctr]["status"] = factory.createCharArray(currentElement_status);
    // plan
    auto currentElement_plan = (msg + ctr)->plan;
    auto msgClassPtr_plan = getCommonObject<geographic_msgs::msg::GeoPath>("ros2_geographic_msgs_msg_GeoPath_common",loader);
    outArray[ctr]["plan"] = msgClassPtr_plan->get_arr(factory, &currentElement_plan, loader);
    // network
    auto currentElement_network = (msg + ctr)->network;
    auto msgClassPtr_network = getCommonObject<unique_identifier_msgs::msg::UUID>("ros2_unique_identifier_msgs_msg_UUID_common",loader);
    outArray[ctr]["network"] = msgClassPtr_network->get_arr(factory, &currentElement_network, loader);
    // start_seg
    auto currentElement_start_seg = (msg + ctr)->start_seg;
    auto msgClassPtr_start_seg = getCommonObject<unique_identifier_msgs::msg::UUID>("ros2_unique_identifier_msgs_msg_UUID_common",loader);
    outArray[ctr]["start_seg"] = msgClassPtr_start_seg->get_arr(factory, &currentElement_start_seg, loader);
    // goal_seg
    auto currentElement_goal_seg = (msg + ctr)->goal_seg;
    auto msgClassPtr_goal_seg = getCommonObject<unique_identifier_msgs::msg::UUID>("ros2_unique_identifier_msgs_msg_UUID_common",loader);
    outArray[ctr]["goal_seg"] = msgClassPtr_goal_seg->get_arr(factory, &currentElement_goal_seg, loader);
    // distance
    auto currentElement_distance = (msg + ctr)->distance;
    outArray[ctr]["distance"] = factory.createScalar(currentElement_distance);
    }
    return std::move(outArray);
  } 
class GEOGRAPHIC_MSGS_EXPORT ros2_geographic_msgs_GetGeoPath_service : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_geographic_msgs_GetGeoPath_service(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
    virtual std::shared_ptr<MATLABSvcServerInterface> generateSvcServerInterface();
    virtual std::shared_ptr<MATLABSvcClientInterface> generateSvcClientInterface();
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_geographic_msgs_GetGeoPath_service::generatePublisherInterface(ElementType type){
    if(type == eRequest){
        return std::make_shared<ROS2PublisherImpl<geographic_msgs::srv::GetGeoPath::Request,ros2_geographic_msgs_msg_GetGeoPathRequest_common>>();
    }else if(type == eResponse){
        return std::make_shared<ROS2PublisherImpl<geographic_msgs::srv::GetGeoPath::Response,ros2_geographic_msgs_msg_GetGeoPathResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
  std::shared_ptr<MATLABSubscriberInterface> 
          ros2_geographic_msgs_GetGeoPath_service::generateSubscriberInterface(ElementType type){
    if(type == eRequest){
        return std::make_shared<ROS2SubscriberImpl<geographic_msgs::srv::GetGeoPath::Request,ros2_geographic_msgs_msg_GetGeoPathRequest_common>>();
    }else if(type == eResponse){
        return std::make_shared<ROS2SubscriberImpl<geographic_msgs::srv::GetGeoPath::Response,ros2_geographic_msgs_msg_GetGeoPathResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
  std::shared_ptr<void> ros2_geographic_msgs_GetGeoPath_service::generateCppMessage(ElementType type, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    if(type == eRequest){
        auto msg = std::make_shared<geographic_msgs::srv::GetGeoPath::Request>();
        ros2_geographic_msgs_msg_GetGeoPathRequest_common commonObj;
        commonObj.mCommonObjMap = commonObjMap;
        commonObj.copy_from_struct(msg.get(), arr[0], loader);
        return msg;
    }else if(type == eResponse){
        auto msg = std::make_shared<geographic_msgs::srv::GetGeoPath::Response>();
        ros2_geographic_msgs_msg_GetGeoPathResponse_common commonObj;
        commonObj.mCommonObjMap = commonObjMap;
        commonObj.copy_from_struct(msg.get(), arr[0], loader);
        return msg;
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
  std::shared_ptr<MATLABSvcServerInterface> 
          ros2_geographic_msgs_GetGeoPath_service::generateSvcServerInterface(){
    return std::make_shared<ROS2SvcServerImpl<geographic_msgs::srv::GetGeoPath,geographic_msgs::srv::GetGeoPath::Request,geographic_msgs::srv::GetGeoPath::Response,ros2_geographic_msgs_msg_GetGeoPathRequest_common,ros2_geographic_msgs_msg_GetGeoPathResponse_common>>();
  }
  std::shared_ptr<MATLABSvcClientInterface> 
          ros2_geographic_msgs_GetGeoPath_service::generateSvcClientInterface(){
    return std::make_shared<ROS2SvcClientImpl<geographic_msgs::srv::GetGeoPath,geographic_msgs::srv::GetGeoPath::Request,geographic_msgs::srv::GetGeoPath::Response,ros2_geographic_msgs_msg_GetGeoPathRequest_common,ros2_geographic_msgs_msg_GetGeoPathResponse_common,rclcpp::Client<geographic_msgs::srv::GetGeoPath>::SharedFuture>>();
  }
  matlab::data::StructArray ros2_geographic_msgs_GetGeoPath_service::generateMLMessage(ElementType type, 
                                                    void*  msgPtr ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    if(type == eRequest){
	    ros2_geographic_msgs_msg_GetGeoPathRequest_common commonObj;	
        commonObj.mCommonObjMap = commonObjMap;
	    MDFactory_T factory;
	    return commonObj.get_arr(factory, (geographic_msgs::srv::GetGeoPath::Request*)msgPtr, loader);
    }else if(type == eResponse){
        ros2_geographic_msgs_msg_GetGeoPathResponse_common commonObj;	
        commonObj.mCommonObjMap = commonObjMap;	
	    MDFactory_T factory;
	    return commonObj.get_arr(factory, (geographic_msgs::srv::GetGeoPath::Response*)msgPtr, loader);
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_geographic_msgs_msg_GetGeoPathRequest_common, MATLABROS2MsgInterface<geographic_msgs::srv::GetGeoPath::Request>)
CLASS_LOADER_REGISTER_CLASS(ros2_geographic_msgs_msg_GetGeoPathResponse_common, MATLABROS2MsgInterface<geographic_msgs::srv::GetGeoPath::Response>)
CLASS_LOADER_REGISTER_CLASS(ros2_geographic_msgs_GetGeoPath_service, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
