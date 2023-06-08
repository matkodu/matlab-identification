// Copyright 2021-2022 The MathWorks, Inc.
// Common copy functions for geographic_msgs/GetGeographicMapRequest
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
#include "geographic_msgs/srv/get_geographic_map.hpp"
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
class GEOGRAPHIC_MSGS_EXPORT ros2_geographic_msgs_msg_GetGeographicMapRequest_common : public MATLABROS2MsgInterface<geographic_msgs::srv::GetGeographicMap::Request> {
  public:
    virtual ~ros2_geographic_msgs_msg_GetGeographicMapRequest_common(){}
    virtual void copy_from_struct(geographic_msgs::srv::GetGeographicMap::Request* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    virtual MDArray_T get_arr(MDFactory_T& factory, const geographic_msgs::srv::GetGeographicMap::Request* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_geographic_msgs_msg_GetGeographicMapRequest_common::copy_from_struct(geographic_msgs::srv::GetGeographicMap::Request* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //url
        const matlab::data::CharArray url_arr = arr["url"];
        msg->url = url_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'url' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'url' is wrong type; expected a string.");
    }
    try {
        //bounds
        const matlab::data::StructArray bounds_arr = arr["bounds"];
        auto msgClassPtr_bounds = getCommonObject<geographic_msgs::msg::BoundingBox>("ros2_geographic_msgs_msg_BoundingBox_common",loader);
        msgClassPtr_bounds->copy_from_struct(&msg->bounds,bounds_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'bounds' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'bounds' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_geographic_msgs_msg_GetGeographicMapRequest_common::get_arr(MDFactory_T& factory, const geographic_msgs::srv::GetGeographicMap::Request* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","url","bounds"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("geographic_msgs/GetGeographicMapRequest");
    // url
    auto currentElement_url = (msg + ctr)->url;
    outArray[ctr]["url"] = factory.createCharArray(currentElement_url);
    // bounds
    auto currentElement_bounds = (msg + ctr)->bounds;
    auto msgClassPtr_bounds = getCommonObject<geographic_msgs::msg::BoundingBox>("ros2_geographic_msgs_msg_BoundingBox_common",loader);
    outArray[ctr]["bounds"] = msgClassPtr_bounds->get_arr(factory, &currentElement_bounds, loader);
    }
    return std::move(outArray);
  }
class GEOGRAPHIC_MSGS_EXPORT ros2_geographic_msgs_msg_GetGeographicMapResponse_common : public MATLABROS2MsgInterface<geographic_msgs::srv::GetGeographicMap::Response> {
  public:
    virtual ~ros2_geographic_msgs_msg_GetGeographicMapResponse_common(){}
    virtual void copy_from_struct(geographic_msgs::srv::GetGeographicMap::Response* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    virtual MDArray_T get_arr(MDFactory_T& factory, const geographic_msgs::srv::GetGeographicMap::Response* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_geographic_msgs_msg_GetGeographicMapResponse_common::copy_from_struct(geographic_msgs::srv::GetGeographicMap::Response* msg, const matlab::data::Struct& arr,
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
        //map
        const matlab::data::StructArray map_arr = arr["map"];
        auto msgClassPtr_map = getCommonObject<geographic_msgs::msg::GeographicMap>("ros2_geographic_msgs_msg_GeographicMap_common",loader);
        msgClassPtr_map->copy_from_struct(&msg->map,map_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'map' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'map' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_geographic_msgs_msg_GetGeographicMapResponse_common::get_arr(MDFactory_T& factory, const geographic_msgs::srv::GetGeographicMap::Response* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","success","status","map"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("geographic_msgs/GetGeographicMapResponse");
    // success
    auto currentElement_success = (msg + ctr)->success;
    outArray[ctr]["success"] = factory.createScalar(currentElement_success);
    // status
    auto currentElement_status = (msg + ctr)->status;
    outArray[ctr]["status"] = factory.createCharArray(currentElement_status);
    // map
    auto currentElement_map = (msg + ctr)->map;
    auto msgClassPtr_map = getCommonObject<geographic_msgs::msg::GeographicMap>("ros2_geographic_msgs_msg_GeographicMap_common",loader);
    outArray[ctr]["map"] = msgClassPtr_map->get_arr(factory, &currentElement_map, loader);
    }
    return std::move(outArray);
  } 
class GEOGRAPHIC_MSGS_EXPORT ros2_geographic_msgs_GetGeographicMap_service : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_geographic_msgs_GetGeographicMap_service(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
    virtual std::shared_ptr<MATLABSvcServerInterface> generateSvcServerInterface();
    virtual std::shared_ptr<MATLABSvcClientInterface> generateSvcClientInterface();
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_geographic_msgs_GetGeographicMap_service::generatePublisherInterface(ElementType type){
    if(type == eRequest){
        return std::make_shared<ROS2PublisherImpl<geographic_msgs::srv::GetGeographicMap::Request,ros2_geographic_msgs_msg_GetGeographicMapRequest_common>>();
    }else if(type == eResponse){
        return std::make_shared<ROS2PublisherImpl<geographic_msgs::srv::GetGeographicMap::Response,ros2_geographic_msgs_msg_GetGeographicMapResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
  std::shared_ptr<MATLABSubscriberInterface> 
          ros2_geographic_msgs_GetGeographicMap_service::generateSubscriberInterface(ElementType type){
    if(type == eRequest){
        return std::make_shared<ROS2SubscriberImpl<geographic_msgs::srv::GetGeographicMap::Request,ros2_geographic_msgs_msg_GetGeographicMapRequest_common>>();
    }else if(type == eResponse){
        return std::make_shared<ROS2SubscriberImpl<geographic_msgs::srv::GetGeographicMap::Response,ros2_geographic_msgs_msg_GetGeographicMapResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
  std::shared_ptr<void> ros2_geographic_msgs_GetGeographicMap_service::generateCppMessage(ElementType type, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    if(type == eRequest){
        auto msg = std::make_shared<geographic_msgs::srv::GetGeographicMap::Request>();
        ros2_geographic_msgs_msg_GetGeographicMapRequest_common commonObj;
        commonObj.mCommonObjMap = commonObjMap;
        commonObj.copy_from_struct(msg.get(), arr[0], loader);
        return msg;
    }else if(type == eResponse){
        auto msg = std::make_shared<geographic_msgs::srv::GetGeographicMap::Response>();
        ros2_geographic_msgs_msg_GetGeographicMapResponse_common commonObj;
        commonObj.mCommonObjMap = commonObjMap;
        commonObj.copy_from_struct(msg.get(), arr[0], loader);
        return msg;
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
  std::shared_ptr<MATLABSvcServerInterface> 
          ros2_geographic_msgs_GetGeographicMap_service::generateSvcServerInterface(){
    return std::make_shared<ROS2SvcServerImpl<geographic_msgs::srv::GetGeographicMap,geographic_msgs::srv::GetGeographicMap::Request,geographic_msgs::srv::GetGeographicMap::Response,ros2_geographic_msgs_msg_GetGeographicMapRequest_common,ros2_geographic_msgs_msg_GetGeographicMapResponse_common>>();
  }
  std::shared_ptr<MATLABSvcClientInterface> 
          ros2_geographic_msgs_GetGeographicMap_service::generateSvcClientInterface(){
    return std::make_shared<ROS2SvcClientImpl<geographic_msgs::srv::GetGeographicMap,geographic_msgs::srv::GetGeographicMap::Request,geographic_msgs::srv::GetGeographicMap::Response,ros2_geographic_msgs_msg_GetGeographicMapRequest_common,ros2_geographic_msgs_msg_GetGeographicMapResponse_common,rclcpp::Client<geographic_msgs::srv::GetGeographicMap>::SharedFuture>>();
  }
  matlab::data::StructArray ros2_geographic_msgs_GetGeographicMap_service::generateMLMessage(ElementType type, 
                                                    void*  msgPtr ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    if(type == eRequest){
	    ros2_geographic_msgs_msg_GetGeographicMapRequest_common commonObj;	
        commonObj.mCommonObjMap = commonObjMap;
	    MDFactory_T factory;
	    return commonObj.get_arr(factory, (geographic_msgs::srv::GetGeographicMap::Request*)msgPtr, loader);
    }else if(type == eResponse){
        ros2_geographic_msgs_msg_GetGeographicMapResponse_common commonObj;	
        commonObj.mCommonObjMap = commonObjMap;	
	    MDFactory_T factory;
	    return commonObj.get_arr(factory, (geographic_msgs::srv::GetGeographicMap::Response*)msgPtr, loader);
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_geographic_msgs_msg_GetGeographicMapRequest_common, MATLABROS2MsgInterface<geographic_msgs::srv::GetGeographicMap::Request>)
CLASS_LOADER_REGISTER_CLASS(ros2_geographic_msgs_msg_GetGeographicMapResponse_common, MATLABROS2MsgInterface<geographic_msgs::srv::GetGeographicMap::Response>)
CLASS_LOADER_REGISTER_CLASS(ros2_geographic_msgs_GetGeographicMap_service, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
