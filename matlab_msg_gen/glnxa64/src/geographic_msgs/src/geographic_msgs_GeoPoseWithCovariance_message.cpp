// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for geographic_msgs/GeoPoseWithCovariance
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
#include "geographic_msgs/msg/geo_pose_with_covariance.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class GEOGRAPHIC_MSGS_EXPORT ros2_geographic_msgs_msg_GeoPoseWithCovariance_common : public MATLABROS2MsgInterface<geographic_msgs::msg::GeoPoseWithCovariance> {
  public:
    virtual ~ros2_geographic_msgs_msg_GeoPoseWithCovariance_common(){}
    virtual void copy_from_struct(geographic_msgs::msg::GeoPoseWithCovariance* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const geographic_msgs::msg::GeoPoseWithCovariance* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_geographic_msgs_msg_GeoPoseWithCovariance_common::copy_from_struct(geographic_msgs::msg::GeoPoseWithCovariance* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //pose
        const matlab::data::StructArray pose_arr = arr["pose"];
        auto msgClassPtr_pose = getCommonObject<geographic_msgs::msg::GeoPose>("ros2_geographic_msgs_msg_GeoPose_common",loader);
        msgClassPtr_pose->copy_from_struct(&msg->pose,pose_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'pose' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'pose' is wrong type; expected a struct.");
    }
    try {
        //covariance
        const matlab::data::TypedArray<double> covariance_arr = arr["covariance"];
        size_t nelem = 36;
        	std::copy(covariance_arr.begin(), covariance_arr.begin()+nelem, msg->covariance.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'covariance' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'covariance' is wrong type; expected a double.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_geographic_msgs_msg_GeoPoseWithCovariance_common::get_arr(MDFactory_T& factory, const geographic_msgs::msg::GeoPoseWithCovariance* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","pose","covariance"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("geographic_msgs/GeoPoseWithCovariance");
    // pose
    auto currentElement_pose = (msg + ctr)->pose;
    auto msgClassPtr_pose = getCommonObject<geographic_msgs::msg::GeoPose>("ros2_geographic_msgs_msg_GeoPose_common",loader);
    outArray[ctr]["pose"] = msgClassPtr_pose->get_arr(factory, &currentElement_pose, loader);
    // covariance
    auto currentElement_covariance = (msg + ctr)->covariance;
    outArray[ctr]["covariance"] = factory.createArray<geographic_msgs::msg::GeoPoseWithCovariance::_covariance_type::const_iterator, double>({currentElement_covariance.size(), 1}, currentElement_covariance.begin(), currentElement_covariance.end());
    }
    return std::move(outArray);
  } 
class GEOGRAPHIC_MSGS_EXPORT ros2_geographic_msgs_GeoPoseWithCovariance_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_geographic_msgs_GeoPoseWithCovariance_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_geographic_msgs_GeoPoseWithCovariance_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<geographic_msgs::msg::GeoPoseWithCovariance,ros2_geographic_msgs_msg_GeoPoseWithCovariance_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_geographic_msgs_GeoPoseWithCovariance_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<geographic_msgs::msg::GeoPoseWithCovariance,ros2_geographic_msgs_msg_GeoPoseWithCovariance_common>>();
  }
  std::shared_ptr<void> ros2_geographic_msgs_GeoPoseWithCovariance_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<geographic_msgs::msg::GeoPoseWithCovariance>();
    ros2_geographic_msgs_msg_GeoPoseWithCovariance_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_geographic_msgs_GeoPoseWithCovariance_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_geographic_msgs_msg_GeoPoseWithCovariance_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (geographic_msgs::msg::GeoPoseWithCovariance*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_geographic_msgs_msg_GeoPoseWithCovariance_common, MATLABROS2MsgInterface<geographic_msgs::msg::GeoPoseWithCovariance>)
CLASS_LOADER_REGISTER_CLASS(ros2_geographic_msgs_GeoPoseWithCovariance_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER