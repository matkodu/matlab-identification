// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for labust_msgs/NavStsReq
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
#include "labust_msgs/msg/nav_sts_req.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class LABUST_MSGS_EXPORT ros2_labust_msgs_msg_NavStsReq_common : public MATLABROS2MsgInterface<labust_msgs::msg::NavStsReq> {
  public:
    virtual ~ros2_labust_msgs_msg_NavStsReq_common(){}
    virtual void copy_from_struct(labust_msgs::msg::NavStsReq* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const labust_msgs::msg::NavStsReq* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_labust_msgs_msg_NavStsReq_common::copy_from_struct(labust_msgs::msg::NavStsReq* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //header
        const matlab::data::StructArray header_arr = arr["header"];
        auto msgClassPtr_header = getCommonObject<std_msgs::msg::Header>("ros2_std_msgs_msg_Header_common",loader);
        msgClassPtr_header->copy_from_struct(&msg->header,header_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'header' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'header' is wrong type; expected a struct.");
    }
    try {
        //global_position
        const matlab::data::StructArray global_position_arr = arr["global_position"];
        auto msgClassPtr_global_position = getCommonObject<geographic_msgs::msg::GeoPoint>("ros2_geographic_msgs_msg_GeoPoint_common",loader);
        msgClassPtr_global_position->copy_from_struct(&msg->global_position,global_position_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'global_position' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'global_position' is wrong type; expected a struct.");
    }
    try {
        //origin
        const matlab::data::StructArray origin_arr = arr["origin"];
        auto msgClassPtr_origin = getCommonObject<geographic_msgs::msg::GeoPoint>("ros2_geographic_msgs_msg_GeoPoint_common",loader);
        msgClassPtr_origin->copy_from_struct(&msg->origin,origin_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'origin' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'origin' is wrong type; expected a struct.");
    }
    try {
        //goal
        const matlab::data::StructArray goal_arr = arr["goal"];
        auto msgClassPtr_goal = getCommonObject<labust_msgs::msg::GoalDescriptor>("ros2_labust_msgs_msg_GoalDescriptor_common",loader);
        msgClassPtr_goal->copy_from_struct(&msg->goal,goal_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'goal' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'goal' is wrong type; expected a struct.");
    }
    try {
        //position
        const matlab::data::StructArray position_arr = arr["position"];
        auto msgClassPtr_position = getCommonObject<auv_msgs::msg::NED>("ros2_auv_msgs_msg_NED_common",loader);
        msgClassPtr_position->copy_from_struct(&msg->position,position_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'position' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'position' is wrong type; expected a struct.");
    }
    try {
        //altitude
        const matlab::data::TypedArray<float> altitude_arr = arr["altitude"];
        msg->altitude = altitude_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'altitude' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'altitude' is wrong type; expected a single.");
    }
    try {
        //body_velocity
        const matlab::data::StructArray body_velocity_arr = arr["body_velocity"];
        auto msgClassPtr_body_velocity = getCommonObject<geometry_msgs::msg::Point>("ros2_geometry_msgs_msg_Point_common",loader);
        msgClassPtr_body_velocity->copy_from_struct(&msg->body_velocity,body_velocity_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'body_velocity' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'body_velocity' is wrong type; expected a struct.");
    }
    try {
        //gbody_velocity
        const matlab::data::StructArray gbody_velocity_arr = arr["gbody_velocity"];
        auto msgClassPtr_gbody_velocity = getCommonObject<geometry_msgs::msg::Point>("ros2_geometry_msgs_msg_Point_common",loader);
        msgClassPtr_gbody_velocity->copy_from_struct(&msg->gbody_velocity,gbody_velocity_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'gbody_velocity' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'gbody_velocity' is wrong type; expected a struct.");
    }
    try {
        //orientation
        const matlab::data::StructArray orientation_arr = arr["orientation"];
        auto msgClassPtr_orientation = getCommonObject<labust_msgs::msg::RPY>("ros2_labust_msgs_msg_RPY_common",loader);
        msgClassPtr_orientation->copy_from_struct(&msg->orientation,orientation_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'orientation' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'orientation' is wrong type; expected a struct.");
    }
    try {
        //orientation_rate
        const matlab::data::StructArray orientation_rate_arr = arr["orientation_rate"];
        auto msgClassPtr_orientation_rate = getCommonObject<labust_msgs::msg::RPY>("ros2_labust_msgs_msg_RPY_common",loader);
        msgClassPtr_orientation_rate->copy_from_struct(&msg->orientation_rate,orientation_rate_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'orientation_rate' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'orientation_rate' is wrong type; expected a struct.");
    }
    try {
        //position_tolerance
        const matlab::data::StructArray position_tolerance_arr = arr["position_tolerance"];
        auto msgClassPtr_position_tolerance = getCommonObject<geometry_msgs::msg::Vector3>("ros2_geometry_msgs_msg_Vector3_common",loader);
        msgClassPtr_position_tolerance->copy_from_struct(&msg->position_tolerance,position_tolerance_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'position_tolerance' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'position_tolerance' is wrong type; expected a struct.");
    }
    try {
        //orientation_tolerance
        const matlab::data::StructArray orientation_tolerance_arr = arr["orientation_tolerance"];
        auto msgClassPtr_orientation_tolerance = getCommonObject<labust_msgs::msg::RPY>("ros2_labust_msgs_msg_RPY_common",loader);
        msgClassPtr_orientation_tolerance->copy_from_struct(&msg->orientation_tolerance,orientation_tolerance_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'orientation_tolerance' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'orientation_tolerance' is wrong type; expected a struct.");
    }
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
  MDArray_T ros2_labust_msgs_msg_NavStsReq_common::get_arr(MDFactory_T& factory, const labust_msgs::msg::NavStsReq* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","header","global_position","origin","goal","position","altitude","body_velocity","gbody_velocity","orientation","orientation_rate","position_tolerance","orientation_tolerance","disable_axis"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("labust_msgs/NavStsReq");
    // header
    auto currentElement_header = (msg + ctr)->header;
    auto msgClassPtr_header = getCommonObject<std_msgs::msg::Header>("ros2_std_msgs_msg_Header_common",loader);
    outArray[ctr]["header"] = msgClassPtr_header->get_arr(factory, &currentElement_header, loader);
    // global_position
    auto currentElement_global_position = (msg + ctr)->global_position;
    auto msgClassPtr_global_position = getCommonObject<geographic_msgs::msg::GeoPoint>("ros2_geographic_msgs_msg_GeoPoint_common",loader);
    outArray[ctr]["global_position"] = msgClassPtr_global_position->get_arr(factory, &currentElement_global_position, loader);
    // origin
    auto currentElement_origin = (msg + ctr)->origin;
    auto msgClassPtr_origin = getCommonObject<geographic_msgs::msg::GeoPoint>("ros2_geographic_msgs_msg_GeoPoint_common",loader);
    outArray[ctr]["origin"] = msgClassPtr_origin->get_arr(factory, &currentElement_origin, loader);
    // goal
    auto currentElement_goal = (msg + ctr)->goal;
    auto msgClassPtr_goal = getCommonObject<labust_msgs::msg::GoalDescriptor>("ros2_labust_msgs_msg_GoalDescriptor_common",loader);
    outArray[ctr]["goal"] = msgClassPtr_goal->get_arr(factory, &currentElement_goal, loader);
    // position
    auto currentElement_position = (msg + ctr)->position;
    auto msgClassPtr_position = getCommonObject<auv_msgs::msg::NED>("ros2_auv_msgs_msg_NED_common",loader);
    outArray[ctr]["position"] = msgClassPtr_position->get_arr(factory, &currentElement_position, loader);
    // altitude
    auto currentElement_altitude = (msg + ctr)->altitude;
    outArray[ctr]["altitude"] = factory.createScalar(currentElement_altitude);
    // body_velocity
    auto currentElement_body_velocity = (msg + ctr)->body_velocity;
    auto msgClassPtr_body_velocity = getCommonObject<geometry_msgs::msg::Point>("ros2_geometry_msgs_msg_Point_common",loader);
    outArray[ctr]["body_velocity"] = msgClassPtr_body_velocity->get_arr(factory, &currentElement_body_velocity, loader);
    // gbody_velocity
    auto currentElement_gbody_velocity = (msg + ctr)->gbody_velocity;
    auto msgClassPtr_gbody_velocity = getCommonObject<geometry_msgs::msg::Point>("ros2_geometry_msgs_msg_Point_common",loader);
    outArray[ctr]["gbody_velocity"] = msgClassPtr_gbody_velocity->get_arr(factory, &currentElement_gbody_velocity, loader);
    // orientation
    auto currentElement_orientation = (msg + ctr)->orientation;
    auto msgClassPtr_orientation = getCommonObject<labust_msgs::msg::RPY>("ros2_labust_msgs_msg_RPY_common",loader);
    outArray[ctr]["orientation"] = msgClassPtr_orientation->get_arr(factory, &currentElement_orientation, loader);
    // orientation_rate
    auto currentElement_orientation_rate = (msg + ctr)->orientation_rate;
    auto msgClassPtr_orientation_rate = getCommonObject<labust_msgs::msg::RPY>("ros2_labust_msgs_msg_RPY_common",loader);
    outArray[ctr]["orientation_rate"] = msgClassPtr_orientation_rate->get_arr(factory, &currentElement_orientation_rate, loader);
    // position_tolerance
    auto currentElement_position_tolerance = (msg + ctr)->position_tolerance;
    auto msgClassPtr_position_tolerance = getCommonObject<geometry_msgs::msg::Vector3>("ros2_geometry_msgs_msg_Vector3_common",loader);
    outArray[ctr]["position_tolerance"] = msgClassPtr_position_tolerance->get_arr(factory, &currentElement_position_tolerance, loader);
    // orientation_tolerance
    auto currentElement_orientation_tolerance = (msg + ctr)->orientation_tolerance;
    auto msgClassPtr_orientation_tolerance = getCommonObject<labust_msgs::msg::RPY>("ros2_labust_msgs_msg_RPY_common",loader);
    outArray[ctr]["orientation_tolerance"] = msgClassPtr_orientation_tolerance->get_arr(factory, &currentElement_orientation_tolerance, loader);
    // disable_axis
    auto currentElement_disable_axis = (msg + ctr)->disable_axis;
    auto msgClassPtr_disable_axis = getCommonObject<labust_msgs::msg::Bool6Axis>("ros2_labust_msgs_msg_Bool6Axis_common",loader);
    outArray[ctr]["disable_axis"] = msgClassPtr_disable_axis->get_arr(factory, &currentElement_disable_axis, loader);
    }
    return std::move(outArray);
  } 
class LABUST_MSGS_EXPORT ros2_labust_msgs_NavStsReq_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_labust_msgs_NavStsReq_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_labust_msgs_NavStsReq_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<labust_msgs::msg::NavStsReq,ros2_labust_msgs_msg_NavStsReq_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_labust_msgs_NavStsReq_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<labust_msgs::msg::NavStsReq,ros2_labust_msgs_msg_NavStsReq_common>>();
  }
  std::shared_ptr<void> ros2_labust_msgs_NavStsReq_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<labust_msgs::msg::NavStsReq>();
    ros2_labust_msgs_msg_NavStsReq_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_labust_msgs_NavStsReq_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_labust_msgs_msg_NavStsReq_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (labust_msgs::msg::NavStsReq*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_msg_NavStsReq_common, MATLABROS2MsgInterface<labust_msgs::msg::NavStsReq>)
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_NavStsReq_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER