// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for labust_msgs/ModelParamsUpdate
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
#include "labust_msgs/msg/model_params_update.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class LABUST_MSGS_EXPORT ros2_labust_msgs_msg_ModelParamsUpdate_common : public MATLABROS2MsgInterface<labust_msgs::msg::ModelParamsUpdate> {
  public:
    virtual ~ros2_labust_msgs_msg_ModelParamsUpdate_common(){}
    virtual void copy_from_struct(labust_msgs::msg::ModelParamsUpdate* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const labust_msgs::msg::ModelParamsUpdate* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_labust_msgs_msg_ModelParamsUpdate_common::copy_from_struct(labust_msgs::msg::ModelParamsUpdate* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //dof
        const matlab::data::TypedArray<int32_t> dof_arr = arr["dof"];
        msg->dof = dof_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'dof' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'dof' is wrong type; expected a int32.");
    }
    try {
        //alpha
        const matlab::data::TypedArray<float> alpha_arr = arr["alpha"];
        msg->alpha = alpha_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'alpha' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'alpha' is wrong type; expected a single.");
    }
    try {
        //beta
        const matlab::data::TypedArray<float> beta_arr = arr["beta"];
        msg->beta = beta_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'beta' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'beta' is wrong type; expected a single.");
    }
    try {
        //betaa
        const matlab::data::TypedArray<float> betaa_arr = arr["betaa"];
        msg->betaa = betaa_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'betaa' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'betaa' is wrong type; expected a single.");
    }
    try {
        //delta
        const matlab::data::TypedArray<float> delta_arr = arr["delta"];
        msg->delta = delta_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'delta' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'delta' is wrong type; expected a single.");
    }
    try {
        //wn
        const matlab::data::TypedArray<float> wn_arr = arr["wn"];
        msg->wn = wn_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'wn' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'wn' is wrong type; expected a single.");
    }
    try {
        //use_linear
        const matlab::data::TypedArray<bool> use_linear_arr = arr["use_linear"];
        msg->use_linear = use_linear_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'use_linear' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'use_linear' is wrong type; expected a logical.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_labust_msgs_msg_ModelParamsUpdate_common::get_arr(MDFactory_T& factory, const labust_msgs::msg::ModelParamsUpdate* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","SURGE","SWAY","HEAVE","ROLL","PITCH","YAW","dof","alpha","beta","betaa","delta","wn","use_linear"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("labust_msgs/ModelParamsUpdate");
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
    // dof
    auto currentElement_dof = (msg + ctr)->dof;
    outArray[ctr]["dof"] = factory.createScalar(currentElement_dof);
    // alpha
    auto currentElement_alpha = (msg + ctr)->alpha;
    outArray[ctr]["alpha"] = factory.createScalar(currentElement_alpha);
    // beta
    auto currentElement_beta = (msg + ctr)->beta;
    outArray[ctr]["beta"] = factory.createScalar(currentElement_beta);
    // betaa
    auto currentElement_betaa = (msg + ctr)->betaa;
    outArray[ctr]["betaa"] = factory.createScalar(currentElement_betaa);
    // delta
    auto currentElement_delta = (msg + ctr)->delta;
    outArray[ctr]["delta"] = factory.createScalar(currentElement_delta);
    // wn
    auto currentElement_wn = (msg + ctr)->wn;
    outArray[ctr]["wn"] = factory.createScalar(currentElement_wn);
    // use_linear
    auto currentElement_use_linear = (msg + ctr)->use_linear;
    outArray[ctr]["use_linear"] = factory.createScalar(currentElement_use_linear);
    }
    return std::move(outArray);
  } 
class LABUST_MSGS_EXPORT ros2_labust_msgs_ModelParamsUpdate_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_labust_msgs_ModelParamsUpdate_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_labust_msgs_ModelParamsUpdate_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<labust_msgs::msg::ModelParamsUpdate,ros2_labust_msgs_msg_ModelParamsUpdate_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_labust_msgs_ModelParamsUpdate_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<labust_msgs::msg::ModelParamsUpdate,ros2_labust_msgs_msg_ModelParamsUpdate_common>>();
  }
  std::shared_ptr<void> ros2_labust_msgs_ModelParamsUpdate_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<labust_msgs::msg::ModelParamsUpdate>();
    ros2_labust_msgs_msg_ModelParamsUpdate_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_labust_msgs_ModelParamsUpdate_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_labust_msgs_msg_ModelParamsUpdate_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (labust_msgs::msg::ModelParamsUpdate*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_msg_ModelParamsUpdate_common, MATLABROS2MsgInterface<labust_msgs::msg::ModelParamsUpdate>)
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_ModelParamsUpdate_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER