// Copyright 2021-2022 The MathWorks, Inc.
// Common copy functions for labust_msgs/DockingPrimitiveServiceRequest
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
#include "labust_msgs/srv/docking_primitive_service.hpp"
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
class LABUST_MSGS_EXPORT ros2_labust_msgs_msg_DockingPrimitiveServiceRequest_common : public MATLABROS2MsgInterface<labust_msgs::srv::DockingPrimitiveService::Request> {
  public:
    virtual ~ros2_labust_msgs_msg_DockingPrimitiveServiceRequest_common(){}
    virtual void copy_from_struct(labust_msgs::srv::DockingPrimitiveService::Request* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    virtual MDArray_T get_arr(MDFactory_T& factory, const labust_msgs::srv::DockingPrimitiveService::Request* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_labust_msgs_msg_DockingPrimitiveServiceRequest_common::copy_from_struct(labust_msgs::srv::DockingPrimitiveService::Request* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //docking_action
        const matlab::data::TypedArray<bool> docking_action_arr = arr["docking_action"];
        msg->docking_action = docking_action_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'docking_action' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'docking_action' is wrong type; expected a logical.");
    }
    try {
        //docking_slot
        const matlab::data::TypedArray<uint8_t> docking_slot_arr = arr["docking_slot"];
        msg->docking_slot = docking_slot_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'docking_slot' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'docking_slot' is wrong type; expected a uint8.");
    }
    try {
        //search_yaw_rate
        const matlab::data::TypedArray<float> search_yaw_rate_arr = arr["search_yaw_rate"];
        msg->search_yaw_rate = search_yaw_rate_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'search_yaw_rate' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'search_yaw_rate' is wrong type; expected a single.");
    }
    try {
        //max_yaw_rate
        const matlab::data::TypedArray<float> max_yaw_rate_arr = arr["max_yaw_rate"];
        msg->max_yaw_rate = max_yaw_rate_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'max_yaw_rate' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'max_yaw_rate' is wrong type; expected a single.");
    }
    try {
        //max_surge_speed
        const matlab::data::TypedArray<float> max_surge_speed_arr = arr["max_surge_speed"];
        msg->max_surge_speed = max_surge_speed_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'max_surge_speed' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'max_surge_speed' is wrong type; expected a single.");
    }
    try {
        //surge_stdev
        const matlab::data::TypedArray<float> surge_stdev_arr = arr["surge_stdev"];
        msg->surge_stdev = surge_stdev_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'surge_stdev' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'surge_stdev' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_labust_msgs_msg_DockingPrimitiveServiceRequest_common::get_arr(MDFactory_T& factory, const labust_msgs::srv::DockingPrimitiveService::Request* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","docking_action","docking_slot","search_yaw_rate","max_yaw_rate","max_surge_speed","surge_stdev"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("labust_msgs/DockingPrimitiveServiceRequest");
    // docking_action
    auto currentElement_docking_action = (msg + ctr)->docking_action;
    outArray[ctr]["docking_action"] = factory.createScalar(currentElement_docking_action);
    // docking_slot
    auto currentElement_docking_slot = (msg + ctr)->docking_slot;
    outArray[ctr]["docking_slot"] = factory.createScalar(currentElement_docking_slot);
    // search_yaw_rate
    auto currentElement_search_yaw_rate = (msg + ctr)->search_yaw_rate;
    outArray[ctr]["search_yaw_rate"] = factory.createScalar(currentElement_search_yaw_rate);
    // max_yaw_rate
    auto currentElement_max_yaw_rate = (msg + ctr)->max_yaw_rate;
    outArray[ctr]["max_yaw_rate"] = factory.createScalar(currentElement_max_yaw_rate);
    // max_surge_speed
    auto currentElement_max_surge_speed = (msg + ctr)->max_surge_speed;
    outArray[ctr]["max_surge_speed"] = factory.createScalar(currentElement_max_surge_speed);
    // surge_stdev
    auto currentElement_surge_stdev = (msg + ctr)->surge_stdev;
    outArray[ctr]["surge_stdev"] = factory.createScalar(currentElement_surge_stdev);
    }
    return std::move(outArray);
  }
class LABUST_MSGS_EXPORT ros2_labust_msgs_msg_DockingPrimitiveServiceResponse_common : public MATLABROS2MsgInterface<labust_msgs::srv::DockingPrimitiveService::Response> {
  public:
    virtual ~ros2_labust_msgs_msg_DockingPrimitiveServiceResponse_common(){}
    virtual void copy_from_struct(labust_msgs::srv::DockingPrimitiveService::Response* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    virtual MDArray_T get_arr(MDFactory_T& factory, const labust_msgs::srv::DockingPrimitiveService::Response* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_labust_msgs_msg_DockingPrimitiveServiceResponse_common::copy_from_struct(labust_msgs::srv::DockingPrimitiveService::Response* msg, const matlab::data::Struct& arr,
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
  MDArray_T ros2_labust_msgs_msg_DockingPrimitiveServiceResponse_common::get_arr(MDFactory_T& factory, const labust_msgs::srv::DockingPrimitiveService::Response* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","status"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("labust_msgs/DockingPrimitiveServiceResponse");
    // status
    auto currentElement_status = (msg + ctr)->status;
    outArray[ctr]["status"] = factory.createScalar(currentElement_status);
    }
    return std::move(outArray);
  } 
class LABUST_MSGS_EXPORT ros2_labust_msgs_DockingPrimitiveService_service : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_labust_msgs_DockingPrimitiveService_service(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
    virtual std::shared_ptr<MATLABSvcServerInterface> generateSvcServerInterface();
    virtual std::shared_ptr<MATLABSvcClientInterface> generateSvcClientInterface();
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_labust_msgs_DockingPrimitiveService_service::generatePublisherInterface(ElementType type){
    if(type == eRequest){
        return std::make_shared<ROS2PublisherImpl<labust_msgs::srv::DockingPrimitiveService::Request,ros2_labust_msgs_msg_DockingPrimitiveServiceRequest_common>>();
    }else if(type == eResponse){
        return std::make_shared<ROS2PublisherImpl<labust_msgs::srv::DockingPrimitiveService::Response,ros2_labust_msgs_msg_DockingPrimitiveServiceResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
  std::shared_ptr<MATLABSubscriberInterface> 
          ros2_labust_msgs_DockingPrimitiveService_service::generateSubscriberInterface(ElementType type){
    if(type == eRequest){
        return std::make_shared<ROS2SubscriberImpl<labust_msgs::srv::DockingPrimitiveService::Request,ros2_labust_msgs_msg_DockingPrimitiveServiceRequest_common>>();
    }else if(type == eResponse){
        return std::make_shared<ROS2SubscriberImpl<labust_msgs::srv::DockingPrimitiveService::Response,ros2_labust_msgs_msg_DockingPrimitiveServiceResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
  std::shared_ptr<void> ros2_labust_msgs_DockingPrimitiveService_service::generateCppMessage(ElementType type, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    if(type == eRequest){
        auto msg = std::make_shared<labust_msgs::srv::DockingPrimitiveService::Request>();
        ros2_labust_msgs_msg_DockingPrimitiveServiceRequest_common commonObj;
        commonObj.mCommonObjMap = commonObjMap;
        commonObj.copy_from_struct(msg.get(), arr[0], loader);
        return msg;
    }else if(type == eResponse){
        auto msg = std::make_shared<labust_msgs::srv::DockingPrimitiveService::Response>();
        ros2_labust_msgs_msg_DockingPrimitiveServiceResponse_common commonObj;
        commonObj.mCommonObjMap = commonObjMap;
        commonObj.copy_from_struct(msg.get(), arr[0], loader);
        return msg;
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
  std::shared_ptr<MATLABSvcServerInterface> 
          ros2_labust_msgs_DockingPrimitiveService_service::generateSvcServerInterface(){
    return std::make_shared<ROS2SvcServerImpl<labust_msgs::srv::DockingPrimitiveService,labust_msgs::srv::DockingPrimitiveService::Request,labust_msgs::srv::DockingPrimitiveService::Response,ros2_labust_msgs_msg_DockingPrimitiveServiceRequest_common,ros2_labust_msgs_msg_DockingPrimitiveServiceResponse_common>>();
  }
  std::shared_ptr<MATLABSvcClientInterface> 
          ros2_labust_msgs_DockingPrimitiveService_service::generateSvcClientInterface(){
    return std::make_shared<ROS2SvcClientImpl<labust_msgs::srv::DockingPrimitiveService,labust_msgs::srv::DockingPrimitiveService::Request,labust_msgs::srv::DockingPrimitiveService::Response,ros2_labust_msgs_msg_DockingPrimitiveServiceRequest_common,ros2_labust_msgs_msg_DockingPrimitiveServiceResponse_common,rclcpp::Client<labust_msgs::srv::DockingPrimitiveService>::SharedFuture>>();
  }
  matlab::data::StructArray ros2_labust_msgs_DockingPrimitiveService_service::generateMLMessage(ElementType type, 
                                                    void*  msgPtr ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    if(type == eRequest){
	    ros2_labust_msgs_msg_DockingPrimitiveServiceRequest_common commonObj;	
        commonObj.mCommonObjMap = commonObjMap;
	    MDFactory_T factory;
	    return commonObj.get_arr(factory, (labust_msgs::srv::DockingPrimitiveService::Request*)msgPtr, loader);
    }else if(type == eResponse){
        ros2_labust_msgs_msg_DockingPrimitiveServiceResponse_common commonObj;	
        commonObj.mCommonObjMap = commonObjMap;	
	    MDFactory_T factory;
	    return commonObj.get_arr(factory, (labust_msgs::srv::DockingPrimitiveService::Response*)msgPtr, loader);
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_msg_DockingPrimitiveServiceRequest_common, MATLABROS2MsgInterface<labust_msgs::srv::DockingPrimitiveService::Request>)
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_msg_DockingPrimitiveServiceResponse_common, MATLABROS2MsgInterface<labust_msgs::srv::DockingPrimitiveService::Response>)
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_DockingPrimitiveService_service, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
