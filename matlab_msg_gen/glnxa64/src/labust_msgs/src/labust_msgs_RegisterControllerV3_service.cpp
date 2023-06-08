// Copyright 2021-2022 The MathWorks, Inc.
// Common copy functions for labust_msgs/RegisterControllerV3Request
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
#include "labust_msgs/srv/register_controller_v3.hpp"
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
class LABUST_MSGS_EXPORT ros2_labust_msgs_msg_RegisterControllerV3Request_common : public MATLABROS2MsgInterface<labust_msgs::srv::RegisterControllerV3::Request> {
  public:
    virtual ~ros2_labust_msgs_msg_RegisterControllerV3Request_common(){}
    virtual void copy_from_struct(labust_msgs::srv::RegisterControllerV3::Request* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    virtual MDArray_T get_arr(MDFactory_T& factory, const labust_msgs::srv::RegisterControllerV3::Request* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_labust_msgs_msg_RegisterControllerV3Request_common::copy_from_struct(labust_msgs::srv::RegisterControllerV3::Request* msg, const matlab::data::Struct& arr,
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
        //has_manual
        const matlab::data::TypedArray<bool> has_manual_arr = arr["has_manual"];
        msg->has_manual = has_manual_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'has_manual' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'has_manual' is wrong type; expected a logical.");
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
        //used_other
        const matlab::data::CellArray used_other_cellarr = arr["used_other"];
        size_t nelem = used_other_cellarr.getNumberOfElements();
        for (size_t idx=0; idx < nelem; ++idx){
        	const matlab::data::CharArray used_other_arr = used_other_cellarr[idx];
        	msg->used_other.push_back(used_other_arr.toAscii());
        }
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'used_other' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'used_other' is wrong type; expected a string.");
    }
    try {
        //used_resources
        const matlab::data::CellArray used_resources_cellarr = arr["used_resources"];
        size_t nelem = used_resources_cellarr.getNumberOfElements();
        for (size_t idx=0; idx < nelem; ++idx){
        	const matlab::data::CharArray used_resources_arr = used_resources_cellarr[idx];
        	msg->used_resources.push_back(used_resources_arr.toAscii());
        }
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'used_resources' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'used_resources' is wrong type; expected a string.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_labust_msgs_msg_RegisterControllerV3Request_common::get_arr(MDFactory_T& factory, const labust_msgs::srv::RegisterControllerV3::Request* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","parent","name","has_manual","used_tau","used_other","used_resources"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("labust_msgs/RegisterControllerV3Request");
    // parent
    auto currentElement_parent = (msg + ctr)->parent;
    outArray[ctr]["parent"] = factory.createCharArray(currentElement_parent);
    // name
    auto currentElement_name = (msg + ctr)->name;
    outArray[ctr]["name"] = factory.createCharArray(currentElement_name);
    // has_manual
    auto currentElement_has_manual = (msg + ctr)->has_manual;
    outArray[ctr]["has_manual"] = factory.createScalar(currentElement_has_manual);
    // used_tau
    auto currentElement_used_tau = (msg + ctr)->used_tau;
    outArray[ctr]["used_tau"] = factory.createArray<labust_msgs::srv::RegisterControllerV3::Request::_used_tau_type::const_iterator, int8_t>({currentElement_used_tau.size(), 1}, currentElement_used_tau.begin(), currentElement_used_tau.end());
    // used_other
    auto currentElement_used_other = (msg + ctr)->used_other;
    auto used_otheroutCell = factory.createCellArray({currentElement_used_other.size(),1});
    for(size_t idxin = 0; idxin < currentElement_used_other.size(); ++ idxin){
    	used_otheroutCell[idxin] = factory.createCharArray(currentElement_used_other[idxin]);
    }
    outArray[ctr]["used_other"] = used_otheroutCell;
    // used_resources
    auto currentElement_used_resources = (msg + ctr)->used_resources;
    auto used_resourcesoutCell = factory.createCellArray({currentElement_used_resources.size(),1});
    for(size_t idxin = 0; idxin < currentElement_used_resources.size(); ++ idxin){
    	used_resourcesoutCell[idxin] = factory.createCharArray(currentElement_used_resources[idxin]);
    }
    outArray[ctr]["used_resources"] = used_resourcesoutCell;
    }
    return std::move(outArray);
  }
class LABUST_MSGS_EXPORT ros2_labust_msgs_msg_RegisterControllerV3Response_common : public MATLABROS2MsgInterface<labust_msgs::srv::RegisterControllerV3::Response> {
  public:
    virtual ~ros2_labust_msgs_msg_RegisterControllerV3Response_common(){}
    virtual void copy_from_struct(labust_msgs::srv::RegisterControllerV3::Response* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    virtual MDArray_T get_arr(MDFactory_T& factory, const labust_msgs::srv::RegisterControllerV3::Response* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_labust_msgs_msg_RegisterControllerV3Response_common::copy_from_struct(labust_msgs::srv::RegisterControllerV3::Response* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //reply
        const matlab::data::TypedArray<uint8_t> reply_arr = arr["reply"];
        msg->reply = reply_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'reply' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'reply' is wrong type; expected a uint8.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_labust_msgs_msg_RegisterControllerV3Response_common::get_arr(MDFactory_T& factory, const labust_msgs::srv::RegisterControllerV3::Response* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","SUCCESS","MISSING_DEPENDENCY","ALREADY_REGISTERED","reply"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("labust_msgs/RegisterControllerV3Response");
    // SUCCESS
    auto currentElement_SUCCESS = (msg + ctr)->SUCCESS;
    outArray[ctr]["SUCCESS"] = factory.createScalar(currentElement_SUCCESS);
    // MISSING_DEPENDENCY
    auto currentElement_MISSING_DEPENDENCY = (msg + ctr)->MISSING_DEPENDENCY;
    outArray[ctr]["MISSING_DEPENDENCY"] = factory.createScalar(currentElement_MISSING_DEPENDENCY);
    // ALREADY_REGISTERED
    auto currentElement_ALREADY_REGISTERED = (msg + ctr)->ALREADY_REGISTERED;
    outArray[ctr]["ALREADY_REGISTERED"] = factory.createScalar(currentElement_ALREADY_REGISTERED);
    // reply
    auto currentElement_reply = (msg + ctr)->reply;
    outArray[ctr]["reply"] = factory.createScalar(currentElement_reply);
    }
    return std::move(outArray);
  } 
class LABUST_MSGS_EXPORT ros2_labust_msgs_RegisterControllerV3_service : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_labust_msgs_RegisterControllerV3_service(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
    virtual std::shared_ptr<MATLABSvcServerInterface> generateSvcServerInterface();
    virtual std::shared_ptr<MATLABSvcClientInterface> generateSvcClientInterface();
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_labust_msgs_RegisterControllerV3_service::generatePublisherInterface(ElementType type){
    if(type == eRequest){
        return std::make_shared<ROS2PublisherImpl<labust_msgs::srv::RegisterControllerV3::Request,ros2_labust_msgs_msg_RegisterControllerV3Request_common>>();
    }else if(type == eResponse){
        return std::make_shared<ROS2PublisherImpl<labust_msgs::srv::RegisterControllerV3::Response,ros2_labust_msgs_msg_RegisterControllerV3Response_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
  std::shared_ptr<MATLABSubscriberInterface> 
          ros2_labust_msgs_RegisterControllerV3_service::generateSubscriberInterface(ElementType type){
    if(type == eRequest){
        return std::make_shared<ROS2SubscriberImpl<labust_msgs::srv::RegisterControllerV3::Request,ros2_labust_msgs_msg_RegisterControllerV3Request_common>>();
    }else if(type == eResponse){
        return std::make_shared<ROS2SubscriberImpl<labust_msgs::srv::RegisterControllerV3::Response,ros2_labust_msgs_msg_RegisterControllerV3Response_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
  std::shared_ptr<void> ros2_labust_msgs_RegisterControllerV3_service::generateCppMessage(ElementType type, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    if(type == eRequest){
        auto msg = std::make_shared<labust_msgs::srv::RegisterControllerV3::Request>();
        ros2_labust_msgs_msg_RegisterControllerV3Request_common commonObj;
        commonObj.mCommonObjMap = commonObjMap;
        commonObj.copy_from_struct(msg.get(), arr[0], loader);
        return msg;
    }else if(type == eResponse){
        auto msg = std::make_shared<labust_msgs::srv::RegisterControllerV3::Response>();
        ros2_labust_msgs_msg_RegisterControllerV3Response_common commonObj;
        commonObj.mCommonObjMap = commonObjMap;
        commonObj.copy_from_struct(msg.get(), arr[0], loader);
        return msg;
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
  std::shared_ptr<MATLABSvcServerInterface> 
          ros2_labust_msgs_RegisterControllerV3_service::generateSvcServerInterface(){
    return std::make_shared<ROS2SvcServerImpl<labust_msgs::srv::RegisterControllerV3,labust_msgs::srv::RegisterControllerV3::Request,labust_msgs::srv::RegisterControllerV3::Response,ros2_labust_msgs_msg_RegisterControllerV3Request_common,ros2_labust_msgs_msg_RegisterControllerV3Response_common>>();
  }
  std::shared_ptr<MATLABSvcClientInterface> 
          ros2_labust_msgs_RegisterControllerV3_service::generateSvcClientInterface(){
    return std::make_shared<ROS2SvcClientImpl<labust_msgs::srv::RegisterControllerV3,labust_msgs::srv::RegisterControllerV3::Request,labust_msgs::srv::RegisterControllerV3::Response,ros2_labust_msgs_msg_RegisterControllerV3Request_common,ros2_labust_msgs_msg_RegisterControllerV3Response_common,rclcpp::Client<labust_msgs::srv::RegisterControllerV3>::SharedFuture>>();
  }
  matlab::data::StructArray ros2_labust_msgs_RegisterControllerV3_service::generateMLMessage(ElementType type, 
                                                    void*  msgPtr ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    if(type == eRequest){
	    ros2_labust_msgs_msg_RegisterControllerV3Request_common commonObj;	
        commonObj.mCommonObjMap = commonObjMap;
	    MDFactory_T factory;
	    return commonObj.get_arr(factory, (labust_msgs::srv::RegisterControllerV3::Request*)msgPtr, loader);
    }else if(type == eResponse){
        ros2_labust_msgs_msg_RegisterControllerV3Response_common commonObj;	
        commonObj.mCommonObjMap = commonObjMap;	
	    MDFactory_T factory;
	    return commonObj.get_arr(factory, (labust_msgs::srv::RegisterControllerV3::Response*)msgPtr, loader);
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_msg_RegisterControllerV3Request_common, MATLABROS2MsgInterface<labust_msgs::srv::RegisterControllerV3::Request>)
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_msg_RegisterControllerV3Response_common, MATLABROS2MsgInterface<labust_msgs::srv::RegisterControllerV3::Response>)
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_RegisterControllerV3_service, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
