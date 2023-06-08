// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for geographic_msgs/GeographicMapChanges
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
#include "geographic_msgs/msg/geographic_map_changes.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class GEOGRAPHIC_MSGS_EXPORT ros2_geographic_msgs_msg_GeographicMapChanges_common : public MATLABROS2MsgInterface<geographic_msgs::msg::GeographicMapChanges> {
  public:
    virtual ~ros2_geographic_msgs_msg_GeographicMapChanges_common(){}
    virtual void copy_from_struct(geographic_msgs::msg::GeographicMapChanges* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const geographic_msgs::msg::GeographicMapChanges* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_geographic_msgs_msg_GeographicMapChanges_common::copy_from_struct(geographic_msgs::msg::GeographicMapChanges* msg, const matlab::data::Struct& arr,
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
        //diffs
        const matlab::data::StructArray diffs_arr = arr["diffs"];
        auto msgClassPtr_diffs = getCommonObject<geographic_msgs::msg::GeographicMap>("ros2_geographic_msgs_msg_GeographicMap_common",loader);
        msgClassPtr_diffs->copy_from_struct(&msg->diffs,diffs_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'diffs' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'diffs' is wrong type; expected a struct.");
    }
    try {
        //deletes
        const matlab::data::StructArray deletes_arr = arr["deletes"];
        for (auto _deletesarr : deletes_arr) {
        	unique_identifier_msgs::msg::UUID _val;
        auto msgClassPtr_deletes = getCommonObject<unique_identifier_msgs::msg::UUID>("ros2_unique_identifier_msgs_msg_UUID_common",loader);
        msgClassPtr_deletes->copy_from_struct(&_val,_deletesarr,loader);
        	msg->deletes.push_back(_val);
        }
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'deletes' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'deletes' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_geographic_msgs_msg_GeographicMapChanges_common::get_arr(MDFactory_T& factory, const geographic_msgs::msg::GeographicMapChanges* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","header","diffs","deletes"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("geographic_msgs/GeographicMapChanges");
    // header
    auto currentElement_header = (msg + ctr)->header;
    auto msgClassPtr_header = getCommonObject<std_msgs::msg::Header>("ros2_std_msgs_msg_Header_common",loader);
    outArray[ctr]["header"] = msgClassPtr_header->get_arr(factory, &currentElement_header, loader);
    // diffs
    auto currentElement_diffs = (msg + ctr)->diffs;
    auto msgClassPtr_diffs = getCommonObject<geographic_msgs::msg::GeographicMap>("ros2_geographic_msgs_msg_GeographicMap_common",loader);
    outArray[ctr]["diffs"] = msgClassPtr_diffs->get_arr(factory, &currentElement_diffs, loader);
    // deletes
    auto currentElement_deletes = (msg + ctr)->deletes;
    auto msgClassPtr_deletes = getCommonObject<unique_identifier_msgs::msg::UUID>("ros2_unique_identifier_msgs_msg_UUID_common",loader);
    outArray[ctr]["deletes"] = msgClassPtr_deletes->get_arr(factory,&currentElement_deletes[0],loader,currentElement_deletes.size());
    }
    return std::move(outArray);
  } 
class GEOGRAPHIC_MSGS_EXPORT ros2_geographic_msgs_GeographicMapChanges_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_geographic_msgs_GeographicMapChanges_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_geographic_msgs_GeographicMapChanges_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<geographic_msgs::msg::GeographicMapChanges,ros2_geographic_msgs_msg_GeographicMapChanges_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_geographic_msgs_GeographicMapChanges_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<geographic_msgs::msg::GeographicMapChanges,ros2_geographic_msgs_msg_GeographicMapChanges_common>>();
  }
  std::shared_ptr<void> ros2_geographic_msgs_GeographicMapChanges_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<geographic_msgs::msg::GeographicMapChanges>();
    ros2_geographic_msgs_msg_GeographicMapChanges_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_geographic_msgs_GeographicMapChanges_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_geographic_msgs_msg_GeographicMapChanges_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (geographic_msgs::msg::GeographicMapChanges*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_geographic_msgs_msg_GeographicMapChanges_common, MATLABROS2MsgInterface<geographic_msgs::msg::GeographicMapChanges>)
CLASS_LOADER_REGISTER_CLASS(ros2_geographic_msgs_GeographicMapChanges_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER