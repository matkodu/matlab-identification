// Copyright 2022 The MathWorks, Inc.
// Common copy functions for labust_msgs/GoToPointGoal
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
#include "labust_msgs/action/go_to_point.hpp"
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
class LABUST_MSGS_EXPORT labust_msgs_msg_GoToPointGoal_common : public MATLABROS2MsgInterface<labust_msgs::action::GoToPoint::Goal> {
  public:
    virtual ~labust_msgs_msg_GoToPointGoal_common(){}
    virtual void copy_from_struct(labust_msgs::action::GoToPoint::Goal* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const labust_msgs::action::GoToPoint::Goal* msg, MultiLibLoader loader, size_t size = 1);
};
  //----------------------------------------------------------------------------
  void labust_msgs_msg_GoToPointGoal_common::copy_from_struct(labust_msgs::action::GoToPoint::Goal* msg, const matlab::data::Struct& arr, MultiLibLoader loader) {
    try {
        //subtype
        const matlab::data::TypedArray<uint8_t> subtype_arr = arr["subtype"];
        msg->subtype = subtype_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'subtype' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'subtype' is wrong type; expected a uint8.");
    }
    try {
        //ref_type
        const matlab::data::TypedArray<uint8_t> ref_type_arr = arr["ref_type"];
        msg->ref_type = ref_type_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'ref_type' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'ref_type' is wrong type; expected a uint8.");
    }
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
        //t2
        const matlab::data::StructArray t2_arr = arr["t2"];
        auto msgClassPtr_t2 = getCommonObject<geometry_msgs::msg::PointStamped>("ros2_geometry_msgs_msg_PointStamped_common",loader);
        msgClassPtr_t2->copy_from_struct(&msg->t2,t2_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 't2' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 't2' is wrong type; expected a struct.");
    }
    try {
        //heading
        const matlab::data::TypedArray<float> heading_arr = arr["heading"];
        msg->heading = heading_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'heading' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'heading' is wrong type; expected a single.");
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
        //heading_topic
        const matlab::data::CharArray heading_topic_arr = arr["heading_topic"];
        msg->heading_topic = heading_topic_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'heading_topic' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'heading_topic' is wrong type; expected a string.");
    }
    try {
        //speed_topic
        const matlab::data::CharArray speed_topic_arr = arr["speed_topic"];
        msg->speed_topic = speed_topic_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'speed_topic' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'speed_topic' is wrong type; expected a string.");
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
  }
  //----------------------------------------------------------------------------
  MDArray_T labust_msgs_msg_GoToPointGoal_common::get_arr(MDFactory_T& factory, const labust_msgs::action::GoToPoint::Goal* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","subtype","GO2POINT_UA","GO2POINT_FA","GO2POINT_FA_HDG","ref_type","CONSTANT","HEADING_TOPIC","SPEED_TOPIC","ALL_TOPIC","t1","t2","heading","speed","victory_radius","heading_topic","speed_topic","axis_enable","altitude"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("labust_msgs/GoToPointGoal");
    // subtype
    auto currentElement_subtype = (msg + ctr)->subtype;
    outArray[ctr]["subtype"] = factory.createScalar(currentElement_subtype);
    // GO2POINT_UA
    auto currentElement_GO2POINT_UA = (msg + ctr)->GO2POINT_UA;
    outArray[ctr]["GO2POINT_UA"] = factory.createScalar(currentElement_GO2POINT_UA);
    // GO2POINT_FA
    auto currentElement_GO2POINT_FA = (msg + ctr)->GO2POINT_FA;
    outArray[ctr]["GO2POINT_FA"] = factory.createScalar(currentElement_GO2POINT_FA);
    // GO2POINT_FA_HDG
    auto currentElement_GO2POINT_FA_HDG = (msg + ctr)->GO2POINT_FA_HDG;
    outArray[ctr]["GO2POINT_FA_HDG"] = factory.createScalar(currentElement_GO2POINT_FA_HDG);
    // ref_type
    auto currentElement_ref_type = (msg + ctr)->ref_type;
    outArray[ctr]["ref_type"] = factory.createScalar(currentElement_ref_type);
    // CONSTANT
    auto currentElement_CONSTANT = (msg + ctr)->CONSTANT;
    outArray[ctr]["CONSTANT"] = factory.createScalar(currentElement_CONSTANT);
    // HEADING_TOPIC
    auto currentElement_HEADING_TOPIC = (msg + ctr)->HEADING_TOPIC;
    outArray[ctr]["HEADING_TOPIC"] = factory.createScalar(currentElement_HEADING_TOPIC);
    // SPEED_TOPIC
    auto currentElement_SPEED_TOPIC = (msg + ctr)->SPEED_TOPIC;
    outArray[ctr]["SPEED_TOPIC"] = factory.createScalar(currentElement_SPEED_TOPIC);
    // ALL_TOPIC
    auto currentElement_ALL_TOPIC = (msg + ctr)->ALL_TOPIC;
    outArray[ctr]["ALL_TOPIC"] = factory.createScalar(currentElement_ALL_TOPIC);
    // t1
    auto currentElement_t1 = (msg + ctr)->t1;
    auto msgClassPtr_t1 = getCommonObject<geometry_msgs::msg::PointStamped>("ros2_geometry_msgs_msg_PointStamped_common",loader);
    outArray[ctr]["t1"] = msgClassPtr_t1->get_arr(factory, &currentElement_t1, loader);
    // t2
    auto currentElement_t2 = (msg + ctr)->t2;
    auto msgClassPtr_t2 = getCommonObject<geometry_msgs::msg::PointStamped>("ros2_geometry_msgs_msg_PointStamped_common",loader);
    outArray[ctr]["t2"] = msgClassPtr_t2->get_arr(factory, &currentElement_t2, loader);
    // heading
    auto currentElement_heading = (msg + ctr)->heading;
    outArray[ctr]["heading"] = factory.createScalar(currentElement_heading);
    // speed
    auto currentElement_speed = (msg + ctr)->speed;
    outArray[ctr]["speed"] = factory.createScalar(currentElement_speed);
    // victory_radius
    auto currentElement_victory_radius = (msg + ctr)->victory_radius;
    outArray[ctr]["victory_radius"] = factory.createScalar(currentElement_victory_radius);
    // heading_topic
    auto currentElement_heading_topic = (msg + ctr)->heading_topic;
    outArray[ctr]["heading_topic"] = factory.createCharArray(currentElement_heading_topic);
    // speed_topic
    auto currentElement_speed_topic = (msg + ctr)->speed_topic;
    outArray[ctr]["speed_topic"] = factory.createCharArray(currentElement_speed_topic);
    // axis_enable
    auto currentElement_axis_enable = (msg + ctr)->axis_enable;
    outArray[ctr]["axis_enable"] = factory.createArray<labust_msgs::action::GoToPoint::Goal::_axis_enable_type::const_iterator, bool>({currentElement_axis_enable.size(), 1}, currentElement_axis_enable.begin(), currentElement_axis_enable.end());
    // altitude
    auto currentElement_altitude = (msg + ctr)->altitude;
    outArray[ctr]["altitude"] = factory.createScalar(currentElement_altitude);
    }
    return std::move(outArray);
  }

