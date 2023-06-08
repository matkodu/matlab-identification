// Copyright 2021-2022 The MathWorks, Inc.
// Common copy functions for labust_msgs/RegisterControllerRequest
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
#include "labust_msgs/srv/register_controller.hpp"
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
#include "ROS2ServiceTemplates.hpp"
class LABUST_MSGS_EXPORT ros2_labust_msgs_msg_RegisterControllerRequest_common : public MATLABROS2MsgInterface<labust_msgs::srv::RegisterController::Request> {
  public:
    virtual ~ros2_labust_msgs_msg_RegisterControllerRequest_common(){}
    virtual void copy_from_struct(labust_msgs::srv::RegisterController::Request* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    virtual MDArray_T get_arr(MDFactory_T& factory, const labust_msgs::srv::RegisterController::Request* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_labust_msgs_msg_RegisterControllerRequest_common::copy_from_struct(labust_msgs::srv::RegisterController::Request* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
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
        //srv_name
        const matlab::data::CharArray srv_name_arr = arr["srv_name"];
        msg->srv_name = srv_name_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'srv_name' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'srv_name' is wrong type; expected a string.");
    }
    try {
        //used_dofs
        const matlab::data::TypedArray<int32_t> used_dofs_arr = arr["used_dofs"];
        size_t nelem = 6;
        	std::copy(used_dofs_arr.begin(), used_dofs_arr.begin()+nelem, msg->used_dofs.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'used_dofs' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'used_dofs' is wrong type; expected a int32.");
    }
    try {
        //used_cnt
        const matlab::data::CellArray used_cnt_cellarr = arr["used_cnt"];
        size_t nelem = used_cnt_cellarr.getNumberOfElements();
        for (size_t idx=0; idx < nelem; ++idx){
        	const matlab::data::CharArray used_cnt_arr = used_cnt_cellarr[idx];
        	msg->used_cnt.push_back(used_cnt_arr.toAscii());
        }
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'used_cnt' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'used_cnt' is wrong type; expected a string.");
    }
    try {
        //used_meas
        const matlab::data::TypedArray<int32_t> used_meas_arr = arr["used_meas"];
        size_t nelem = 12;
        	std::copy(used_meas_arr.begin(), used_meas_arr.begin()+nelem, msg->used_meas.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'used_meas' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'used_meas' is wrong type; expected a int32.");
    }
    try {
        //used_derived
        const matlab::data::CellArray used_derived_cellarr = arr["used_derived"];
        size_t nelem = used_derived_cellarr.getNumberOfElements();
        for (size_t idx=0; idx < nelem; ++idx){
        	const matlab::data::CharArray used_derived_arr = used_derived_cellarr[idx];
        	msg->used_derived.push_back(used_derived_arr.toAscii());
        }
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'used_derived' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'used_derived' is wrong type; expected a string.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_labust_msgs_msg_RegisterControllerRequest_common::get_arr(MDFactory_T& factory, const labust_msgs::srv::RegisterController::Request* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","SURGE","SWAY","HEAVE","ROLL","PITCH","YAW","name","srv_name","used_dofs","used_cnt","used_meas","used_derived"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("labust_msgs/RegisterControllerRequest");
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
    // name
    auto currentElement_name = (msg + ctr)->name;
    outArray[ctr]["name"] = factory.createCharArray(currentElement_name);
    // srv_name
    auto currentElement_srv_name = (msg + ctr)->srv_name;
    outArray[ctr]["srv_name"] = factory.createCharArray(currentElement_srv_name);
    // used_dofs
    auto currentElement_used_dofs = (msg + ctr)->used_dofs;
    outArray[ctr]["used_dofs"] = factory.createArray<labust_msgs::srv::RegisterController::Request::_used_dofs_type::const_iterator, int32_t>({currentElement_used_dofs.size(), 1}, currentElement_used_dofs.begin(), currentElement_used_dofs.end());
    // used_cnt
    auto currentElement_used_cnt = (msg + ctr)->used_cnt;
    auto used_cntoutCell = factory.createCellArray({currentElement_used_cnt.size(),1});
    for(size_t idxin = 0; idxin < currentElement_used_cnt.size(); ++ idxin){
    	used_cntoutCell[idxin] = factory.createCharArray(currentElement_used_cnt[idxin]);
    }
    outArray[ctr]["used_cnt"] = used_cntoutCell;
    // used_meas
    auto currentElement_used_meas = (msg + ctr)->used_meas;
    outArray[ctr]["used_meas"] = factory.createArray<labust_msgs::srv::RegisterController::Request::_used_meas_type::const_iterator, int32_t>({currentElement_used_meas.size(), 1}, currentElement_used_meas.begin(), currentElement_used_meas.end());
    // used_derived
    auto currentElement_used_derived = (msg + ctr)->used_derived;
    auto used_derivedoutCell = factory.createCellArray({currentElement_used_derived.size(),1});
    for(size_t idxin = 0; idxin < currentElement_used_derived.size(); ++ idxin){
    	used_derivedoutCell[idxin] = factory.createCharArray(currentElement_used_derived[idxin]);
    }
    outArray[ctr]["used_derived"] = used_derivedoutCell;
    }
    return std::move(outArray);
  }
class LABUST_MSGS_EXPORT ros2_labust_msgs_msg_RegisterControllerResponse_common : public MATLABROS2MsgInterface<labust_msgs::srv::RegisterController::Response> {
  public:
    virtual ~ros2_labust_msgs_msg_RegisterControllerResponse_common(){}
    virtual void copy_from_struct(labust_msgs::srv::RegisterController::Response* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    virtual MDArray_T get_arr(MDFactory_T& factory, const labust_msgs::srv::RegisterController::Response* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_labust_msgs_msg_RegisterControllerResponse_common::copy_from_struct(labust_msgs::srv::RegisterController::Response* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //accepted
        const matlab::data::TypedArray<bool> accepted_arr = arr["accepted"];
        msg->accepted = accepted_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'accepted' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'accepted' is wrong type; expected a logical.");
    }
    try {
        //unmet_cnt
        const matlab::data::CellArray unmet_cnt_cellarr = arr["unmet_cnt"];
        size_t nelem = unmet_cnt_cellarr.getNumberOfElements();
        for (size_t idx=0; idx < nelem; ++idx){
        	const matlab::data::CharArray unmet_cnt_arr = unmet_cnt_cellarr[idx];
        	msg->unmet_cnt.push_back(unmet_cnt_arr.toAscii());
        }
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'unmet_cnt' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'unmet_cnt' is wrong type; expected a string.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_labust_msgs_msg_RegisterControllerResponse_common::get_arr(MDFactory_T& factory, const labust_msgs::srv::RegisterController::Response* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","accepted","unmet_cnt"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("labust_msgs/RegisterControllerResponse");
    // accepted
    auto currentElement_accepted = (msg + ctr)->accepted;
    outArray[ctr]["accepted"] = factory.createScalar(currentElement_accepted);
    // unmet_cnt
    auto currentElement_unmet_cnt = (msg + ctr)->unmet_cnt;
    auto unmet_cntoutCell = factory.createCellArray({currentElement_unmet_cnt.size(),1});
    for(size_t idxin = 0; idxin < currentElement_unmet_cnt.size(); ++ idxin){
    	unmet_cntoutCell[idxin] = factory.createCharArray(currentElement_unmet_cnt[idxin]);
    }
    outArray[ctr]["unmet_cnt"] = unmet_cntoutCell;
    }
    return std::move(outArray);
  } 
class LABUST_MSGS_EXPORT ros2_labust_msgs_RegisterController_service : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_labust_msgs_RegisterController_service(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
    virtual std::shared_ptr<MATLABSvcServerInterface> generateSvcServerInterface();
    virtual std::shared_ptr<MATLABSvcClientInterface> generateSvcClientInterface();
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_labust_msgs_RegisterController_service::generatePublisherInterface(ElementType type){
    if(type == eRequest){
        return std::make_shared<ROS2PublisherImpl<labust_msgs::srv::RegisterController::Request,ros2_labust_msgs_msg_RegisterControllerRequest_common>>();
    }else if(type == eResponse){
        return std::make_shared<ROS2PublisherImpl<labust_msgs::srv::RegisterController::Response,ros2_labust_msgs_msg_RegisterControllerResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
  std::shared_ptr<MATLABSubscriberInterface> 
          ros2_labust_msgs_RegisterController_service::generateSubscriberInterface(ElementType type){
    if(type == eRequest){
        return std::make_shared<ROS2SubscriberImpl<labust_msgs::srv::RegisterController::Request,ros2_labust_msgs_msg_RegisterControllerRequest_common>>();
    }else if(type == eResponse){
        return std::make_shared<ROS2SubscriberImpl<labust_msgs::srv::RegisterController::Response,ros2_labust_msgs_msg_RegisterControllerResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
  std::shared_ptr<void> ros2_labust_msgs_RegisterController_service::generateCppMessage(ElementType type, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    if(type == eRequest){
        auto msg = std::make_shared<labust_msgs::srv::RegisterController::Request>();
        ros2_labust_msgs_msg_RegisterControllerRequest_common commonObj;
        commonObj.mCommonObjMap = commonObjMap;
        commonObj.copy_from_struct(msg.get(), arr[0], loader);
        return msg;
    }else if(type == eResponse){
        auto msg = std::make_shared<labust_msgs::srv::RegisterController::Response>();
        ros2_labust_msgs_msg_RegisterControllerResponse_common commonObj;
        commonObj.mCommonObjMap = commonObjMap;
        commonObj.copy_from_struct(msg.get(), arr[0], loader);
        return msg;
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
  std::shared_ptr<MATLABSvcServerInterface> 
          ros2_labust_msgs_RegisterController_service::generateSvcServerInterface(){
    return std::make_shared<ROS2SvcServerImpl<labust_msgs::srv::RegisterController,labust_msgs::srv::RegisterController::Request,labust_msgs::srv::RegisterController::Response,ros2_labust_msgs_msg_RegisterControllerRequest_common,ros2_labust_msgs_msg_RegisterControllerResponse_common>>();
  }
  std::shared_ptr<MATLABSvcClientInterface> 
          ros2_labust_msgs_RegisterController_service::generateSvcClientInterface(){
    return std::make_shared<ROS2SvcClientImpl<labust_msgs::srv::RegisterController,labust_msgs::srv::RegisterController::Request,labust_msgs::srv::RegisterController::Response,ros2_labust_msgs_msg_RegisterControllerRequest_common,ros2_labust_msgs_msg_RegisterControllerResponse_common,rclcpp::Client<labust_msgs::srv::RegisterController>::SharedFuture>>();
  }
  matlab::data::StructArray ros2_labust_msgs_RegisterController_service::generateMLMessage(ElementType type, 
                                                    void*  msgPtr ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    if(type == eRequest){
	    ros2_labust_msgs_msg_RegisterControllerRequest_common commonObj;	
        commonObj.mCommonObjMap = commonObjMap;
	    MDFactory_T factory;
	    return commonObj.get_arr(factory, (labust_msgs::srv::RegisterController::Request*)msgPtr, loader);
    }else if(type == eResponse){
        ros2_labust_msgs_msg_RegisterControllerResponse_common commonObj;	
        commonObj.mCommonObjMap = commonObjMap;	
	    MDFactory_T factory;
	    return commonObj.get_arr(factory, (labust_msgs::srv::RegisterController::Response*)msgPtr, loader);
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_msg_RegisterControllerRequest_common, MATLABROS2MsgInterface<labust_msgs::srv::RegisterController::Request>)
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_msg_RegisterControllerResponse_common, MATLABROS2MsgInterface<labust_msgs::srv::RegisterController::Response>)
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_RegisterController_service, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
