// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for labust_msgs/FSPathInfo
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
#include "labust_msgs/msg/fs_path_info.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class LABUST_MSGS_EXPORT ros2_labust_msgs_msg_FSPathInfo_common : public MATLABROS2MsgInterface<labust_msgs::msg::FSPathInfo> {
  public:
    virtual ~ros2_labust_msgs_msg_FSPathInfo_common(){}
    virtual void copy_from_struct(labust_msgs::msg::FSPathInfo* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const labust_msgs::msg::FSPathInfo* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_labust_msgs_msg_FSPathInfo_common::copy_from_struct(labust_msgs::msg::FSPathInfo* msg, const matlab::data::Struct& arr,
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
        //delta_r
        const matlab::data::TypedArray<double> delta_r_arr = arr["delta_r"];
        msg->delta_r = delta_r_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'delta_r' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'delta_r' is wrong type; expected a double.");
    }
    try {
        //k
        const matlab::data::TypedArray<double> k_arr = arr["k"];
        msg->k = k_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'k' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'k' is wrong type; expected a double.");
    }
    try {
        //xi_r
        const matlab::data::TypedArray<double> xi_r_arr = arr["xi_r"];
        msg->xi_r = xi_r_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'xi_r' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'xi_r' is wrong type; expected a double.");
    }
    try {
        //dxi_r
        const matlab::data::TypedArray<double> dxi_r_arr = arr["dxi_r"];
        msg->dxi_r = dxi_r_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'dxi_r' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'dxi_r' is wrong type; expected a double.");
    }
    try {
        //pi
        const matlab::data::TypedArray<double> pi_arr = arr["pi"];
        msg->pi = pi_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'pi' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'pi' is wrong type; expected a double.");
    }
    try {
        //pi_tilda
        const matlab::data::TypedArray<double> pi_tilda_arr = arr["pi_tilda"];
        msg->pi_tilda = pi_tilda_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'pi_tilda' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'pi_tilda' is wrong type; expected a double.");
    }
    try {
        //dr_p
        const matlab::data::StructArray dr_p_arr = arr["dr_p"];
        auto msgClassPtr_dr_p = getCommonObject<geometry_msgs::msg::Point>("ros2_geometry_msgs_msg_Point_common",loader);
        msgClassPtr_dr_p->copy_from_struct(&msg->dr_p,dr_p_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'dr_p' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'dr_p' is wrong type; expected a struct.");
    }
    try {
        //position
        const matlab::data::StructArray position_arr = arr["position"];
        auto msgClassPtr_position = getCommonObject<geometry_msgs::msg::Point>("ros2_geometry_msgs_msg_Point_common",loader);
        msgClassPtr_position->copy_from_struct(&msg->position,position_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'position' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'position' is wrong type; expected a struct.");
    }
    try {
        //orientation
        const matlab::data::StructArray orientation_arr = arr["orientation"];
        auto msgClassPtr_orientation = getCommonObject<labust_msgs::msg::RPY>("ros2_labust_msgs_msg_RPY_common",loader);
        msgClassPtr_orientation->copy_from_struct(&msg->orientation,orientation_arr[0],loader);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'orientation' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'orientation' is wrong type; expected a struct.");
    }
    try {
        //curvature
        const matlab::data::TypedArray<double> curvature_arr = arr["curvature"];
        msg->curvature = curvature_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'curvature' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'curvature' is wrong type; expected a double.");
    }
    try {
        //torsion
        const matlab::data::TypedArray<double> torsion_arr = arr["torsion"];
        msg->torsion = torsion_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'torsion' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'torsion' is wrong type; expected a double.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_labust_msgs_msg_FSPathInfo_common::get_arr(MDFactory_T& factory, const labust_msgs::msg::FSPathInfo* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","header","delta_r","k","xi_r","dxi_r","pi","pi_tilda","dr_p","position","orientation","curvature","torsion"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("labust_msgs/FSPathInfo");
    // header
    auto currentElement_header = (msg + ctr)->header;
    auto msgClassPtr_header = getCommonObject<std_msgs::msg::Header>("ros2_std_msgs_msg_Header_common",loader);
    outArray[ctr]["header"] = msgClassPtr_header->get_arr(factory, &currentElement_header, loader);
    // delta_r
    auto currentElement_delta_r = (msg + ctr)->delta_r;
    outArray[ctr]["delta_r"] = factory.createScalar(currentElement_delta_r);
    // k
    auto currentElement_k = (msg + ctr)->k;
    outArray[ctr]["k"] = factory.createScalar(currentElement_k);
    // xi_r
    auto currentElement_xi_r = (msg + ctr)->xi_r;
    outArray[ctr]["xi_r"] = factory.createScalar(currentElement_xi_r);
    // dxi_r
    auto currentElement_dxi_r = (msg + ctr)->dxi_r;
    outArray[ctr]["dxi_r"] = factory.createScalar(currentElement_dxi_r);
    // pi
    auto currentElement_pi = (msg + ctr)->pi;
    outArray[ctr]["pi"] = factory.createScalar(currentElement_pi);
    // pi_tilda
    auto currentElement_pi_tilda = (msg + ctr)->pi_tilda;
    outArray[ctr]["pi_tilda"] = factory.createScalar(currentElement_pi_tilda);
    // dr_p
    auto currentElement_dr_p = (msg + ctr)->dr_p;
    auto msgClassPtr_dr_p = getCommonObject<geometry_msgs::msg::Point>("ros2_geometry_msgs_msg_Point_common",loader);
    outArray[ctr]["dr_p"] = msgClassPtr_dr_p->get_arr(factory, &currentElement_dr_p, loader);
    // position
    auto currentElement_position = (msg + ctr)->position;
    auto msgClassPtr_position = getCommonObject<geometry_msgs::msg::Point>("ros2_geometry_msgs_msg_Point_common",loader);
    outArray[ctr]["position"] = msgClassPtr_position->get_arr(factory, &currentElement_position, loader);
    // orientation
    auto currentElement_orientation = (msg + ctr)->orientation;
    auto msgClassPtr_orientation = getCommonObject<labust_msgs::msg::RPY>("ros2_labust_msgs_msg_RPY_common",loader);
    outArray[ctr]["orientation"] = msgClassPtr_orientation->get_arr(factory, &currentElement_orientation, loader);
    // curvature
    auto currentElement_curvature = (msg + ctr)->curvature;
    outArray[ctr]["curvature"] = factory.createScalar(currentElement_curvature);
    // torsion
    auto currentElement_torsion = (msg + ctr)->torsion;
    outArray[ctr]["torsion"] = factory.createScalar(currentElement_torsion);
    }
    return std::move(outArray);
  } 
class LABUST_MSGS_EXPORT ros2_labust_msgs_FSPathInfo_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_labust_msgs_FSPathInfo_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_labust_msgs_FSPathInfo_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<labust_msgs::msg::FSPathInfo,ros2_labust_msgs_msg_FSPathInfo_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_labust_msgs_FSPathInfo_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<labust_msgs::msg::FSPathInfo,ros2_labust_msgs_msg_FSPathInfo_common>>();
  }
  std::shared_ptr<void> ros2_labust_msgs_FSPathInfo_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<labust_msgs::msg::FSPathInfo>();
    ros2_labust_msgs_msg_FSPathInfo_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_labust_msgs_FSPathInfo_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_labust_msgs_msg_FSPathInfo_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (labust_msgs::msg::FSPathInfo*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_msg_FSPathInfo_common, MATLABROS2MsgInterface<labust_msgs::msg::FSPathInfo>)
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_FSPathInfo_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER