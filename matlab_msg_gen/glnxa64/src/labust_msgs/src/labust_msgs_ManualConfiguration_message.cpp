// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for labust_msgs/ManualConfiguration
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
#include "labust_msgs/msg/manual_configuration.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class LABUST_MSGS_EXPORT ros2_labust_msgs_msg_ManualConfiguration_common : public MATLABROS2MsgInterface<labust_msgs::msg::ManualConfiguration> {
  public:
    virtual ~ros2_labust_msgs_msg_ManualConfiguration_common(){}
    virtual void copy_from_struct(labust_msgs::msg::ManualConfiguration* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const labust_msgs::msg::ManualConfiguration* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_labust_msgs_msg_ManualConfiguration_common::copy_from_struct(labust_msgs::msg::ManualConfiguration* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //axes_map
        const matlab::data::TypedArray<int32_t> axes_map_arr = arr["axes_map"];
        size_t nelem = axes_map_arr.getNumberOfElements();
        	msg->axes_map.resize(nelem);
        	std::copy(axes_map_arr.begin(), axes_map_arr.begin()+nelem, msg->axes_map.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'axes_map' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'axes_map' is wrong type; expected a int32.");
    }
    try {
        //scale_map
        const matlab::data::TypedArray<float> scale_map_arr = arr["scale_map"];
        size_t nelem = scale_map_arr.getNumberOfElements();
        	msg->scale_map.resize(nelem);
        	std::copy(scale_map_arr.begin(), scale_map_arr.begin()+nelem, msg->scale_map.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'scale_map' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'scale_map' is wrong type; expected a single.");
    }
    try {
        //integrated
        const matlab::data::TypedArray<float> integrated_arr = arr["integrated"];
        size_t nelem = integrated_arr.getNumberOfElements();
        	msg->integrated.resize(nelem);
        	std::copy(integrated_arr.begin(), integrated_arr.begin()+nelem, msg->integrated.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'integrated' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'integrated' is wrong type; expected a single.");
    }
    try {
        //maximum_effort
        const matlab::data::TypedArray<float> maximum_effort_arr = arr["maximum_effort"];
        size_t nelem = maximum_effort_arr.getNumberOfElements();
        	msg->maximum_effort.resize(nelem);
        	std::copy(maximum_effort_arr.begin(), maximum_effort_arr.begin()+nelem, msg->maximum_effort.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'maximum_effort' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'maximum_effort' is wrong type; expected a single.");
    }
    try {
        //maximum_nu
        const matlab::data::TypedArray<float> maximum_nu_arr = arr["maximum_nu"];
        size_t nelem = maximum_nu_arr.getNumberOfElements();
        	msg->maximum_nu.resize(nelem);
        	std::copy(maximum_nu_arr.begin(), maximum_nu_arr.begin()+nelem, msg->maximum_nu.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'maximum_nu' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'maximum_nu' is wrong type; expected a single.");
    }
    try {
        //maximum_speed
        const matlab::data::TypedArray<float> maximum_speed_arr = arr["maximum_speed"];
        size_t nelem = maximum_speed_arr.getNumberOfElements();
        	msg->maximum_speed.resize(nelem);
        	std::copy(maximum_speed_arr.begin(), maximum_speed_arr.begin()+nelem, msg->maximum_speed.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'maximum_speed' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'maximum_speed' is wrong type; expected a single.");
    }
    try {
        //sampling_time
        const matlab::data::TypedArray<double> sampling_time_arr = arr["sampling_time"];
        msg->sampling_time = sampling_time_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'sampling_time' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'sampling_time' is wrong type; expected a double.");
    }
    try {
        //use_ff
        const matlab::data::TypedArray<bool> use_ff_arr = arr["use_ff"];
        msg->use_ff = use_ff_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'use_ff' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'use_ff' is wrong type; expected a logical.");
    }
    try {
        //topic
        const matlab::data::CharArray topic_arr = arr["topic"];
        msg->topic = topic_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'topic' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'topic' is wrong type; expected a string.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_labust_msgs_msg_ManualConfiguration_common::get_arr(MDFactory_T& factory, const labust_msgs::msg::ManualConfiguration* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","DISABLED","X","Y","Z","K","M","N","axes_map","scale_map","integrated","maximum_effort","maximum_nu","maximum_speed","sampling_time","use_ff","topic"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("labust_msgs/ManualConfiguration");
    // DISABLED
    auto currentElement_DISABLED = (msg + ctr)->DISABLED;
    outArray[ctr]["DISABLED"] = factory.createScalar(currentElement_DISABLED);
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
    // axes_map
    auto currentElement_axes_map = (msg + ctr)->axes_map;
    outArray[ctr]["axes_map"] = factory.createArray<labust_msgs::msg::ManualConfiguration::_axes_map_type::const_iterator, int32_t>({currentElement_axes_map.size(), 1}, currentElement_axes_map.begin(), currentElement_axes_map.end());
    // scale_map
    auto currentElement_scale_map = (msg + ctr)->scale_map;
    outArray[ctr]["scale_map"] = factory.createArray<labust_msgs::msg::ManualConfiguration::_scale_map_type::const_iterator, float>({currentElement_scale_map.size(), 1}, currentElement_scale_map.begin(), currentElement_scale_map.end());
    // integrated
    auto currentElement_integrated = (msg + ctr)->integrated;
    outArray[ctr]["integrated"] = factory.createArray<labust_msgs::msg::ManualConfiguration::_integrated_type::const_iterator, float>({currentElement_integrated.size(), 1}, currentElement_integrated.begin(), currentElement_integrated.end());
    // maximum_effort
    auto currentElement_maximum_effort = (msg + ctr)->maximum_effort;
    outArray[ctr]["maximum_effort"] = factory.createArray<labust_msgs::msg::ManualConfiguration::_maximum_effort_type::const_iterator, float>({currentElement_maximum_effort.size(), 1}, currentElement_maximum_effort.begin(), currentElement_maximum_effort.end());
    // maximum_nu
    auto currentElement_maximum_nu = (msg + ctr)->maximum_nu;
    outArray[ctr]["maximum_nu"] = factory.createArray<labust_msgs::msg::ManualConfiguration::_maximum_nu_type::const_iterator, float>({currentElement_maximum_nu.size(), 1}, currentElement_maximum_nu.begin(), currentElement_maximum_nu.end());
    // maximum_speed
    auto currentElement_maximum_speed = (msg + ctr)->maximum_speed;
    outArray[ctr]["maximum_speed"] = factory.createArray<labust_msgs::msg::ManualConfiguration::_maximum_speed_type::const_iterator, float>({currentElement_maximum_speed.size(), 1}, currentElement_maximum_speed.begin(), currentElement_maximum_speed.end());
    // sampling_time
    auto currentElement_sampling_time = (msg + ctr)->sampling_time;
    outArray[ctr]["sampling_time"] = factory.createScalar(currentElement_sampling_time);
    // use_ff
    auto currentElement_use_ff = (msg + ctr)->use_ff;
    outArray[ctr]["use_ff"] = factory.createScalar(currentElement_use_ff);
    // topic
    auto currentElement_topic = (msg + ctr)->topic;
    outArray[ctr]["topic"] = factory.createCharArray(currentElement_topic);
    }
    return std::move(outArray);
  } 
class LABUST_MSGS_EXPORT ros2_labust_msgs_ManualConfiguration_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_labust_msgs_ManualConfiguration_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_labust_msgs_ManualConfiguration_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<labust_msgs::msg::ManualConfiguration,ros2_labust_msgs_msg_ManualConfiguration_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_labust_msgs_ManualConfiguration_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<labust_msgs::msg::ManualConfiguration,ros2_labust_msgs_msg_ManualConfiguration_common>>();
  }
  std::shared_ptr<void> ros2_labust_msgs_ManualConfiguration_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<labust_msgs::msg::ManualConfiguration>();
    ros2_labust_msgs_msg_ManualConfiguration_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_labust_msgs_ManualConfiguration_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_labust_msgs_msg_ManualConfiguration_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (labust_msgs::msg::ManualConfiguration*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_msg_ManualConfiguration_common, MATLABROS2MsgInterface<labust_msgs::msg::ManualConfiguration>)
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_ManualConfiguration_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER