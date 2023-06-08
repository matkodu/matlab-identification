// Copyright 2021-2022 The MathWorks, Inc.
// Common copy functions for labust_msgs/ControllerSelectRequest
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
#include "labust_msgs/srv/controller_select.hpp"
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
class LABUST_MSGS_EXPORT ros2_labust_msgs_msg_ControllerSelectRequest_common : public MATLABROS2MsgInterface<labust_msgs::srv::ControllerSelect::Request> {
  public:
    virtual ~ros2_labust_msgs_msg_ControllerSelectRequest_common(){}
    virtual void copy_from_struct(labust_msgs::srv::ControllerSelect::Request* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    virtual MDArray_T get_arr(MDFactory_T& factory, const labust_msgs::srv::ControllerSelect::Request* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_labust_msgs_msg_ControllerSelectRequest_common::copy_from_struct(labust_msgs::srv::ControllerSelect::Request* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //name
        const matlab::data::CellArray name_cellarr = arr["name"];
        size_t nelem = name_cellarr.getNumberOfElements();
        for (size_t idx=0; idx < nelem; ++idx){
        	const matlab::data::CharArray name_arr = name_cellarr[idx];
        	msg->name.push_back(name_arr.toAscii());
        }
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'name' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'name' is wrong type; expected a string.");
    }
    try {
        //state
        const matlab::data::TypedArray<int32_t> state_arr = arr["state"];
        size_t nelem = state_arr.getNumberOfElements();
        	msg->state.resize(nelem);
        	std::copy(state_arr.begin(), state_arr.begin()+nelem, msg->state.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'state' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'state' is wrong type; expected a int32.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_labust_msgs_msg_ControllerSelectRequest_common::get_arr(MDFactory_T& factory, const labust_msgs::srv::ControllerSelect::Request* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","DISABLED","MANUAL","EXTERNAL","TRACKING","ACTIVATE","DEACTIVATE","name","state"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("labust_msgs/ControllerSelectRequest");
    // DISABLED
    auto currentElement_DISABLED = (msg + ctr)->DISABLED;
    outArray[ctr]["DISABLED"] = factory.createScalar(currentElement_DISABLED);
    // MANUAL
    auto currentElement_MANUAL = (msg + ctr)->MANUAL;
    outArray[ctr]["MANUAL"] = factory.createScalar(currentElement_MANUAL);
    // EXTERNAL
    auto currentElement_EXTERNAL = (msg + ctr)->EXTERNAL;
    outArray[ctr]["EXTERNAL"] = factory.createScalar(currentElement_EXTERNAL);
    // TRACKING
    auto currentElement_TRACKING = (msg + ctr)->TRACKING;
    outArray[ctr]["TRACKING"] = factory.createScalar(currentElement_TRACKING);
    // ACTIVATE
    auto currentElement_ACTIVATE = (msg + ctr)->ACTIVATE;
    outArray[ctr]["ACTIVATE"] = factory.createScalar(currentElement_ACTIVATE);
    // DEACTIVATE
    auto currentElement_DEACTIVATE = (msg + ctr)->DEACTIVATE;
    outArray[ctr]["DEACTIVATE"] = factory.createScalar(currentElement_DEACTIVATE);
    // name
    auto currentElement_name = (msg + ctr)->name;
    auto nameoutCell = factory.createCellArray({currentElement_name.size(),1});
    for(size_t idxin = 0; idxin < currentElement_name.size(); ++ idxin){
    	nameoutCell[idxin] = factory.createCharArray(currentElement_name[idxin]);
    }
    outArray[ctr]["name"] = nameoutCell;
    // state
    auto currentElement_state = (msg + ctr)->state;
    outArray[ctr]["state"] = factory.createArray<labust_msgs::srv::ControllerSelect::Request::_state_type::const_iterator, int32_t>({currentElement_state.size(), 1}, currentElement_state.begin(), currentElement_state.end());
    }
    return std::move(outArray);
  }
class LABUST_MSGS_EXPORT ros2_labust_msgs_msg_ControllerSelectResponse_common : public MATLABROS2MsgInterface<labust_msgs::srv::ControllerSelect::Response> {
  public:
    virtual ~ros2_labust_msgs_msg_ControllerSelectResponse_common(){}
    virtual void copy_from_struct(labust_msgs::srv::ControllerSelect::Response* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    virtual MDArray_T get_arr(MDFactory_T& factory, const labust_msgs::srv::ControllerSelect::Response* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_labust_msgs_msg_ControllerSelectResponse_common::copy_from_struct(labust_msgs::srv::ControllerSelect::Response* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //name
        const matlab::data::CellArray name_cellarr = arr["name"];
        size_t nelem = name_cellarr.getNumberOfElements();
        for (size_t idx=0; idx < nelem; ++idx){
        	const matlab::data::CharArray name_arr = name_cellarr[idx];
        	msg->name.push_back(name_arr.toAscii());
        }
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'name' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'name' is wrong type; expected a string.");
    }
    try {
        //success
        const matlab::data::TypedArray<bool> success_arr = arr["success"];
        size_t nelem = success_arr.getNumberOfElements();
        	msg->success.resize(nelem);
        	std::copy(success_arr.begin(), success_arr.begin()+nelem, msg->success.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'success' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'success' is wrong type; expected a logical.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_labust_msgs_msg_ControllerSelectResponse_common::get_arr(MDFactory_T& factory, const labust_msgs::srv::ControllerSelect::Response* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","name","success"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("labust_msgs/ControllerSelectResponse");
    // name
    auto currentElement_name = (msg + ctr)->name;
    auto nameoutCell = factory.createCellArray({currentElement_name.size(),1});
    for(size_t idxin = 0; idxin < currentElement_name.size(); ++ idxin){
    	nameoutCell[idxin] = factory.createCharArray(currentElement_name[idxin]);
    }
    outArray[ctr]["name"] = nameoutCell;
    // success
    auto currentElement_success = (msg + ctr)->success;
    outArray[ctr]["success"] = factory.createArray<labust_msgs::srv::ControllerSelect::Response::_success_type::const_iterator, bool>({currentElement_success.size(), 1}, currentElement_success.begin(), currentElement_success.end());
    }
    return std::move(outArray);
  } 
class LABUST_MSGS_EXPORT ros2_labust_msgs_ControllerSelect_service : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_labust_msgs_ControllerSelect_service(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
    virtual std::shared_ptr<MATLABSvcServerInterface> generateSvcServerInterface();
    virtual std::shared_ptr<MATLABSvcClientInterface> generateSvcClientInterface();
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_labust_msgs_ControllerSelect_service::generatePublisherInterface(ElementType type){
    if(type == eRequest){
        return std::make_shared<ROS2PublisherImpl<labust_msgs::srv::ControllerSelect::Request,ros2_labust_msgs_msg_ControllerSelectRequest_common>>();
    }else if(type == eResponse){
        return std::make_shared<ROS2PublisherImpl<labust_msgs::srv::ControllerSelect::Response,ros2_labust_msgs_msg_ControllerSelectResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
  std::shared_ptr<MATLABSubscriberInterface> 
          ros2_labust_msgs_ControllerSelect_service::generateSubscriberInterface(ElementType type){
    if(type == eRequest){
        return std::make_shared<ROS2SubscriberImpl<labust_msgs::srv::ControllerSelect::Request,ros2_labust_msgs_msg_ControllerSelectRequest_common>>();
    }else if(type == eResponse){
        return std::make_shared<ROS2SubscriberImpl<labust_msgs::srv::ControllerSelect::Response,ros2_labust_msgs_msg_ControllerSelectResponse_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
  std::shared_ptr<void> ros2_labust_msgs_ControllerSelect_service::generateCppMessage(ElementType type, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    if(type == eRequest){
        auto msg = std::make_shared<labust_msgs::srv::ControllerSelect::Request>();
        ros2_labust_msgs_msg_ControllerSelectRequest_common commonObj;
        commonObj.mCommonObjMap = commonObjMap;
        commonObj.copy_from_struct(msg.get(), arr[0], loader);
        return msg;
    }else if(type == eResponse){
        auto msg = std::make_shared<labust_msgs::srv::ControllerSelect::Response>();
        ros2_labust_msgs_msg_ControllerSelectResponse_common commonObj;
        commonObj.mCommonObjMap = commonObjMap;
        commonObj.copy_from_struct(msg.get(), arr[0], loader);
        return msg;
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
  std::shared_ptr<MATLABSvcServerInterface> 
          ros2_labust_msgs_ControllerSelect_service::generateSvcServerInterface(){
    return std::make_shared<ROS2SvcServerImpl<labust_msgs::srv::ControllerSelect,labust_msgs::srv::ControllerSelect::Request,labust_msgs::srv::ControllerSelect::Response,ros2_labust_msgs_msg_ControllerSelectRequest_common,ros2_labust_msgs_msg_ControllerSelectResponse_common>>();
  }
  std::shared_ptr<MATLABSvcClientInterface> 
          ros2_labust_msgs_ControllerSelect_service::generateSvcClientInterface(){
    return std::make_shared<ROS2SvcClientImpl<labust_msgs::srv::ControllerSelect,labust_msgs::srv::ControllerSelect::Request,labust_msgs::srv::ControllerSelect::Response,ros2_labust_msgs_msg_ControllerSelectRequest_common,ros2_labust_msgs_msg_ControllerSelectResponse_common,rclcpp::Client<labust_msgs::srv::ControllerSelect>::SharedFuture>>();
  }
  matlab::data::StructArray ros2_labust_msgs_ControllerSelect_service::generateMLMessage(ElementType type, 
                                                    void*  msgPtr ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    if(type == eRequest){
	    ros2_labust_msgs_msg_ControllerSelectRequest_common commonObj;	
        commonObj.mCommonObjMap = commonObjMap;
	    MDFactory_T factory;
	    return commonObj.get_arr(factory, (labust_msgs::srv::ControllerSelect::Request*)msgPtr, loader);
    }else if(type == eResponse){
        ros2_labust_msgs_msg_ControllerSelectResponse_common commonObj;	
        commonObj.mCommonObjMap = commonObjMap;	
	    MDFactory_T factory;
	    return commonObj.get_arr(factory, (labust_msgs::srv::ControllerSelect::Response*)msgPtr, loader);
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Request' or 'Response'");
    }
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_msg_ControllerSelectRequest_common, MATLABROS2MsgInterface<labust_msgs::srv::ControllerSelect::Request>)
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_msg_ControllerSelectResponse_common, MATLABROS2MsgInterface<labust_msgs::srv::ControllerSelect::Response>)
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_ControllerSelect_service, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
