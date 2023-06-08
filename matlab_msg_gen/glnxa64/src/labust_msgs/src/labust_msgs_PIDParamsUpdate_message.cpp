// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for labust_msgs/PIDParamsUpdate
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
#include "labust_msgs/msg/pid_params_update.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class LABUST_MSGS_EXPORT ros2_labust_msgs_msg_PIDParamsUpdate_common : public MATLABROS2MsgInterface<labust_msgs::msg::PIDParamsUpdate> {
  public:
    virtual ~ros2_labust_msgs_msg_PIDParamsUpdate_common(){}
    virtual void copy_from_struct(labust_msgs::msg::PIDParamsUpdate* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const labust_msgs::msg::PIDParamsUpdate* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_labust_msgs_msg_PIDParamsUpdate_common::copy_from_struct(labust_msgs::msg::PIDParamsUpdate* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //kp
        const matlab::data::TypedArray<float> kp_arr = arr["kp"];
        msg->kp = kp_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'kp' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'kp' is wrong type; expected a single.");
    }
    try {
        //ki
        const matlab::data::TypedArray<float> ki_arr = arr["ki"];
        msg->ki = ki_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'ki' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'ki' is wrong type; expected a single.");
    }
    try {
        //kd
        const matlab::data::TypedArray<float> kd_arr = arr["kd"];
        msg->kd = kd_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'kd' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'kd' is wrong type; expected a single.");
    }
    try {
        //b
        const matlab::data::TypedArray<float> b_arr = arr["b"];
        msg->b = b_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'b' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'b' is wrong type; expected a single.");
    }
    try {
        //ulow
        const matlab::data::TypedArray<float> ulow_arr = arr["ulow"];
        msg->ulow = ulow_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'ulow' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'ulow' is wrong type; expected a single.");
    }
    try {
        //uhigh
        const matlab::data::TypedArray<float> uhigh_arr = arr["uhigh"];
        msg->uhigh = uhigh_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'uhigh' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'uhigh' is wrong type; expected a single.");
    }
    try {
        //ilow
        const matlab::data::TypedArray<float> ilow_arr = arr["ilow"];
        msg->ilow = ilow_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'ilow' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'ilow' is wrong type; expected a single.");
    }
    try {
        //ihigh
        const matlab::data::TypedArray<float> ihigh_arr = arr["ihigh"];
        msg->ihigh = ihigh_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'ihigh' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'ihigh' is wrong type; expected a single.");
    }
    try {
        //dof
        const matlab::data::TypedArray<int32_t> dof_arr = arr["dof"];
        msg->dof = dof_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'dof' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'dof' is wrong type; expected a int32.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_labust_msgs_msg_PIDParamsUpdate_common::get_arr(MDFactory_T& factory, const labust_msgs::msg::PIDParamsUpdate* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","SURGE","SWAY","HEAVE","ROLL","PITCH","YAW","kp","ki","kd","b","ulow","uhigh","ilow","ihigh","dof"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("labust_msgs/PIDParamsUpdate");
    // SURGE
    auto currentElement_SURGE = (msg + ctr)->SURGE;
    outArray[ctr]["SURGE"] = factory.createScalar(currentElement_SURGE);
    // SWAY
    auto currentElement_SWAY = (msg + ctr)->SWAY;
    outArray[ctr]["SWAY"] = factory.createScalar(currentElement_SWAY);
    // HEAVE
    auto currentElement_HEAVE = (msg + ctr)->HEAVE;
    outArray[ctr]["HEAVE"] = factory.createScalar(currentElement_HEAVE);
    // ROLL
    auto currentElement_ROLL = (msg + ctr)->ROLL;
    outArray[ctr]["ROLL"] = factory.createScalar(currentElement_ROLL);
    // PITCH
    auto currentElement_PITCH = (msg + ctr)->PITCH;
    outArray[ctr]["PITCH"] = factory.createScalar(currentElement_PITCH);
    // YAW
    auto currentElement_YAW = (msg + ctr)->YAW;
    outArray[ctr]["YAW"] = factory.createScalar(currentElement_YAW);
    // kp
    auto currentElement_kp = (msg + ctr)->kp;
    outArray[ctr]["kp"] = factory.createScalar(currentElement_kp);
    // ki
    auto currentElement_ki = (msg + ctr)->ki;
    outArray[ctr]["ki"] = factory.createScalar(currentElement_ki);
    // kd
    auto currentElement_kd = (msg + ctr)->kd;
    outArray[ctr]["kd"] = factory.createScalar(currentElement_kd);
    // b
    auto currentElement_b = (msg + ctr)->b;
    outArray[ctr]["b"] = factory.createScalar(currentElement_b);
    // ulow
    auto currentElement_ulow = (msg + ctr)->ulow;
    outArray[ctr]["ulow"] = factory.createScalar(currentElement_ulow);
    // uhigh
    auto currentElement_uhigh = (msg + ctr)->uhigh;
    outArray[ctr]["uhigh"] = factory.createScalar(currentElement_uhigh);
    // ilow
    auto currentElement_ilow = (msg + ctr)->ilow;
    outArray[ctr]["ilow"] = factory.createScalar(currentElement_ilow);
    // ihigh
    auto currentElement_ihigh = (msg + ctr)->ihigh;
    outArray[ctr]["ihigh"] = factory.createScalar(currentElement_ihigh);
    // dof
    auto currentElement_dof = (msg + ctr)->dof;
    outArray[ctr]["dof"] = factory.createScalar(currentElement_dof);
    }
    return std::move(outArray);
  } 
class LABUST_MSGS_EXPORT ros2_labust_msgs_PIDParamsUpdate_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_labust_msgs_PIDParamsUpdate_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_labust_msgs_PIDParamsUpdate_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<labust_msgs::msg::PIDParamsUpdate,ros2_labust_msgs_msg_PIDParamsUpdate_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_labust_msgs_PIDParamsUpdate_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<labust_msgs::msg::PIDParamsUpdate,ros2_labust_msgs_msg_PIDParamsUpdate_common>>();
  }
  std::shared_ptr<void> ros2_labust_msgs_PIDParamsUpdate_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<labust_msgs::msg::PIDParamsUpdate>();
    ros2_labust_msgs_msg_PIDParamsUpdate_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_labust_msgs_PIDParamsUpdate_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_labust_msgs_msg_PIDParamsUpdate_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (labust_msgs::msg::PIDParamsUpdate*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_msg_PIDParamsUpdate_common, MATLABROS2MsgInterface<labust_msgs::msg::PIDParamsUpdate>)
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_PIDParamsUpdate_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER