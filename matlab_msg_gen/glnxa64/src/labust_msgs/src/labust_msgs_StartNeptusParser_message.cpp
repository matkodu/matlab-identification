// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for labust_msgs/StartNeptusParser
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
#include "labust_msgs/msg/start_neptus_parser.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class LABUST_MSGS_EXPORT ros2_labust_msgs_msg_StartNeptusParser_common : public MATLABROS2MsgInterface<labust_msgs::msg::StartNeptusParser> {
  public:
    virtual ~ros2_labust_msgs_msg_StartNeptusParser_common(){}
    virtual void copy_from_struct(labust_msgs::msg::StartNeptusParser* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const labust_msgs::msg::StartNeptusParser* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_labust_msgs_msg_StartNeptusParser_common::copy_from_struct(labust_msgs::msg::StartNeptusParser* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //file_name
        const matlab::data::CharArray file_name_arr = arr["file_name"];
        msg->file_name = file_name_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'file_name' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'file_name' is wrong type; expected a string.");
    }
    try {
        //relative
        const matlab::data::TypedArray<bool> relative_arr = arr["relative"];
        msg->relative = relative_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'relative' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'relative' is wrong type; expected a logical.");
    }
    try {
        //custom_start_flag
        const matlab::data::TypedArray<bool> custom_start_flag_arr = arr["custom_start_flag"];
        msg->custom_start_flag = custom_start_flag_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'custom_start_flag' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'custom_start_flag' is wrong type; expected a logical.");
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
        //custom_start
        const matlab::data::StructArray custom_start_arr = arr["custom_start"];
        auto msgClassPtr_custom_start = getCommonObject<geographic_msgs::msg::GeoPoint>("ros2_geographic_msgs_msg_GeoPoint_common",loader);
        msgClassPtr_custom_start->copy_from_struct(&msg->custom_start,custom_start_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'custom_start' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'custom_start' is wrong type; expected a struct.");
    }
    try {
        //underactuated
        const matlab::data::TypedArray<bool> underactuated_arr = arr["underactuated"];
        msg->underactuated = underactuated_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'underactuated' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'underactuated' is wrong type; expected a logical.");
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
        //heading
        const matlab::data::TypedArray<float> heading_arr = arr["heading"];
        msg->heading = heading_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'heading' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'heading' is wrong type; expected a single.");
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
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_labust_msgs_msg_StartNeptusParser_common::get_arr(MDFactory_T& factory, const labust_msgs::msg::StartNeptusParser* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","file_name","relative","custom_start_flag","origin","custom_start","underactuated","speed","heading","victory_radius"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("labust_msgs/StartNeptusParser");
    // file_name
    auto currentElement_file_name = (msg + ctr)->file_name;
    outArray[ctr]["file_name"] = factory.createCharArray(currentElement_file_name);
    // relative
    auto currentElement_relative = (msg + ctr)->relative;
    outArray[ctr]["relative"] = factory.createScalar(currentElement_relative);
    // custom_start_flag
    auto currentElement_custom_start_flag = (msg + ctr)->custom_start_flag;
    outArray[ctr]["custom_start_flag"] = factory.createScalar(currentElement_custom_start_flag);
    // origin
    auto currentElement_origin = (msg + ctr)->origin;
    auto msgClassPtr_origin = getCommonObject<geographic_msgs::msg::GeoPoint>("ros2_geographic_msgs_msg_GeoPoint_common",loader);
    outArray[ctr]["origin"] = msgClassPtr_origin->get_arr(factory, &currentElement_origin, loader);
    // custom_start
    auto currentElement_custom_start = (msg + ctr)->custom_start;
    auto msgClassPtr_custom_start = getCommonObject<geographic_msgs::msg::GeoPoint>("ros2_geographic_msgs_msg_GeoPoint_common",loader);
    outArray[ctr]["custom_start"] = msgClassPtr_custom_start->get_arr(factory, &currentElement_custom_start, loader);
    // underactuated
    auto currentElement_underactuated = (msg + ctr)->underactuated;
    outArray[ctr]["underactuated"] = factory.createScalar(currentElement_underactuated);
    // speed
    auto currentElement_speed = (msg + ctr)->speed;
    outArray[ctr]["speed"] = factory.createScalar(currentElement_speed);
    // heading
    auto currentElement_heading = (msg + ctr)->heading;
    outArray[ctr]["heading"] = factory.createScalar(currentElement_heading);
    // victory_radius
    auto currentElement_victory_radius = (msg + ctr)->victory_radius;
    outArray[ctr]["victory_radius"] = factory.createScalar(currentElement_victory_radius);
    }
    return std::move(outArray);
  } 
class LABUST_MSGS_EXPORT ros2_labust_msgs_StartNeptusParser_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_labust_msgs_StartNeptusParser_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_labust_msgs_StartNeptusParser_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<labust_msgs::msg::StartNeptusParser,ros2_labust_msgs_msg_StartNeptusParser_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_labust_msgs_StartNeptusParser_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<labust_msgs::msg::StartNeptusParser,ros2_labust_msgs_msg_StartNeptusParser_common>>();
  }
  std::shared_ptr<void> ros2_labust_msgs_StartNeptusParser_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<labust_msgs::msg::StartNeptusParser>();
    ros2_labust_msgs_msg_StartNeptusParser_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_labust_msgs_StartNeptusParser_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_labust_msgs_msg_StartNeptusParser_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (labust_msgs::msg::StartNeptusParser*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_msg_StartNeptusParser_common, MATLABROS2MsgInterface<labust_msgs::msg::StartNeptusParser>)
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_StartNeptusParser_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER