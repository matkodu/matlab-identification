// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for labust_msgs/NanomodemRequest
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
#include "labust_msgs/msg/nanomodem_request.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class LABUST_MSGS_EXPORT ros2_labust_msgs_msg_NanomodemRequest_common : public MATLABROS2MsgInterface<labust_msgs::msg::NanomodemRequest> {
  public:
    virtual ~ros2_labust_msgs_msg_NanomodemRequest_common(){}
    virtual void copy_from_struct(labust_msgs::msg::NanomodemRequest* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const labust_msgs::msg::NanomodemRequest* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_labust_msgs_msg_NanomodemRequest_common::copy_from_struct(labust_msgs::msg::NanomodemRequest* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //header
        const matlab::data::StructArray header_arr = arr["header"];
        auto msgClassPtr_header = getCommonObject<std_msgs::msg::Header>("ros2_std_msgs_msg_Header_common",loader);
        msgClassPtr_header->copy_from_struct(&msg->header,header_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'header' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'header' is wrong type; expected a struct.");
    }
    try {
        //req_type
        const matlab::data::TypedArray<uint8_t> req_type_arr = arr["req_type"];
        msg->req_type = req_type_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'req_type' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'req_type' is wrong type; expected a uint8.");
    }
    try {
        //scheduled
        const matlab::data::TypedArray<uint8_t> scheduled_arr = arr["scheduled"];
        msg->scheduled = scheduled_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'scheduled' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'scheduled' is wrong type; expected a uint8.");
    }
    try {
        //msg
        const matlab::data::TypedArray<uint8_t> msg_arr = arr["msg"];
        size_t nelem = msg_arr.getNumberOfElements();
        	msg->msg.resize(nelem);
        	std::copy(msg_arr.begin(), msg_arr.begin()+nelem, msg->msg.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'msg' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'msg' is wrong type; expected a uint8.");
    }
    try {
        //id
        const matlab::data::TypedArray<uint8_t> id_arr = arr["id"];
        msg->id = id_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'id' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'id' is wrong type; expected a uint8.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_labust_msgs_msg_NanomodemRequest_common::get_arr(MDFactory_T& factory, const labust_msgs::msg::NanomodemRequest* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","header","BRDCST","UNICST","PINGID","VOLTID","CHNGID","STATUS","UNICSTACK","TESTMSG","ECHOMSG","QUALITY","req_type","scheduled","msg","id"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("labust_msgs/NanomodemRequest");
    // header
    auto currentElement_header = (msg + ctr)->header;
    auto msgClassPtr_header = getCommonObject<std_msgs::msg::Header>("ros2_std_msgs_msg_Header_common",loader);
    outArray[ctr]["header"] = msgClassPtr_header->get_arr(factory, &currentElement_header, loader);
    // BRDCST
    auto currentElement_BRDCST = (msg + ctr)->BRDCST;
    outArray[ctr]["BRDCST"] = factory.createScalar(currentElement_BRDCST);
    // UNICST
    auto currentElement_UNICST = (msg + ctr)->UNICST;
    outArray[ctr]["UNICST"] = factory.createScalar(currentElement_UNICST);
    // PINGID
    auto currentElement_PINGID = (msg + ctr)->PINGID;
    outArray[ctr]["PINGID"] = factory.createScalar(currentElement_PINGID);
    // VOLTID
    auto currentElement_VOLTID = (msg + ctr)->VOLTID;
    outArray[ctr]["VOLTID"] = factory.createScalar(currentElement_VOLTID);
    // CHNGID
    auto currentElement_CHNGID = (msg + ctr)->CHNGID;
    outArray[ctr]["CHNGID"] = factory.createScalar(currentElement_CHNGID);
    // STATUS
    auto currentElement_STATUS = (msg + ctr)->STATUS;
    outArray[ctr]["STATUS"] = factory.createScalar(currentElement_STATUS);
    // UNICSTACK
    auto currentElement_UNICSTACK = (msg + ctr)->UNICSTACK;
    outArray[ctr]["UNICSTACK"] = factory.createScalar(currentElement_UNICSTACK);
    // TESTMSG
    auto currentElement_TESTMSG = (msg + ctr)->TESTMSG;
    outArray[ctr]["TESTMSG"] = factory.createScalar(currentElement_TESTMSG);
    // ECHOMSG
    auto currentElement_ECHOMSG = (msg + ctr)->ECHOMSG;
    outArray[ctr]["ECHOMSG"] = factory.createScalar(currentElement_ECHOMSG);
    // QUALITY
    auto currentElement_QUALITY = (msg + ctr)->QUALITY;
    outArray[ctr]["QUALITY"] = factory.createScalar(currentElement_QUALITY);
    // req_type
    auto currentElement_req_type = (msg + ctr)->req_type;
    outArray[ctr]["req_type"] = factory.createScalar(currentElement_req_type);
    // scheduled
    auto currentElement_scheduled = (msg + ctr)->scheduled;
    outArray[ctr]["scheduled"] = factory.createScalar(currentElement_scheduled);
    // msg
    auto currentElement_msg = (msg + ctr)->msg;
    outArray[ctr]["msg"] = factory.createArray<labust_msgs::msg::NanomodemRequest::_msg_type::const_iterator, uint8_t>({currentElement_msg.size(), 1}, currentElement_msg.begin(), currentElement_msg.end());
    // id
    auto currentElement_id = (msg + ctr)->id;
    outArray[ctr]["id"] = factory.createScalar(currentElement_id);
    }
    return std::move(outArray);
  } 
class LABUST_MSGS_EXPORT ros2_labust_msgs_NanomodemRequest_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_labust_msgs_NanomodemRequest_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_labust_msgs_NanomodemRequest_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<labust_msgs::msg::NanomodemRequest,ros2_labust_msgs_msg_NanomodemRequest_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_labust_msgs_NanomodemRequest_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<labust_msgs::msg::NanomodemRequest,ros2_labust_msgs_msg_NanomodemRequest_common>>();
  }
  std::shared_ptr<void> ros2_labust_msgs_NanomodemRequest_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<labust_msgs::msg::NanomodemRequest>();
    ros2_labust_msgs_msg_NanomodemRequest_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_labust_msgs_NanomodemRequest_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_labust_msgs_msg_NanomodemRequest_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (labust_msgs::msg::NanomodemRequest*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_msg_NanomodemRequest_common, MATLABROS2MsgInterface<labust_msgs::msg::NanomodemRequest>)
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_NanomodemRequest_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER