// Copyright 2021-2022 The MathWorks, Inc.
// Common copy functions for labust_msgs/ConfigureAxesRequest
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
#include "labust_msgs/srv/configure_axes.hpp"
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
class LABUST_MSGS_EXPORT ros2_labust_msgs_msg_ConfigureAxesRequest_common : public MATLABROS2MsgInterface<labust_msgs::srv::ConfigureAxes::Request> {
  public:
    virtual ~ros2_labust_msgs_msg_ConfigureAxesRequest_common(){}
    virtual void copy_from_struct(labust_msgs::srv::ConfigureAxes::Request* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    virtual MDArray_T get_arr(MDFactory_T& factory, const labust_msgs::srv::ConfigureAxes::Request* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_labust_msgs_msg_ConfigureAxesRequest_common::copy_from_struct(labust_msgs::srv::ConfigureAxes::Request* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //disable_axis
        const matlab::data::StructArray disable_axis_arr = arr["disable_axis"];
        auto msgClassPtr_disable_axis = getCommonObject<labust_msgs::msg::Bool6Axis>("ros2_labust_msgs_msg_Bool6Axis_common",loader);
        msgClassPtr_disable_axis->copy_from_struct(&msg->disable_axis,disable_axis_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'disable_axis' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'disable_axis' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_labust_msgs_msg_ConfigureAxesRequest_common::get_arr(MDFactory_T& factory, const labust_msgs::srv::ConfigureAxes::Request* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","U","V","W","P","Q","R","X","Y","Z","K","M","N","disable_axis"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("labust_msgs/ConfigureAxesRequest");
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
    // disable_axis
    auto currentElement_disable_axis = (msg + ctr)->disable_axis;
    auto msgClassPtr_disable_axis = getCommonObject<labust_msgs::msg::Bool6Axis>("ros2_labust_msgs_msg_Bool6Axis_common",loader);
    outArray[ctr]["disable_axis"] = msgClassPtr_disable_axis->get_arr(factory, &currentElement_disable_axis, loader);
    }
    return std::move(outArray);
  }
class LABUST_MSGS_EXPORT ros2_labust_msgs_msg_ConfigureAxesResponse_common : public MATLABROS2MsgInterface<labust_msgs::srv::ConfigureAxes::Response> {
  public:
    virtual ~ros2_labust_msgs_msg_ConfigureAxesResponse_common(){}
    virtual void copy_from_struct(labust_msgs::srv::ConfigureAxes::Response* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    virtual MDArray_T get_arr(MDFactory_T& factory, const labust_msgs::srv::ConfigureAxes::Response* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_labust_msgs_msg_ConfigureAxesResponse_common::copy_from_struct(labust_msgs::srv::ConfigureAxes::Response* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_labust_msgs_msg_ConfigureAxesResponse_common::get_arr(MDFactory_T& factory, const labust_msgs::srv::ConfigureAxes::Response* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("labust_msgs/ConfigureAxesResponse");
    }
    return std::move(outArray);
  } 
class LABUST_MSGS_EXPORT ros2_labust_msgs_ConfigureAxes_service : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_labust_msgs_ConfigureAxes_service(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
    virtual std::shared_ptr<MATLABSvcServerInterface> generateSvcServerInterface();
    virtual std::shared_ptr<MATLABSvcClientInterface> generateSvcClientInterface();
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_labust_msgs_ConfigureAxes_service::generatePublisherInterface(ElementType type){
    if(type == eRequest){
        return std::make_shared<ROS2PublisherImpl<labust_msgs::srv::ConfigureAxes::Request,ros2_labust_msgs_msg_ConfigureAxesRequest_common>>();
    }else if(type == eResponse){
        return std::make_shared<ROS2PublisherImpl<labust_msgs::srv::ConfigureAxes::Response,ros2_labust_msgs_msg_ConfigureAxesResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
  std::shared_ptr<MATLABSubscriberInterface> 
          ros2_labust_msgs_ConfigureAxes_service::generateSubscriberInterface(ElementType type){
    if(type == eRequest){
        return std::make_shared<ROS2SubscriberImpl<labust_msgs::srv::ConfigureAxes::Request,ros2_labust_msgs_msg_ConfigureAxesRequest_common>>();
    }else if(type == eResponse){
        return std::make_shared<ROS2SubscriberImpl<labust_msgs::srv::ConfigureAxes::Response,ros2_labust_msgs_msg_ConfigureAxesResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
  std::shared_ptr<void> ros2_labust_msgs_ConfigureAxes_service::generateCppMessage(ElementType type, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    if(type == eRequest){
        auto msg = std::make_shared<labust_msgs::srv::ConfigureAxes::Request>();
        ros2_labust_msgs_msg_ConfigureAxesRequest_common commonObj;
        commonObj.mCommonObjMap = commonObjMap;
        commonObj.copy_from_struct(msg.get(), arr[0], loader);
        return msg;
    }else if(type == eResponse){
        auto msg = std::make_shared<labust_msgs::srv::ConfigureAxes::Response>();
        ros2_labust_msgs_msg_ConfigureAxesResponse_common commonObj;
        commonObj.mCommonObjMap = commonObjMap;
        commonObj.copy_from_struct(msg.get(), arr[0], loader);
        return msg;
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
  std::shared_ptr<MATLABSvcServerInterface> 
          ros2_labust_msgs_ConfigureAxes_service::generateSvcServerInterface(){
    return std::make_shared<ROS2SvcServerImpl<labust_msgs::srv::ConfigureAxes,labust_msgs::srv::ConfigureAxes::Request,labust_msgs::srv::ConfigureAxes::Response,ros2_labust_msgs_msg_ConfigureAxesRequest_common,ros2_labust_msgs_msg_ConfigureAxesResponse_common>>();
  }
  std::shared_ptr<MATLABSvcClientInterface> 
          ros2_labust_msgs_ConfigureAxes_service::generateSvcClientInterface(){
    return std::make_shared<ROS2SvcClientImpl<labust_msgs::srv::ConfigureAxes,labust_msgs::srv::ConfigureAxes::Request,labust_msgs::srv::ConfigureAxes::Response,ros2_labust_msgs_msg_ConfigureAxesRequest_common,ros2_labust_msgs_msg_ConfigureAxesResponse_common,rclcpp::Client<labust_msgs::srv::ConfigureAxes>::SharedFuture>>();
  }
  matlab::data::StructArray ros2_labust_msgs_ConfigureAxes_service::generateMLMessage(ElementType type, 
                                                    void*  msgPtr ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    if(type == eRequest){
	    ros2_labust_msgs_msg_ConfigureAxesRequest_common commonObj;	
        commonObj.mCommonObjMap = commonObjMap;
	    MDFactory_T factory;
	    return commonObj.get_arr(factory, (labust_msgs::srv::ConfigureAxes::Request*)msgPtr, loader);
    }else if(type == eResponse){
        ros2_labust_msgs_msg_ConfigureAxesResponse_common commonObj;	
        commonObj.mCommonObjMap = commonObjMap;	
	    MDFactory_T factory;
	    return commonObj.get_arr(factory, (labust_msgs::srv::ConfigureAxes::Response*)msgPtr, loader);
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_msg_ConfigureAxesRequest_common, MATLABROS2MsgInterface<labust_msgs::srv::ConfigureAxes::Request>)
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_msg_ConfigureAxesResponse_common, MATLABROS2MsgInterface<labust_msgs::srv::ConfigureAxes::Response>)
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_ConfigureAxes_service, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
