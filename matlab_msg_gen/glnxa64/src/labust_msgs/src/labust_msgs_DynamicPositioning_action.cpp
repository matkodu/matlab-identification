// Copyright 2022 The MathWorks, Inc.
// Common copy functions for labust_msgs/DynamicPositioningGoal
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
#include "labust_msgs/action/dynamic_positioning.hpp"
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
class LABUST_MSGS_EXPORT labust_msgs_msg_DynamicPositioningGoal_common : public MATLABROS2MsgInterface<labust_msgs::action::DynamicPositioning::Goal> {
  public:
    virtual ~labust_msgs_msg_DynamicPositioningGoal_common(){}
    virtual void copy_from_struct(labust_msgs::action::DynamicPositioning::Goal* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const labust_msgs::action::DynamicPositioning::Goal* msg, MultiLibLoader loader, size_t size = 1);
};
  //----------------------------------------------------------------------------
  void labust_msgs_msg_DynamicPositioningGoal_common::copy_from_struct(labust_msgs::action::DynamicPositioning::Goal* msg, const matlab::data::Struct& arr, MultiLibLoader loader) {
    try {
        //t1
        const matlab::data::StructArray t1_arr = arr["t1"];
        auto msgClassPtr_t1 = getCommonObject<geometry_msgs::msg::PointStamped>("ros2_geometry_msgs_msg_PointStamped_common",loader);
        msgClassPtr_t1->copy_from_struct(&msg->t1,t1_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 't1' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 't1' is wrong type; expected a struct.");
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
        //axis_enable
        const matlab::data::TypedArray<bool> axis_enable_arr = arr["axis_enable"];
        size_t nelem = 6;
        	std::copy(axis_enable_arr.begin(), axis_enable_arr.begin()+nelem, msg->axis_enable.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'axis_enable' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'axis_enable' is wrong type; expected a logical.");
    }
    try {
        //altitude
        const matlab::data::TypedArray<bool> altitude_arr = arr["altitude"];
        msg->altitude = altitude_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'altitude' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'altitude' is wrong type; expected a logical.");
    }
    try {
        //track_heading_enable
        const matlab::data::TypedArray<bool> track_heading_enable_arr = arr["track_heading_enable"];
        msg->track_heading_enable = track_heading_enable_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'track_heading_enable' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'track_heading_enable' is wrong type; expected a logical.");
    }
    try {
        //target_topic_enable
        const matlab::data::TypedArray<bool> target_topic_enable_arr = arr["target_topic_enable"];
        msg->target_topic_enable = target_topic_enable_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'target_topic_enable' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'target_topic_enable' is wrong type; expected a logical.");
    }
    try {
        //target_topic
        const matlab::data::CharArray target_topic_arr = arr["target_topic"];
        msg->target_topic = target_topic_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'target_topic' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'target_topic' is wrong type; expected a string.");
    }
    try {
        //heading_topic
        const matlab::data::CharArray heading_topic_arr = arr["heading_topic"];
        msg->heading_topic = heading_topic_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'heading_topic' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'heading_topic' is wrong type; expected a string.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T labust_msgs_msg_DynamicPositioningGoal_common::get_arr(MDFactory_T& factory, const labust_msgs::action::DynamicPositioning::Goal* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","t1","yaw","radius","axis_enable","altitude","track_heading_enable","target_topic_enable","target_topic","heading_topic"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("labust_msgs/DynamicPositioningGoal");
    // t1
    auto currentElement_t1 = (msg + ctr)->t1;
    auto msgClassPtr_t1 = getCommonObject<geometry_msgs::msg::PointStamped>("ros2_geometry_msgs_msg_PointStamped_common",loader);
    outArray[ctr]["t1"] = msgClassPtr_t1->get_arr(factory, &currentElement_t1, loader);
    // yaw
    auto currentElement_yaw = (msg + ctr)->yaw;
    outArray[ctr]["yaw"] = factory.createScalar(currentElement_yaw);
    // radius
    auto currentElement_radius = (msg + ctr)->radius;
    outArray[ctr]["radius"] = factory.createScalar(currentElement_radius);
    // axis_enable
    auto currentElement_axis_enable = (msg + ctr)->axis_enable;
    outArray[ctr]["axis_enable"] = factory.createArray<labust_msgs::action::DynamicPositioning::Goal::_axis_enable_type::const_iterator, bool>({currentElement_axis_enable.size(), 1}, currentElement_axis_enable.begin(), currentElement_axis_enable.end());
    // altitude
    auto currentElement_altitude = (msg + ctr)->altitude;
    outArray[ctr]["altitude"] = factory.createScalar(currentElement_altitude);
    // track_heading_enable
    auto currentElement_track_heading_enable = (msg + ctr)->track_heading_enable;
    outArray[ctr]["track_heading_enable"] = factory.createScalar(currentElement_track_heading_enable);
    // target_topic_enable
    auto currentElement_target_topic_enable = (msg + ctr)->target_topic_enable;
    outArray[ctr]["target_topic_enable"] = factory.createScalar(currentElement_target_topic_enable);
    // target_topic
    auto currentElement_target_topic = (msg + ctr)->target_topic;
    outArray[ctr]["target_topic"] = factory.createCharArray(currentElement_target_topic);
    // heading_topic
    auto currentElement_heading_topic = (msg + ctr)->heading_topic;
    outArray[ctr]["heading_topic"] = factory.createCharArray(currentElement_heading_topic);
    }
    return std::move(outArray);
  }

class LABUST_MSGS_EXPORT labust_msgs_msg_DynamicPositioningResult_common : public MATLABROS2MsgInterface<labust_msgs::action::DynamicPositioning::Result> {
  public:
    virtual ~labust_msgs_msg_DynamicPositioningResult_common(){}
    virtual void copy_from_struct(labust_msgs::action::DynamicPositioning::Result* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const labust_msgs::action::DynamicPositioning::Result* msg, MultiLibLoader loader, size_t size = 1);
};
  //----------------------------------------------------------------------------
  void labust_msgs_msg_DynamicPositioningResult_common::copy_from_struct(labust_msgs::action::DynamicPositioning::Result* msg, const matlab::data::Struct& arr, MultiLibLoader loader) {
    try {
        //position
        const matlab::data::StructArray position_arr = arr["position"];
        auto msgClassPtr_position = getCommonObject<geometry_msgs::msg::PointStamped>("ros2_geometry_msgs_msg_PointStamped_common",loader);
        msgClassPtr_position->copy_from_struct(&msg->position,position_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'position' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'position' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T labust_msgs_msg_DynamicPositioningResult_common::get_arr(MDFactory_T& factory, const labust_msgs::action::DynamicPositioning::Result* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","position"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("labust_msgs/DynamicPositioningResult");
    // position
    auto currentElement_position = (msg + ctr)->position;
    auto msgClassPtr_position = getCommonObject<geometry_msgs::msg::PointStamped>("ros2_geometry_msgs_msg_PointStamped_common",loader);
    outArray[ctr]["position"] = msgClassPtr_position->get_arr(factory, &currentElement_position, loader);
    }
    return std::move(outArray);
  }

class LABUST_MSGS_EXPORT labust_msgs_msg_DynamicPositioningFeedback_common : public MATLABROS2MsgInterface<labust_msgs::action::DynamicPositioning::Feedback> {
  public:
    virtual ~labust_msgs_msg_DynamicPositioningFeedback_common(){}
    virtual void copy_from_struct(labust_msgs::action::DynamicPositioning::Feedback* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const labust_msgs::action::DynamicPositioning::Feedback* msg, MultiLibLoader loader, size_t size = 1);
};
  //----------------------------------------------------------------------------
  void labust_msgs_msg_DynamicPositioningFeedback_common::copy_from_struct(labust_msgs::action::DynamicPositioning::Feedback* msg, const matlab::data::Struct& arr, MultiLibLoader loader) {
    try {
        //error
        const matlab::data::StructArray error_arr = arr["error"];
        auto msgClassPtr_error = getCommonObject<geometry_msgs::msg::PointStamped>("ros2_geometry_msgs_msg_PointStamped_common",loader);
        msgClassPtr_error->copy_from_struct(&msg->error,error_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'error' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'error' is wrong type; expected a struct.");
    }
    try {
        //distance
        const matlab::data::TypedArray<float> distance_arr = arr["distance"];
        msg->distance = distance_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'distance' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'distance' is wrong type; expected a single.");
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
  MDArray_T labust_msgs_msg_DynamicPositioningFeedback_common::get_arr(MDFactory_T& factory, const labust_msgs::action::DynamicPositioning::Feedback* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","error","distance","bearing"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("labust_msgs/DynamicPositioningFeedback");
    // error
    auto currentElement_error = (msg + ctr)->error;
    auto msgClassPtr_error = getCommonObject<geometry_msgs::msg::PointStamped>("ros2_geometry_msgs_msg_PointStamped_common",loader);
    outArray[ctr]["error"] = msgClassPtr_error->get_arr(factory, &currentElement_error, loader);
    // distance
    auto currentElement_distance = (msg + ctr)->distance;
    outArray[ctr]["distance"] = factory.createScalar(currentElement_distance);
    // bearing
    auto currentElement_bearing = (msg + ctr)->bearing;
    outArray[ctr]["bearing"] = factory.createScalar(currentElement_bearing);
    }
    return std::move(outArray);
  }

class LABUST_MSGS_EXPORT ros2_labust_msgs_DynamicPositioning_action : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_labust_msgs_DynamicPositioning_action(){}
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
          ros2_labust_msgs_DynamicPositioning_action::generatePublisherInterface(ElementType type){
    std::shared_ptr<MATLABPublisherInterface> ptr;
    if(type == eGoal){
        ptr = std::make_shared<ROS2PublisherImpl<labust_msgs::action::DynamicPositioning::Goal,labust_msgs_msg_DynamicPositioningGoal_common>>();
    }else if(type == eFeedback){
        ptr = std::make_shared<ROS2PublisherImpl<labust_msgs::action::DynamicPositioning::Feedback,labust_msgs_msg_DynamicPositioningFeedback_common>>();
    }else if(type == eResult){
        ptr = std::make_shared<ROS2PublisherImpl<labust_msgs::action::DynamicPositioning::Result,labust_msgs_msg_DynamicPositioningResult_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Goal' or 'Feedback' or 'Result'");
    }
    return ptr;
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_labust_msgs_DynamicPositioning_action::generateSubscriberInterface(ElementType type){
    std::shared_ptr<MATLABSubscriberInterface> ptr;
    if(type == eGoal){
        ptr = std::make_shared<ROS2SubscriberImpl<labust_msgs::action::DynamicPositioning::Goal,labust_msgs_msg_DynamicPositioningGoal_common>>();
    }else if(type == eFeedback){
        ptr = std::make_shared<ROS2SubscriberImpl<labust_msgs::action::DynamicPositioning::Feedback,labust_msgs_msg_DynamicPositioningFeedback_common>>();
    }else if(type == eResult){
        ptr = std::make_shared<ROS2SubscriberImpl<labust_msgs::action::DynamicPositioning::Result,labust_msgs_msg_DynamicPositioningResult_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Goal' or 'Feedback' or 'Result'");
    }
    return ptr;
  }
  std::shared_ptr<MATLABActClientInterface> 
          ros2_labust_msgs_DynamicPositioning_action::generateActClientInterface(){
      return std::make_shared<ROS2ActClientImpl<labust_msgs::action::DynamicPositioning,labust_msgs::action::DynamicPositioning::Goal,labust_msgs::action::DynamicPositioning::Feedback::ConstSharedPtr,labust_msgs::action::DynamicPositioning::Result::ConstSharedPtr,labust_msgs_msg_DynamicPositioningGoal_common,labust_msgs_msg_DynamicPositioningFeedback_common,labust_msgs_msg_DynamicPositioningResult_common>>();
  }
  std::shared_ptr<void> ros2_labust_msgs_DynamicPositioning_action::generateCppMessage(ElementType type, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    if(type == eGoal){
        auto msg = std::make_shared<labust_msgs::action::DynamicPositioning::Goal>();
        labust_msgs_msg_DynamicPositioningGoal_common commonObj;
        commonObj.mCommonObjMap = commonObjMap;
        commonObj.copy_from_struct(msg.get(), arr[0], loader);
        return msg;
    }else if(type == eFeedback){
        auto msg = std::make_shared<labust_msgs::action::DynamicPositioning::Feedback>();
        labust_msgs_msg_DynamicPositioningFeedback_common commonObj;
        commonObj.mCommonObjMap = commonObjMap;
        commonObj.copy_from_struct(msg.get(), arr[0], loader);
        return msg;
    }else if(type == eResult){
        auto msg = std::make_shared<labust_msgs::action::DynamicPositioning::Result>();
        labust_msgs_msg_DynamicPositioningResult_common commonObj;
        commonObj.mCommonObjMap = commonObjMap;
        commonObj.copy_from_struct(msg.get(), arr[0], loader);
        return msg;
   }else{
        throw std::invalid_argument("Wrong input, Expected 'Goal' or 'Feedback' or 'Result'");
    }
  }
 matlab::data::StructArray ros2_labust_msgs_DynamicPositioning_action::generateMLMessage(ElementType type, 
                                                    void*  msgPtr ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    if(type == eGoal){
	    labust_msgs_msg_DynamicPositioningGoal_common commonObj;	
        commonObj.mCommonObjMap = commonObjMap;
	    MDFactory_T factory;
	    return commonObj.get_arr(factory, (labust_msgs::action::DynamicPositioning::Goal*)msgPtr, loader);
    }else if(type == eResult){
        labust_msgs_msg_DynamicPositioningResult_common commonObj;	
        commonObj.mCommonObjMap = commonObjMap;
	    MDFactory_T factory;
	    return commonObj.get_arr(factory, (labust_msgs::action::DynamicPositioning::Result*)msgPtr, loader);
    }else if(type == eFeedback){
        labust_msgs_msg_DynamicPositioningFeedback_common commonObj;
        commonObj.mCommonObjMap = commonObjMap;
	    MDFactory_T factory;
	    return commonObj.get_arr(factory, (labust_msgs::action::DynamicPositioning::Feedback*)msgPtr, loader);
    }
     else{
        throw std::invalid_argument("Wrong input, Expected 'Goal' or 'Feedback' or 'Result'");
    }
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(labust_msgs_msg_DynamicPositioningGoal_common, MATLABROS2MsgInterface<labust_msgs::action::DynamicPositioning::Goal>)
CLASS_LOADER_REGISTER_CLASS(labust_msgs_msg_DynamicPositioningFeedback_common, MATLABROS2MsgInterface<labust_msgs::action::DynamicPositioning::Feedback>)
CLASS_LOADER_REGISTER_CLASS(labust_msgs_msg_DynamicPositioningResult_common, MATLABROS2MsgInterface<labust_msgs::action::DynamicPositioning::Result>)
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_DynamicPositioning_action, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1