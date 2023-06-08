// Copyright 2021-2022 The MathWorks, Inc.
// Common copy functions for labust_msgs/DynamicPositioningLLServiceRequest
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
#include "labust_msgs/srv/dynamic_positioning_ll_service.hpp"
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
class LABUST_MSGS_EXPORT ros2_labust_msgs_msg_DynamicPositioningLLServiceRequest_common : public MATLABROS2MsgInterface<labust_msgs::srv::DynamicPositioningLLService::Request> {
  public:
    virtual ~ros2_labust_msgs_msg_DynamicPositioningLLServiceRequest_common(){}
    virtual void copy_from_struct(labust_msgs::srv::DynamicPositioningLLService::Request* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    virtual MDArray_T get_arr(MDFactory_T& factory, const labust_msgs::srv::DynamicPositioningLLService::Request* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_labust_msgs_msg_DynamicPositioningLLServiceRequest_common::copy_from_struct(labust_msgs::srv::DynamicPositioningLLService::Request* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //point
        const matlab::data::StructArray point_arr = arr["point"];
        auto msgClassPtr_point = getCommonObject<geographic_msgs::msg::GeoPoint>("ros2_geographic_msgs_msg_GeoPoint_common",loader);
        msgClassPtr_point->copy_from_struct(&msg->point,point_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'point' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'point' is wrong type; expected a struct.");
    }
    try {
        //heading
        const matlab::data::TypedArray<double> heading_arr = arr["heading"];
        msg->heading = heading_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'heading' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'heading' is wrong type; expected a double.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_labust_msgs_msg_DynamicPositioningLLServiceRequest_common::get_arr(MDFactory_T& factory, const labust_msgs::srv::DynamicPositioningLLService::Request* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","point","heading"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("labust_msgs/DynamicPositioningLLServiceRequest");
    // point
    auto currentElement_point = (msg + ctr)->point;
    auto msgClassPtr_point = getCommonObject<geographic_msgs::msg::GeoPoint>("ros2_geographic_msgs_msg_GeoPoint_common",loader);
    outArray[ctr]["point"] = msgClassPtr_point->get_arr(factory, &currentElement_point, loader);
    // heading
    auto currentElement_heading = (msg + ctr)->heading;
    outArray[ctr]["heading"] = factory.createScalar(currentElement_heading);
    }
    return std::move(outArray);
  }
class LABUST_MSGS_EXPORT ros2_labust_msgs_msg_DynamicPositioningLLServiceResponse_common : public MATLABROS2MsgInterface<labust_msgs::srv::DynamicPositioningLLService::Response> {
  public:
    virtual ~ros2_labust_msgs_msg_DynamicPositioningLLServiceResponse_common(){}
    virtual void copy_from_struct(labust_msgs::srv::DynamicPositioningLLService::Response* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    virtual MDArray_T get_arr(MDFactory_T& factory, const labust_msgs::srv::DynamicPositioningLLService::Response* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_labust_msgs_msg_DynamicPositioningLLServiceResponse_common::copy_from_struct(labust_msgs::srv::DynamicPositioningLLService::Response* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //status
        const matlab::data::TypedArray<bool> status_arr = arr["status"];
        msg->status = status_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'status' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'status' is wrong type; expected a logical.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_labust_msgs_msg_DynamicPositioningLLServiceResponse_common::get_arr(MDFactory_T& factory, const labust_msgs::srv::DynamicPositioningLLService::Response* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","status"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("labust_msgs/DynamicPositioningLLServiceResponse");
    // status
    auto currentElement_status = (msg + ctr)->status;
    outArray[ctr]["status"] = factory.createScalar(currentElement_status);
    }
    return std::move(outArray);
  } 
class LABUST_MSGS_EXPORT ros2_labust_msgs_DynamicPositioningLLService_service : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_labust_msgs_DynamicPositioningLLService_service(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
    virtual std::shared_ptr<MATLABSvcServerInterface> generateSvcServerInterface();
    virtual std::shared_ptr<MATLABSvcClientInterface> generateSvcClientInterface();
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_labust_msgs_DynamicPositioningLLService_service::generatePublisherInterface(ElementType type){
    if(type == eRequest){
        return std::make_shared<ROS2PublisherImpl<labust_msgs::srv::DynamicPositioningLLService::Request,ros2_labust_msgs_msg_DynamicPositioningLLServiceRequest_common>>();
    }else if(type == eResponse){
        return std::make_shared<ROS2PublisherImpl<labust_msgs::srv::DynamicPositioningLLService::Response,ros2_labust_msgs_msg_DynamicPositioningLLServiceResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
  std::shared_ptr<MATLABSubscriberInterface> 
          ros2_labust_msgs_DynamicPositioningLLService_service::generateSubscriberInterface(ElementType type){
    if(type == eRequest){
        return std::make_shared<ROS2SubscriberImpl<labust_msgs::srv::DynamicPositioningLLService::Request,ros2_labust_msgs_msg_DynamicPositioningLLServiceRequest_common>>();
    }else if(type == eResponse){
        return std::make_shared<ROS2SubscriberImpl<labust_msgs::srv::DynamicPositioningLLService::Response,ros2_labust_msgs_msg_DynamicPositioningLLServiceResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
  std::shared_ptr<void> ros2_labust_msgs_DynamicPositioningLLService_service::generateCppMessage(ElementType type, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    if(type == eRequest){
        auto msg = std::make_shared<labust_msgs::srv::DynamicPositioningLLService::Request>();
        ros2_labust_msgs_msg_DynamicPositioningLLServiceRequest_common commonObj;
        commonObj.mCommonObjMap = commonObjMap;
        commonObj.copy_from_struct(msg.get(), arr[0], loader);
        return msg;
    }else if(type == eResponse){
        auto msg = std::make_shared<labust_msgs::srv::DynamicPositioningLLService::Response>();
        ros2_labust_msgs_msg_DynamicPositioningLLServiceResponse_common commonObj;
        commonObj.mCommonObjMap = commonObjMap;
        commonObj.copy_from_struct(msg.get(), arr[0], loader);
        return msg;
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
  std::shared_ptr<MATLABSvcServerInterface> 
          ros2_labust_msgs_DynamicPositioningLLService_service::generateSvcServerInterface(){
    return std::make_shared<ROS2SvcServerImpl<labust_msgs::srv::DynamicPositioningLLService,labust_msgs::srv::DynamicPositioningLLService::Request,labust_msgs::srv::DynamicPositioningLLService::Response,ros2_labust_msgs_msg_DynamicPositioningLLServiceRequest_common,ros2_labust_msgs_msg_DynamicPositioningLLServiceResponse_common>>();
  }
  std::shared_ptr<MATLABSvcClientInterface> 
          ros2_labust_msgs_DynamicPositioningLLService_service::generateSvcClientInterface(){
    return std::make_shared<ROS2SvcClientImpl<labust_msgs::srv::DynamicPositioningLLService,labust_msgs::srv::DynamicPositioningLLService::Request,labust_msgs::srv::DynamicPositioningLLService::Response,ros2_labust_msgs_msg_DynamicPositioningLLServiceRequest_common,ros2_labust_msgs_msg_DynamicPositioningLLServiceResponse_common,rclcpp::Client<labust_msgs::srv::DynamicPositioningLLService>::SharedFuture>>();
  }
  matlab::data::StructArray ros2_labust_msgs_DynamicPositioningLLService_service::generateMLMessage(ElementType type, 
                                                    void*  msgPtr ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    if(type == eRequest){
	    ros2_labust_msgs_msg_DynamicPositioningLLServiceRequest_common commonObj;	
        commonObj.mCommonObjMap = commonObjMap;
	    MDFactory_T factory;
	    return commonObj.get_arr(factory, (labust_msgs::srv::DynamicPositioningLLService::Request*)msgPtr, loader);
    }else if(type == eResponse){
        ros2_labust_msgs_msg_DynamicPositioningLLServiceResponse_common commonObj;	
        commonObj.mCommonObjMap = commonObjMap;	
	    MDFactory_T factory;
	    return commonObj.get_arr(factory, (labust_msgs::srv::DynamicPositioningLLService::Response*)msgPtr, loader);
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_msg_DynamicPositioningLLServiceRequest_common, MATLABROS2MsgInterface<labust_msgs::srv::DynamicPositioningLLService::Request>)
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_msg_DynamicPositioningLLServiceResponse_common, MATLABROS2MsgInterface<labust_msgs::srv::DynamicPositioningLLService::Response>)
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_DynamicPositioningLLService_service, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
