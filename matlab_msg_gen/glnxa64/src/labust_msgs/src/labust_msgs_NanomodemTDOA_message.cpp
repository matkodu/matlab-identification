// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for labust_msgs/NanomodemTDOA
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
#include "labust_msgs/msg/nanomodem_tdoa.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class LABUST_MSGS_EXPORT ros2_labust_msgs_msg_NanomodemTDOA_common : public MATLABROS2MsgInterface<labust_msgs::msg::NanomodemTDOA> {
  public:
    virtual ~ros2_labust_msgs_msg_NanomodemTDOA_common(){}
    virtual void copy_from_struct(labust_msgs::msg::NanomodemTDOA* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const labust_msgs::msg::NanomodemTDOA* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_labust_msgs_msg_NanomodemTDOA_common::copy_from_struct(labust_msgs::msg::NanomodemTDOA* msg, const matlab::data::Struct& arr,
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
        //fpga_time
        const matlab::data::TypedArray<double> fpga_time_arr = arr["fpga_time"];
        msg->fpga_time = fpga_time_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'fpga_time' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'fpga_time' is wrong type; expected a double.");
    }
    try {
        //modem_times
        const matlab::data::TypedArray<uint64_t> modem_times_arr = arr["modem_times"];
        size_t nelem = modem_times_arr.getNumberOfElements();
        	msg->modem_times.resize(nelem);
        	std::copy(modem_times_arr.begin(), modem_times_arr.begin()+nelem, msg->modem_times.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'modem_times' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'modem_times' is wrong type; expected a uint64.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_labust_msgs_msg_NanomodemTDOA_common::get_arr(MDFactory_T& factory, const labust_msgs::msg::NanomodemTDOA* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","header","fpga_time","modem_times"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("labust_msgs/NanomodemTDOA");
    // header
    auto currentElement_header = (msg + ctr)->header;
    auto msgClassPtr_header = getCommonObject<std_msgs::msg::Header>("ros2_std_msgs_msg_Header_common",loader);
    outArray[ctr]["header"] = msgClassPtr_header->get_arr(factory, &currentElement_header, loader);
    // fpga_time
    auto currentElement_fpga_time = (msg + ctr)->fpga_time;
    outArray[ctr]["fpga_time"] = factory.createScalar(currentElement_fpga_time);
    // modem_times
    auto currentElement_modem_times = (msg + ctr)->modem_times;
    outArray[ctr]["modem_times"] = factory.createArray<labust_msgs::msg::NanomodemTDOA::_modem_times_type::const_iterator, uint64_t>({currentElement_modem_times.size(), 1}, currentElement_modem_times.begin(), currentElement_modem_times.end());
    }
    return std::move(outArray);
  } 
class LABUST_MSGS_EXPORT ros2_labust_msgs_NanomodemTDOA_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_labust_msgs_NanomodemTDOA_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_labust_msgs_NanomodemTDOA_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<labust_msgs::msg::NanomodemTDOA,ros2_labust_msgs_msg_NanomodemTDOA_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_labust_msgs_NanomodemTDOA_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<labust_msgs::msg::NanomodemTDOA,ros2_labust_msgs_msg_NanomodemTDOA_common>>();
  }
  std::shared_ptr<void> ros2_labust_msgs_NanomodemTDOA_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<labust_msgs::msg::NanomodemTDOA>();
    ros2_labust_msgs_msg_NanomodemTDOA_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_labust_msgs_NanomodemTDOA_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_labust_msgs_msg_NanomodemTDOA_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (labust_msgs::msg::NanomodemTDOA*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_msg_NanomodemTDOA_common, MATLABROS2MsgInterface<labust_msgs::msg::NanomodemTDOA>)
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_NanomodemTDOA_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER