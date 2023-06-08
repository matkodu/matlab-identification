// Copyright 2021-2022 The MathWorks, Inc.
// Common copy functions for labust_msgs/RequestExternalReferenceRequest
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
#include "labust_msgs/srv/request_external_reference.hpp"
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
class LABUST_MSGS_EXPORT ros2_labust_msgs_msg_RequestExternalReferenceRequest_common : public MATLABROS2MsgInterface<labust_msgs::srv::RequestExternalReference::Request> {
  public:
    virtual ~ros2_labust_msgs_msg_RequestExternalReferenceRequest_common(){}
    virtual void copy_from_struct(labust_msgs::srv::RequestExternalReference::Request* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    virtual MDArray_T get_arr(MDFactory_T& factory, const labust_msgs::srv::RequestExternalReference::Request* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_labust_msgs_msg_RequestExternalReferenceRequest_common::copy_from_struct(labust_msgs::srv::RequestExternalReference::Request* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //control_modes
        const matlab::data::TypedArray<int32_t> control_modes_arr = arr["control_modes"];
        size_t nelem = 6;
        	std::copy(control_modes_arr.begin(), control_modes_arr.begin()+nelem, msg->control_modes.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'control_modes' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'control_modes' is wrong type; expected a int32.");
    }
    try {
        //identity
        const matlab::data::CharArray identity_arr = arr["identity"];
        msg->identity = identity_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'identity' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'identity' is wrong type; expected a string.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_labust_msgs_msg_RequestExternalReferenceRequest_common::get_arr(MDFactory_T& factory, const labust_msgs::srv::RequestExternalReference::Request* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","IGNORE","TAU_REF","NU_REF","ETA_REF","control_modes","identity"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("labust_msgs/RequestExternalReferenceRequest");
    // IGNORE
    auto currentElement_IGNORE = (msg + ctr)->IGNORE;
    outArray[ctr]["IGNORE"] = factory.createScalar(currentElement_IGNORE);
    // TAU_REF
    auto currentElement_TAU_REF = (msg + ctr)->TAU_REF;
    outArray[ctr]["TAU_REF"] = factory.createScalar(currentElement_TAU_REF);
    // NU_REF
    auto currentElement_NU_REF = (msg + ctr)->NU_REF;
    outArray[ctr]["NU_REF"] = factory.createScalar(currentElement_NU_REF);
    // ETA_REF
    auto currentElement_ETA_REF = (msg + ctr)->ETA_REF;
    outArray[ctr]["ETA_REF"] = factory.createScalar(currentElement_ETA_REF);
    // control_modes
    auto currentElement_control_modes = (msg + ctr)->control_modes;
    outArray[ctr]["control_modes"] = factory.createArray<labust_msgs::srv::RequestExternalReference::Request::_control_modes_type::const_iterator, int32_t>({currentElement_control_modes.size(), 1}, currentElement_control_modes.begin(), currentElement_control_modes.end());
    // identity
    auto currentElement_identity = (msg + ctr)->identity;
    outArray[ctr]["identity"] = factory.createCharArray(currentElement_identity);
    }
    return std::move(outArray);
  }
class LABUST_MSGS_EXPORT ros2_labust_msgs_msg_RequestExternalReferenceResponse_common : public MATLABROS2MsgInterface<labust_msgs::srv::RequestExternalReference::Response> {
  public:
    virtual ~ros2_labust_msgs_msg_RequestExternalReferenceResponse_common(){}
    virtual void copy_from_struct(labust_msgs::srv::RequestExternalReference::Response* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    virtual MDArray_T get_arr(MDFactory_T& factory, const labust_msgs::srv::RequestExternalReference::Response* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_labust_msgs_msg_RequestExternalReferenceResponse_common::copy_from_struct(labust_msgs::srv::RequestExternalReference::Response* msg, const matlab::data::Struct& arr,
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
        //identity_token
        const matlab::data::CharArray identity_token_arr = arr["identity_token"];
        msg->identity_token = identity_token_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'identity_token' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'identity_token' is wrong type; expected a string.");
    }
    try {
        //message
        const matlab::data::CharArray message_arr = arr["message"];
        msg->message = message_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'message' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'message' is wrong type; expected a string.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_labust_msgs_msg_RequestExternalReferenceResponse_common::get_arr(MDFactory_T& factory, const labust_msgs::srv::RequestExternalReference::Response* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","success","identity_token","message"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("labust_msgs/RequestExternalReferenceResponse");
    // success
    auto currentElement_success = (msg + ctr)->success;
    outArray[ctr]["success"] = factory.createScalar(currentElement_success);
    // identity_token
    auto currentElement_identity_token = (msg + ctr)->identity_token;
    outArray[ctr]["identity_token"] = factory.createCharArray(currentElement_identity_token);
    // message
    auto currentElement_message = (msg + ctr)->message;
    outArray[ctr]["message"] = factory.createCharArray(currentElement_message);
    }
    return std::move(outArray);
  } 
class LABUST_MSGS_EXPORT ros2_labust_msgs_RequestExternalReference_service : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_labust_msgs_RequestExternalReference_service(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
    virtual std::shared_ptr<MATLABSvcServerInterface> generateSvcServerInterface();
    virtual std::shared_ptr<MATLABSvcClientInterface> generateSvcClientInterface();
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_labust_msgs_RequestExternalReference_service::generatePublisherInterface(ElementType type){
    if(type == eRequest){
        return std::make_shared<ROS2PublisherImpl<labust_msgs::srv::RequestExternalReference::Request,ros2_labust_msgs_msg_RequestExternalReferenceRequest_common>>();
    }else if(type == eResponse){
        return std::make_shared<ROS2PublisherImpl<labust_msgs::srv::RequestExternalReference::Response,ros2_labust_msgs_msg_RequestExternalReferenceResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
  std::shared_ptr<MATLABSubscriberInterface> 
          ros2_labust_msgs_RequestExternalReference_service::generateSubscriberInterface(ElementType type){
    if(type == eRequest){
        return std::make_shared<ROS2SubscriberImpl<labust_msgs::srv::RequestExternalReference::Request,ros2_labust_msgs_msg_RequestExternalReferenceRequest_common>>();
    }else if(type == eResponse){
        return std::make_shared<ROS2SubscriberImpl<labust_msgs::srv::RequestExternalReference::Response,ros2_labust_msgs_msg_RequestExternalReferenceResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
  std::shared_ptr<void> ros2_labust_msgs_RequestExternalReference_service::generateCppMessage(ElementType type, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    if(type == eRequest){
        auto msg = std::make_shared<labust_msgs::srv::RequestExternalReference::Request>();
        ros2_labust_msgs_msg_RequestExternalReferenceRequest_common commonObj;
        commonObj.mCommonObjMap = commonObjMap;
        commonObj.copy_from_struct(msg.get(), arr[0], loader);
        return msg;
    }else if(type == eResponse){
        auto msg = std::make_shared<labust_msgs::srv::RequestExternalReference::Response>();
        ros2_labust_msgs_msg_RequestExternalReferenceResponse_common commonObj;
        commonObj.mCommonObjMap = commonObjMap;
        commonObj.copy_from_struct(msg.get(), arr[0], loader);
        return msg;
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
  std::shared_ptr<MATLABSvcServerInterface> 
          ros2_labust_msgs_RequestExternalReference_service::generateSvcServerInterface(){
    return std::make_shared<ROS2SvcServerImpl<labust_msgs::srv::RequestExternalReference,labust_msgs::srv::RequestExternalReference::Request,labust_msgs::srv::RequestExternalReference::Response,ros2_labust_msgs_msg_RequestExternalReferenceRequest_common,ros2_labust_msgs_msg_RequestExternalReferenceResponse_common>>();
  }
  std::shared_ptr<MATLABSvcClientInterface> 
          ros2_labust_msgs_RequestExternalReference_service::generateSvcClientInterface(){
    return std::make_shared<ROS2SvcClientImpl<labust_msgs::srv::RequestExternalReference,labust_msgs::srv::RequestExternalReference::Request,labust_msgs::srv::RequestExternalReference::Response,ros2_labust_msgs_msg_RequestExternalReferenceRequest_common,ros2_labust_msgs_msg_RequestExternalReferenceResponse_common,rclcpp::Client<labust_msgs::srv::RequestExternalReference>::SharedFuture>>();
  }
  matlab::data::StructArray ros2_labust_msgs_RequestExternalReference_service::generateMLMessage(ElementType type, 
                                                    void*  msgPtr ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    if(type == eRequest){
	    ros2_labust_msgs_msg_RequestExternalReferenceRequest_common commonObj;	
        commonObj.mCommonObjMap = commonObjMap;
	    MDFactory_T factory;
	    return commonObj.get_arr(factory, (labust_msgs::srv::RequestExternalReference::Request*)msgPtr, loader);
    }else if(type == eResponse){
        ros2_labust_msgs_msg_RequestExternalReferenceResponse_common commonObj;	
        commonObj.mCommonObjMap = commonObjMap;	
	    MDFactory_T factory;
	    return commonObj.get_arr(factory, (labust_msgs::srv::RequestExternalReference::Response*)msgPtr, loader);
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_msg_RequestExternalReferenceRequest_common, MATLABROS2MsgInterface<labust_msgs::srv::RequestExternalReference::Request>)
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_msg_RequestExternalReferenceResponse_common, MATLABROS2MsgInterface<labust_msgs::srv::RequestExternalReference::Response>)
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_RequestExternalReference_service, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
