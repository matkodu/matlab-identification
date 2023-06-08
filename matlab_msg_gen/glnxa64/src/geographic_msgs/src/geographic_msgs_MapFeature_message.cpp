// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for geographic_msgs/MapFeature
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
#include "geographic_msgs/msg/map_feature.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class GEOGRAPHIC_MSGS_EXPORT ros2_geographic_msgs_msg_MapFeature_common : public MATLABROS2MsgInterface<geographic_msgs::msg::MapFeature> {
  public:
    virtual ~ros2_geographic_msgs_msg_MapFeature_common(){}
    virtual void copy_from_struct(geographic_msgs::msg::MapFeature* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const geographic_msgs::msg::MapFeature* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_geographic_msgs_msg_MapFeature_common::copy_from_struct(geographic_msgs::msg::MapFeature* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //id
        const matlab::data::StructArray id_arr = arr["id"];
        auto msgClassPtr_id = getCommonObject<unique_identifier_msgs::msg::UUID>("ros2_unique_identifier_msgs_msg_UUID_common",loader);
        msgClassPtr_id->copy_from_struct(&msg->id,id_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'id' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'id' is wrong type; expected a struct.");
    }
    try {
        //components
        const matlab::data::StructArray components_arr = arr["components"];
        for (auto _componentsarr : components_arr) {
        	unique_identifier_msgs::msg::UUID _val;
        auto msgClassPtr_components = getCommonObject<unique_identifier_msgs::msg::UUID>("ros2_unique_identifier_msgs_msg_UUID_common",loader);
        msgClassPtr_components->copy_from_struct(&_val,_componentsarr,loader);
        	msg->components.push_back(_val);
        }
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'components' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'components' is wrong type; expected a struct.");
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
  MDArray_T ros2_geographic_msgs_msg_MapFeature_common::get_arr(MDFactory_T& factory, const geographic_msgs::msg::MapFeature* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","id","components","props"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("geographic_msgs/MapFeature");
    // id
    auto currentElement_id = (msg + ctr)->id;
    auto msgClassPtr_id = getCommonObject<unique_identifier_msgs::msg::UUID>("ros2_unique_identifier_msgs_msg_UUID_common",loader);
    outArray[ctr]["id"] = msgClassPtr_id->get_arr(factory, &currentElement_id, loader);
    // components
    auto currentElement_components = (msg + ctr)->components;
    auto msgClassPtr_components = getCommonObject<unique_identifier_msgs::msg::UUID>("ros2_unique_identifier_msgs_msg_UUID_common",loader);
    outArray[ctr]["components"] = msgClassPtr_components->get_arr(factory,&currentElement_components[0],loader,currentElement_components.size());
    // props
    auto currentElement_props = (msg + ctr)->props;
    auto msgClassPtr_props = getCommonObject<geographic_msgs::msg::KeyValue>("ros2_geographic_msgs_msg_KeyValue_common",loader);
    outArray[ctr]["props"] = msgClassPtr_props->get_arr(factory,&currentElement_props[0],loader,currentElement_props.size());
    }
    return std::move(outArray);
  } 
class GEOGRAPHIC_MSGS_EXPORT ros2_geographic_msgs_MapFeature_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_geographic_msgs_MapFeature_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_geographic_msgs_MapFeature_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<geographic_msgs::msg::MapFeature,ros2_geographic_msgs_msg_MapFeature_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_geographic_msgs_MapFeature_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<geographic_msgs::msg::MapFeature,ros2_geographic_msgs_msg_MapFeature_common>>();
  }
  std::shared_ptr<void> ros2_geographic_msgs_MapFeature_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<geographic_msgs::msg::MapFeature>();
    ros2_geographic_msgs_msg_MapFeature_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_geographic_msgs_MapFeature_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_geographic_msgs_msg_MapFeature_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (geographic_msgs::msg::MapFeature*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_geographic_msgs_msg_MapFeature_common, MATLABROS2MsgInterface<geographic_msgs::msg::MapFeature>)
CLASS_LOADER_REGISTER_CLASS(ros2_geographic_msgs_MapFeature_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER