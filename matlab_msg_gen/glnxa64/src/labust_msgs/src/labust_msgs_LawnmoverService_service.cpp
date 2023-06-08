// Copyright 2021-2022 The MathWorks, Inc.
// Common copy functions for labust_msgs/LawnmoverServiceRequest
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
#include "labust_msgs/srv/lawnmover_service.hpp"
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
class LABUST_MSGS_EXPORT ros2_labust_msgs_msg_LawnmoverServiceRequest_common : public MATLABROS2MsgInterface<labust_msgs::srv::LawnmoverService::Request> {
  public:
    virtual ~ros2_labust_msgs_msg_LawnmoverServiceRequest_common(){}
    virtual void copy_from_struct(labust_msgs::srv::LawnmoverService::Request* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    virtual MDArray_T get_arr(MDFactory_T& factory, const labust_msgs::srv::LawnmoverService::Request* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_labust_msgs_msg_LawnmoverServiceRequest_common::copy_from_struct(labust_msgs::srv::LawnmoverService::Request* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //width
        const matlab::data::TypedArray<float> width_arr = arr["width"];
        msg->width = width_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'width' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'width' is wrong type; expected a single.");
    }
    try {
        //length
        const matlab::data::TypedArray<float> length_arr = arr["length"];
        msg->length = length_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'length' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'length' is wrong type; expected a single.");
    }
    try {
        //start_position
        const matlab::data::StructArray start_position_arr = arr["start_position"];
        auto msgClassPtr_start_position = getCommonObject<geometry_msgs::msg::Point>("ros2_geometry_msgs_msg_Point_common",loader);
        msgClassPtr_start_position->copy_from_struct(&msg->start_position,start_position_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'start_position' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'start_position' is wrong type; expected a struct.");
    }
    try {
        //speed
        const matlab::data::TypedArray<float> speed_arr = arr["speed"];
        msg->speed = speed_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'speed' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'speed' is wrong type; expected a single.");
    }
    try {
        //victory_radius
        const matlab::data::TypedArray<float> victory_radius_arr = arr["victory_radius"];
        msg->victory_radius = victory_radius_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'victory_radius' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'victory_radius' is wrong type; expected a single.");
    }
    try {
        //horizontal_step
        const matlab::data::TypedArray<float> horizontal_step_arr = arr["horizontal_step"];
        msg->horizontal_step = horizontal_step_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'horizontal_step' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'horizontal_step' is wrong type; expected a single.");
    }
    try {
        //bearing
        const matlab::data::TypedArray<float> bearing_arr = arr["bearing"];
        msg->bearing = bearing_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'bearing' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'bearing' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_labust_msgs_msg_LawnmoverServiceRequest_common::get_arr(MDFactory_T& factory, const labust_msgs::srv::LawnmoverService::Request* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","width","length","start_position","speed","victory_radius","horizontal_step","bearing"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("labust_msgs/LawnmoverServiceRequest");
    // width
    auto currentElement_width = (msg + ctr)->width;
    outArray[ctr]["width"] = factory.createScalar(currentElement_width);
    // length
    auto currentElement_length = (msg + ctr)->length;
    outArray[ctr]["length"] = factory.createScalar(currentElement_length);
    // start_position
    auto currentElement_start_position = (msg + ctr)->start_position;
    auto msgClassPtr_start_position = getCommonObject<geometry_msgs::msg::Point>("ros2_geometry_msgs_msg_Point_common",loader);
    outArray[ctr]["start_position"] = msgClassPtr_start_position->get_arr(factory, &currentElement_start_position, loader);
    // speed
    auto currentElement_speed = (msg + ctr)->speed;
    outArray[ctr]["speed"] = factory.createScalar(currentElement_speed);
    // victory_radius
    auto currentElement_victory_radius = (msg + ctr)->victory_radius;
    outArray[ctr]["victory_radius"] = factory.createScalar(currentElement_victory_radius);
    // horizontal_step
    auto currentElement_horizontal_step = (msg + ctr)->horizontal_step;
    outArray[ctr]["horizontal_step"] = factory.createScalar(currentElement_horizontal_step);
    // bearing
    auto currentElement_bearing = (msg + ctr)->bearing;
    outArray[ctr]["bearing"] = factory.createScalar(currentElement_bearing);
    }
    return std::move(outArray);
  }
class LABUST_MSGS_EXPORT ros2_labust_msgs_msg_LawnmoverServiceResponse_common : public MATLABROS2MsgInterface<labust_msgs::srv::LawnmoverService::Response> {
  public:
    virtual ~ros2_labust_msgs_msg_LawnmoverServiceResponse_common(){}
    virtual void copy_from_struct(labust_msgs::srv::LawnmoverService::Response* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    virtual MDArray_T get_arr(MDFactory_T& factory, const labust_msgs::srv::LawnmoverService::Response* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_labust_msgs_msg_LawnmoverServiceResponse_common::copy_from_struct(labust_msgs::srv::LawnmoverService::Response* msg, const matlab::data::Struct& arr,
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
  MDArray_T ros2_labust_msgs_msg_LawnmoverServiceResponse_common::get_arr(MDFactory_T& factory, const labust_msgs::srv::LawnmoverService::Response* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","status"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("labust_msgs/LawnmoverServiceResponse");
    // status
    auto currentElement_status = (msg + ctr)->status;
    outArray[ctr]["status"] = factory.createScalar(currentElement_status);
    }
    return std::move(outArray);
  } 
class LABUST_MSGS_EXPORT ros2_labust_msgs_LawnmoverService_service : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_labust_msgs_LawnmoverService_service(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
    virtual std::shared_ptr<MATLABSvcServerInterface> generateSvcServerInterface();
    virtual std::shared_ptr<MATLABSvcClientInterface> generateSvcClientInterface();
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_labust_msgs_LawnmoverService_service::generatePublisherInterface(ElementType type){
    if(type == eRequest){
        return std::make_shared<ROS2PublisherImpl<labust_msgs::srv::LawnmoverService::Request,ros2_labust_msgs_msg_LawnmoverServiceRequest_common>>();
    }else if(type == eResponse){
        return std::make_shared<ROS2PublisherImpl<labust_msgs::srv::LawnmoverService::Response,ros2_labust_msgs_msg_LawnmoverServiceResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
  std::shared_ptr<MATLABSubscriberInterface> 
          ros2_labust_msgs_LawnmoverService_service::generateSubscriberInterface(ElementType type){
    if(type == eRequest){
        return std::make_shared<ROS2SubscriberImpl<labust_msgs::srv::LawnmoverService::Request,ros2_labust_msgs_msg_LawnmoverServiceRequest_common>>();
    }else if(type == eResponse){
        return std::make_shared<ROS2SubscriberImpl<labust_msgs::srv::LawnmoverService::Response,ros2_labust_msgs_msg_LawnmoverServiceResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
  std::shared_ptr<void> ros2_labust_msgs_LawnmoverService_service::generateCppMessage(ElementType type, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    if(type == eRequest){
        auto msg = std::make_shared<labust_msgs::srv::LawnmoverService::Request>();
        ros2_labust_msgs_msg_LawnmoverServiceRequest_common commonObj;
        commonObj.mCommonObjMap = commonObjMap;
        commonObj.copy_from_struct(msg.get(), arr[0], loader);
        return msg;
    }else if(type == eResponse){
        auto msg = std::make_shared<labust_msgs::srv::LawnmoverService::Response>();
        ros2_labust_msgs_msg_LawnmoverServiceResponse_common commonObj;
        commonObj.mCommonObjMap = commonObjMap;
        commonObj.copy_from_struct(msg.get(), arr[0], loader);
        return msg;
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
  std::shared_ptr<MATLABSvcServerInterface> 
          ros2_labust_msgs_LawnmoverService_service::generateSvcServerInterface(){
    return std::make_shared<ROS2SvcServerImpl<labust_msgs::srv::LawnmoverService,labust_msgs::srv::LawnmoverService::Request,labust_msgs::srv::LawnmoverService::Response,ros2_labust_msgs_msg_LawnmoverServiceRequest_common,ros2_labust_msgs_msg_LawnmoverServiceResponse_common>>();
  }
  std::shared_ptr<MATLABSvcClientInterface> 
          ros2_labust_msgs_LawnmoverService_service::generateSvcClientInterface(){
    return std::make_shared<ROS2SvcClientImpl<labust_msgs::srv::LawnmoverService,labust_msgs::srv::LawnmoverService::Request,labust_msgs::srv::LawnmoverService::Response,ros2_labust_msgs_msg_LawnmoverServiceRequest_common,ros2_labust_msgs_msg_LawnmoverServiceResponse_common,rclcpp::Client<labust_msgs::srv::LawnmoverService>::SharedFuture>>();
  }
  matlab::data::StructArray ros2_labust_msgs_LawnmoverService_service::generateMLMessage(ElementType type, 
                                                    void*  msgPtr ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    if(type == eRequest){
	    ros2_labust_msgs_msg_LawnmoverServiceRequest_common commonObj;	
        commonObj.mCommonObjMap = commonObjMap;
	    MDFactory_T factory;
	    return commonObj.get_arr(factory, (labust_msgs::srv::LawnmoverService::Request*)msgPtr, loader);
    }else if(type == eResponse){
        ros2_labust_msgs_msg_LawnmoverServiceResponse_common commonObj;	
        commonObj.mCommonObjMap = commonObjMap;	
	    MDFactory_T factory;
	    return commonObj.get_arr(factory, (labust_msgs::srv::LawnmoverService::Response*)msgPtr, loader);
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_msg_LawnmoverServiceRequest_common, MATLABROS2MsgInterface<labust_msgs::srv::LawnmoverService::Request>)
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_msg_LawnmoverServiceResponse_common, MATLABROS2MsgInterface<labust_msgs::srv::LawnmoverService::Response>)
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_LawnmoverService_service, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