class LABUST_MSGS_EXPORT labust_msgs_msg_GoToPointResult_common : public MATLABROS2MsgInterface<labust_msgs::action::GoToPoint::Result> {
  public:
    virtual ~labust_msgs_msg_GoToPointResult_common(){}
    virtual void copy_from_struct(labust_msgs::action::GoToPoint::Result* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const labust_msgs::action::GoToPoint::Result* msg, MultiLibLoader loader, size_t size = 1);
};
  //----------------------------------------------------------------------------
  void labust_msgs_msg_GoToPointResult_common::copy_from_struct(labust_msgs::action::GoToPoint::Result* msg, const matlab::data::Struct& arr, MultiLibLoader loader) {
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
  MDArray_T labust_msgs_msg_GoToPointResult_common::get_arr(MDFactory_T& factory, const labust_msgs::action::GoToPoint::Result* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","position","distance","bearing"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("labust_msgs/GoToPointResult");
    // position
    auto currentElement_position = (msg + ctr)->position;
    auto msgClassPtr_position = getCommonObject<geometry_msgs::msg::PointStamped>("ros2_geometry_msgs_msg_PointStamped_common",loader);
    outArray[ctr]["position"] = msgClassPtr_position->get_arr(factory, &currentElement_position, loader);
    // distance
    auto currentElement_distance = (msg + ctr)->distance;
    outArray[ctr]["distance"] = factory.createScalar(currentElement_distance);
    // bearing
    auto currentElement_bearing = (msg + ctr)->bearing;
    outArray[ctr]["bearing"] = factory.createScalar(currentElement_bearing);
    }
    return std::move(outArray);
  }

