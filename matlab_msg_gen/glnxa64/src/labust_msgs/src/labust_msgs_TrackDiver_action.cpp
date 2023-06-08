// Copyright 2022 The MathWorks, Inc.
// Common copy functions for labust_msgs/TrackDiverGoal
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
#include "labust_msgs/action/track_diver.hpp"
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
#include "ROS2ActionTemplates.hpp"
class LABUST_MSGS_EXPORT labust_msgs_msg_TrackDiverGoal_common : public MATLABROS2MsgInterface<labust_msgs::action::TrackDiver::Goal> {
  public:
    virtual ~labust_msgs_msg_TrackDiverGoal_common(){}
    virtual void copy_from_struct(labust_msgs::action::TrackDiver::Goal* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const labust_msgs::action::TrackDiver::Goal* msg, MultiLibLoader loader, size_t size = 1);
};
  //----------------------------------------------------------------------------
  void labust_msgs_msg_TrackDiverGoal_common::copy_from_struct(labust_msgs::action::TrackDiver::Goal* msg, const matlab::data::Struct& arr, MultiLibLoader loader) {
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
        //vertical_offset
        const matlab::data::TypedArray<float> vertical_offset_arr = arr["vertical_offset"];
        msg->vertical_offset = vertical_offset_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'vertical_offset' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'vertical_offset' is wrong type; expected a single.");
    }
    try {
        //guidance_target
        const matlab::data::StructArray guidance_target_arr = arr["guidance_target"];
        auto msgClassPtr_guidance_target = getCommonObject<geometry_msgs::msg::Point>("ros2_geometry_msgs_msg_Point_common",loader);
        msgClassPtr_guidance_target->copy_from_struct(&msg->guidance_target,guidance_target_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'guidance_target' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'guidance_target' is wrong type; expected a struct.");
    }
    try {
        //guidance_enable
        const matlab::data::TypedArray<bool> guidance_enable_arr = arr["guidance_enable"];
        msg->guidance_enable = guidance_enable_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'guidance_enable' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'guidance_enable' is wrong type; expected a logical.");
    }
    try {
        //wrapping_enable
        const matlab::data::TypedArray<bool> wrapping_enable_arr = arr["wrapping_enable"];
        msg->wrapping_enable = wrapping_enable_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'wrapping_enable' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'wrapping_enable' is wrong type; expected a logical.");
    }
    try {
        //streamline_orientation
        const matlab::data::TypedArray<bool> streamline_orientation_arr = arr["streamline_orientation"];
        msg->streamline_orientation = streamline_orientation_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'streamline_orientation' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'streamline_orientation' is wrong type; expected a logical.");
    }
    try {
        //fov_guidance
        const matlab::data::TypedArray<bool> fov_guidance_arr = arr["fov_guidance"];
        msg->fov_guidance = fov_guidance_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'fov_guidance' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'fov_guidance' is wrong type; expected a logical.");
    }
    try {
        //guidance_topic
        const matlab::data::CharArray guidance_topic_arr = arr["guidance_topic"];
        msg->guidance_topic = guidance_topic_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'guidance_topic' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'guidance_topic' is wrong type; expected a string.");
    }
    try {
        //radius_topic
        const matlab::data::CharArray radius_topic_arr = arr["radius_topic"];
        msg->radius_topic = radius_topic_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'radius_topic' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'radius_topic' is wrong type; expected a string.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T labust_msgs_msg_TrackDiverGoal_common::get_arr(MDFactory_T& factory, const labust_msgs::action::TrackDiver::Goal* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","radius","vertical_offset","guidance_target","guidance_enable","wrapping_enable","streamline_orientation","fov_guidance","guidance_topic","radius_topic"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("labust_msgs/TrackDiverGoal");
    // radius
    auto currentElement_radius = (msg + ctr)->radius;
    outArray[ctr]["radius"] = factory.createScalar(currentElement_radius);
    // vertical_offset
    auto currentElement_vertical_offset = (msg + ctr)->vertical_offset;
    outArray[ctr]["vertical_offset"] = factory.createScalar(currentElement_vertical_offset);
    // guidance_target
    auto currentElement_guidance_target = (msg + ctr)->guidance_target;
    auto msgClassPtr_guidance_target = getCommonObject<geometry_msgs::msg::Point>("ros2_geometry_msgs_msg_Point_common",loader);
    outArray[ctr]["guidance_target"] = msgClassPtr_guidance_target->get_arr(factory, &currentElement_guidance_target, loader);
    // guidance_enable
    auto currentElement_guidance_enable = (msg + ctr)->guidance_enable;
    outArray[ctr]["guidance_enable"] = factory.createScalar(currentElement_guidance_enable);
    // wrapping_enable
    auto currentElement_wrapping_enable = (msg + ctr)->wrapping_enable;
    outArray[ctr]["wrapping_enable"] = factory.createScalar(currentElement_wrapping_enable);
    // streamline_orientation
    auto currentElement_streamline_orientation = (msg + ctr)->streamline_orientation;
    outArray[ctr]["streamline_orientation"] = factory.createScalar(currentElement_streamline_orientation);
    // fov_guidance
    auto currentElement_fov_guidance = (msg + ctr)->fov_guidance;
    outArray[ctr]["fov_guidance"] = factory.createScalar(currentElement_fov_guidance);
    // guidance_topic
    auto currentElement_guidance_topic = (msg + ctr)->guidance_topic;
    outArray[ctr]["guidance_topic"] = factory.createCharArray(currentElement_guidance_topic);
    // radius_topic
    auto currentElement_radius_topic = (msg + ctr)->radius_topic;
    outArray[ctr]["radius_topic"] = factory.createCharArray(currentElement_radius_topic);
    }
    return std::move(outArray);
  }

class LABUST_MSGS_EXPORT labust_msgs_msg_TrackDiverResult_common : public MATLABROS2MsgInterface<labust_msgs::action::TrackDiver::Result> {
  public:
    virtual ~labust_msgs_msg_TrackDiverResult_common(){}
    virtual void copy_from_struct(labust_msgs::action::TrackDiver::Result* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const labust_msgs::action::TrackDiver::Result* msg, MultiLibLoader loader, size_t size = 1);
};
  //----------------------------------------------------------------------------
  void labust_msgs_msg_TrackDiverResult_common::copy_from_struct(labust_msgs::action::TrackDiver::Result* msg, const matlab::data::Struct& arr, MultiLibLoader loader) {
    try {
        //success
        const matlab::data::TypedArray<bool> success_arr = arr["success"];
        msg->success = success_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'success' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'success' is wrong type; expected a logical.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T labust_msgs_msg_TrackDiverResult_common::get_arr(MDFactory_T& factory, const labust_msgs::action::TrackDiver::Result* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","success"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("labust_msgs/TrackDiverResult");
    // success
    auto currentElement_success = (msg + ctr)->success;
    outArray[ctr]["success"] = factory.createScalar(currentElement_success);
    }
    return std::move(outArray);
  }

class LABUST_MSGS_EXPORT labust_msgs_msg_TrackDiverFeedback_common : public MATLABROS2MsgInterface<labust_msgs::action::TrackDiver::Feedback> {
  public:
    virtual ~labust_msgs_msg_TrackDiverFeedback_common(){}
    virtual void copy_from_struct(labust_msgs::action::TrackDiver::Feedback* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const labust_msgs::action::TrackDiver::Feedback* msg, MultiLibLoader loader, size_t size = 1);
};
  //----------------------------------------------------------------------------
  void labust_msgs_msg_TrackDiverFeedback_common::copy_from_struct(labust_msgs::action::TrackDiver::Feedback* msg, const matlab::data::Struct& arr, MultiLibLoader loader) {
    try {
        //mu_r
        const matlab::data::TypedArray<double> mu_r_arr = arr["mu_r"];
        msg->mu_r = mu_r_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'mu_r' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'mu_r' is wrong type; expected a double.");
    }
    try {
        //gamma_r
        const matlab::data::TypedArray<double> gamma_r_arr = arr["gamma_r"];
        msg->gamma_r = gamma_r_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'gamma_r' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'gamma_r' is wrong type; expected a double.");
    }
    try {
        //operational_radius
        const matlab::data::TypedArray<double> operational_radius_arr = arr["operational_radius"];
        msg->operational_radius = operational_radius_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'operational_radius' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'operational_radius' is wrong type; expected a double.");
    }
    try {
        //delta_r
        const matlab::data::TypedArray<double> delta_r_arr = arr["delta_r"];
        msg->delta_r = delta_r_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'delta_r' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'delta_r' is wrong type; expected a double.");
    }
    try {
        //zeta_r
        const matlab::data::TypedArray<double> zeta_r_arr = arr["zeta_r"];
        msg->zeta_r = zeta_r_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'zeta_r' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'zeta_r' is wrong type; expected a double.");
    }
    try {
        //ned_tracking_error
        const matlab::data::StructArray ned_tracking_error_arr = arr["ned_tracking_error"];
        auto msgClassPtr_ned_tracking_error = getCommonObject<geometry_msgs::msg::Vector3>("ros2_geometry_msgs_msg_Vector3_common",loader);
        msgClassPtr_ned_tracking_error->copy_from_struct(&msg->ned_tracking_error,ned_tracking_error_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'ned_tracking_error' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'ned_tracking_error' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T labust_msgs_msg_TrackDiverFeedback_common::get_arr(MDFactory_T& factory, const labust_msgs::action::TrackDiver::Feedback* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","mu_r","gamma_r","operational_radius","delta_r","zeta_r","ned_tracking_error"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("labust_msgs/TrackDiverFeedback");
    // mu_r
    auto currentElement_mu_r = (msg + ctr)->mu_r;
    outArray[ctr]["mu_r"] = factory.createScalar(currentElement_mu_r);
    // gamma_r
    auto currentElement_gamma_r = (msg + ctr)->gamma_r;
    outArray[ctr]["gamma_r"] = factory.createScalar(currentElement_gamma_r);
    // operational_radius
    auto currentElement_operational_radius = (msg + ctr)->operational_radius;
    outArray[ctr]["operational_radius"] = factory.createScalar(currentElement_operational_radius);
    // delta_r
    auto currentElement_delta_r = (msg + ctr)->delta_r;
    outArray[ctr]["delta_r"] = factory.createScalar(currentElement_delta_r);
    // zeta_r
    auto currentElement_zeta_r = (msg + ctr)->zeta_r;
    outArray[ctr]["zeta_r"] = factory.createScalar(currentElement_zeta_r);
    // ned_tracking_error
    auto currentElement_ned_tracking_error = (msg + ctr)->ned_tracking_error;
    auto msgClassPtr_ned_tracking_error = getCommonObject<geometry_msgs::msg::Vector3>("ros2_geometry_msgs_msg_Vector3_common",loader);
    outArray[ctr]["ned_tracking_error"] = msgClassPtr_ned_tracking_error->get_arr(factory, &currentElement_ned_tracking_error, loader);
    }
    return std::move(outArray);
  }

class LABUST_MSGS_EXPORT ros2_labust_msgs_TrackDiver_action : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_labust_msgs_TrackDiver_action(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
    virtual std::shared_ptr<MATLABActClientInterface> generateActClientInterface();
    virtual matlab::data::StructArray generateMLMessage(ElementType type, 
                                                    void*  msgPtr ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap);
    virtual std::shared_ptr<void> generateCppMessage(ElementType type, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_labust_msgs_TrackDiver_action::generatePublisherInterface(ElementType type){
    std::shared_ptr<MATLABPublisherInterface> ptr;
    if(type == eGoal){
        ptr = std::make_shared<ROS2PublisherImpl<labust_msgs::action::TrackDiver::Goal,labust_msgs_msg_TrackDiverGoal_common>>();
    }else if(type == eFeedback){
        ptr = std::make_shared<ROS2PublisherImpl<labust_msgs::action::TrackDiver::Feedback,labust_msgs_msg_TrackDiverFeedback_common>>();
    }else if(type == eResult){
        ptr = std::make_shared<ROS2PublisherImpl<labust_msgs::action::TrackDiver::Result,labust_msgs_msg_TrackDiverResult_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Goal' or 'Feedback' or 'Result'");
    }
    return ptr;
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_labust_msgs_TrackDiver_action::generateSubscriberInterface(ElementType type){
    std::shared_ptr<MATLABSubscriberInterface> ptr;
    if(type == eGoal){
        ptr = std::make_shared<ROS2SubscriberImpl<labust_msgs::action::TrackDiver::Goal,labust_msgs_msg_TrackDiverGoal_common>>();
    }else if(type == eFeedback){
        ptr = std::make_shared<ROS2SubscriberImpl<labust_msgs::action::TrackDiver::Feedback,labust_msgs_msg_TrackDiverFeedback_common>>();
    }else if(type == eResult){
        ptr = std::make_shared<ROS2SubscriberImpl<labust_msgs::action::TrackDiver::Result,labust_msgs_msg_TrackDiverResult_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Goal' or 'Feedback' or 'Result'");
    }
    return ptr;
  }
  std::shared_ptr<MATLABActClientInterface> 
          ros2_labust_msgs_TrackDiver_action::generateActClientInterface(){
      return std::make_shared<ROS2ActClientImpl<labust_msgs::action::TrackDiver,labust_msgs::action::TrackDiver::Goal,labust_msgs::action::TrackDiver::Feedback::ConstSharedPtr,labust_msgs::action::TrackDiver::Result::ConstSharedPtr,labust_msgs_msg_TrackDiverGoal_common,labust_msgs_msg_TrackDiverFeedback_common,labust_msgs_msg_TrackDiverResult_common>>();
  }
  std::shared_ptr<void> ros2_labust_msgs_TrackDiver_action::generateCppMessage(ElementType type, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    if(type == eGoal){
        auto msg = std::make_shared<labust_msgs::action::TrackDiver::Goal>();
        labust_msgs_msg_TrackDiverGoal_common commonObj;
        commonObj.mCommonObjMap = commonObjMap;
        commonObj.copy_from_struct(msg.get(), arr[0], loader);
        return msg;
    }else if(type == eFeedback){
        auto msg = std::make_shared<labust_msgs::action::TrackDiver::Feedback>();
        labust_msgs_msg_TrackDiverFeedback_common commonObj;
        commonObj.mCommonObjMap = commonObjMap;
        commonObj.copy_from_struct(msg.get(), arr[0], loader);
        return msg;
    }else if(type == eResult){
        auto msg = std::make_shared<labust_msgs::action::TrackDiver::Result>();
        labust_msgs_msg_TrackDiverResult_common commonObj;
        commonObj.mCommonObjMap = commonObjMap;
        commonObj.copy_from_struct(msg.get(), arr[0], loader);
        return msg;
   }else{
        throw std::invalid_argument("Wrong input, Expected 'Goal' or 'Feedback' or 'Result'");
    }
  }
 matlab::data::StructArray ros2_labust_msgs_TrackDiver_action::generateMLMessage(ElementType type, 
                                                    void*  msgPtr ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    if(type == eGoal){
	    labust_msgs_msg_TrackDiverGoal_common commonObj;	
        commonObj.mCommonObjMap = commonObjMap;
	    MDFactory_T factory;
	    return commonObj.get_arr(factory, (labust_msgs::action::TrackDiver::Goal*)msgPtr, loader);
    }else if(type == eResult){
        labust_msgs_msg_TrackDiverResult_common commonObj;	
        commonObj.mCommonObjMap = commonObjMap;
	    MDFactory_T factory;
	    return commonObj.get_arr(factory, (labust_msgs::action::TrackDiver::Result*)msgPtr, loader);
    }else if(type == eFeedback){
        labust_msgs_msg_TrackDiverFeedback_common commonObj;
        commonObj.mCommonObjMap = commonObjMap;
	    MDFactory_T factory;
	    return commonObj.get_arr(factory, (labust_msgs::action::TrackDiver::Feedback*)msgPtr, loader);
    }
     else{
        throw std::invalid_argument("Wrong input, Expected 'Goal' or 'Feedback' or 'Result'");
    }
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(labust_msgs_msg_TrackDiverGoal_common, MATLABROS2MsgInterface<labust_msgs::action::TrackDiver::Goal>)
CLASS_LOADER_REGISTER_CLASS(labust_msgs_msg_TrackDiverFeedback_common, MATLABROS2MsgInterface<labust_msgs::action::TrackDiver::Feedback>)
CLASS_LOADER_REGISTER_CLASS(labust_msgs_msg_TrackDiverResult_common, MATLABROS2MsgInterface<labust_msgs::action::TrackDiver::Result>)
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_TrackDiver_action, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1