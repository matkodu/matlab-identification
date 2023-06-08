// Copyright 2021-2022 The MathWorks, Inc.
// Common copy functions for labust_msgs/RegisterControllerV2Request
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
#include "labust_msgs/srv/register_controller_v2.hpp"
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
class LABUST_MSGS_EXPORT ros2_labust_msgs_msg_RegisterControllerV2Request_common : public MATLABROS2MsgInterface<labust_msgs::srv::RegisterControllerV2::Request> {
  public:
    virtual ~ros2_labust_msgs_msg_RegisterControllerV2Request_common(){}
    virtual void copy_from_struct(labust_msgs::srv::RegisterControllerV2::Request* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    virtual MDArray_T get_arr(MDFactory_T& factory, const labust_msgs::srv::RegisterControllerV2::Request* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_labust_msgs_msg_RegisterControllerV2Request_common::copy_from_struct(labust_msgs::srv::RegisterControllerV2::Request* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //name
        const matlab::data::CharArray name_arr = arr["name"];
        msg->name = name_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'name' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'name' is wrong type; expected a string.");
    }
    try {
        //srv_name
        const matlab::data::CharArray srv_name_arr = arr["srv_name"];
        msg->srv_name = srv_name_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'srv_name' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'srv_name' is wrong type; expected a string.");
    }
    try {
        //used_tau
        const matlab::data::TypedArray<int8_t> used_tau_arr = arr["used_tau"];
        size_t nelem = 6;
        	std::copy(used_tau_arr.begin(), used_tau_arr.begin()+nelem, msg->used_tau.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'used_tau' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'used_tau' is wrong type; expected a int8.");
    }
    try {
        //used_nu
        const matlab::data::TypedArray<int8_t> used_nu_arr = arr["used_nu"];
        size_t nelem = 6;
        	std::copy(used_nu_arr.begin(), used_nu_arr.begin()+nelem, msg->used_nu.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'used_nu' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'used_nu' is wrong type; expected a int8.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_labust_msgs_msg_RegisterControllerV2Request_common::get_arr(MDFactory_T& factory, const labust_msgs::srv::RegisterControllerV2::Request* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","SURGE","SWAY","HEAVE","ROLL","PITCH","YAW","X","Y","Z","K","M","N","name","srv_name","used_tau","used_nu"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("labust_msgs/RegisterControllerV2Request");
    // SURGE
    auto currentElement_SURGE = (msg + ctr)->SURGE;
    outArray[ctr]["SURGE"] = factory.createScalar(currentElement_SURGE);
    // SWAY
    auto currentElement_SWAY = (msg + ctr)->SWAY;
    outArray[ctr]["SWAY"] = factory.createScalar(currentElement_SWAY);
    // HEAVE
    auto currentElement_HEAVE = (msg + ctr)->HEAVE;
    outArray[ctr]["HEAVE"] = factory.createScalar(currentElement_HEAVE);
    // ROLL
    auto currentElement_ROLL = (msg + ctr)->ROLL;
    outArray[ctr]["ROLL"] = factory.createScalar(currentElement_ROLL);
    // PITCH
    auto currentElement_PITCH = (msg + ctr)->PITCH;
    outArray[ctr]["PITCH"] = factory.createScalar(currentElement_PITCH);
    // YAW
    auto currentElement_YAW = (msg + ctr)->YAW;
    outArray[ctr]["YAW"] = factory.createScalar(currentElement_YAW);
    // X
    auto currentElement_X = (msg + ctr)->X;
    outArray[ctr]["X"] = factory.createScalar(currentElement_X);
    // Y
    auto currentElement_Y = (msg + ctr)->Y;
    outArray[ctr]["Y"] = factory.createScalar(currentElement_Y);
    // Z
    auto currentElement_Z = (msg + ctr)->Z;
    outArray[ctr]["Z"] = factory.createScalar(currentElement_Z);
    // K
    auto currentElement_K = (msg + ctr)->K;
    outArray[ctr]["K"] = factory.createScalar(currentElement_K);
    // M
    auto currentElement_M = (msg + ctr)->M;
    outArray[ctr]["M"] = factory.createScalar(currentElement_M);
    // N
    auto currentElement_N = (msg + ctr)->N;
    outArray[ctr]["N"] = factory.createScalar(currentElement_N);
    // name
    auto currentElement_name = (msg + ctr)->name;
    outArray[ctr]["name"] = factory.createCharArray(currentElement_name);
    // srv_name
    auto currentElement_srv_name = (msg + ctr)->srv_name;
    outArray[ctr]["srv_name"] = factory.createCharArray(currentElement_srv_name);
    // used_tau
    auto currentElement_used_tau = (msg + ctr)->used_tau;
    outArray[ctr]["used_tau"] = factory.createArray<labust_msgs::srv::RegisterControllerV2::Request::_used_tau_type::const_iterator, int8_t>({currentElement_used_tau.size(), 1}, currentElement_used_tau.begin(), currentElement_used_tau.end());
    // used_nu
    auto currentElement_used_nu = (msg + ctr)->used_nu;
    outArray[ctr]["used_nu"] = factory.createArray<labust_msgs::srv::RegisterControllerV2::Request::_used_nu_type::const_iterator, int8_t>({currentElement_used_nu.size(), 1}, currentElement_used_nu.begin(), currentElement_used_nu.end());
    }
    return std::move(outArray);
  }
class LABUST_MSGS_EXPORT ros2_labust_msgs_msg_RegisterControllerV2Response_common : public MATLABROS2MsgInterface<labust_msgs::srv::RegisterControllerV2::Response> {
  public:
    virtual ~ros2_labust_msgs_msg_RegisterControllerV2Response_common(){}
    virtual void copy_from_struct(labust_msgs::srv::RegisterControllerV2::Response* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    virtual MDArray_T get_arr(MDFactory_T& factory, const labust_msgs::srv::RegisterControllerV2::Response* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_labust_msgs_msg_RegisterControllerV2Response_common::copy_from_struct(labust_msgs::srv::RegisterControllerV2::Response* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_labust_msgs_msg_RegisterControllerV2Response_common::get_arr(MDFactory_T& factory, const labust_msgs::srv::RegisterControllerV2::Response* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("labust_msgs/RegisterControllerV2Response");
    }
    return std::move(outArray);
  } 
class LABUST_MSGS_EXPORT ros2_labust_msgs_RegisterControllerV2_service : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_labust_msgs_RegisterControllerV2_service(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
    virtual std::shared_ptr<MATLABSvcServerInterface> generateSvcServerInterface();
    virtual std::shared_ptr<MATLABSvcClientInterface> generateSvcClientInterface();
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_labust_msgs_RegisterControllerV2_service::generatePublisherInterface(ElementType type){
    if(type == eRequest){
        return std::make_shared<ROS2PublisherImpl<labust_msgs::srv::RegisterControllerV2::Request,ros2_labust_msgs_msg_RegisterControllerV2Request_common>>();
    }else if(type == eResponse){
        return std::make_shared<ROS2PublisherImpl<labust_msgs::srv::RegisterControllerV2::Response,ros2_labust_msgs_msg_RegisterControllerV2Response_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
  std::shared_ptr<MATLABSubscriberInterface> 
          ros2_labust_msgs_RegisterControllerV2_service::generateSubscriberInterface(ElementType type){
    if(type == eRequest){
        return std::make_shared<ROS2SubscriberImpl<labust_msgs::srv::RegisterControllerV2::Request,ros2_labust_msgs_msg_RegisterControllerV2Request_common>>();
    }else if(type == eResponse){
        return std::make_shared<ROS2SubscriberImpl<labust_msgs::srv::RegisterControllerV2::Response,ros2_labust_msgs_msg_RegisterControllerV2Response_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
  std::shared_ptr<void> ros2_labust_msgs_RegisterControllerV2_service::generateCppMessage(ElementType type, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    if(type == eRequest){
        auto msg = std::make_shared<labust_msgs::srv::RegisterControllerV2::Request>();
        ros2_labust_msgs_msg_RegisterControllerV2Request_common commonObj;
        commonObj.mCommonObjMap = commonObjMap;
        commonObj.copy_from_struct(msg.get(), arr[0], loader);
        return msg;
    }else if(type == eResponse){
        auto msg = std::make_shared<labust_msgs::srv::RegisterControllerV2::Response>();
        ros2_labust_msgs_msg_RegisterControllerV2Response_common commonObj;
        commonObj.mCommonObjMap = commonObjMap;
        commonObj.copy_from_struct(msg.get(), arr[0], loader);
        return msg;
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
  std::shared_ptr<MATLABSvcServerInterface> 
          ros2_labust_msgs_RegisterControllerV2_service::generateSvcServerInterface(){
    return std::make_shared<ROS2SvcServerImpl<labust_msgs::srv::RegisterControllerV2,labust_msgs::srv::RegisterControllerV2::Request,labust_msgs::srv::RegisterControllerV2::Response,ros2_labust_msgs_msg_RegisterControllerV2Request_common,ros2_labust_msgs_msg_RegisterControllerV2Response_common>>();
  }
  std::shared_ptr<MATLABSvcClientInterface> 
          ros2_labust_msgs_RegisterControllerV2_service::generateSvcClientInterface(){
    return std::make_shared<ROS2SvcClientImpl<labust_msgs::srv::RegisterControllerV2,labust_msgs::srv::RegisterControllerV2::Request,labust_msgs::srv::RegisterControllerV2::Response,ros2_labust_msgs_msg_RegisterControllerV2Request_common,ros2_labust_msgs_msg_RegisterControllerV2Response_common,rclcpp::Client<labust_msgs::srv::RegisterControllerV2>::SharedFuture>>();
  }
  matlab::data::StructArray ros2_labust_msgs_RegisterControllerV2_service::generateMLMessage(ElementType type, 
                                                    void*  msgPtr ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    if(type == eRequest){
	    ros2_labust_msgs_msg_RegisterControllerV2Request_common commonObj;	
        commonObj.mCommonObjMap = commonObjMap;
	    MDFactory_T factory;
	    return commonObj.get_arr(factory, (labust_msgs::srv::RegisterControllerV2::Request*)msgPtr, loader);
    }else if(type == eResponse){
        ros2_labust_msgs_msg_RegisterControllerV2Response_common commonObj;	
        commonObj.mCommonObjMap = commonObjMap;	
	    MDFactory_T factory;
	    return commonObj.get_arr(factory, (labust_msgs::srv::RegisterControllerV2::Response*)msgPtr, loader);
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_msg_RegisterControllerV2Request_common, MATLABROS2MsgInterface<labust_msgs::srv::RegisterControllerV2::Request>)
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_msg_RegisterControllerV2Response_common, MATLABROS2MsgInterface<labust_msgs::srv::RegisterControllerV2::Response>)
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_RegisterControllerV2_service, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
