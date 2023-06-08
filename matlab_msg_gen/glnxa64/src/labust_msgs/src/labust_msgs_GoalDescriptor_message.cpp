// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for labust_msgs/GoalDescriptor
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
#include "labust_msgs/msg/goal_descriptor.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class LABUST_MSGS_EXPORT ros2_labust_msgs_msg_GoalDescriptor_common : public MATLABROS2MsgInterface<labust_msgs::msg::GoalDescriptor> {
  public:
    virtual ~ros2_labust_msgs_msg_GoalDescriptor_common(){}
    virtual void copy_from_struct(labust_msgs::msg::GoalDescriptor* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const labust_msgs::msg::GoalDescriptor* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_labust_msgs_msg_GoalDescriptor_common::copy_from_struct(labust_msgs::msg::GoalDescriptor* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //requester
        const matlab::data::CharArray requester_arr = arr["requester"];
        msg->requester = requester_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'requester' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'requester' is wrong type; expected a string.");
    }
    try {
        //id
        const matlab::data::TypedArray<uint32_t> id_arr = arr["id"];
        msg->id = id_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'id' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'id' is wrong type; expected a uint32.");
    }
    try {
        //priority
        const matlab::data::TypedArray<uint32_t> priority_arr = arr["priority"];
        msg->priority = priority_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'priority' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'priority' is wrong type; expected a uint32.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_labust_msgs_msg_GoalDescriptor_common::get_arr(MDFactory_T& factory, const labust_msgs::msg::GoalDescriptor* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","requester","id","priority","PRIORITY_LOW","PRIORITY_NORMAL","PRIORITY_AVOID_OBSTACLE","PRIORITY_EMERGENCY","PRIORITY_MANUAL_OVERRIDE"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("labust_msgs/GoalDescriptor");
    // requester
    auto currentElement_requester = (msg + ctr)->requester;
    outArray[ctr]["requester"] = factory.createCharArray(currentElement_requester);
    // id
    auto currentElement_id = (msg + ctr)->id;
    outArray[ctr]["id"] = factory.createScalar(currentElement_id);
    // priority
    auto currentElement_priority = (msg + ctr)->priority;
    outArray[ctr]["priority"] = factory.createScalar(currentElement_priority);
    // PRIORITY_LOW
    auto currentElement_PRIORITY_LOW = (msg + ctr)->PRIORITY_LOW;
    outArray[ctr]["PRIORITY_LOW"] = factory.createScalar(currentElement_PRIORITY_LOW);
    // PRIORITY_NORMAL
    auto currentElement_PRIORITY_NORMAL = (msg + ctr)->PRIORITY_NORMAL;
    outArray[ctr]["PRIORITY_NORMAL"] = factory.createScalar(currentElement_PRIORITY_NORMAL);
    // PRIORITY_AVOID_OBSTACLE
    auto currentElement_PRIORITY_AVOID_OBSTACLE = (msg + ctr)->PRIORITY_AVOID_OBSTACLE;
    outArray[ctr]["PRIORITY_AVOID_OBSTACLE"] = factory.createScalar(currentElement_PRIORITY_AVOID_OBSTACLE);
    // PRIORITY_EMERGENCY
    auto currentElement_PRIORITY_EMERGENCY = (msg + ctr)->PRIORITY_EMERGENCY;
    outArray[ctr]["PRIORITY_EMERGENCY"] = factory.createScalar(currentElement_PRIORITY_EMERGENCY);
    // PRIORITY_MANUAL_OVERRIDE
    auto currentElement_PRIORITY_MANUAL_OVERRIDE = (msg + ctr)->PRIORITY_MANUAL_OVERRIDE;
    outArray[ctr]["PRIORITY_MANUAL_OVERRIDE"] = factory.createScalar(currentElement_PRIORITY_MANUAL_OVERRIDE);
    }
    return std::move(outArray);
  } 
class LABUST_MSGS_EXPORT ros2_labust_msgs_GoalDescriptor_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_labust_msgs_GoalDescriptor_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_labust_msgs_GoalDescriptor_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<labust_msgs::msg::GoalDescriptor,ros2_labust_msgs_msg_GoalDescriptor_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_labust_msgs_GoalDescriptor_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<labust_msgs::msg::GoalDescriptor,ros2_labust_msgs_msg_GoalDescriptor_common>>();
  }
  std::shared_ptr<void> ros2_labust_msgs_GoalDescriptor_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<labust_msgs::msg::GoalDescriptor>();
    ros2_labust_msgs_msg_GoalDescriptor_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_labust_msgs_GoalDescriptor_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_labust_msgs_msg_GoalDescriptor_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (labust_msgs::msg::GoalDescriptor*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_msg_GoalDescriptor_common, MATLABROS2MsgInterface<labust_msgs::msg::GoalDescriptor>)
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_GoalDescriptor_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER