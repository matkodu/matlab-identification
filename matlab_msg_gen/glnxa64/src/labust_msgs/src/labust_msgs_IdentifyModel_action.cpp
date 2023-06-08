// Copyright 2022 The MathWorks, Inc.
// Common copy functions for labust_msgs/IdentifyModelGoal
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
#include "labust_msgs/action/identify_model.hpp"
#include "visibility_control.h"
#ifndef FOUNDATION_MATLABDATA_API
#include "MDArray.hpp"
#include "StructArray.hpp"
#include "TypedArrayRef.hpp"
#include "Struct.hpp"
#include "ArrayFactory.hpp"
#include "StructRef.hpp"
#include "Reference.hpp"
#endif
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
#include "ROS2ActionTemplates.hpp"
class LABUST_MSGS_EXPORT labust_msgs_msg_IdentifyModelGoal_common : public MATLABROS2MsgInterface<labust_msgs::action::IdentifyModel::Goal> {
  public:
    virtual ~labust_msgs_msg_IdentifyModelGoal_common(){}
    virtual void copy_from_struct(labust_msgs::action::IdentifyModel::Goal* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const labust_msgs::action::IdentifyModel::Goal* msg, MultiLibLoader loader, size_t size = 1);
};
  //----------------------------------------------------------------------------
  void labust_msgs_msg_IdentifyModelGoal_common::copy_from_struct(labust_msgs::action::IdentifyModel::Goal* msg, const matlab::data::Struct& arr, MultiLibLoader loader) {
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
  MDArray_T labust_msgs_msg_IdentifyModelGoal_common::get_arr(MDFactory_T& factory, const labust_msgs::action::IdentifyModel::Goal* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","X","Y","Z","K","M","N","MODEL_TF","dof"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("labust_msgs/IdentifyModelGoal");
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
    // MODEL_TF
    auto currentElement_MODEL_TF = (msg + ctr)->MODEL_TF;
    outArray[ctr]["MODEL_TF"] = factory.createScalar(currentElement_MODEL_TF);
    // dof
    auto currentElement_dof = (msg + ctr)->dof;
    outArray[ctr]["dof"] = factory.createScalar(currentElement_dof);
    }
    return std::move(outArray);
  }

