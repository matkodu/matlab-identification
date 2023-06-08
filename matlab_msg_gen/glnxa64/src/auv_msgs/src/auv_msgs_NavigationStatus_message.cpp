// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for auv_msgs/NavigationStatus
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
#include "auv_msgs/msg/navigation_status.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class AUV_MSGS_EXPORT ros2_auv_msgs_msg_NavigationStatus_common : public MATLABROS2MsgInterface<auv_msgs::msg::NavigationStatus> {
  public:
    virtual ~ros2_auv_msgs_msg_NavigationStatus_common(){}
    virtual void copy_from_struct(auv_msgs::msg::NavigationStatus* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const auv_msgs::msg::NavigationStatus* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_auv_msgs_msg_NavigationStatus_common::copy_from_struct(auv_msgs::msg::NavigationStatus* msg, const matlab::data::Struct& arr,
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
        //seafloor_velocity
        const matlab::data::StructArray seafloor_velocity_arr = arr["seafloor_velocity"];
        auto msgClassPtr_seafloor_velocity = getCommonObject<geometry_msgs::msg::Point>("ros2_geometry_msgs_msg_Point_common",loader);
        msgClassPtr_seafloor_velocity->copy_from_struct(&msg->seafloor_velocity,seafloor_velocity_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'seafloor_velocity' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'seafloor_velocity' is wrong type; expected a struct.");
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
        //orientation_rate
        const matlab::data::StructArray orientation_rate_arr = arr["orientation_rate"];
        auto msgClassPtr_orientation_rate = getCommonObject<geometry_msgs::msg::Vector3>("ros2_geometry_msgs_msg_Vector3_common",loader);
        msgClassPtr_orientation_rate->copy_from_struct(&msg->orientation_rate,orientation_rate_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'orientation_rate' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'orientation_rate' is wrong type; expected a struct.");
    }
    try {
        //position_variance
        const matlab::data::StructArray position_variance_arr = arr["position_variance"];
        auto msgClassPtr_position_variance = getCommonObject<auv_msgs::msg::NED>("ros2_auv_msgs_msg_NED_common",loader);
        msgClassPtr_position_variance->copy_from_struct(&msg->position_variance,position_variance_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'position_variance' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'position_variance' is wrong type; expected a struct.");
    }
    try {
        //orientation_variance
        const matlab::data::StructArray orientation_variance_arr = arr["orientation_variance"];
        auto msgClassPtr_orientation_variance = getCommonObject<geometry_msgs::msg::Vector3>("ros2_geometry_msgs_msg_Vector3_common",loader);
        msgClassPtr_orientation_variance->copy_from_struct(&msg->orientation_variance,orientation_variance_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'orientation_variance' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'orientation_variance' is wrong type; expected a struct.");
    }
    try {
        //status
        const matlab::data::TypedArray<uint8_t> status_arr = arr["status"];
        msg->status = status_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'status' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'status' is wrong type; expected a uint8.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_auv_msgs_msg_NavigationStatus_common::get_arr(MDFactory_T& factory, const auv_msgs::msg::NavigationStatus* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","header","global_position","origin","position","altitude","body_velocity","seafloor_velocity","orientation","orientation_rate","position_variance","orientation_variance","status","STATUS_FAULT","STATUS_LOCAL_FRAME_OK","STATUS_GLOBAL_FRAME_OK","STATUS_POSITION_OK","STATUS_ESTIMATION_ERROR_OK","STATUS_WATER_VELOCITY_OK","STATUS_GROUND_VELOCITY_OK","STATUS_VELOCITY_OK","STATUS_ALL_OK"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("auv_msgs/NavigationStatus");
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
    // seafloor_velocity
    auto currentElement_seafloor_velocity = (msg + ctr)->seafloor_velocity;
    auto msgClassPtr_seafloor_velocity = getCommonObject<geometry_msgs::msg::Point>("ros2_geometry_msgs_msg_Point_common",loader);
    outArray[ctr]["seafloor_velocity"] = msgClassPtr_seafloor_velocity->get_arr(factory, &currentElement_seafloor_velocity, loader);
    // orientation
    auto currentElement_orientation = (msg + ctr)->orientation;
    auto msgClassPtr_orientation = getCommonObject<geometry_msgs::msg::Vector3>("ros2_geometry_msgs_msg_Vector3_common",loader);
    outArray[ctr]["orientation"] = msgClassPtr_orientation->get_arr(factory, &currentElement_orientation, loader);
    // orientation_rate
    auto currentElement_orientation_rate = (msg + ctr)->orientation_rate;
    auto msgClassPtr_orientation_rate = getCommonObject<geometry_msgs::msg::Vector3>("ros2_geometry_msgs_msg_Vector3_common",loader);
    outArray[ctr]["orientation_rate"] = msgClassPtr_orientation_rate->get_arr(factory, &currentElement_orientation_rate, loader);
    // position_variance
    auto currentElement_position_variance = (msg + ctr)->position_variance;
    auto msgClassPtr_position_variance = getCommonObject<auv_msgs::msg::NED>("ros2_auv_msgs_msg_NED_common",loader);
    outArray[ctr]["position_variance"] = msgClassPtr_position_variance->get_arr(factory, &currentElement_position_variance, loader);
    // orientation_variance
    auto currentElement_orientation_variance = (msg + ctr)->orientation_variance;
    auto msgClassPtr_orientation_variance = getCommonObject<geometry_msgs::msg::Vector3>("ros2_geometry_msgs_msg_Vector3_common",loader);
    outArray[ctr]["orientation_variance"] = msgClassPtr_orientation_variance->get_arr(factory, &currentElement_orientation_variance, loader);
    // status
    auto currentElement_status = (msg + ctr)->status;
    outArray[ctr]["status"] = factory.createScalar(currentElement_status);
    // STATUS_FAULT
    auto currentElement_STATUS_FAULT = (msg + ctr)->STATUS_FAULT;
    outArray[ctr]["STATUS_FAULT"] = factory.createScalar(currentElement_STATUS_FAULT);
    // STATUS_LOCAL_FRAME_OK
    auto currentElement_STATUS_LOCAL_FRAME_OK = (msg + ctr)->STATUS_LOCAL_FRAME_OK;
    outArray[ctr]["STATUS_LOCAL_FRAME_OK"] = factory.createScalar(currentElement_STATUS_LOCAL_FRAME_OK);
    // STATUS_GLOBAL_FRAME_OK
    auto currentElement_STATUS_GLOBAL_FRAME_OK = (msg + ctr)->STATUS_GLOBAL_FRAME_OK;
    outArray[ctr]["STATUS_GLOBAL_FRAME_OK"] = factory.createScalar(currentElement_STATUS_GLOBAL_FRAME_OK);
    // STATUS_POSITION_OK
    auto currentElement_STATUS_POSITION_OK = (msg + ctr)->STATUS_POSITION_OK;
    outArray[ctr]["STATUS_POSITION_OK"] = factory.createScalar(currentElement_STATUS_POSITION_OK);
    // STATUS_ESTIMATION_ERROR_OK
    auto currentElement_STATUS_ESTIMATION_ERROR_OK = (msg + ctr)->STATUS_ESTIMATION_ERROR_OK;
    outArray[ctr]["STATUS_ESTIMATION_ERROR_OK"] = factory.createScalar(currentElement_STATUS_ESTIMATION_ERROR_OK);
    // STATUS_WATER_VELOCITY_OK
    auto currentElement_STATUS_WATER_VELOCITY_OK = (msg + ctr)->STATUS_WATER_VELOCITY_OK;
    outArray[ctr]["STATUS_WATER_VELOCITY_OK"] = factory.createScalar(currentElement_STATUS_WATER_VELOCITY_OK);
    // STATUS_GROUND_VELOCITY_OK
    auto currentElement_STATUS_GROUND_VELOCITY_OK = (msg + ctr)->STATUS_GROUND_VELOCITY_OK;
    outArray[ctr]["STATUS_GROUND_VELOCITY_OK"] = factory.createScalar(currentElement_STATUS_GROUND_VELOCITY_OK);
    // STATUS_VELOCITY_OK
    auto currentElement_STATUS_VELOCITY_OK = (msg + ctr)->STATUS_VELOCITY_OK;
    outArray[ctr]["STATUS_VELOCITY_OK"] = factory.createScalar(currentElement_STATUS_VELOCITY_OK);
    // STATUS_ALL_OK
    auto currentElement_STATUS_ALL_OK = (msg + ctr)->STATUS_ALL_OK;
    outArray[ctr]["STATUS_ALL_OK"] = factory.createScalar(currentElement_STATUS_ALL_OK);
    }
    return std::move(outArray);
  } 
class AUV_MSGS_EXPORT ros2_auv_msgs_NavigationStatus_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_auv_msgs_NavigationStatus_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_auv_msgs_NavigationStatus_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<auv_msgs::msg::NavigationStatus,ros2_auv_msgs_msg_NavigationStatus_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_auv_msgs_NavigationStatus_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<auv_msgs::msg::NavigationStatus,ros2_auv_msgs_msg_NavigationStatus_common>>();
  }
  std::shared_ptr<void> ros2_auv_msgs_NavigationStatus_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<auv_msgs::msg::NavigationStatus>();
    ros2_auv_msgs_msg_NavigationStatus_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_auv_msgs_NavigationStatus_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_auv_msgs_msg_NavigationStatus_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (auv_msgs::msg::NavigationStatus*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_auv_msgs_msg_NavigationStatus_common, MATLABROS2MsgInterface<auv_msgs::msg::NavigationStatus>)
CLASS_LOADER_REGISTER_CLASS(ros2_auv_msgs_NavigationStatus_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER