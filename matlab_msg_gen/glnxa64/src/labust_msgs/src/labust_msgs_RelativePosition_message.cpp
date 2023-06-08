// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for labust_msgs/RelativePosition
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
#include "labust_msgs/msg/relative_position.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class LABUST_MSGS_EXPORT ros2_labust_msgs_msg_RelativePosition_common : public MATLABROS2MsgInterface<labust_msgs::msg::RelativePosition> {
  public:
    virtual ~ros2_labust_msgs_msg_RelativePosition_common(){}
    virtual void copy_from_struct(labust_msgs::msg::RelativePosition* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const labust_msgs::msg::RelativePosition* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_labust_msgs_msg_RelativePosition_common::copy_from_struct(labust_msgs::msg::RelativePosition* msg, const matlab::data::Struct& arr,
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
        //x
        const matlab::data::TypedArray<float> x_arr = arr["x"];
        msg->x = x_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'x' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'x' is wrong type; expected a single.");
    }
    try {
        //y
        const matlab::data::TypedArray<float> y_arr = arr["y"];
        msg->y = y_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'y' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'y' is wrong type; expected a single.");
    }
    try {
        //x_variance
        const matlab::data::TypedArray<float> x_variance_arr = arr["x_variance"];
        msg->x_variance = x_variance_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'x_variance' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'x_variance' is wrong type; expected a single.");
    }
    try {
        //y_variance
        const matlab::data::TypedArray<float> y_variance_arr = arr["y_variance"];
        msg->y_variance = y_variance_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'y_variance' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'y_variance' is wrong type; expected a single.");
    }
    try {
        //range
        const matlab::data::TypedArray<float> range_arr = arr["range"];
        msg->range = range_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'range' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'range' is wrong type; expected a single.");
    }
    try {
        //bearing
        const matlab::data::TypedArray<float> bearing_arr = arr["bearing"];
        msg->bearing = bearing_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'bearing' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'bearing' is wrong type; expected a single.");
    }
    try {
        //range_variance
        const matlab::data::TypedArray<float> range_variance_arr = arr["range_variance"];
        msg->range_variance = range_variance_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'range_variance' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'range_variance' is wrong type; expected a single.");
    }
    try {
        //bearing_variance
        const matlab::data::TypedArray<float> bearing_variance_arr = arr["bearing_variance"];
        msg->bearing_variance = bearing_variance_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'bearing_variance' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'bearing_variance' is wrong type; expected a single.");
    }
    try {
        //altitude
        const matlab::data::TypedArray<float> altitude_arr = arr["altitude"];
        msg->altitude = altitude_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'altitude' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'altitude' is wrong type; expected a single.");
    }
    try {
        //altitude_variance
        const matlab::data::TypedArray<float> altitude_variance_arr = arr["altitude_variance"];
        msg->altitude_variance = altitude_variance_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'altitude_variance' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'altitude_variance' is wrong type; expected a single.");
    }
    try {
        //heading
        const matlab::data::TypedArray<float> heading_arr = arr["heading"];
        msg->heading = heading_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'heading' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'heading' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_labust_msgs_msg_RelativePosition_common::get_arr(MDFactory_T& factory, const labust_msgs::msg::RelativePosition* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","header","x","y","x_variance","y_variance","range","bearing","range_variance","bearing_variance","altitude","altitude_variance","heading"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("labust_msgs/RelativePosition");
    // header
    auto currentElement_header = (msg + ctr)->header;
    auto msgClassPtr_header = getCommonObject<std_msgs::msg::Header>("ros2_std_msgs_msg_Header_common",loader);
    outArray[ctr]["header"] = msgClassPtr_header->get_arr(factory, &currentElement_header, loader);
    // x
    auto currentElement_x = (msg + ctr)->x;
    outArray[ctr]["x"] = factory.createScalar(currentElement_x);
    // y
    auto currentElement_y = (msg + ctr)->y;
    outArray[ctr]["y"] = factory.createScalar(currentElement_y);
    // x_variance
    auto currentElement_x_variance = (msg + ctr)->x_variance;
    outArray[ctr]["x_variance"] = factory.createScalar(currentElement_x_variance);
    // y_variance
    auto currentElement_y_variance = (msg + ctr)->y_variance;
    outArray[ctr]["y_variance"] = factory.createScalar(currentElement_y_variance);
    // range
    auto currentElement_range = (msg + ctr)->range;
    outArray[ctr]["range"] = factory.createScalar(currentElement_range);
    // bearing
    auto currentElement_bearing = (msg + ctr)->bearing;
    outArray[ctr]["bearing"] = factory.createScalar(currentElement_bearing);
    // range_variance
    auto currentElement_range_variance = (msg + ctr)->range_variance;
    outArray[ctr]["range_variance"] = factory.createScalar(currentElement_range_variance);
    // bearing_variance
    auto currentElement_bearing_variance = (msg + ctr)->bearing_variance;
    outArray[ctr]["bearing_variance"] = factory.createScalar(currentElement_bearing_variance);
    // altitude
    auto currentElement_altitude = (msg + ctr)->altitude;
    outArray[ctr]["altitude"] = factory.createScalar(currentElement_altitude);
    // altitude_variance
    auto currentElement_altitude_variance = (msg + ctr)->altitude_variance;
    outArray[ctr]["altitude_variance"] = factory.createScalar(currentElement_altitude_variance);
    // heading
    auto currentElement_heading = (msg + ctr)->heading;
    outArray[ctr]["heading"] = factory.createScalar(currentElement_heading);
    }
    return std::move(outArray);
  } 
class LABUST_MSGS_EXPORT ros2_labust_msgs_RelativePosition_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_labust_msgs_RelativePosition_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_labust_msgs_RelativePosition_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<labust_msgs::msg::RelativePosition,ros2_labust_msgs_msg_RelativePosition_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_labust_msgs_RelativePosition_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<labust_msgs::msg::RelativePosition,ros2_labust_msgs_msg_RelativePosition_common>>();
  }
  std::shared_ptr<void> ros2_labust_msgs_RelativePosition_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<labust_msgs::msg::RelativePosition>();
    ros2_labust_msgs_msg_RelativePosition_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_labust_msgs_RelativePosition_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_labust_msgs_msg_RelativePosition_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (labust_msgs::msg::RelativePosition*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_msg_RelativePosition_common, MATLABROS2MsgInterface<labust_msgs::msg::RelativePosition>)
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_RelativePosition_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER