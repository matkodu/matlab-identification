// Copyright 2021-2022 The MathWorks, Inc.
// Common copy functions for labust_msgs/EnableControlRequest
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
#include "labust_msgs/srv/enable_control.hpp"
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
class LABUST_MSGS_EXPORT ros2_labust_msgs_msg_EnableControlRequest_common : public MATLABROS2MsgInterface<labust_msgs::srv::EnableControl::Request> {
  public:
    virtual ~ros2_labust_msgs_msg_EnableControlRequest_common(){}
    virtual void copy_from_struct(labust_msgs::srv::EnableControl::Request* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    virtual MDArray_T get_arr(MDFactory_T& factory, const labust_msgs::srv::EnableControl::Request* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_labust_msgs_msg_EnableControlRequest_common::copy_from_struct(labust_msgs::srv::EnableControl::Request* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //enable
        const matlab::data::TypedArray<bool> enable_arr = arr["enable"];
        msg->enable = enable_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'enable' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'enable' is wrong type; expected a logical.");
    }
    try {
        //identity_token
        const matlab::data::CharArray identity_token_arr = arr["identity_token"];
        msg->identity_token = identity_token_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'identity_token' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'identity_token' is wrong type; expected a string.");
    }
    try {
        //control_name
        const matlab::data::CharArray control_name_arr = arr["control_name"];
        msg->control_name = control_name_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'control_name' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'control_name' is wrong type; expected a string.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_labust_msgs_msg_EnableControlRequest_common::get_arr(MDFactory_T& factory, const labust_msgs::srv::EnableControl::Request* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","enable","identity_token","control_name"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("labust_msgs/EnableControlRequest");
    // enable
    auto currentElement_enable = (msg + ctr)->enable;
    outArray[ctr]["enable"] = factory.createScalar(currentElement_enable);
    // identity_token
    auto currentElement_identity_token = (msg + ctr)->identity_token;
    outArray[ctr]["identity_token"] = factory.createCharArray(currentElement_identity_token);
    // control_name
    auto currentElement_control_name = (msg + ctr)->control_name;
    outArray[ctr]["control_name"] = factory.createCharArray(currentElement_control_name);
    }
    return std::move(outArray);
  }
class LABUST_MSGS_EXPORT ros2_labust_msgs_msg_EnableControlResponse_common : public MATLABROS2MsgInterface<labust_msgs::srv::EnableControl::Response> {
  public:
    virtual ~ros2_labust_msgs_msg_EnableControlResponse_common(){}
    virtual void copy_from_struct(labust_msgs::srv::EnableControl::Response* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    virtual MDArray_T get_arr(MDFactory_T& factory, const labust_msgs::srv::EnableControl::Response* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_labust_msgs_msg_EnableControlResponse_common::copy_from_struct(labust_msgs::srv::EnableControl::Response* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_labust_msgs_msg_EnableControlResponse_common::get_arr(MDFactory_T& factory, const labust_msgs::srv::EnableControl::Response* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("labust_msgs/EnableControlResponse");
    }
    return std::move(outArray);
  } 
class LABUST_MSGS_EXPORT ros2_labust_msgs_EnableControl_service : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_labust_msgs_EnableControl_service(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
    virtual std::shared_ptr<MATLABSvcServerInterface> generateSvcServerInterface();
    virtual std::shared_ptr<MATLABSvcClientInterface> generateSvcClientInterface();
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_labust_msgs_EnableControl_service::generatePublisherInterface(ElementType type){
    if(type == eRequest){
        return std::make_shared<ROS2PublisherImpl<labust_msgs::srv::EnableControl::Request,ros2_labust_msgs_msg_EnableControlRequest_common>>();
    }else if(type == eResponse){
        return std::make_shared<ROS2PublisherImpl<labust_msgs::srv::EnableControl::Response,ros2_labust_msgs_msg_EnableControlResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
  std::shared_ptr<MATLABSubscriberInterface> 
          ros2_labust_msgs_EnableControl_service::generateSubscriberInterface(ElementType type){
    if(type == eRequest){
        return std::make_shared<ROS2SubscriberImpl<labust_msgs::srv::EnableControl::Request,ros2_labust_msgs_msg_EnableControlRequest_common>>();
    }else if(type == eResponse){
        return std::make_shared<ROS2SubscriberImpl<labust_msgs::srv::EnableControl::Response,ros2_labust_msgs_msg_EnableControlResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
  std::shared_ptr<void> ros2_labust_msgs_EnableControl_service::generateCppMessage(ElementType type, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    if(type == eRequest){
        auto msg = std::make_shared<labust_msgs::srv::EnableControl::Request>();
        ros2_labust_msgs_msg_EnableControlRequest_common commonObj;
        commonObj.mCommonObjMap = commonObjMap;
        commonObj.copy_from_struct(msg.get(), arr[0], loader);
        return msg;
    }else if(type == eResponse){
        auto msg = std::make_shared<labust_msgs::srv::EnableControl::Response>();
        ros2_labust_msgs_msg_EnableControlResponse_common commonObj;
        commonObj.mCommonObjMap = commonObjMap;
        commonObj.copy_from_struct(msg.get(), arr[0], loader);
        return msg;
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
  std::shared_ptr<MATLABSvcServerInterface> 
          ros2_labust_msgs_EnableControl_service::generateSvcServerInterface(){
    return std::make_shared<ROS2SvcServerImpl<labust_msgs::srv::EnableControl,labust_msgs::srv::EnableControl::Request,labust_msgs::srv::EnableControl::Response,ros2_labust_msgs_msg_EnableControlRequest_common,ros2_labust_msgs_msg_EnableControlResponse_common>>();
  }
  std::shared_ptr<MATLABSvcClientInterface> 
          ros2_labust_msgs_EnableControl_service::generateSvcClientInterface(){
    return std::make_shared<ROS2SvcClientImpl<labust_msgs::srv::EnableControl,labust_msgs::srv::EnableControl::Request,labust_msgs::srv::EnableControl::Response,ros2_labust_msgs_msg_EnableControlRequest_common,ros2_labust_msgs_msg_EnableControlResponse_common,rclcpp::Client<labust_msgs::srv::EnableControl>::SharedFuture>>();
  }
  matlab::data::StructArray ros2_labust_msgs_EnableControl_service::generateMLMessage(ElementType type, 
                                                    void*  msgPtr ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    if(type == eRequest){
	    ros2_labust_msgs_msg_EnableControlRequest_common commonObj;	
        commonObj.mCommonObjMap = commonObjMap;
	    MDFactory_T factory;
	    return commonObj.get_arr(factory, (labust_msgs::srv::EnableControl::Request*)msgPtr, loader);
    }else if(type == eResponse){
        ros2_labust_msgs_msg_EnableControlResponse_common commonObj;	
        commonObj.mCommonObjMap = commonObjMap;	
	    MDFactory_T factory;
	    return commonObj.get_arr(factory, (labust_msgs::srv::EnableControl::Response*)msgPtr, loader);
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_msg_EnableControlRequest_common, MATLABROS2MsgInterface<labust_msgs::srv::EnableControl::Request>)
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_msg_EnableControlResponse_common, MATLABROS2MsgInterface<labust_msgs::srv::EnableControl::Response>)
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_EnableControl_service, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
