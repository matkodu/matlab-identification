// Copyright 2021-2022 The MathWorks, Inc.
// Common copy functions for labust_msgs/SelectNuSignalRequest
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
#include "labust_msgs/srv/select_nu_signal.hpp"
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
class LABUST_MSGS_EXPORT ros2_labust_msgs_msg_SelectNuSignalRequest_common : public MATLABROS2MsgInterface<labust_msgs::srv::SelectNuSignal::Request> {
  public:
    virtual ~ros2_labust_msgs_msg_SelectNuSignalRequest_common(){}
    virtual void copy_from_struct(labust_msgs::srv::SelectNuSignal::Request* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    virtual MDArray_T get_arr(MDFactory_T& factory, const labust_msgs::srv::SelectNuSignal::Request* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_labust_msgs_msg_SelectNuSignalRequest_common::copy_from_struct(labust_msgs::srv::SelectNuSignal::Request* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
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
        //desired_mode
        const matlab::data::TypedArray<int32_t> desired_mode_arr = arr["desired_mode"];
        size_t nelem = 6;
        	std::copy(desired_mode_arr.begin(), desired_mode_arr.begin()+nelem, msg->desired_mode.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'desired_mode' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'desired_mode' is wrong type; expected a int32.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_labust_msgs_msg_SelectNuSignalRequest_common::get_arr(MDFactory_T& factory, const labust_msgs::srv::SelectNuSignal::Request* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","DONTCARE","DISABLEAXIS","MANUALAXIS","CONTROLAXIS","IDENTAXIS","DIRECTAXIS","U","V","W","P","Q","R","identity_token","desired_mode"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("labust_msgs/SelectNuSignalRequest");
    // DONTCARE
    auto currentElement_DONTCARE = (msg + ctr)->DONTCARE;
    outArray[ctr]["DONTCARE"] = factory.createScalar(currentElement_DONTCARE);
    // DISABLEAXIS
    auto currentElement_DISABLEAXIS = (msg + ctr)->DISABLEAXIS;
    outArray[ctr]["DISABLEAXIS"] = factory.createScalar(currentElement_DISABLEAXIS);
    // MANUALAXIS
    auto currentElement_MANUALAXIS = (msg + ctr)->MANUALAXIS;
    outArray[ctr]["MANUALAXIS"] = factory.createScalar(currentElement_MANUALAXIS);
    // CONTROLAXIS
    auto currentElement_CONTROLAXIS = (msg + ctr)->CONTROLAXIS;
    outArray[ctr]["CONTROLAXIS"] = factory.createScalar(currentElement_CONTROLAXIS);
    // IDENTAXIS
    auto currentElement_IDENTAXIS = (msg + ctr)->IDENTAXIS;
    outArray[ctr]["IDENTAXIS"] = factory.createScalar(currentElement_IDENTAXIS);
    // DIRECTAXIS
    auto currentElement_DIRECTAXIS = (msg + ctr)->DIRECTAXIS;
    outArray[ctr]["DIRECTAXIS"] = factory.createScalar(currentElement_DIRECTAXIS);
    // U
    auto currentElement_U = (msg + ctr)->U;
    outArray[ctr]["U"] = factory.createScalar(currentElement_U);
    // V
    auto currentElement_V = (msg + ctr)->V;
    outArray[ctr]["V"] = factory.createScalar(currentElement_V);
    // W
    auto currentElement_W = (msg + ctr)->W;
    outArray[ctr]["W"] = factory.createScalar(currentElement_W);
    // P
    auto currentElement_P = (msg + ctr)->P;
    outArray[ctr]["P"] = factory.createScalar(currentElement_P);
    // Q
    auto currentElement_Q = (msg + ctr)->Q;
    outArray[ctr]["Q"] = factory.createScalar(currentElement_Q);
    // R
    auto currentElement_R = (msg + ctr)->R;
    outArray[ctr]["R"] = factory.createScalar(currentElement_R);
    // identity_token
    auto currentElement_identity_token = (msg + ctr)->identity_token;
    outArray[ctr]["identity_token"] = factory.createCharArray(currentElement_identity_token);
    // desired_mode
    auto currentElement_desired_mode = (msg + ctr)->desired_mode;
    outArray[ctr]["desired_mode"] = factory.createArray<labust_msgs::srv::SelectNuSignal::Request::_desired_mode_type::const_iterator, int32_t>({currentElement_desired_mode.size(), 1}, currentElement_desired_mode.begin(), currentElement_desired_mode.end());
    }
    return std::move(outArray);
  }
class LABUST_MSGS_EXPORT ros2_labust_msgs_msg_SelectNuSignalResponse_common : public MATLABROS2MsgInterface<labust_msgs::srv::SelectNuSignal::Response> {
  public:
    virtual ~ros2_labust_msgs_msg_SelectNuSignalResponse_common(){}
    virtual void copy_from_struct(labust_msgs::srv::SelectNuSignal::Response* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    virtual MDArray_T get_arr(MDFactory_T& factory, const labust_msgs::srv::SelectNuSignal::Response* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_labust_msgs_msg_SelectNuSignalResponse_common::copy_from_struct(labust_msgs::srv::SelectNuSignal::Response* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_labust_msgs_msg_SelectNuSignalResponse_common::get_arr(MDFactory_T& factory, const labust_msgs::srv::SelectNuSignal::Response* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("labust_msgs/SelectNuSignalResponse");
    }
    return std::move(outArray);
  } 
class LABUST_MSGS_EXPORT ros2_labust_msgs_SelectNuSignal_service : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_labust_msgs_SelectNuSignal_service(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
    virtual std::shared_ptr<MATLABSvcServerInterface> generateSvcServerInterface();
    virtual std::shared_ptr<MATLABSvcClientInterface> generateSvcClientInterface();
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_labust_msgs_SelectNuSignal_service::generatePublisherInterface(ElementType type){
    if(type == eRequest){
        return std::make_shared<ROS2PublisherImpl<labust_msgs::srv::SelectNuSignal::Request,ros2_labust_msgs_msg_SelectNuSignalRequest_common>>();
    }else if(type == eResponse){
        return std::make_shared<ROS2PublisherImpl<labust_msgs::srv::SelectNuSignal::Response,ros2_labust_msgs_msg_SelectNuSignalResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
  std::shared_ptr<MATLABSubscriberInterface> 
          ros2_labust_msgs_SelectNuSignal_service::generateSubscriberInterface(ElementType type){
    if(type == eRequest){
        return std::make_shared<ROS2SubscriberImpl<labust_msgs::srv::SelectNuSignal::Request,ros2_labust_msgs_msg_SelectNuSignalRequest_common>>();
    }else if(type == eResponse){
        return std::make_shared<ROS2SubscriberImpl<labust_msgs::srv::SelectNuSignal::Response,ros2_labust_msgs_msg_SelectNuSignalResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
  std::shared_ptr<void> ros2_labust_msgs_SelectNuSignal_service::generateCppMessage(ElementType type, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    if(type == eRequest){
        auto msg = std::make_shared<labust_msgs::srv::SelectNuSignal::Request>();
        ros2_labust_msgs_msg_SelectNuSignalRequest_common commonObj;
        commonObj.mCommonObjMap = commonObjMap;
        commonObj.copy_from_struct(msg.get(), arr[0], loader);
        return msg;
    }else if(type == eResponse){
        auto msg = std::make_shared<labust_msgs::srv::SelectNuSignal::Response>();
        ros2_labust_msgs_msg_SelectNuSignalResponse_common commonObj;
        commonObj.mCommonObjMap = commonObjMap;
        commonObj.copy_from_struct(msg.get(), arr[0], loader);
        return msg;
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
  std::shared_ptr<MATLABSvcServerInterface> 
          ros2_labust_msgs_SelectNuSignal_service::generateSvcServerInterface(){
    return std::make_shared<ROS2SvcServerImpl<labust_msgs::srv::SelectNuSignal,labust_msgs::srv::SelectNuSignal::Request,labust_msgs::srv::SelectNuSignal::Response,ros2_labust_msgs_msg_SelectNuSignalRequest_common,ros2_labust_msgs_msg_SelectNuSignalResponse_common>>();
  }
  std::shared_ptr<MATLABSvcClientInterface> 
          ros2_labust_msgs_SelectNuSignal_service::generateSvcClientInterface(){
    return std::make_shared<ROS2SvcClientImpl<labust_msgs::srv::SelectNuSignal,labust_msgs::srv::SelectNuSignal::Request,labust_msgs::srv::SelectNuSignal::Response,ros2_labust_msgs_msg_SelectNuSignalRequest_common,ros2_labust_msgs_msg_SelectNuSignalResponse_common,rclcpp::Client<labust_msgs::srv::SelectNuSignal>::SharedFuture>>();
  }
  matlab::data::StructArray ros2_labust_msgs_SelectNuSignal_service::generateMLMessage(ElementType type, 
                                                    void*  msgPtr ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    if(type == eRequest){
	    ros2_labust_msgs_msg_SelectNuSignalRequest_common commonObj;	
        commonObj.mCommonObjMap = commonObjMap;
	    MDFactory_T factory;
	    return commonObj.get_arr(factory, (labust_msgs::srv::SelectNuSignal::Request*)msgPtr, loader);
    }else if(type == eResponse){
        ros2_labust_msgs_msg_SelectNuSignalResponse_common commonObj;	
        commonObj.mCommonObjMap = commonObjMap;	
	    MDFactory_T factory;
	    return commonObj.get_arr(factory, (labust_msgs::srv::SelectNuSignal::Response*)msgPtr, loader);
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_msg_SelectNuSignalRequest_common, MATLABROS2MsgInterface<labust_msgs::srv::SelectNuSignal::Request>)
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_msg_SelectNuSignalResponse_common, MATLABROS2MsgInterface<labust_msgs::srv::SelectNuSignal::Response>)
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_SelectNuSignal_service, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