class LABUST_MSGS_EXPORT labust_msgs_msg_IdentifyModelResult_common : public MATLABROS2MsgInterface<labust_msgs::action::IdentifyModel::Result> {
  public:
    virtual ~labust_msgs_msg_IdentifyModelResult_common(){}
    virtual void copy_from_struct(labust_msgs::action::IdentifyModel::Result* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const labust_msgs::action::IdentifyModel::Result* msg, MultiLibLoader loader, size_t size = 1);
};
  //----------------------------------------------------------------------------
  void labust_msgs_msg_IdentifyModelResult_common::copy_from_struct(labust_msgs::action::IdentifyModel::Result* msg, const matlab::data::Struct& arr, MultiLibLoader loader) {
    try {
        //ident_models
        const matlab::data::StructArray ident_models_arr = arr["ident_models"];
        for (auto _ident_modelsarr : ident_models_arr) {
        	labust_msgs::msg::IdentModel _val;
        auto msgClassPtr_ident_models = getCommonObject<labust_msgs::msg::IdentModel>("ros2_labust_msgs_msg_IdentModel_common",loader);
        msgClassPtr_ident_models->copy_from_struct(&_val,_ident_modelsarr,loader);
        	msg->ident_models.push_back(_val);
        }
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'ident_models' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'ident_models' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T labust_msgs_msg_IdentifyModelResult_common::get_arr(MDFactory_T& factory, const labust_msgs::action::IdentifyModel::Result* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","ident_models"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("labust_msgs/IdentifyModelResult");
    // ident_models
    auto currentElement_ident_models = (msg + ctr)->ident_models;
    auto msgClassPtr_ident_models = getCommonObject<labust_msgs::msg::IdentModel>("ros2_labust_msgs_msg_IdentModel_common",loader);
    outArray[ctr]["ident_models"] = msgClassPtr_ident_models->get_arr(factory,&currentElement_ident_models[0],loader,currentElement_ident_models.size());
    }
    return std::move(outArray);
  }

class LABUST_MSGS_EXPORT labust_msgs_msg_IdentifyModelFeedback_common : public MATLABROS2MsgInterface<labust_msgs::action::IdentifyModel::Feedback> {
  public:
    virtual ~labust_msgs_msg_IdentifyModelFeedback_common(){}
    virtual void copy_from_struct(labust_msgs::action::IdentifyModel::Feedback* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const labust_msgs::action::IdentifyModel::Feedback* msg, MultiLibLoader loader, size_t size = 1);
};
  //----------------------------------------------------------------------------
  void labust_msgs_msg_IdentifyModelFeedback_common::copy_from_struct(labust_msgs::action::IdentifyModel::Feedback* msg, const matlab::data::Struct& arr, MultiLibLoader loader) {
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
        //progress
        const matlab::data::TypedArray<float> progress_arr = arr["progress"];
        msg->progress = progress_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'progress' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'progress' is wrong type; expected a single.");
    }
    try {
        //error
        const matlab::data::TypedArray<float> error_arr = arr["error"];
        msg->error = error_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'error' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'error' is wrong type; expected a single.");
    }
    try {
        //additional_data
        const matlab::data::CharArray additional_data_arr = arr["additional_data"];
        msg->additional_data = additional_data_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'additional_data' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'additional_data' is wrong type; expected a string.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T labust_msgs_msg_IdentifyModelFeedback_common::get_arr(MDFactory_T& factory, const labust_msgs::action::IdentifyModel::Feedback* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","dof","progress","error","additional_data"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("labust_msgs/IdentifyModelFeedback");
    // dof
    auto currentElement_dof = (msg + ctr)->dof;
    outArray[ctr]["dof"] = factory.createScalar(currentElement_dof);
    // progress
    auto currentElement_progress = (msg + ctr)->progress;
    outArray[ctr]["progress"] = factory.createScalar(currentElement_progress);
    // error
    auto currentElement_error = (msg + ctr)->error;
    outArray[ctr]["error"] = factory.createScalar(currentElement_error);
    // additional_data
    auto currentElement_additional_data = (msg + ctr)->additional_data;
    outArray[ctr]["additional_data"] = factory.createCharArray(currentElement_additional_data);
    }
    return std::move(outArray);
  }

class LABUST_MSGS_EXPORT ros2_labust_msgs_IdentifyModel_action : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_labust_msgs_IdentifyModel_action(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
    virtual std::shared_ptr<MATLABActClientInterface> generateActClientInterface();
    virtual matlab::data::StructArray generateMLMessage(ElementType type, 
                                                    void*  msgPtr ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap);
    virtual std::shared_ptr<void> generateCppMessage(ElementType type, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_labust_msgs_IdentifyModel_action::generatePublisherInterface(ElementType type){
    std::shared_ptr<MATLABPublisherInterface> ptr;
    if(type == eGoal){
        ptr = std::make_shared<ROS2PublisherImpl<labust_msgs::action::IdentifyModel::Goal,labust_msgs_msg_IdentifyModelGoal_common>>();
    }else if(type == eFeedback){
        ptr = std::make_shared<ROS2PublisherImpl<labust_msgs::action::IdentifyModel::Feedback,labust_msgs_msg_IdentifyModelFeedback_common>>();
    }else if(type == eResult){
        ptr = std::make_shared<ROS2PublisherImpl<labust_msgs::action::IdentifyModel::Result,labust_msgs_msg_IdentifyModelResult_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Goal' or 'Feedback' or 'Result'");
    }
    return ptr;
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_labust_msgs_IdentifyModel_action::generateSubscriberInterface(ElementType type){
    std::shared_ptr<MATLABSubscriberInterface> ptr;
    if(type == eGoal){
        ptr = std::make_shared<ROS2SubscriberImpl<labust_msgs::action::IdentifyModel::Goal,labust_msgs_msg_IdentifyModelGoal_common>>();
    }else if(type == eFeedback){
        ptr = std::make_shared<ROS2SubscriberImpl<labust_msgs::action::IdentifyModel::Feedback,labust_msgs_msg_IdentifyModelFeedback_common>>();
    }else if(type == eResult){
        ptr = std::make_shared<ROS2SubscriberImpl<labust_msgs::action::IdentifyModel::Result,labust_msgs_msg_IdentifyModelResult_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Goal' or 'Feedback' or 'Result'");
    }
    return ptr;
  }
  std::shared_ptr<MATLABActClientInterface> 
          ros2_labust_msgs_IdentifyModel_action::generateActClientInterface(){
      return std::make_shared<ROS2ActClientImpl<labust_msgs::action::IdentifyModel,labust_msgs::action::IdentifyModel::Goal,labust_msgs::action::IdentifyModel::Feedback::ConstSharedPtr,labust_msgs::action::IdentifyModel::Result::ConstSharedPtr,labust_msgs_msg_IdentifyModelGoal_common,labust_msgs_msg_IdentifyModelFeedback_common,labust_msgs_msg_IdentifyModelResult_common>>();
  }
  std::shared_ptr<void> ros2_labust_msgs_IdentifyModel_action::generateCppMessage(ElementType type, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    if(type == eGoal){
        auto msg = std::make_shared<labust_msgs::action::IdentifyModel::Goal>();
        labust_msgs_msg_IdentifyModelGoal_common commonObj;
        commonObj.mCommonObjMap = commonObjMap;
        commonObj.copy_from_struct(msg.get(), arr[0], loader);
        return msg;
    }else if(type == eFeedback){
        auto msg = std::make_shared<labust_msgs::action::IdentifyModel::Feedback>();
        labust_msgs_msg_IdentifyModelFeedback_common commonObj;
        commonObj.mCommonObjMap = commonObjMap;
        commonObj.copy_from_struct(msg.get(), arr[0], loader);
        return msg;
    }else if(type == eResult){
        auto msg = std::make_shared<labust_msgs::action::IdentifyModel::Result>();
        labust_msgs_msg_IdentifyModelResult_common commonObj;
        commonObj.mCommonObjMap = commonObjMap;
        commonObj.copy_from_struct(msg.get(), arr[0], loader);
        return msg;
   }else{
        throw std::invalid_argument("Wrong input, Expected 'Goal' or 'Feedback' or 'Result'");
    }
  }
 matlab::data::StructArray ros2_labust_msgs_IdentifyModel_action::generateMLMessage(ElementType type, 
                                                    void*  msgPtr ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    if(type == eGoal){
	    labust_msgs_msg_IdentifyModelGoal_common commonObj;	
        commonObj.mCommonObjMap = commonObjMap;
	    MDFactory_T factory;
	    return commonObj.get_arr(factory, (labust_msgs::action::IdentifyModel::Goal*)msgPtr, loader);
    }else if(type == eResult){
        labust_msgs_msg_IdentifyModelResult_common commonObj;	
        commonObj.mCommonObjMap = commonObjMap;
	    MDFactory_T factory;
	    return commonObj.get_arr(factory, (labust_msgs::action::IdentifyModel::Result*)msgPtr, loader);
    }else if(type == eFeedback){
        labust_msgs_msg_IdentifyModelFeedback_common commonObj;
        commonObj.mCommonObjMap = commonObjMap;
	    MDFactory_T factory;
	    return commonObj.get_arr(factory, (labust_msgs::action::IdentifyModel::Feedback*)msgPtr, loader);
    }
     else{
        throw std::invalid_argument("Wrong input, Expected 'Goal' or 'Feedback' or 'Result'");
    }
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(labust_msgs_msg_IdentifyModelGoal_common, MATLABROS2MsgInterface<labust_msgs::action::IdentifyModel::Goal>)
CLASS_LOADER_REGISTER_CLASS(labust_msgs_msg_IdentifyModelFeedback_common, MATLABROS2MsgInterface<labust_msgs::action::IdentifyModel::Feedback>)
CLASS_LOADER_REGISTER_CLASS(labust_msgs_msg_IdentifyModelResult_common, MATLABROS2MsgInterface<labust_msgs::action::IdentifyModel::Result>)
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_IdentifyModel_action, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1