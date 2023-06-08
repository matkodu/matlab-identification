// Copyright 2021-2022 The MathWorks, Inc.
// Common copy functions for labust_msgs/ManualConfigureRequest
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
#include "labust_msgs/srv/manual_configure.hpp"
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
class LABUST_MSGS_EXPORT ros2_labust_msgs_msg_ManualConfigureRequest_common : public MATLABROS2MsgInterface<labust_msgs::srv::ManualConfigure::Request> {
  public:
    virtual ~ros2_labust_msgs_msg_ManualConfigureRequest_common(){}
    virtual void copy_from_struct(labust_msgs::srv::ManualConfigure::Request* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    virtual MDArray_T get_arr(MDFactory_T& factory, const labust_msgs::srv::ManualConfigure::Request* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_labust_msgs_msg_ManualConfigureRequest_common::copy_from_struct(labust_msgs::srv::ManualConfigure::Request* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //configuration
        const matlab::data::StructArray configuration_arr = arr["configuration"];
        auto msgClassPtr_configuration = getCommonObject<labust_msgs::msg::ManualConfiguration>("ros2_labust_msgs_msg_ManualConfiguration_common",loader);
        msgClassPtr_configuration->copy_from_struct(&msg->configuration,configuration_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'configuration' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'configuration' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_labust_msgs_msg_ManualConfigureRequest_common::get_arr(MDFactory_T& factory, const labust_msgs::srv::ManualConfigure::Request* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","DISABLED","X","Y","Z","K","M","N","configuration"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("labust_msgs/ManualConfigureRequest");
    // DISABLED
    auto currentElement_DISABLED = (msg + ctr)->DISABLED;
    outArray[ctr]["DISABLED"] = factory.createScalar(currentElement_DISABLED);
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
    // configuration
    auto currentElement_configuration = (msg + ctr)->configuration;
    auto msgClassPtr_configuration = getCommonObject<labust_msgs::msg::ManualConfiguration>("ros2_labust_msgs_msg_ManualConfiguration_common",loader);
    outArray[ctr]["configuration"] = msgClassPtr_configuration->get_arr(factory, &currentElement_configuration, loader);
    }
    return std::move(outArray);
  }
class LABUST_MSGS_EXPORT ros2_labust_msgs_msg_ManualConfigureResponse_common : public MATLABROS2MsgInterface<labust_msgs::srv::ManualConfigure::Response> {
  public:
    virtual ~ros2_labust_msgs_msg_ManualConfigureResponse_common(){}
    virtual void copy_from_struct(labust_msgs::srv::ManualConfigure::Response* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    virtual MDArray_T get_arr(MDFactory_T& factory, const labust_msgs::srv::ManualConfigure::Response* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_labust_msgs_msg_ManualConfigureResponse_common::copy_from_struct(labust_msgs::srv::ManualConfigure::Response* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //current_configuration
        const matlab::data::StructArray current_configuration_arr = arr["current_configuration"];
        auto msgClassPtr_current_configuration = getCommonObject<labust_msgs::msg::ManualConfiguration>("ros2_labust_msgs_msg_ManualConfiguration_common",loader);
        msgClassPtr_current_configuration->copy_from_struct(&msg->current_configuration,current_configuration_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'current_configuration' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'current_configuration' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_labust_msgs_msg_ManualConfigureResponse_common::get_arr(MDFactory_T& factory, const labust_msgs::srv::ManualConfigure::Response* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","current_configuration"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("labust_msgs/ManualConfigureResponse");
    // current_configuration
    auto currentElement_current_configuration = (msg + ctr)->current_configuration;
    auto msgClassPtr_current_configuration = getCommonObject<labust_msgs::msg::ManualConfiguration>("ros2_labust_msgs_msg_ManualConfiguration_common",loader);
    outArray[ctr]["current_configuration"] = msgClassPtr_current_configuration->get_arr(factory, &currentElement_current_configuration, loader);
    }
    return std::move(outArray);
  } 
class LABUST_MSGS_EXPORT ros2_labust_msgs_ManualConfigure_service : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_labust_msgs_ManualConfigure_service(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
    virtual std::shared_ptr<MATLABSvcServerInterface> generateSvcServerInterface();
    virtual std::shared_ptr<MATLABSvcClientInterface> generateSvcClientInterface();
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_labust_msgs_ManualConfigure_service::generatePublisherInterface(ElementType type){
    if(type == eRequest){
        return std::make_shared<ROS2PublisherImpl<labust_msgs::srv::ManualConfigure::Request,ros2_labust_msgs_msg_ManualConfigureRequest_common>>();
    }else if(type == eResponse){
        return std::make_shared<ROS2PublisherImpl<labust_msgs::srv::ManualConfigure::Response,ros2_labust_msgs_msg_ManualConfigureResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
  std::shared_ptr<MATLABSubscriberInterface> 
          ros2_labust_msgs_ManualConfigure_service::generateSubscriberInterface(ElementType type){
    if(type == eRequest){
        return std::make_shared<ROS2SubscriberImpl<labust_msgs::srv::ManualConfigure::Request,ros2_labust_msgs_msg_ManualConfigureRequest_common>>();
    }else if(type == eResponse){
        return std::make_shared<ROS2SubscriberImpl<labust_msgs::srv::ManualConfigure::Response,ros2_labust_msgs_msg_ManualConfigureResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
  std::shared_ptr<void> ros2_labust_msgs_ManualConfigure_service::generateCppMessage(ElementType type, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    if(type == eRequest){
        auto msg = std::make_shared<labust_msgs::srv::ManualConfigure::Request>();
        ros2_labust_msgs_msg_ManualConfigureRequest_common commonObj;
        commonObj.mCommonObjMap = commonObjMap;
        commonObj.copy_from_struct(msg.get(), arr[0], loader);
        return msg;
    }else if(type == eResponse){
        auto msg = std::make_shared<labust_msgs::srv::ManualConfigure::Response>();
        ros2_labust_msgs_msg_ManualConfigureResponse_common commonObj;
        commonObj.mCommonObjMap = commonObjMap;
        commonObj.copy_from_struct(msg.get(), arr[0], loader);
        return msg;
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
  std::shared_ptr<MATLABSvcServerInterface> 
          ros2_labust_msgs_ManualConfigure_service::generateSvcServerInterface(){
    return std::make_shared<ROS2SvcServerImpl<labust_msgs::srv::ManualConfigure,labust_msgs::srv::ManualConfigure::Request,labust_msgs::srv::ManualConfigure::Response,ros2_labust_msgs_msg_ManualConfigureRequest_common,ros2_labust_msgs_msg_ManualConfigureResponse_common>>();
  }
  std::shared_ptr<MATLABSvcClientInterface> 
          ros2_labust_msgs_ManualConfigure_service::generateSvcClientInterface(){
    return std::make_shared<ROS2SvcClientImpl<labust_msgs::srv::ManualConfigure,labust_msgs::srv::ManualConfigure::Request,labust_msgs::srv::ManualConfigure::Response,ros2_labust_msgs_msg_ManualConfigureRequest_common,ros2_labust_msgs_msg_ManualConfigureResponse_common,rclcpp::Client<labust_msgs::srv::ManualConfigure>::SharedFuture>>();
  }
  matlab::data::StructArray ros2_labust_msgs_ManualConfigure_service::generateMLMessage(ElementType type, 
                                                    void*  msgPtr ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    if(type == eRequest){
	    ros2_labust_msgs_msg_ManualConfigureRequest_common commonObj;	
        commonObj.mCommonObjMap = commonObjMap;
	    MDFactory_T factory;
	    return commonObj.get_arr(factory, (labust_msgs::srv::ManualConfigure::Request*)msgPtr, loader);
    }else if(type == eResponse){
        ros2_labust_msgs_msg_ManualConfigureResponse_common commonObj;	
        commonObj.mCommonObjMap = commonObjMap;	
	    MDFactory_T factory;
	    return commonObj.get_arr(factory, (labust_msgs::srv::ManualConfigure::Response*)msgPtr, loader);
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_msg_ManualConfigureRequest_common, MATLABROS2MsgInterface<labust_msgs::srv::ManualConfigure::Request>)
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_msg_ManualConfigureResponse_common, MATLABROS2MsgInterface<labust_msgs::srv::ManualConfigure::Response>)
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_ManualConfigure_service, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