class LABUST_MSGS_EXPORT labust_msgs_msg_GoToPointFeedback_common : public MATLABROS2MsgInterface<labust_msgs::action::GoToPoint::Feedback> {
  public:
    virtual ~labust_msgs_msg_GoToPointFeedback_common(){}
    virtual void copy_from_struct(labust_msgs::action::GoToPoint::Feedback* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const labust_msgs::action::GoToPoint::Feedback* msg, MultiLibLoader loader, size_t size = 1);
};
  //----------------------------------------------------------------------------
  void labust_msgs_msg_GoToPointFeedback_common::copy_from_struct(labust_msgs::action::GoToPoint::Feedback* msg, const matlab::data::Struct& arr, MultiLibLoader loader) {
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
  MDArray_T labust_msgs_msg_GoToPointFeedback_common::get_arr(MDFactory_T& factory, const labust_msgs::action::GoToPoint::Feedback* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","distance","bearing"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("labust_msgs/GoToPointFeedback");
    // distance
    auto currentElement_distance = (msg + ctr)->distance;
    outArray[ctr]["distance"] = factory.createScalar(currentElement_distance);
    // bearing
    auto currentElement_bearing = (msg + ctr)->bearing;
    outArray[ctr]["bearing"] = factory.createScalar(currentElement_bearing);
    }
    return std::move(outArray);
  }

