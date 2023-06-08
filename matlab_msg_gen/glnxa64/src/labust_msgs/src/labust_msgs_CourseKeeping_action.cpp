// Copyright 2022 The MathWorks, Inc.
// Common copy functions for labust_msgs/CourseKeepingGoal
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
#include "labust_msgs/action/course_keeping.hpp"
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
class LABUST_MSGS_EXPORT labust_msgs_msg_CourseKeepingGoal_common : public MATLABROS2MsgInterface<labust_msgs::action::CourseKeeping::Goal> {
  public:
    virtual ~labust_msgs_msg_CourseKeepingGoal_common(){}
    virtual void copy_from_struct(labust_msgs::action::CourseKeeping::Goal* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const labust_msgs::action::CourseKeeping::Goal* msg, MultiLibLoader loader, size_t size = 1);
};
  //----------------------------------------------------------------------------
  void labust_msgs_msg_CourseKeepingGoal_common::copy_from_struct(labust_msgs::action::CourseKeeping::Goal* msg, const matlab::data::Struct& arr, MultiLibLoader loader) {
    try {
        //subtype
        const matlab::data::TypedArray<uint8_t> subtype_arr = arr["subtype"];
        msg->subtype = subtype_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'subtype' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'subtype' is wrong type; expected a uint8.");
    }
    try {
        //ref_type
        const matlab::data::TypedArray<uint8_t> ref_type_arr = arr["ref_type"];
        msg->ref_type = ref_type_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'ref_type' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'ref_type' is wrong type; expected a uint8.");
    }
    try {
        //course
        const matlab::data::TypedArray<float> course_arr = arr["course"];
        msg->course = course_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'course' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'course' is wrong type; expected a single.");
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
        //yaw
        const matlab::data::TypedArray<float> yaw_arr = arr["yaw"];
        msg->yaw = yaw_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'yaw' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'yaw' is wrong type; expected a single.");
    }
    try {
        //topics
        const matlab::data::CellArray topics_cellarr = arr["topics"];
        size_t nelem = topics_cellarr.getNumberOfElements();
        for (size_t idx=0; idx < nelem; ++idx){
        	const matlab::data::CharArray topics_arr = topics_cellarr[idx];
        	msg->topics.push_back(topics_arr.toAscii());
        }
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'topics' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'topics' is wrong type; expected a string.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T labust_msgs_msg_CourseKeepingGoal_common::get_arr(MDFactory_T& factory, const labust_msgs::action::CourseKeeping::Goal* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","subtype","COURSE_KEEPING_UA","COURSE_KEEPING_FA","COURSE_KEEPING_FA_HDG","ref_type","CONSTANT","HEADING_TOPIC","SPEED_TOPIC","ALL_TOPIC","course","speed","yaw","topics"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("labust_msgs/CourseKeepingGoal");
    // subtype
    auto currentElement_subtype = (msg + ctr)->subtype;
    outArray[ctr]["subtype"] = factory.createScalar(currentElement_subtype);
    // COURSE_KEEPING_UA
    auto currentElement_COURSE_KEEPING_UA = (msg + ctr)->COURSE_KEEPING_UA;
    outArray[ctr]["COURSE_KEEPING_UA"] = factory.createScalar(currentElement_COURSE_KEEPING_UA);
    // COURSE_KEEPING_FA
    auto currentElement_COURSE_KEEPING_FA = (msg + ctr)->COURSE_KEEPING_FA;
    outArray[ctr]["COURSE_KEEPING_FA"] = factory.createScalar(currentElement_COURSE_KEEPING_FA);
    // COURSE_KEEPING_FA_HDG
    auto currentElement_COURSE_KEEPING_FA_HDG = (msg + ctr)->COURSE_KEEPING_FA_HDG;
    outArray[ctr]["COURSE_KEEPING_FA_HDG"] = factory.createScalar(currentElement_COURSE_KEEPING_FA_HDG);
    // ref_type
    auto currentElement_ref_type = (msg + ctr)->ref_type;
    outArray[ctr]["ref_type"] = factory.createScalar(currentElement_ref_type);
    // CONSTANT
    auto currentElement_CONSTANT = (msg + ctr)->CONSTANT;
    outArray[ctr]["CONSTANT"] = factory.createScalar(currentElement_CONSTANT);
    // HEADING_TOPIC
    auto currentElement_HEADING_TOPIC = (msg + ctr)->HEADING_TOPIC;
    outArray[ctr]["HEADING_TOPIC"] = factory.createScalar(currentElement_HEADING_TOPIC);
    // SPEED_TOPIC
    auto currentElement_SPEED_TOPIC = (msg + ctr)->SPEED_TOPIC;
    outArray[ctr]["SPEED_TOPIC"] = factory.createScalar(currentElement_SPEED_TOPIC);
    // ALL_TOPIC
    auto currentElement_ALL_TOPIC = (msg + ctr)->ALL_TOPIC;
    outArray[ctr]["ALL_TOPIC"] = factory.createScalar(currentElement_ALL_TOPIC);
    // course
    auto currentElement_course = (msg + ctr)->course;
    outArray[ctr]["course"] = factory.createScalar(currentElement_course);
    // speed
    auto currentElement_speed = (msg + ctr)->speed;
    outArray[ctr]["speed"] = factory.createScalar(currentElement_speed);
    // yaw
    auto currentElement_yaw = (msg + ctr)->yaw;
    outArray[ctr]["yaw"] = factory.createScalar(currentElement_yaw);
    // topics
    auto currentElement_topics = (msg + ctr)->topics;
    auto topicsoutCell = factory.createCellArray({currentElement_topics.size(),1});
    for(size_t idxin = 0; idxin < currentElement_topics.size(); ++ idxin){
    	topicsoutCell[idxin] = factory.createCharArray(currentElement_topics[idxin]);
    }
    outArray[ctr]["topics"] = topicsoutCell;
    }
    return std::move(outArray);
  }

class LABUST_MSGS_EXPORT labust_msgs_msg_CourseKeepingResult_common : public MATLABROS2MsgInterface<labust_msgs::action::CourseKeeping::Result> {
  public:
    virtual ~labust_msgs_msg_CourseKeepingResult_common(){}
    virtual void copy_from_struct(labust_msgs::action::CourseKeeping::Result* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const labust_msgs::action::CourseKeeping::Result* msg, MultiLibLoader loader, size_t size = 1);
};
  //----------------------------------------------------------------------------
  void labust_msgs_msg_CourseKeepingResult_common::copy_from_struct(labust_msgs::action::CourseKeeping::Result* msg, const matlab::data::Struct& arr, MultiLibLoader loader) {
    try {
        //success
        const matlab::data::TypedArray<int32_t> success_arr = arr["success"];
        msg->success = success_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'success' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'success' is wrong type; expected a int32.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T labust_msgs_msg_CourseKeepingResult_common::get_arr(MDFactory_T& factory, const labust_msgs::action::CourseKeeping::Result* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","success"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("labust_msgs/CourseKeepingResult");
    // success
    auto currentElement_success = (msg + ctr)->success;
    outArray[ctr]["success"] = factory.createScalar(currentElement_success);
    }
    return std::move(outArray);
  }

class LABUST_MSGS_EXPORT labust_msgs_msg_CourseKeepingFeedback_common : public MATLABROS2MsgInterface<labust_msgs::action::CourseKeeping::Feedback> {
  public:
    virtual ~labust_msgs_msg_CourseKeepingFeedback_common(){}
    virtual void copy_from_struct(labust_msgs::action::CourseKeeping::Feedback* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const labust_msgs::action::CourseKeeping::Feedback* msg, MultiLibLoader loader, size_t size = 1);
};
  //----------------------------------------------------------------------------
  void labust_msgs_msg_CourseKeepingFeedback_common::copy_from_struct(labust_msgs::action::CourseKeeping::Feedback* msg, const matlab::data::Struct& arr, MultiLibLoader loader) {
    try {
        //feedback
        const matlab::data::TypedArray<int32_t> feedback_arr = arr["feedback"];
        msg->feedback = feedback_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'feedback' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'feedback' is wrong type; expected a int32.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T labust_msgs_msg_CourseKeepingFeedback_common::get_arr(MDFactory_T& factory, const labust_msgs::action::CourseKeeping::Feedback* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","feedback"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("labust_msgs/CourseKeepingFeedback");
    // feedback
    auto currentElement_feedback = (msg + ctr)->feedback;
    outArray[ctr]["feedback"] = factory.createScalar(currentElement_feedback);
    }
    return std::move(outArray);
  }

class LABUST_MSGS_EXPORT ros2_labust_msgs_CourseKeeping_action : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_labust_msgs_CourseKeeping_action(){}
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
          ros2_labust_msgs_CourseKeeping_action::generatePublisherInterface(ElementType type){
    std::shared_ptr<MATLABPublisherInterface> ptr;
    if(type == eGoal){
        ptr = std::make_shared<ROS2PublisherImpl<labust_msgs::action::CourseKeeping::Goal,labust_msgs_msg_CourseKeepingGoal_common>>();
    }else if(type == eFeedback){
        ptr = std::make_shared<ROS2PublisherImpl<labust_msgs::action::CourseKeeping::Feedback,labust_msgs_msg_CourseKeepingFeedback_common>>();
    }else if(type == eResult){
        ptr = std::make_shared<ROS2PublisherImpl<labust_msgs::action::CourseKeeping::Result,labust_msgs_msg_CourseKeepingResult_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Goal' or 'Feedback' or 'Result'");
    }
    return ptr;
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_labust_msgs_CourseKeeping_action::generateSubscriberInterface(ElementType type){
    std::shared_ptr<MATLABSubscriberInterface> ptr;
    if(type == eGoal){
        ptr = std::make_shared<ROS2SubscriberImpl<labust_msgs::action::CourseKeeping::Goal,labust_msgs_msg_CourseKeepingGoal_common>>();
    }else if(type == eFeedback){
        ptr = std::make_shared<ROS2SubscriberImpl<labust_msgs::action::CourseKeeping::Feedback,labust_msgs_msg_CourseKeepingFeedback_common>>();
    }else if(type == eResult){
        ptr = std::make_shared<ROS2SubscriberImpl<labust_msgs::action::CourseKeeping::Result,labust_msgs_msg_CourseKeepingResult_common>>();
    }else{
        throw std::invalid_argument("Wrong input, Expected 'Goal' or 'Feedback' or 'Result'");
    }
    return ptr;
  }
  std::shared_ptr<MATLABActClientInterface> 
          ros2_labust_msgs_CourseKeeping_action::generateActClientInterface(){
      return std::make_shared<ROS2ActClientImpl<labust_msgs::action::CourseKeeping,labust_msgs::action::CourseKeeping::Goal,labust_msgs::action::CourseKeeping::Feedback::ConstSharedPtr,labust_msgs::action::CourseKeeping::Result::ConstSharedPtr,labust_msgs_msg_CourseKeepingGoal_common,labust_msgs_msg_CourseKeepingFeedback_common,labust_msgs_msg_CourseKeepingResult_common>>();
  }
  std::shared_ptr<void> ros2_labust_msgs_CourseKeeping_action::generateCppMessage(ElementType type, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    if(type == eGoal){
        auto msg = std::make_shared<labust_msgs::action::CourseKeeping::Goal>();
        labust_msgs_msg_CourseKeepingGoal_common commonObj;
        commonObj.mCommonObjMap = commonObjMap;
        commonObj.copy_from_struct(msg.get(), arr[0], loader);
        return msg;
    }else if(type == eFeedback){
        auto msg = std::make_shared<labust_msgs::action::CourseKeeping::Feedback>();
        labust_msgs_msg_CourseKeepingFeedback_common commonObj;
        commonObj.mCommonObjMap = commonObjMap;
        commonObj.copy_from_struct(msg.get(), arr[0], loader);
        return msg;
    }else if(type == eResult){
        auto msg = std::make_shared<labust_msgs::action::CourseKeeping::Result>();
        labust_msgs_msg_CourseKeepingResult_common commonObj;
        commonObj.mCommonObjMap = commonObjMap;
        commonObj.copy_from_struct(msg.get(), arr[0], loader);
        return msg;
   }else{
        throw std::invalid_argument("Wrong input, Expected 'Goal' or 'Feedback' or 'Result'");
    }
  }
 matlab::data::StructArray ros2_labust_msgs_CourseKeeping_action::generateMLMessage(ElementType type, 
                                                    void*  msgPtr ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    if(type == eGoal){
	    labust_msgs_msg_CourseKeepingGoal_common commonObj;	
        commonObj.mCommonObjMap = commonObjMap;
	    MDFactory_T factory;
	    return commonObj.get_arr(factory, (labust_msgs::action::CourseKeeping::Goal*)msgPtr, loader);
    }else if(type == eResult){
        labust_msgs_msg_CourseKeepingResult_common commonObj;	
        commonObj.mCommonObjMap = commonObjMap;
	    MDFactory_T factory;
	    return commonObj.get_arr(factory, (labust_msgs::action::CourseKeeping::Result*)msgPtr, loader);
    }else if(type == eFeedback){
        labust_msgs_msg_CourseKeepingFeedback_common commonObj;
        commonObj.mCommonObjMap = commonObjMap;
	    MDFactory_T factory;
	    return commonObj.get_arr(factory, (labust_msgs::action::CourseKeeping::Feedback*)msgPtr, loader);
    }
     else{
        throw std::invalid_argument("Wrong input, Expected 'Goal' or 'Feedback' or 'Result'");
    }
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(labust_msgs_msg_CourseKeepingGoal_common, MATLABROS2MsgInterface<labust_msgs::action::CourseKeeping::Goal>)
CLASS_LOADER_REGISTER_CLASS(labust_msgs_msg_CourseKeepingFeedback_common, MATLABROS2MsgInterface<labust_msgs::action::CourseKeeping::Feedback>)
CLASS_LOADER_REGISTER_CLASS(labust_msgs_msg_CourseKeepingResult_common, MATLABROS2MsgInterface<labust_msgs::action::CourseKeeping::Result>)
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_CourseKeeping_action, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1