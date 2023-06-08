// Copyright 2021-2022 The MathWorks, Inc.
// Common copy functions for geographic_msgs/UpdateGeographicMapRequest
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
#include "geographic_msgs/srv/update_geographic_map.hpp"
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
class GEOGRAPHIC_MSGS_EXPORT ros2_geographic_msgs_msg_UpdateGeographicMapRequest_common : public MATLABROS2MsgInterface<geographic_msgs::srv::UpdateGeographicMap::Request> {
  public:
    virtual ~ros2_geographic_msgs_msg_UpdateGeographicMapRequest_common(){}
    virtual void copy_from_struct(geographic_msgs::srv::UpdateGeographicMap::Request* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    virtual MDArray_T get_arr(MDFactory_T& factory, const geographic_msgs::srv::UpdateGeographicMap::Request* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_geographic_msgs_msg_UpdateGeographicMapRequest_common::copy_from_struct(geographic_msgs::srv::UpdateGeographicMap::Request* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //updates
        const matlab::data::StructArray updates_arr = arr["updates"];
        auto msgClassPtr_updates = getCommonObject<geographic_msgs::msg::GeographicMapChanges>("ros2_geographic_msgs_msg_GeographicMapChanges_common",loader);
        msgClassPtr_updates->copy_from_struct(&msg->updates,updates_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'updates' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'updates' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_geographic_msgs_msg_UpdateGeographicMapRequest_common::get_arr(MDFactory_T& factory, const geographic_msgs::srv::UpdateGeographicMap::Request* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","updates"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("geographic_msgs/UpdateGeographicMapRequest");
    // updates
    auto currentElement_updates = (msg + ctr)->updates;
    auto msgClassPtr_updates = getCommonObject<geographic_msgs::msg::GeographicMapChanges>("ros2_geographic_msgs_msg_GeographicMapChanges_common",loader);
    outArray[ctr]["updates"] = msgClassPtr_updates->get_arr(factory, &currentElement_updates, loader);
    }
    return std::move(outArray);
  }
class GEOGRAPHIC_MSGS_EXPORT ros2_geographic_msgs_msg_UpdateGeographicMapResponse_common : public MATLABROS2MsgInterface<geographic_msgs::srv::UpdateGeographicMap::Response> {
  public:
    virtual ~ros2_geographic_msgs_msg_UpdateGeographicMapResponse_common(){}
    virtual void copy_from_struct(geographic_msgs::srv::UpdateGeographicMap::Response* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    virtual MDArray_T get_arr(MDFactory_T& factory, const geographic_msgs::srv::UpdateGeographicMap::Response* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_geographic_msgs_msg_UpdateGeographicMapResponse_common::copy_from_struct(geographic_msgs::srv::UpdateGeographicMap::Response* msg, const matlab::data::Struct& arr,
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
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_geographic_msgs_msg_UpdateGeographicMapResponse_common::get_arr(MDFactory_T& factory, const geographic_msgs::srv::UpdateGeographicMap::Response* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","success","status"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("geographic_msgs/UpdateGeographicMapResponse");
    // success
    auto currentElement_success = (msg + ctr)->success;
    outArray[ctr]["success"] = factory.createScalar(currentElement_success);
    // status
    auto currentElement_status = (msg + ctr)->status;
    outArray[ctr]["status"] = factory.createCharArray(currentElement_status);
    }
    return std::move(outArray);
  } 
class GEOGRAPHIC_MSGS_EXPORT ros2_geographic_msgs_UpdateGeographicMap_service : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_geographic_msgs_UpdateGeographicMap_service(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
    virtual std::shared_ptr<MATLABSvcServerInterface> generateSvcServerInterface();
    virtual std::shared_ptr<MATLABSvcClientInterface> generateSvcClientInterface();
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_geographic_msgs_UpdateGeographicMap_service::generatePublisherInterface(ElementType type){
    if(type == eRequest){
        return std::make_shared<ROS2PublisherImpl<geographic_msgs::srv::UpdateGeographicMap::Request,ros2_geographic_msgs_msg_UpdateGeographicMapRequest_common>>();
    }else if(type == eResponse){
        return std::make_shared<ROS2PublisherImpl<geographic_msgs::srv::UpdateGeographicMap::Response,ros2_geographic_msgs_msg_UpdateGeographicMapResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
  std::shared_ptr<MATLABSubscriberInterface> 
          ros2_geographic_msgs_UpdateGeographicMap_service::generateSubscriberInterface(ElementType type){
    if(type == eRequest){
        return std::make_shared<ROS2SubscriberImpl<geographic_msgs::srv::UpdateGeographicMap::Request,ros2_geographic_msgs_msg_UpdateGeographicMapRequest_common>>();
    }else if(type == eResponse){
        return std::make_shared<ROS2SubscriberImpl<geographic_msgs::srv::UpdateGeographicMap::Response,ros2_geographic_msgs_msg_UpdateGeographicMapResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
  std::shared_ptr<void> ros2_geographic_msgs_UpdateGeographicMap_service::generateCppMessage(ElementType type, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    if(type == eRequest){
        auto msg = std::make_shared<geographic_msgs::srv::UpdateGeographicMap::Request>();
        ros2_geographic_msgs_msg_UpdateGeographicMapRequest_common commonObj;
        commonObj.mCommonObjMap = commonObjMap;
        commonObj.copy_from_struct(msg.get(), arr[0], loader);
        return msg;
    }else if(type == eResponse){
        auto msg = std::make_shared<geographic_msgs::srv::UpdateGeographicMap::Response>();
        ros2_geographic_msgs_msg_UpdateGeographicMapResponse_common commonObj;
        commonObj.mCommonObjMap = commonObjMap;
        commonObj.copy_from_struct(msg.get(), arr[0], loader);
        return msg;
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
  std::shared_ptr<MATLABSvcServerInterface> 
          ros2_geographic_msgs_UpdateGeographicMap_service::generateSvcServerInterface(){
    return std::make_shared<ROS2SvcServerImpl<geographic_msgs::srv::UpdateGeographicMap,geographic_msgs::srv::UpdateGeographicMap::Request,geographic_msgs::srv::UpdateGeographicMap::Response,ros2_geographic_msgs_msg_UpdateGeographicMapRequest_common,ros2_geographic_msgs_msg_UpdateGeographicMapResponse_common>>();
  }
  std::shared_ptr<MATLABSvcClientInterface> 
          ros2_geographic_msgs_UpdateGeographicMap_service::generateSvcClientInterface(){
    return std::make_shared<ROS2SvcClientImpl<geographic_msgs::srv::UpdateGeographicMap,geographic_msgs::srv::UpdateGeographicMap::Request,geographic_msgs::srv::UpdateGeographicMap::Response,ros2_geographic_msgs_msg_UpdateGeographicMapRequest_common,ros2_geographic_msgs_msg_UpdateGeographicMapResponse_common,rclcpp::Client<geographic_msgs::srv::UpdateGeographicMap>::SharedFuture>>();
  }
  matlab::data::StructArray ros2_geographic_msgs_UpdateGeographicMap_service::generateMLMessage(ElementType type, 
                                                    void*  msgPtr ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    if(type == eRequest){
	    ros2_geographic_msgs_msg_UpdateGeographicMapRequest_common commonObj;	
        commonObj.mCommonObjMap = commonObjMap;
	    MDFactory_T factory;
	    return commonObj.get_arr(factory, (geographic_msgs::srv::UpdateGeographicMap::Request*)msgPtr, loader);
    }else if(type == eResponse){
        ros2_geographic_msgs_msg_UpdateGeographicMapResponse_common commonObj;	
        commonObj.mCommonObjMap = commonObjMap;	
	    MDFactory_T factory;
	    return commonObj.get_arr(factory, (geographic_msgs::srv::UpdateGeographicMap::Response*)msgPtr, loader);
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_geographic_msgs_msg_UpdateGeographicMapRequest_common, MATLABROS2MsgInterface<geographic_msgs::srv::UpdateGeographicMap::Request>)
CLASS_LOADER_REGISTER_CLASS(ros2_geographic_msgs_msg_UpdateGeographicMapResponse_common, MATLABROS2MsgInterface<geographic_msgs::srv::UpdateGeographicMap::Response>)
CLASS_LOADER_REGISTER_CLASS(ros2_geographic_msgs_UpdateGeographicMap_service, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