class LABUST_MSGS_EXPORT ros2_labust_msgs_GoToPoint_action : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_labust_msgs_GoToPoint_action(){}
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
          ros2_labust_msgs_GoToPoint_action::generatePublisherInterface(ElementType type){
    std::shared_ptr<MATLABPublisherInterface> ptr;
    if(type == eGoal){
        ptr = std::make_shared<ROS2PublisherImpl<labust_msgs::action::GoToPoint::Goal,labust_msgs_msg_GoToPointGoal_common>>();
    }else if(type == eFeedback){
        ptr = std::make_shared<ROS2PublisherImpl<labust_msgs::action::GoToPoint::Feedback,labust_msgs_msg_GoToPointFeedback_common>>();
    }else if(type == eResult){
        ptr = std::make_shared<ROS2PublisherImpl<labust_msgs::action::GoToPoint::Result,labust_msgs_msg_GoToPointResult_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Goal' or 'Feedback' or 'Result'");
    }
    return ptr;
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_labust_msgs_GoToPoint_action::generateSubscriberInterface(ElementType type){
    std::shared_ptr<MATLABSubscriberInterface> ptr;
    if(type == eGoal){
        ptr = std::make_shared<ROS2SubscriberImpl<labust_msgs::action::GoToPoint::Goal,labust_msgs_msg_GoToPointGoal_common>>();
    }else if(type == eFeedback){
        ptr = std::make_shared<ROS2SubscriberImpl<labust_msgs::action::GoToPoint::Feedback,labust_msgs_msg_GoToPointFeedback_common>>();
    }else if(type == eResult){
        ptr = std::make_shared<ROS2SubscriberImpl<labust_msgs::action::GoToPoint::Result,labust_msgs_msg_GoToPointResult_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Goal' or 'Feedback' or 'Result'");
    }
    return ptr;
  }
  std::shared_ptr<MATLABActClientInterface> 
          ros2_labust_msgs_GoToPoint_action::generateActClientInterface(){
      return std::make_shared<ROS2ActClientImpl<labust_msgs::action::GoToPoint,labust_msgs::action::GoToPoint::Goal,labust_msgs::action::GoToPoint::Feedback::ConstSharedPtr,labust_msgs::action::GoToPoint::Result::ConstSharedPtr,labust_msgs_msg_GoToPointGoal_common,labust_msgs_msg_GoToPointFeedback_common,labust_msgs_msg_GoToPointResult_common>>();
  }
  std::shared_ptr<void> ros2_labust_msgs_GoToPoint_action::generateCppMessage(ElementType type, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    if(type == eGoal){
        auto msg = std::make_shared<labust_msgs::action::GoToPoint::Goal>();
        labust_msgs_msg_GoToPointGoal_common commonObj;
        commonObj.mCommonObjMap = commonObjMap;
        commonObj.copy_from_struct(msg.get(), arr[0], loader);
        return msg;
    }else if(type == eFeedback){
        auto msg = std::make_shared<labust_msgs::action::GoToPoint::Feedback>();
        labust_msgs_msg_GoToPointFeedback_common commonObj;
        commonObj.mCommonObjMap = commonObjMap;
        commonObj.copy_from_struct(msg.get(), arr[0], loader);
        return msg;
    }else if(type == eResult){
        auto msg = std::make_shared<labust_msgs::action::GoToPoint::Result>();
        labust_msgs_msg_GoToPointResult_common commonObj;
        commonObj.mCommonObjMap = commonObjMap;
        commonObj.copy_from_struct(msg.get(), arr[0], loader);
        return msg;
   }else{
        throw std::invalid_argument("Wrong input, Expected 'Goal' or 'Feedback' or 'Result'");
    }
  }
 matlab::data::StructArray ros2_labust_msgs_GoToPoint_action::generateMLMessage(ElementType type, 
                                                    void*  msgPtr ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    if(type == eGoal){
	    labust_msgs_msg_GoToPointGoal_common commonObj;	
        commonObj.mCommonObjMap = commonObjMap;
	    MDFactory_T factory;
	    return commonObj.get_arr(factory, (labust_msgs::action::GoToPoint::Goal*)msgPtr, loader);
    }else if(type == eResult){
        labust_msgs_msg_GoToPointResult_common commonObj;	
        commonObj.mCommonObjMap = commonObjMap;
	    MDFactory_T factory;
	    return commonObj.get_arr(factory, (labust_msgs::action::GoToPoint::Result*)msgPtr, loader);
    }else if(type == eFeedback){
        labust_msgs_msg_GoToPointFeedback_common commonObj;
        commonObj.mCommonObjMap = commonObjMap;
	    MDFactory_T factory;
	    return commonObj.get_arr(factory, (labust_msgs::action::GoToPoint::Feedback*)msgPtr, loader);
    }
     else{
        throw std::invalid_argument("Wrong input, Expected 'Goal' or 'Feedback' or 'Result'");
    }
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(labust_msgs_msg_GoToPointGoal_common, MATLABROS2MsgInterface<labust_msgs::action::GoToPoint::Goal>)
CLASS_LOADER_REGISTER_CLASS(labust_msgs_msg_GoToPointFeedback_common, MATLABROS2MsgInterface<labust_msgs::action::GoToPoint::Feedback>)
CLASS_LOADER_REGISTER_CLASS(labust_msgs_msg_GoToPointResult_common, MATLABROS2MsgInterface<labust_msgs::action::GoToPoint::Result>)
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_GoToPoint_action, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1