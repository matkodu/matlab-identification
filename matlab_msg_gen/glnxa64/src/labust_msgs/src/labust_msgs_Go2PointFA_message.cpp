// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for labust_msgs/Go2PointFA
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
#include "labust_msgs/msg/go2_point_fa.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class LABUST_MSGS_EXPORT ros2_labust_msgs_msg_Go2PointFA_common : public MATLABROS2MsgInterface<labust_msgs::msg::Go2PointFA> {
  public:
    virtual ~ros2_labust_msgs_msg_Go2PointFA_common(){}
    virtual void copy_from_struct(labust_msgs::msg::Go2PointFA* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const labust_msgs::msg::Go2PointFA* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_labust_msgs_msg_Go2PointFA_common::copy_from_struct(labust_msgs::msg::Go2PointFA* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //point
        const matlab::data::StructArray point_arr = arr["point"];
        auto msgClassPtr_point = getCommonObject<auv_msgs::msg::NED>("ros2_auv_msgs_msg_NED_common",loader);
        msgClassPtr_point->copy_from_struct(&msg->point,point_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'point' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'point' is wrong type; expected a struct.");
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
        //speed
        const matlab::data::TypedArray<float> speed_arr = arr["speed"];
        msg->speed = speed_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'speed' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'speed' is wrong type; expected a single.");
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
  MDArray_T ros2_labust_msgs_msg_Go2PointFA_common::get_arr(MDFactory_T& factory, const labust_msgs::msg::Go2PointFA* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","point","heading","speed","victory_radius"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("labust_msgs/Go2PointFA");
    // point
    auto currentElement_point = (msg + ctr)->point;
    auto msgClassPtr_point = getCommonObject<auv_msgs::msg::NED>("ros2_auv_msgs_msg_NED_common",loader);
    outArray[ctr]["point"] = msgClassPtr_point->get_arr(factory, &currentElement_point, loader);
    // heading
    auto currentElement_heading = (msg + ctr)->heading;
    outArray[ctr]["heading"] = factory.createScalar(currentElement_heading);
    // speed
    auto currentElement_speed = (msg + ctr)->speed;
    outArray[ctr]["speed"] = factory.createScalar(currentElement_speed);
    // victory_radius
    auto currentElement_victory_radius = (msg + ctr)->victory_radius;
    outArray[ctr]["victory_radius"] = factory.createScalar(currentElement_victory_radius);
    }
    return std::move(outArray);
  } 
class LABUST_MSGS_EXPORT ros2_labust_msgs_Go2PointFA_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_labust_msgs_Go2PointFA_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_labust_msgs_Go2PointFA_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<labust_msgs::msg::Go2PointFA,ros2_labust_msgs_msg_Go2PointFA_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_labust_msgs_Go2PointFA_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<labust_msgs::msg::Go2PointFA,ros2_labust_msgs_msg_Go2PointFA_common>>();
  }
  std::shared_ptr<void> ros2_labust_msgs_Go2PointFA_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<labust_msgs::msg::Go2PointFA>();
    ros2_labust_msgs_msg_Go2PointFA_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_labust_msgs_Go2PointFA_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_labust_msgs_msg_Go2PointFA_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (labust_msgs::msg::Go2PointFA*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_msg_Go2PointFA_common, MATLABROS2MsgInterface<labust_msgs::msg::Go2PointFA>)
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_Go2PointFA_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER