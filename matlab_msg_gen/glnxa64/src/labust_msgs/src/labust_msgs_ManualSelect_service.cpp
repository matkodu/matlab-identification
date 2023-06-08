// Copyright 2021-2022 The MathWorks, Inc.
// Common copy functions for labust_msgs/ManualSelectRequest
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
#include "labust_msgs/srv/manual_select.hpp"
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
class LABUST_MSGS_EXPORT ros2_labust_msgs_msg_ManualSelectRequest_common : public MATLABROS2MsgInterface<labust_msgs::srv::ManualSelect::Request> {
  public:
    virtual ~ros2_labust_msgs_msg_ManualSelectRequest_common(){}
    virtual void copy_from_struct(labust_msgs::srv::ManualSelect::Request* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    virtual MDArray_T get_arr(MDFactory_T& factory, const labust_msgs::srv::ManualSelect::Request* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_labust_msgs_msg_ManualSelectRequest_common::copy_from_struct(labust_msgs::srv::ManualSelect::Request* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //use_generator
        const matlab::data::TypedArray<int32_t> use_generator_arr = arr["use_generator"];
        size_t nelem = 6;
        	std::copy(use_generator_arr.begin(), use_generator_arr.begin()+nelem, msg->use_generator.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'use_generator' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'use_generator' is wrong type; expected a int32.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_labust_msgs_msg_ManualSelectRequest_common::get_arr(MDFactory_T& factory, const labust_msgs::srv::ManualSelect::Request* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","X","Y","Z","K","M","N","DISABLED","EFFORT","SPEED","POSITION","use_generator"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("labust_msgs/ManualSelectRequest");
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
    // DISABLED
    auto currentElement_DISABLED = (msg + ctr)->DISABLED;
    outArray[ctr]["DISABLED"] = factory.createScalar(currentElement_DISABLED);
    // EFFORT
    auto currentElement_EFFORT = (msg + ctr)->EFFORT;
    outArray[ctr]["EFFORT"] = factory.createScalar(currentElement_EFFORT);
    // SPEED
    auto currentElement_SPEED = (msg + ctr)->SPEED;
    outArray[ctr]["SPEED"] = factory.createScalar(currentElement_SPEED);
    // POSITION
    auto currentElement_POSITION = (msg + ctr)->POSITION;
    outArray[ctr]["POSITION"] = factory.createScalar(currentElement_POSITION);
    // use_generator
    auto currentElement_use_generator = (msg + ctr)->use_generator;
    outArray[ctr]["use_generator"] = factory.createArray<labust_msgs::srv::ManualSelect::Request::_use_generator_type::const_iterator, int32_t>({currentElement_use_generator.size(), 1}, currentElement_use_generator.begin(), currentElement_use_generator.end());
    }
    return std::move(outArray);
  }
class LABUST_MSGS_EXPORT ros2_labust_msgs_msg_ManualSelectResponse_common : public MATLABROS2MsgInterface<labust_msgs::srv::ManualSelect::Response> {
  public:
    virtual ~ros2_labust_msgs_msg_ManualSelectResponse_common(){}
    virtual void copy_from_struct(labust_msgs::srv::ManualSelect::Response* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    virtual MDArray_T get_arr(MDFactory_T& factory, const labust_msgs::srv::ManualSelect::Response* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_labust_msgs_msg_ManualSelectResponse_common::copy_from_struct(labust_msgs::srv::ManualSelect::Response* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_labust_msgs_msg_ManualSelectResponse_common::get_arr(MDFactory_T& factory, const labust_msgs::srv::ManualSelect::Response* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("labust_msgs/ManualSelectResponse");
    }
    return std::move(outArray);
  } 
class LABUST_MSGS_EXPORT ros2_labust_msgs_ManualSelect_service : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_labust_msgs_ManualSelect_service(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
    virtual std::shared_ptr<MATLABSvcServerInterface> generateSvcServerInterface();
    virtual std::shared_ptr<MATLABSvcClientInterface> generateSvcClientInterface();
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_labust_msgs_ManualSelect_service::generatePublisherInterface(ElementType type){
    if(type == eRequest){
        return std::make_shared<ROS2PublisherImpl<labust_msgs::srv::ManualSelect::Request,ros2_labust_msgs_msg_ManualSelectRequest_common>>();
    }else if(type == eResponse){
        return std::make_shared<ROS2PublisherImpl<labust_msgs::srv::ManualSelect::Response,ros2_labust_msgs_msg_ManualSelectResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
  std::shared_ptr<MATLABSubscriberInterface> 
          ros2_labust_msgs_ManualSelect_service::generateSubscriberInterface(ElementType type){
    if(type == eRequest){
        return std::make_shared<ROS2SubscriberImpl<labust_msgs::srv::ManualSelect::Request,ros2_labust_msgs_msg_ManualSelectRequest_common>>();
    }else if(type == eResponse){
        return std::make_shared<ROS2SubscriberImpl<labust_msgs::srv::ManualSelect::Response,ros2_labust_msgs_msg_ManualSelectResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
  std::shared_ptr<void> ros2_labust_msgs_ManualSelect_service::generateCppMessage(ElementType type, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    if(type == eRequest){
        auto msg = std::make_shared<labust_msgs::srv::ManualSelect::Request>();
        ros2_labust_msgs_msg_ManualSelectRequest_common commonObj;
        commonObj.mCommonObjMap = commonObjMap;
        commonObj.copy_from_struct(msg.get(), arr[0], loader);
        return msg;
    }else if(type == eResponse){
        auto msg = std::make_shared<labust_msgs::srv::ManualSelect::Response>();
        ros2_labust_msgs_msg_ManualSelectResponse_common commonObj;
        commonObj.mCommonObjMap = commonObjMap;
        commonObj.copy_from_struct(msg.get(), arr[0], loader);
        return msg;
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
  std::shared_ptr<MATLABSvcServerInterface> 
          ros2_labust_msgs_ManualSelect_service::generateSvcServerInterface(){
    return std::make_shared<ROS2SvcServerImpl<labust_msgs::srv::ManualSelect,labust_msgs::srv::ManualSelect::Request,labust_msgs::srv::ManualSelect::Response,ros2_labust_msgs_msg_ManualSelectRequest_common,ros2_labust_msgs_msg_ManualSelectResponse_common>>();
  }
  std::shared_ptr<MATLABSvcClientInterface> 
          ros2_labust_msgs_ManualSelect_service::generateSvcClientInterface(){
    return std::make_shared<ROS2SvcClientImpl<labust_msgs::srv::ManualSelect,labust_msgs::srv::ManualSelect::Request,labust_msgs::srv::ManualSelect::Response,ros2_labust_msgs_msg_ManualSelectRequest_common,ros2_labust_msgs_msg_ManualSelectResponse_common,rclcpp::Client<labust_msgs::srv::ManualSelect>::SharedFuture>>();
  }
  matlab::data::StructArray ros2_labust_msgs_ManualSelect_service::generateMLMessage(ElementType type, 
                                                    void*  msgPtr ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    if(type == eRequest){
	    ros2_labust_msgs_msg_ManualSelectRequest_common commonObj;	
        commonObj.mCommonObjMap = commonObjMap;
	    MDFactory_T factory;
	    return commonObj.get_arr(factory, (labust_msgs::srv::ManualSelect::Request*)msgPtr, loader);
    }else if(type == eResponse){
        ros2_labust_msgs_msg_ManualSelectResponse_common commonObj;	
        commonObj.mCommonObjMap = commonObjMap;	
	    MDFactory_T factory;
	    return commonObj.get_arr(factory, (labust_msgs::srv::ManualSelect::Response*)msgPtr, loader);
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_msg_ManualSelectRequest_common, MATLABROS2MsgInterface<labust_msgs::srv::ManualSelect::Request>)
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_msg_ManualSelectResponse_common, MATLABROS2MsgInterface<labust_msgs::srv::ManualSelect::Response>)
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_ManualSelect_service, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
