// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for geographic_msgs/RoutePath
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
#include "geographic_msgs/msg/route_path.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class GEOGRAPHIC_MSGS_EXPORT ros2_geographic_msgs_msg_RoutePath_common : public MATLABROS2MsgInterface<geographic_msgs::msg::RoutePath> {
  public:
    virtual ~ros2_geographic_msgs_msg_RoutePath_common(){}
    virtual void copy_from_struct(geographic_msgs::msg::RoutePath* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const geographic_msgs::msg::RoutePath* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_geographic_msgs_msg_RoutePath_common::copy_from_struct(geographic_msgs::msg::RoutePath* msg, const matlab::data::Struct& arr,
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
        //network
        const matlab::data::StructArray network_arr = arr["network"];
        auto msgClassPtr_network = getCommonObject<unique_identifier_msgs::msg::UUID>("ros2_unique_identifier_msgs_msg_UUID_common",loader);
        msgClassPtr_network->copy_from_struct(&msg->network,network_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'network' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'network' is wrong type; expected a struct.");
    }
    try {
        //segments
        const matlab::data::StructArray segments_arr = arr["segments"];
        for (auto _segmentsarr : segments_arr) {
        	unique_identifier_msgs::msg::UUID _val;
        auto msgClassPtr_segments = getCommonObject<unique_identifier_msgs::msg::UUID>("ros2_unique_identifier_msgs_msg_UUID_common",loader);
        msgClassPtr_segments->copy_from_struct(&_val,_segmentsarr,loader);
        	msg->segments.push_back(_val);
        }
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'segments' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'segments' is wrong type; expected a struct.");
    }
    try {
        //props
        const matlab::data::StructArray props_arr = arr["props"];
        for (auto _propsarr : props_arr) {
        	geographic_msgs::msg::KeyValue _val;
        auto msgClassPtr_props = getCommonObject<geographic_msgs::msg::KeyValue>("ros2_geographic_msgs_msg_KeyValue_common",loader);
        msgClassPtr_props->copy_from_struct(&_val,_propsarr,loader);
        	msg->props.push_back(_val);
        }
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'props' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'props' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_geographic_msgs_msg_RoutePath_common::get_arr(MDFactory_T& factory, const geographic_msgs::msg::RoutePath* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","header","network","segments","props"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("geographic_msgs/RoutePath");
    // header
    auto currentElement_header = (msg + ctr)->header;
    auto msgClassPtr_header = getCommonObject<std_msgs::msg::Header>("ros2_std_msgs_msg_Header_common",loader);
    outArray[ctr]["header"] = msgClassPtr_header->get_arr(factory, &currentElement_header, loader);
    // network
    auto currentElement_network = (msg + ctr)->network;
    auto msgClassPtr_network = getCommonObject<unique_identifier_msgs::msg::UUID>("ros2_unique_identifier_msgs_msg_UUID_common",loader);
    outArray[ctr]["network"] = msgClassPtr_network->get_arr(factory, &currentElement_network, loader);
    // segments
    auto currentElement_segments = (msg + ctr)->segments;
    auto msgClassPtr_segments = getCommonObject<unique_identifier_msgs::msg::UUID>("ros2_unique_identifier_msgs_msg_UUID_common",loader);
    outArray[ctr]["segments"] = msgClassPtr_segments->get_arr(factory,&currentElement_segments[0],loader,currentElement_segments.size());
    // props
    auto currentElement_props = (msg + ctr)->props;
    auto msgClassPtr_props = getCommonObject<geographic_msgs::msg::KeyValue>("ros2_geographic_msgs_msg_KeyValue_common",loader);
    outArray[ctr]["props"] = msgClassPtr_props->get_arr(factory,&currentElement_props[0],loader,currentElement_props.size());
    }
    return std::move(outArray);
  } 
class GEOGRAPHIC_MSGS_EXPORT ros2_geographic_msgs_RoutePath_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_geographic_msgs_RoutePath_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_geographic_msgs_RoutePath_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<geographic_msgs::msg::RoutePath,ros2_geographic_msgs_msg_RoutePath_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_geographic_msgs_RoutePath_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<geographic_msgs::msg::RoutePath,ros2_geographic_msgs_msg_RoutePath_common>>();
  }
  std::shared_ptr<void> ros2_geographic_msgs_RoutePath_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<geographic_msgs::msg::RoutePath>();
    ros2_geographic_msgs_msg_RoutePath_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_geographic_msgs_RoutePath_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_geographic_msgs_msg_RoutePath_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (geographic_msgs::msg::RoutePath*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_geographic_msgs_msg_RoutePath_common, MATLABROS2MsgInterface<geographic_msgs::msg::RoutePath>)
CLASS_LOADER_REGISTER_CLASS(ros2_geographic_msgs_RoutePath_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER