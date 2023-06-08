// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for labust_msgs/StartParser
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
#include "labust_msgs/msg/start_parser.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class LABUST_MSGS_EXPORT ros2_labust_msgs_msg_StartParser_common : public MATLABROS2MsgInterface<labust_msgs::msg::StartParser> {
  public:
    virtual ~ros2_labust_msgs_msg_StartParser_common(){}
    virtual void copy_from_struct(labust_msgs::msg::StartParser* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const labust_msgs::msg::StartParser* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_labust_msgs_msg_StartParser_common::copy_from_struct(labust_msgs::msg::StartParser* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //method
        const matlab::data::TypedArray<uint8_t> method_arr = arr["method"];
        msg->method = method_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'method' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'method' is wrong type; expected a uint8.");
    }
    try {
        //mission_data
        const matlab::data::CharArray mission_data_arr = arr["mission_data"];
        msg->mission_data = mission_data_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'mission_data' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'mission_data' is wrong type; expected a string.");
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
        //start_position
        const matlab::data::StructArray start_position_arr = arr["start_position"];
        auto msgClassPtr_start_position = getCommonObject<auv_msgs::msg::NED>("ros2_auv_msgs_msg_NED_common",loader);
        msgClassPtr_start_position->copy_from_struct(&msg->start_position,start_position_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'start_position' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'start_position' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_labust_msgs_msg_StartParser_common::get_arr(MDFactory_T& factory, const labust_msgs::msg::StartParser* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","method","FILENAME","STRING","mission_data","relative","start_position"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("labust_msgs/StartParser");
    // method
    auto currentElement_method = (msg + ctr)->method;
    outArray[ctr]["method"] = factory.createScalar(currentElement_method);
    // FILENAME
    auto currentElement_FILENAME = (msg + ctr)->FILENAME;
    outArray[ctr]["FILENAME"] = factory.createScalar(currentElement_FILENAME);
    // STRING
    auto currentElement_STRING = (msg + ctr)->STRING;
    outArray[ctr]["STRING"] = factory.createScalar(currentElement_STRING);
    // mission_data
    auto currentElement_mission_data = (msg + ctr)->mission_data;
    outArray[ctr]["mission_data"] = factory.createCharArray(currentElement_mission_data);
    // relative
    auto currentElement_relative = (msg + ctr)->relative;
    outArray[ctr]["relative"] = factory.createScalar(currentElement_relative);
    // start_position
    auto currentElement_start_position = (msg + ctr)->start_position;
    auto msgClassPtr_start_position = getCommonObject<auv_msgs::msg::NED>("ros2_auv_msgs_msg_NED_common",loader);
    outArray[ctr]["start_position"] = msgClassPtr_start_position->get_arr(factory, &currentElement_start_position, loader);
    }
    return std::move(outArray);
  } 
class LABUST_MSGS_EXPORT ros2_labust_msgs_StartParser_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_labust_msgs_StartParser_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_labust_msgs_StartParser_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<labust_msgs::msg::StartParser,ros2_labust_msgs_msg_StartParser_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_labust_msgs_StartParser_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<labust_msgs::msg::StartParser,ros2_labust_msgs_msg_StartParser_common>>();
  }
  std::shared_ptr<void> ros2_labust_msgs_StartParser_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<labust_msgs::msg::StartParser>();
    ros2_labust_msgs_msg_StartParser_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_labust_msgs_StartParser_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_labust_msgs_msg_StartParser_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (labust_msgs::msg::StartParser*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_msg_StartParser_common, MATLABROS2MsgInterface<labust_msgs::msg::StartParser>)
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_StartParser_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER