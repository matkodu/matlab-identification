// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for labust_msgs/BodyVelocityReq
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
#include "labust_msgs/msg/body_velocity_req.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class LABUST_MSGS_EXPORT ros2_labust_msgs_msg_BodyVelocityReq_common : public MATLABROS2MsgInterface<labust_msgs::msg::BodyVelocityReq> {
  public:
    virtual ~ros2_labust_msgs_msg_BodyVelocityReq_common(){}
    virtual void copy_from_struct(labust_msgs::msg::BodyVelocityReq* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const labust_msgs::msg::BodyVelocityReq* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_labust_msgs_msg_BodyVelocityReq_common::copy_from_struct(labust_msgs::msg::BodyVelocityReq* msg, const matlab::data::Struct& arr,
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
        //twist
        const matlab::data::StructArray twist_arr = arr["twist"];
        auto msgClassPtr_twist = getCommonObject<geometry_msgs::msg::Twist>("ros2_geometry_msgs_msg_Twist_common",loader);
        msgClassPtr_twist->copy_from_struct(&msg->twist,twist_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'twist' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'twist' is wrong type; expected a struct.");
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
  MDArray_T ros2_labust_msgs_msg_BodyVelocityReq_common::get_arr(MDFactory_T& factory, const labust_msgs::msg::BodyVelocityReq* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","header","goal","twist","disable_axis"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("labust_msgs/BodyVelocityReq");
    // header
    auto currentElement_header = (msg + ctr)->header;
    auto msgClassPtr_header = getCommonObject<std_msgs::msg::Header>("ros2_std_msgs_msg_Header_common",loader);
    outArray[ctr]["header"] = msgClassPtr_header->get_arr(factory, &currentElement_header, loader);
    // goal
    auto currentElement_goal = (msg + ctr)->goal;
    auto msgClassPtr_goal = getCommonObject<labust_msgs::msg::GoalDescriptor>("ros2_labust_msgs_msg_GoalDescriptor_common",loader);
    outArray[ctr]["goal"] = msgClassPtr_goal->get_arr(factory, &currentElement_goal, loader);
    // twist
    auto currentElement_twist = (msg + ctr)->twist;
    auto msgClassPtr_twist = getCommonObject<geometry_msgs::msg::Twist>("ros2_geometry_msgs_msg_Twist_common",loader);
    outArray[ctr]["twist"] = msgClassPtr_twist->get_arr(factory, &currentElement_twist, loader);
    // disable_axis
    auto currentElement_disable_axis = (msg + ctr)->disable_axis;
    auto msgClassPtr_disable_axis = getCommonObject<labust_msgs::msg::Bool6Axis>("ros2_labust_msgs_msg_Bool6Axis_common",loader);
    outArray[ctr]["disable_axis"] = msgClassPtr_disable_axis->get_arr(factory, &currentElement_disable_axis, loader);
    }
    return std::move(outArray);
  } 
class LABUST_MSGS_EXPORT ros2_labust_msgs_BodyVelocityReq_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_labust_msgs_BodyVelocityReq_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_labust_msgs_BodyVelocityReq_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<labust_msgs::msg::BodyVelocityReq,ros2_labust_msgs_msg_BodyVelocityReq_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_labust_msgs_BodyVelocityReq_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<labust_msgs::msg::BodyVelocityReq,ros2_labust_msgs_msg_BodyVelocityReq_common>>();
  }
  std::shared_ptr<void> ros2_labust_msgs_BodyVelocityReq_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<labust_msgs::msg::BodyVelocityReq>();
    ros2_labust_msgs_msg_BodyVelocityReq_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_labust_msgs_BodyVelocityReq_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_labust_msgs_msg_BodyVelocityReq_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (labust_msgs::msg::BodyVelocityReq*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_msg_BodyVelocityReq_common, MATLABROS2MsgInterface<labust_msgs::msg::BodyVelocityReq>)
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_BodyVelocityReq_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER