// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for labust_msgs/RegisterController
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
#include "labust_msgs/msg/register_controller.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class LABUST_MSGS_EXPORT ros2_labust_msgs_msg_RegisterController_common : public MATLABROS2MsgInterface<labust_msgs::msg::RegisterController> {
  public:
    virtual ~ros2_labust_msgs_msg_RegisterController_common(){}
    virtual void copy_from_struct(labust_msgs::msg::RegisterController* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const labust_msgs::msg::RegisterController* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_labust_msgs_msg_RegisterController_common::copy_from_struct(labust_msgs::msg::RegisterController* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //parent
        const matlab::data::CharArray parent_arr = arr["parent"];
        msg->parent = parent_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'parent' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'parent' is wrong type; expected a string.");
    }
    try {
        //name
        const matlab::data::CharArray name_arr = arr["name"];
        msg->name = name_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'name' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'name' is wrong type; expected a string.");
    }
    try {
        //used_tau
        const matlab::data::TypedArray<int8_t> used_tau_arr = arr["used_tau"];
        size_t nelem = 6;
        	std::copy(used_tau_arr.begin(), used_tau_arr.begin()+nelem, msg->used_tau.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'used_tau' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'used_tau' is wrong type; expected a int8.");
    }
    try {
        //used_nu
        const matlab::data::TypedArray<int8_t> used_nu_arr = arr["used_nu"];
        size_t nelem = 6;
        	std::copy(used_nu_arr.begin(), used_nu_arr.begin()+nelem, msg->used_nu.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'used_nu' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'used_nu' is wrong type; expected a int8.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_labust_msgs_msg_RegisterController_common::get_arr(MDFactory_T& factory, const labust_msgs::msg::RegisterController* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","SURGE","SWAY","HEAVE","ROLL","PITCH","YAW","X","Y","Z","K","M","N","parent","name","used_tau","used_nu"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("labust_msgs/RegisterController");
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
    // X
    auto currentElement_X = (msg + ctr)->X;
    outArray[ctr]["X"] = factory.createScalar(currentElement_X);
    // Y
    auto currentElement_Y = (msg + ctr)->Y;
    outArray[ctr]["Y"] = factory.createScalar(currentElement_Y);
    // Z
    auto currentElement_Z = (msg + ctr)->Z;
    outArray[ctr]["Z"] = factory.createScalar(currentElement_Z);
    // K
    auto currentElement_K = (msg + ctr)->K;
    outArray[ctr]["K"] = factory.createScalar(currentElement_K);
    // M
    auto currentElement_M = (msg + ctr)->M;
    outArray[ctr]["M"] = factory.createScalar(currentElement_M);
    // N
    auto currentElement_N = (msg + ctr)->N;
    outArray[ctr]["N"] = factory.createScalar(currentElement_N);
    // parent
    auto currentElement_parent = (msg + ctr)->parent;
    outArray[ctr]["parent"] = factory.createCharArray(currentElement_parent);
    // name
    auto currentElement_name = (msg + ctr)->name;
    outArray[ctr]["name"] = factory.createCharArray(currentElement_name);
    // used_tau
    auto currentElement_used_tau = (msg + ctr)->used_tau;
    outArray[ctr]["used_tau"] = factory.createArray<labust_msgs::msg::RegisterController::_used_tau_type::const_iterator, int8_t>({currentElement_used_tau.size(), 1}, currentElement_used_tau.begin(), currentElement_used_tau.end());
    // used_nu
    auto currentElement_used_nu = (msg + ctr)->used_nu;
    outArray[ctr]["used_nu"] = factory.createArray<labust_msgs::msg::RegisterController::_used_nu_type::const_iterator, int8_t>({currentElement_used_nu.size(), 1}, currentElement_used_nu.begin(), currentElement_used_nu.end());
    }
    return std::move(outArray);
  } 
class LABUST_MSGS_EXPORT ros2_labust_msgs_RegisterController_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_labust_msgs_RegisterController_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_labust_msgs_RegisterController_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<labust_msgs::msg::RegisterController,ros2_labust_msgs_msg_RegisterController_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_labust_msgs_RegisterController_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<labust_msgs::msg::RegisterController,ros2_labust_msgs_msg_RegisterController_common>>();
  }
  std::shared_ptr<void> ros2_labust_msgs_RegisterController_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<labust_msgs::msg::RegisterController>();
    ros2_labust_msgs_msg_RegisterController_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_labust_msgs_RegisterController_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_labust_msgs_msg_RegisterController_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (labust_msgs::msg::RegisterController*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_msg_RegisterController_common, MATLABROS2MsgInterface<labust_msgs::msg::RegisterController>)
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_RegisterController_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER