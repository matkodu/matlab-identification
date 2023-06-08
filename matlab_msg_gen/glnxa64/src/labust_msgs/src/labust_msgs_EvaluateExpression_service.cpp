// Copyright 2021-2022 The MathWorks, Inc.
// Common copy functions for labust_msgs/EvaluateExpressionRequest
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
#include "labust_msgs/srv/evaluate_expression.hpp"
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
class LABUST_MSGS_EXPORT ros2_labust_msgs_msg_EvaluateExpressionRequest_common : public MATLABROS2MsgInterface<labust_msgs::srv::EvaluateExpression::Request> {
  public:
    virtual ~ros2_labust_msgs_msg_EvaluateExpressionRequest_common(){}
    virtual void copy_from_struct(labust_msgs::srv::EvaluateExpression::Request* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    virtual MDArray_T get_arr(MDFactory_T& factory, const labust_msgs::srv::EvaluateExpression::Request* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_labust_msgs_msg_EvaluateExpressionRequest_common::copy_from_struct(labust_msgs::srv::EvaluateExpression::Request* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //expression
        const matlab::data::CharArray expression_arr = arr["expression"];
        msg->expression = expression_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'expression' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'expression' is wrong type; expected a string.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_labust_msgs_msg_EvaluateExpressionRequest_common::get_arr(MDFactory_T& factory, const labust_msgs::srv::EvaluateExpression::Request* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","expression"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("labust_msgs/EvaluateExpressionRequest");
    // expression
    auto currentElement_expression = (msg + ctr)->expression;
    outArray[ctr]["expression"] = factory.createCharArray(currentElement_expression);
    }
    return std::move(outArray);
  }
class LABUST_MSGS_EXPORT ros2_labust_msgs_msg_EvaluateExpressionResponse_common : public MATLABROS2MsgInterface<labust_msgs::srv::EvaluateExpression::Response> {
  public:
    virtual ~ros2_labust_msgs_msg_EvaluateExpressionResponse_common(){}
    virtual void copy_from_struct(labust_msgs::srv::EvaluateExpression::Response* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    virtual MDArray_T get_arr(MDFactory_T& factory, const labust_msgs::srv::EvaluateExpression::Response* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_labust_msgs_msg_EvaluateExpressionResponse_common::copy_from_struct(labust_msgs::srv::EvaluateExpression::Response* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //result
        const matlab::data::TypedArray<double> result_arr = arr["result"];
        msg->result = result_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'result' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'result' is wrong type; expected a double.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_labust_msgs_msg_EvaluateExpressionResponse_common::get_arr(MDFactory_T& factory, const labust_msgs::srv::EvaluateExpression::Response* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","result"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("labust_msgs/EvaluateExpressionResponse");
    // result
    auto currentElement_result = (msg + ctr)->result;
    outArray[ctr]["result"] = factory.createScalar(currentElement_result);
    }
    return std::move(outArray);
  } 
class LABUST_MSGS_EXPORT ros2_labust_msgs_EvaluateExpression_service : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_labust_msgs_EvaluateExpression_service(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
    virtual std::shared_ptr<MATLABSvcServerInterface> generateSvcServerInterface();
    virtual std::shared_ptr<MATLABSvcClientInterface> generateSvcClientInterface();
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_labust_msgs_EvaluateExpression_service::generatePublisherInterface(ElementType type){
    if(type == eRequest){
        return std::make_shared<ROS2PublisherImpl<labust_msgs::srv::EvaluateExpression::Request,ros2_labust_msgs_msg_EvaluateExpressionRequest_common>>();
    }else if(type == eResponse){
        return std::make_shared<ROS2PublisherImpl<labust_msgs::srv::EvaluateExpression::Response,ros2_labust_msgs_msg_EvaluateExpressionResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
  std::shared_ptr<MATLABSubscriberInterface> 
          ros2_labust_msgs_EvaluateExpression_service::generateSubscriberInterface(ElementType type){
    if(type == eRequest){
        return std::make_shared<ROS2SubscriberImpl<labust_msgs::srv::EvaluateExpression::Request,ros2_labust_msgs_msg_EvaluateExpressionRequest_common>>();
    }else if(type == eResponse){
        return std::make_shared<ROS2SubscriberImpl<labust_msgs::srv::EvaluateExpression::Response,ros2_labust_msgs_msg_EvaluateExpressionResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
  std::shared_ptr<void> ros2_labust_msgs_EvaluateExpression_service::generateCppMessage(ElementType type, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    if(type == eRequest){
        auto msg = std::make_shared<labust_msgs::srv::EvaluateExpression::Request>();
        ros2_labust_msgs_msg_EvaluateExpressionRequest_common commonObj;
        commonObj.mCommonObjMap = commonObjMap;
        commonObj.copy_from_struct(msg.get(), arr[0], loader);
        return msg;
    }else if(type == eResponse){
        auto msg = std::make_shared<labust_msgs::srv::EvaluateExpression::Response>();
        ros2_labust_msgs_msg_EvaluateExpressionResponse_common commonObj;
        commonObj.mCommonObjMap = commonObjMap;
        commonObj.copy_from_struct(msg.get(), arr[0], loader);
        return msg;
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
  std::shared_ptr<MATLABSvcServerInterface> 
          ros2_labust_msgs_EvaluateExpression_service::generateSvcServerInterface(){
    return std::make_shared<ROS2SvcServerImpl<labust_msgs::srv::EvaluateExpression,labust_msgs::srv::EvaluateExpression::Request,labust_msgs::srv::EvaluateExpression::Response,ros2_labust_msgs_msg_EvaluateExpressionRequest_common,ros2_labust_msgs_msg_EvaluateExpressionResponse_common>>();
  }
  std::shared_ptr<MATLABSvcClientInterface> 
          ros2_labust_msgs_EvaluateExpression_service::generateSvcClientInterface(){
    return std::make_shared<ROS2SvcClientImpl<labust_msgs::srv::EvaluateExpression,labust_msgs::srv::EvaluateExpression::Request,labust_msgs::srv::EvaluateExpression::Response,ros2_labust_msgs_msg_EvaluateExpressionRequest_common,ros2_labust_msgs_msg_EvaluateExpressionResponse_common,rclcpp::Client<labust_msgs::srv::EvaluateExpression>::SharedFuture>>();
  }
  matlab::data::StructArray ros2_labust_msgs_EvaluateExpression_service::generateMLMessage(ElementType type, 
                                                    void*  msgPtr ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    if(type == eRequest){
	    ros2_labust_msgs_msg_EvaluateExpressionRequest_common commonObj;	
        commonObj.mCommonObjMap = commonObjMap;
	    MDFactory_T factory;
	    return commonObj.get_arr(factory, (labust_msgs::srv::EvaluateExpression::Request*)msgPtr, loader);
    }else if(type == eResponse){
        ros2_labust_msgs_msg_EvaluateExpressionResponse_common commonObj;	
        commonObj.mCommonObjMap = commonObjMap;	
	    MDFactory_T factory;
	    return commonObj.get_arr(factory, (labust_msgs::srv::EvaluateExpression::Response*)msgPtr, loader);
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_msg_EvaluateExpressionRequest_common, MATLABROS2MsgInterface<labust_msgs::srv::EvaluateExpression::Request>)
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_msg_EvaluateExpressionResponse_common, MATLABROS2MsgInterface<labust_msgs::srv::EvaluateExpression::Response>)
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_EvaluateExpression_service, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
