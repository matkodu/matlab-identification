// Copyright 2021-2022 The MathWorks, Inc.
// Common copy functions for labust_msgs/SetHLModeRequest
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
#include "labust_msgs/srv/set_hl_mode.hpp"
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
class LABUST_MSGS_EXPORT ros2_labust_msgs_msg_SetHLModeRequest_common : public MATLABROS2MsgInterface<labust_msgs::srv::SetHLMode::Request> {
  public:
    virtual ~ros2_labust_msgs_msg_SetHLModeRequest_common(){}
    virtual void copy_from_struct(labust_msgs::srv::SetHLMode::Request* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    virtual MDArray_T get_arr(MDFactory_T& factory, const labust_msgs::srv::SetHLMode::Request* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_labust_msgs_msg_SetHLModeRequest_common::copy_from_struct(labust_msgs::srv::SetHLMode::Request* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //mode
        const matlab::data::TypedArray<int32_t> mode_arr = arr["mode"];
        msg->mode = mode_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'mode' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'mode' is wrong type; expected a int32.");
    }
    try {
        //ref_point
        const matlab::data::StructArray ref_point_arr = arr["ref_point"];
        auto msgClassPtr_ref_point = getCommonObject<geometry_msgs::msg::PointStamped>("ros2_geometry_msgs_msg_PointStamped_common",loader);
        msgClassPtr_ref_point->copy_from_struct(&msg->ref_point,ref_point_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'ref_point' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'ref_point' is wrong type; expected a struct.");
    }
    try {
        //radius
        const matlab::data::TypedArray<float> radius_arr = arr["radius"];
        msg->radius = radius_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'radius' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'radius' is wrong type; expected a single.");
    }
    try {
        //surge
        const matlab::data::TypedArray<float> surge_arr = arr["surge"];
        msg->surge = surge_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'surge' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'surge' is wrong type; expected a single.");
    }
    try {
        //yaw
        const matlab::data::TypedArray<float> yaw_arr = arr["yaw"];
        msg->yaw = yaw_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'yaw' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'yaw' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_labust_msgs_msg_SetHLModeRequest_common::get_arr(MDFactory_T& factory, const labust_msgs::srv::SetHLMode::Request* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","STOP","MANUAL","GOTOPOINT","STATIONKEEPING","CIRCLEPOINT","HEADINGCONTROL","HEADINGSURGE","mode","ref_point","radius","surge","yaw"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("labust_msgs/SetHLModeRequest");
    // STOP
    auto currentElement_STOP = (msg + ctr)->STOP;
    outArray[ctr]["STOP"] = factory.createScalar(currentElement_STOP);
    // MANUAL
    auto currentElement_MANUAL = (msg + ctr)->MANUAL;
    outArray[ctr]["MANUAL"] = factory.createScalar(currentElement_MANUAL);
    // GOTOPOINT
    auto currentElement_GOTOPOINT = (msg + ctr)->GOTOPOINT;
    outArray[ctr]["GOTOPOINT"] = factory.createScalar(currentElement_GOTOPOINT);
    // STATIONKEEPING
    auto currentElement_STATIONKEEPING = (msg + ctr)->STATIONKEEPING;
    outArray[ctr]["STATIONKEEPING"] = factory.createScalar(currentElement_STATIONKEEPING);
    // CIRCLEPOINT
    auto currentElement_CIRCLEPOINT = (msg + ctr)->CIRCLEPOINT;
    outArray[ctr]["CIRCLEPOINT"] = factory.createScalar(currentElement_CIRCLEPOINT);
    // HEADINGCONTROL
    auto currentElement_HEADINGCONTROL = (msg + ctr)->HEADINGCONTROL;
    outArray[ctr]["HEADINGCONTROL"] = factory.createScalar(currentElement_HEADINGCONTROL);
    // HEADINGSURGE
    auto currentElement_HEADINGSURGE = (msg + ctr)->HEADINGSURGE;
    outArray[ctr]["HEADINGSURGE"] = factory.createScalar(currentElement_HEADINGSURGE);
    // mode
    auto currentElement_mode = (msg + ctr)->mode;
    outArray[ctr]["mode"] = factory.createScalar(currentElement_mode);
    // ref_point
    auto currentElement_ref_point = (msg + ctr)->ref_point;
    auto msgClassPtr_ref_point = getCommonObject<geometry_msgs::msg::PointStamped>("ros2_geometry_msgs_msg_PointStamped_common",loader);
    outArray[ctr]["ref_point"] = msgClassPtr_ref_point->get_arr(factory, &currentElement_ref_point, loader);
    // radius
    auto currentElement_radius = (msg + ctr)->radius;
    outArray[ctr]["radius"] = factory.createScalar(currentElement_radius);
    // surge
    auto currentElement_surge = (msg + ctr)->surge;
    outArray[ctr]["surge"] = factory.createScalar(currentElement_surge);
    // yaw
    auto currentElement_yaw = (msg + ctr)->yaw;
    outArray[ctr]["yaw"] = factory.createScalar(currentElement_yaw);
    }
    return std::move(outArray);
  }
class LABUST_MSGS_EXPORT ros2_labust_msgs_msg_SetHLModeResponse_common : public MATLABROS2MsgInterface<labust_msgs::srv::SetHLMode::Response> {
  public:
    virtual ~ros2_labust_msgs_msg_SetHLModeResponse_common(){}
    virtual void copy_from_struct(labust_msgs::srv::SetHLMode::Response* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    virtual MDArray_T get_arr(MDFactory_T& factory, const labust_msgs::srv::SetHLMode::Response* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_labust_msgs_msg_SetHLModeResponse_common::copy_from_struct(labust_msgs::srv::SetHLMode::Response* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_labust_msgs_msg_SetHLModeResponse_common::get_arr(MDFactory_T& factory, const labust_msgs::srv::SetHLMode::Response* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("labust_msgs/SetHLModeResponse");
    }
    return std::move(outArray);
  } 
class LABUST_MSGS_EXPORT ros2_labust_msgs_SetHLMode_service : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_labust_msgs_SetHLMode_service(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
    virtual std::shared_ptr<MATLABSvcServerInterface> generateSvcServerInterface();
    virtual std::shared_ptr<MATLABSvcClientInterface> generateSvcClientInterface();
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_labust_msgs_SetHLMode_service::generatePublisherInterface(ElementType type){
    if(type == eRequest){
        return std::make_shared<ROS2PublisherImpl<labust_msgs::srv::SetHLMode::Request,ros2_labust_msgs_msg_SetHLModeRequest_common>>();
    }else if(type == eResponse){
        return std::make_shared<ROS2PublisherImpl<labust_msgs::srv::SetHLMode::Response,ros2_labust_msgs_msg_SetHLModeResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
  std::shared_ptr<MATLABSubscriberInterface> 
          ros2_labust_msgs_SetHLMode_service::generateSubscriberInterface(ElementType type){
    if(type == eRequest){
        return std::make_shared<ROS2SubscriberImpl<labust_msgs::srv::SetHLMode::Request,ros2_labust_msgs_msg_SetHLModeRequest_common>>();
    }else if(type == eResponse){
        return std::make_shared<ROS2SubscriberImpl<labust_msgs::srv::SetHLMode::Response,ros2_labust_msgs_msg_SetHLModeResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
  std::shared_ptr<void> ros2_labust_msgs_SetHLMode_service::generateCppMessage(ElementType type, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    if(type == eRequest){
        auto msg = std::make_shared<labust_msgs::srv::SetHLMode::Request>();
        ros2_labust_msgs_msg_SetHLModeRequest_common commonObj;
        commonObj.mCommonObjMap = commonObjMap;
        commonObj.copy_from_struct(msg.get(), arr[0], loader);
        return msg;
    }else if(type == eResponse){
        auto msg = std::make_shared<labust_msgs::srv::SetHLMode::Response>();
        ros2_labust_msgs_msg_SetHLModeResponse_common commonObj;
        commonObj.mCommonObjMap = commonObjMap;
        commonObj.copy_from_struct(msg.get(), arr[0], loader);
        return msg;
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
  std::shared_ptr<MATLABSvcServerInterface> 
          ros2_labust_msgs_SetHLMode_service::generateSvcServerInterface(){
    return std::make_shared<ROS2SvcServerImpl<labust_msgs::srv::SetHLMode,labust_msgs::srv::SetHLMode::Request,labust_msgs::srv::SetHLMode::Response,ros2_labust_msgs_msg_SetHLModeRequest_common,ros2_labust_msgs_msg_SetHLModeResponse_common>>();
  }
  std::shared_ptr<MATLABSvcClientInterface> 
          ros2_labust_msgs_SetHLMode_service::generateSvcClientInterface(){
    return std::make_shared<ROS2SvcClientImpl<labust_msgs::srv::SetHLMode,labust_msgs::srv::SetHLMode::Request,labust_msgs::srv::SetHLMode::Response,ros2_labust_msgs_msg_SetHLModeRequest_common,ros2_labust_msgs_msg_SetHLModeResponse_common,rclcpp::Client<labust_msgs::srv::SetHLMode>::SharedFuture>>();
  }
  matlab::data::StructArray ros2_labust_msgs_SetHLMode_service::generateMLMessage(ElementType type, 
                                                    void*  msgPtr ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    if(type == eRequest){
	    ros2_labust_msgs_msg_SetHLModeRequest_common commonObj;	
        commonObj.mCommonObjMap = commonObjMap;
	    MDFactory_T factory;
	    return commonObj.get_arr(factory, (labust_msgs::srv::SetHLMode::Request*)msgPtr, loader);
    }else if(type == eResponse){
        ros2_labust_msgs_msg_SetHLModeResponse_common commonObj;	
        commonObj.mCommonObjMap = commonObjMap;	
	    MDFactory_T factory;
	    return commonObj.get_arr(factory, (labust_msgs::srv::SetHLMode::Response*)msgPtr, loader);
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_msg_SetHLModeRequest_common, MATLABROS2MsgInterface<labust_msgs::srv::SetHLMode::Request>)
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_msg_SetHLModeResponse_common, MATLABROS2MsgInterface<labust_msgs::srv::SetHLMode::Response>)
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_SetHLMode_service, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
