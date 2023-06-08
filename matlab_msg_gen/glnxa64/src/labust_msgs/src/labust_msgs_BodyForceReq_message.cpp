// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for labust_msgs/BodyForceReq
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
#include "labust_msgs/msg/body_force_req.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class LABUST_MSGS_EXPORT ros2_labust_msgs_msg_BodyForceReq_common : public MATLABROS2MsgInterface<labust_msgs::msg::BodyForceReq> {
  public:
    virtual ~ros2_labust_msgs_msg_BodyForceReq_common(){}
    virtual void copy_from_struct(labust_msgs::msg::BodyForceReq* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const labust_msgs::msg::BodyForceReq* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_labust_msgs_msg_BodyForceReq_common::copy_from_struct(labust_msgs::msg::BodyForceReq* msg, const matlab::data::Struct& arr,
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
        //wrench
        const matlab::data::StructArray wrench_arr = arr["wrench"];
        auto msgClassPtr_wrench = getCommonObject<geometry_msgs::msg::Wrench>("ros2_geometry_msgs_msg_Wrench_common",loader);
        msgClassPtr_wrench->copy_from_struct(&msg->wrench,wrench_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'wrench' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'wrench' is wrong type; expected a struct.");
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
    try {
        //windup
        const matlab::data::StructArray windup_arr = arr["windup"];
        auto msgClassPtr_windup = getCommonObject<labust_msgs::msg::Windup6Axis>("ros2_labust_msgs_msg_Windup6Axis_common",loader);
        msgClassPtr_windup->copy_from_struct(&msg->windup,windup_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'windup' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'windup' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_labust_msgs_msg_BodyForceReq_common::get_arr(MDFactory_T& factory, const labust_msgs::msg::BodyForceReq* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","header","goal","wrench","disable_axis","windup"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("labust_msgs/BodyForceReq");
    // header
    auto currentElement_header = (msg + ctr)->header;
    auto msgClassPtr_header = getCommonObject<std_msgs::msg::Header>("ros2_std_msgs_msg_Header_common",loader);
    outArray[ctr]["header"] = msgClassPtr_header->get_arr(factory, &currentElement_header, loader);
    // goal
    auto currentElement_goal = (msg + ctr)->goal;
    auto msgClassPtr_goal = getCommonObject<labust_msgs::msg::GoalDescriptor>("ros2_labust_msgs_msg_GoalDescriptor_common",loader);
    outArray[ctr]["goal"] = msgClassPtr_goal->get_arr(factory, &currentElement_goal, loader);
    // wrench
    auto currentElement_wrench = (msg + ctr)->wrench;
    auto msgClassPtr_wrench = getCommonObject<geometry_msgs::msg::Wrench>("ros2_geometry_msgs_msg_Wrench_common",loader);
    outArray[ctr]["wrench"] = msgClassPtr_wrench->get_arr(factory, &currentElement_wrench, loader);
    // disable_axis
    auto currentElement_disable_axis = (msg + ctr)->disable_axis;
    auto msgClassPtr_disable_axis = getCommonObject<labust_msgs::msg::Bool6Axis>("ros2_labust_msgs_msg_Bool6Axis_common",loader);
    outArray[ctr]["disable_axis"] = msgClassPtr_disable_axis->get_arr(factory, &currentElement_disable_axis, loader);
    // windup
    auto currentElement_windup = (msg + ctr)->windup;
    auto msgClassPtr_windup = getCommonObject<labust_msgs::msg::Windup6Axis>("ros2_labust_msgs_msg_Windup6Axis_common",loader);
    outArray[ctr]["windup"] = msgClassPtr_windup->get_arr(factory, &currentElement_windup, loader);
    }
    return std::move(outArray);
  } 
class LABUST_MSGS_EXPORT ros2_labust_msgs_BodyForceReq_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_labust_msgs_BodyForceReq_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_labust_msgs_BodyForceReq_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<labust_msgs::msg::BodyForceReq,ros2_labust_msgs_msg_BodyForceReq_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_labust_msgs_BodyForceReq_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<labust_msgs::msg::BodyForceReq,ros2_labust_msgs_msg_BodyForceReq_common>>();
  }
  std::shared_ptr<void> ros2_labust_msgs_BodyForceReq_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<labust_msgs::msg::BodyForceReq>();
    ros2_labust_msgs_msg_BodyForceReq_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_labust_msgs_BodyForceReq_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_labust_msgs_msg_BodyForceReq_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (labust_msgs::msg::BodyForceReq*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_msg_BodyForceReq_common, MATLABROS2MsgInterface<labust_msgs::msg::BodyForceReq>)
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_BodyForceReq_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER