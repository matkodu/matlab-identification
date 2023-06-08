// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for auv_msgs/WorldWaypointRequest
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
#include "auv_msgs/msg/world_waypoint_request.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class AUV_MSGS_EXPORT ros2_auv_msgs_msg_WorldWaypointRequest_common : public MATLABROS2MsgInterface<auv_msgs::msg::WorldWaypointRequest> {
  public:
    virtual ~ros2_auv_msgs_msg_WorldWaypointRequest_common(){}
    virtual void copy_from_struct(auv_msgs::msg::WorldWaypointRequest* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const auv_msgs::msg::WorldWaypointRequest* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_auv_msgs_msg_WorldWaypointRequest_common::copy_from_struct(auv_msgs::msg::WorldWaypointRequest* msg, const matlab::data::Struct& arr,
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
        //orientation
        const matlab::data::StructArray orientation_arr = arr["orientation"];
        auto msgClassPtr_orientation = getCommonObject<geometry_msgs::msg::Vector3>("ros2_geometry_msgs_msg_Vector3_common",loader);
        msgClassPtr_orientation->copy_from_struct(&msg->orientation,orientation_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'orientation' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'orientation' is wrong type; expected a struct.");
    }
    try {
        //disable_axis
        const matlab::data::TypedArray<bool> disable_axis_arr = arr["disable_axis"];
        size_t nelem = 6;
        	std::copy(disable_axis_arr.begin(), disable_axis_arr.begin()+nelem, msg->disable_axis.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'disable_axis' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'disable_axis' is wrong type; expected a logical.");
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
        auto msgClassPtr_orientation_tolerance = getCommonObject<geometry_msgs::msg::Vector3>("ros2_geometry_msgs_msg_Vector3_common",loader);
        msgClassPtr_orientation_tolerance->copy_from_struct(&msg->orientation_tolerance,orientation_tolerance_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'orientation_tolerance' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'orientation_tolerance' is wrong type; expected a struct.");
    }
    try {
        //twist_limit
        const matlab::data::StructArray twist_limit_arr = arr["twist_limit"];
        auto msgClassPtr_twist_limit = getCommonObject<geometry_msgs::msg::Twist>("ros2_geometry_msgs_msg_Twist_common",loader);
        msgClassPtr_twist_limit->copy_from_struct(&msg->twist_limit,twist_limit_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'twist_limit' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'twist_limit' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_auv_msgs_msg_WorldWaypointRequest_common::get_arr(MDFactory_T& factory, const auv_msgs::msg::WorldWaypointRequest* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","header","position","orientation","disable_axis","position_tolerance","orientation_tolerance","twist_limit"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("auv_msgs/WorldWaypointRequest");
    // header
    auto currentElement_header = (msg + ctr)->header;
    auto msgClassPtr_header = getCommonObject<std_msgs::msg::Header>("ros2_std_msgs_msg_Header_common",loader);
    outArray[ctr]["header"] = msgClassPtr_header->get_arr(factory, &currentElement_header, loader);
    // position
    auto currentElement_position = (msg + ctr)->position;
    auto msgClassPtr_position = getCommonObject<auv_msgs::msg::NED>("ros2_auv_msgs_msg_NED_common",loader);
    outArray[ctr]["position"] = msgClassPtr_position->get_arr(factory, &currentElement_position, loader);
    // orientation
    auto currentElement_orientation = (msg + ctr)->orientation;
    auto msgClassPtr_orientation = getCommonObject<geometry_msgs::msg::Vector3>("ros2_geometry_msgs_msg_Vector3_common",loader);
    outArray[ctr]["orientation"] = msgClassPtr_orientation->get_arr(factory, &currentElement_orientation, loader);
    // disable_axis
    auto currentElement_disable_axis = (msg + ctr)->disable_axis;
    outArray[ctr]["disable_axis"] = factory.createArray<auv_msgs::msg::WorldWaypointRequest::_disable_axis_type::const_iterator, bool>({currentElement_disable_axis.size(), 1}, currentElement_disable_axis.begin(), currentElement_disable_axis.end());
    // position_tolerance
    auto currentElement_position_tolerance = (msg + ctr)->position_tolerance;
    auto msgClassPtr_position_tolerance = getCommonObject<geometry_msgs::msg::Vector3>("ros2_geometry_msgs_msg_Vector3_common",loader);
    outArray[ctr]["position_tolerance"] = msgClassPtr_position_tolerance->get_arr(factory, &currentElement_position_tolerance, loader);
    // orientation_tolerance
    auto currentElement_orientation_tolerance = (msg + ctr)->orientation_tolerance;
    auto msgClassPtr_orientation_tolerance = getCommonObject<geometry_msgs::msg::Vector3>("ros2_geometry_msgs_msg_Vector3_common",loader);
    outArray[ctr]["orientation_tolerance"] = msgClassPtr_orientation_tolerance->get_arr(factory, &currentElement_orientation_tolerance, loader);
    // twist_limit
    auto currentElement_twist_limit = (msg + ctr)->twist_limit;
    auto msgClassPtr_twist_limit = getCommonObject<geometry_msgs::msg::Twist>("ros2_geometry_msgs_msg_Twist_common",loader);
    outArray[ctr]["twist_limit"] = msgClassPtr_twist_limit->get_arr(factory, &currentElement_twist_limit, loader);
    }
    return std::move(outArray);
  } 
class AUV_MSGS_EXPORT ros2_auv_msgs_WorldWaypointRequest_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_auv_msgs_WorldWaypointRequest_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_auv_msgs_WorldWaypointRequest_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<auv_msgs::msg::WorldWaypointRequest,ros2_auv_msgs_msg_WorldWaypointRequest_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_auv_msgs_WorldWaypointRequest_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<auv_msgs::msg::WorldWaypointRequest,ros2_auv_msgs_msg_WorldWaypointRequest_common>>();
  }
  std::shared_ptr<void> ros2_auv_msgs_WorldWaypointRequest_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<auv_msgs::msg::WorldWaypointRequest>();
    ros2_auv_msgs_msg_WorldWaypointRequest_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_auv_msgs_WorldWaypointRequest_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_auv_msgs_msg_WorldWaypointRequest_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (auv_msgs::msg::WorldWaypointRequest*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_auv_msgs_msg_WorldWaypointRequest_common, MATLABROS2MsgInterface<auv_msgs::msg::WorldWaypointRequest>)
CLASS_LOADER_REGISTER_CLASS(ros2_auv_msgs_WorldWaypointRequest_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER