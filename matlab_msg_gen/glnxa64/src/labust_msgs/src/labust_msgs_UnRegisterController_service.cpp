// Copyright 2021-2022 The MathWorks, Inc.
// Common copy functions for labust_msgs/UnRegisterControllerRequest
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
#include "labust_msgs/srv/un_register_controller.hpp"
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
class LABUST_MSGS_EXPORT ros2_labust_msgs_msg_UnRegisterControllerRequest_common : public MATLABROS2MsgInterface<labust_msgs::srv::UnRegisterController::Request> {
  public:
    virtual ~ros2_labust_msgs_msg_UnRegisterControllerRequest_common(){}
    virtual void copy_from_struct(labust_msgs::srv::UnRegisterController::Request* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    virtual MDArray_T get_arr(MDFactory_T& factory, const labust_msgs::srv::UnRegisterController::Request* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_labust_msgs_msg_UnRegisterControllerRequest_common::copy_from_struct(labust_msgs::srv::UnRegisterController::Request* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //type
        const matlab::data::TypedArray<uint8_t> type_arr = arr["type"];
        msg->type = type_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'type' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'type' is wrong type; expected a uint8.");
    }
    try {
        //parent
        const matlab::data::CharArray parent_arr = arr["parent"];
        msg->parent = parent_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'parent' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'parent' is wrong type; expected a string.");
    }
    try {
        //name
        const matlab::data::CharArray name_arr = arr["name"];
        msg->name = name_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'name' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'name' is wrong type; expected a string.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_labust_msgs_msg_UnRegisterControllerRequest_common::get_arr(MDFactory_T& factory, const labust_msgs::srv::UnRegisterController::Request* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","SINGLE","SAME_PARENT","ALL","type","parent","name"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("labust_msgs/UnRegisterControllerRequest");
    // SINGLE
    auto currentElement_SINGLE = (msg + ctr)->SINGLE;
    outArray[ctr]["SINGLE"] = factory.createScalar(currentElement_SINGLE);
    // SAME_PARENT
    auto currentElement_SAME_PARENT = (msg + ctr)->SAME_PARENT;
    outArray[ctr]["SAME_PARENT"] = factory.createScalar(currentElement_SAME_PARENT);
    // ALL
    auto currentElement_ALL = (msg + ctr)->ALL;
    outArray[ctr]["ALL"] = factory.createScalar(currentElement_ALL);
    // type
    auto currentElement_type = (msg + ctr)->type;
    outArray[ctr]["type"] = factory.createScalar(currentElement_type);
    // parent
    auto currentElement_parent = (msg + ctr)->parent;
    outArray[ctr]["parent"] = factory.createCharArray(currentElement_parent);
    // name
    auto currentElement_name = (msg + ctr)->name;
    outArray[ctr]["name"] = factory.createCharArray(currentElement_name);
    }
    return std::move(outArray);
  }
class LABUST_MSGS_EXPORT ros2_labust_msgs_msg_UnRegisterControllerResponse_common : public MATLABROS2MsgInterface<labust_msgs::srv::UnRegisterController::Response> {
  public:
    virtual ~ros2_labust_msgs_msg_UnRegisterControllerResponse_common(){}
    virtual void copy_from_struct(labust_msgs::srv::UnRegisterController::Response* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    virtual MDArray_T get_arr(MDFactory_T& factory, const labust_msgs::srv::UnRegisterController::Response* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_labust_msgs_msg_UnRegisterControllerResponse_common::copy_from_struct(labust_msgs::srv::UnRegisterController::Response* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //reply
        const matlab::data::TypedArray<uint8_t> reply_arr = arr["reply"];
        msg->reply = reply_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'reply' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'reply' is wrong type; expected a uint8.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_labust_msgs_msg_UnRegisterControllerResponse_common::get_arr(MDFactory_T& factory, const labust_msgs::srv::UnRegisterController::Response* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","SUCCESS","reply"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("labust_msgs/UnRegisterControllerResponse");
    // SUCCESS
    auto currentElement_SUCCESS = (msg + ctr)->SUCCESS;
    outArray[ctr]["SUCCESS"] = factory.createScalar(currentElement_SUCCESS);
    // reply
    auto currentElement_reply = (msg + ctr)->reply;
    outArray[ctr]["reply"] = factory.createScalar(currentElement_reply);
    }
    return std::move(outArray);
  } 
class LABUST_MSGS_EXPORT ros2_labust_msgs_UnRegisterController_service : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_labust_msgs_UnRegisterController_service(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
    virtual std::shared_ptr<MATLABSvcServerInterface> generateSvcServerInterface();
    virtual std::shared_ptr<MATLABSvcClientInterface> generateSvcClientInterface();
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_labust_msgs_UnRegisterController_service::generatePublisherInterface(ElementType type){
    if(type == eRequest){
        return std::make_shared<ROS2PublisherImpl<labust_msgs::srv::UnRegisterController::Request,ros2_labust_msgs_msg_UnRegisterControllerRequest_common>>();
    }else if(type == eResponse){
        return std::make_shared<ROS2PublisherImpl<labust_msgs::srv::UnRegisterController::Response,ros2_labust_msgs_msg_UnRegisterControllerResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
  std::shared_ptr<MATLABSubscriberInterface> 
          ros2_labust_msgs_UnRegisterController_service::generateSubscriberInterface(ElementType type){
    if(type == eRequest){
        return std::make_shared<ROS2SubscriberImpl<labust_msgs::srv::UnRegisterController::Request,ros2_labust_msgs_msg_UnRegisterControllerRequest_common>>();
    }else if(type == eResponse){
        return std::make_shared<ROS2SubscriberImpl<labust_msgs::srv::UnRegisterController::Response,ros2_labust_msgs_msg_UnRegisterControllerResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
  std::shared_ptr<void> ros2_labust_msgs_UnRegisterController_service::generateCppMessage(ElementType type, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    if(type == eRequest){
        auto msg = std::make_shared<labust_msgs::srv::UnRegisterController::Request>();
        ros2_labust_msgs_msg_UnRegisterControllerRequest_common commonObj;
        commonObj.mCommonObjMap = commonObjMap;
        commonObj.copy_from_struct(msg.get(), arr[0], loader);
        return msg;
    }else if(type == eResponse){
        auto msg = std::make_shared<labust_msgs::srv::UnRegisterController::Response>();
        ros2_labust_msgs_msg_UnRegisterControllerResponse_common commonObj;
        commonObj.mCommonObjMap = commonObjMap;
        commonObj.copy_from_struct(msg.get(), arr[0], loader);
        return msg;
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
  std::shared_ptr<MATLABSvcServerInterface> 
          ros2_labust_msgs_UnRegisterController_service::generateSvcServerInterface(){
    return std::make_shared<ROS2SvcServerImpl<labust_msgs::srv::UnRegisterController,labust_msgs::srv::UnRegisterController::Request,labust_msgs::srv::UnRegisterController::Response,ros2_labust_msgs_msg_UnRegisterControllerRequest_common,ros2_labust_msgs_msg_UnRegisterControllerResponse_common>>();
  }
  std::shared_ptr<MATLABSvcClientInterface> 
          ros2_labust_msgs_UnRegisterController_service::generateSvcClientInterface(){
    return std::make_shared<ROS2SvcClientImpl<labust_msgs::srv::UnRegisterController,labust_msgs::srv::UnRegisterController::Request,labust_msgs::srv::UnRegisterController::Response,ros2_labust_msgs_msg_UnRegisterControllerRequest_common,ros2_labust_msgs_msg_UnRegisterControllerResponse_common,rclcpp::Client<labust_msgs::srv::UnRegisterController>::SharedFuture>>();
  }
  matlab::data::StructArray ros2_labust_msgs_UnRegisterController_service::generateMLMessage(ElementType type, 
                                                    void*  msgPtr ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    if(type == eRequest){
	    ros2_labust_msgs_msg_UnRegisterControllerRequest_common commonObj;	
        commonObj.mCommonObjMap = commonObjMap;
	    MDFactory_T factory;
	    return commonObj.get_arr(factory, (labust_msgs::srv::UnRegisterController::Request*)msgPtr, loader);
    }else if(type == eResponse){
        ros2_labust_msgs_msg_UnRegisterControllerResponse_common commonObj;	
        commonObj.mCommonObjMap = commonObjMap;	
	    MDFactory_T factory;
	    return commonObj.get_arr(factory, (labust_msgs::srv::UnRegisterController::Response*)msgPtr, loader);
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_msg_UnRegisterControllerRequest_common, MATLABROS2MsgInterface<labust_msgs::srv::UnRegisterController::Request>)
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_msg_UnRegisterControllerResponse_common, MATLABROS2MsgInterface<labust_msgs::srv::UnRegisterController::Response>)
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_UnRegisterController_service, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
