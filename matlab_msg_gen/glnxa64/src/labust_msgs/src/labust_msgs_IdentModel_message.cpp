// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for labust_msgs/IdentModel
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
#include "labust_msgs/msg/ident_model.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class LABUST_MSGS_EXPORT ros2_labust_msgs_msg_IdentModel_common : public MATLABROS2MsgInterface<labust_msgs::msg::IdentModel> {
  public:
    virtual ~ros2_labust_msgs_msg_IdentModel_common(){}
    virtual void copy_from_struct(labust_msgs::msg::IdentModel* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const labust_msgs::msg::IdentModel* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_labust_msgs_msg_IdentModel_common::copy_from_struct(labust_msgs::msg::IdentModel* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //model_type
        const matlab::data::TypedArray<int32_t> model_type_arr = arr["model_type"];
        msg->model_type = model_type_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'model_type' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'model_type' is wrong type; expected a int32.");
    }
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
        //tf_num
        const matlab::data::TypedArray<float> tf_num_arr = arr["tf_num"];
        size_t nelem = tf_num_arr.getNumberOfElements();
        	msg->tf_num.resize(nelem);
        	std::copy(tf_num_arr.begin(), tf_num_arr.begin()+nelem, msg->tf_num.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'tf_num' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'tf_num' is wrong type; expected a single.");
    }
    try {
        //tf_den
        const matlab::data::TypedArray<float> tf_den_arr = arr["tf_den"];
        size_t nelem = tf_den_arr.getNumberOfElements();
        	msg->tf_den.resize(nelem);
        	std::copy(tf_den_arr.begin(), tf_den_arr.begin()+nelem, msg->tf_den.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'tf_den' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'tf_den' is wrong type; expected a single.");
    }
    try {
        //ss_dim_n
        const matlab::data::TypedArray<int32_t> ss_dim_n_arr = arr["ss_dim_n"];
        msg->ss_dim_n = ss_dim_n_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'ss_dim_n' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'ss_dim_n' is wrong type; expected a int32.");
    }
    try {
        //ss_dim_m
        const matlab::data::TypedArray<int32_t> ss_dim_m_arr = arr["ss_dim_m"];
        msg->ss_dim_m = ss_dim_m_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'ss_dim_m' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'ss_dim_m' is wrong type; expected a int32.");
    }
    try {
        //ss_mat_a
        const matlab::data::TypedArray<float> ss_mat_a_arr = arr["ss_mat_a"];
        size_t nelem = ss_mat_a_arr.getNumberOfElements();
        	msg->ss_mat_a.resize(nelem);
        	std::copy(ss_mat_a_arr.begin(), ss_mat_a_arr.begin()+nelem, msg->ss_mat_a.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'ss_mat_a' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'ss_mat_a' is wrong type; expected a single.");
    }
    try {
        //ss_mat_b
        const matlab::data::TypedArray<float> ss_mat_b_arr = arr["ss_mat_b"];
        size_t nelem = ss_mat_b_arr.getNumberOfElements();
        	msg->ss_mat_b.resize(nelem);
        	std::copy(ss_mat_b_arr.begin(), ss_mat_b_arr.begin()+nelem, msg->ss_mat_b.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'ss_mat_b' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'ss_mat_b' is wrong type; expected a single.");
    }
    try {
        //ss_mat_c
        const matlab::data::TypedArray<float> ss_mat_c_arr = arr["ss_mat_c"];
        size_t nelem = ss_mat_c_arr.getNumberOfElements();
        	msg->ss_mat_c.resize(nelem);
        	std::copy(ss_mat_c_arr.begin(), ss_mat_c_arr.begin()+nelem, msg->ss_mat_c.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'ss_mat_c' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'ss_mat_c' is wrong type; expected a single.");
    }
    try {
        //ss_mat_d
        const matlab::data::TypedArray<float> ss_mat_d_arr = arr["ss_mat_d"];
        size_t nelem = ss_mat_d_arr.getNumberOfElements();
        	msg->ss_mat_d.resize(nelem);
        	std::copy(ss_mat_d_arr.begin(), ss_mat_d_arr.begin()+nelem, msg->ss_mat_d.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'ss_mat_d' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'ss_mat_d' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_labust_msgs_msg_IdentModel_common::get_arr(MDFactory_T& factory, const labust_msgs::msg::IdentModel* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","X","Y","Z","K","M","N","MODEL_TF","MODEL_SS","model_type","dof","tf_num","tf_den","ss_dim_n","ss_dim_m","ss_mat_a","ss_mat_b","ss_mat_c","ss_mat_d"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("labust_msgs/IdentModel");
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
    // MODEL_SS
    auto currentElement_MODEL_SS = (msg + ctr)->MODEL_SS;
    outArray[ctr]["MODEL_SS"] = factory.createScalar(currentElement_MODEL_SS);
    // model_type
    auto currentElement_model_type = (msg + ctr)->model_type;
    outArray[ctr]["model_type"] = factory.createScalar(currentElement_model_type);
    // dof
    auto currentElement_dof = (msg + ctr)->dof;
    outArray[ctr]["dof"] = factory.createScalar(currentElement_dof);
    // tf_num
    auto currentElement_tf_num = (msg + ctr)->tf_num;
    outArray[ctr]["tf_num"] = factory.createArray<labust_msgs::msg::IdentModel::_tf_num_type::const_iterator, float>({currentElement_tf_num.size(), 1}, currentElement_tf_num.begin(), currentElement_tf_num.end());
    // tf_den
    auto currentElement_tf_den = (msg + ctr)->tf_den;
    outArray[ctr]["tf_den"] = factory.createArray<labust_msgs::msg::IdentModel::_tf_den_type::const_iterator, float>({currentElement_tf_den.size(), 1}, currentElement_tf_den.begin(), currentElement_tf_den.end());
    // ss_dim_n
    auto currentElement_ss_dim_n = (msg + ctr)->ss_dim_n;
    outArray[ctr]["ss_dim_n"] = factory.createScalar(currentElement_ss_dim_n);
    // ss_dim_m
    auto currentElement_ss_dim_m = (msg + ctr)->ss_dim_m;
    outArray[ctr]["ss_dim_m"] = factory.createScalar(currentElement_ss_dim_m);
    // ss_mat_a
    auto currentElement_ss_mat_a = (msg + ctr)->ss_mat_a;
    outArray[ctr]["ss_mat_a"] = factory.createArray<labust_msgs::msg::IdentModel::_ss_mat_a_type::const_iterator, float>({currentElement_ss_mat_a.size(), 1}, currentElement_ss_mat_a.begin(), currentElement_ss_mat_a.end());
    // ss_mat_b
    auto currentElement_ss_mat_b = (msg + ctr)->ss_mat_b;
    outArray[ctr]["ss_mat_b"] = factory.createArray<labust_msgs::msg::IdentModel::_ss_mat_b_type::const_iterator, float>({currentElement_ss_mat_b.size(), 1}, currentElement_ss_mat_b.begin(), currentElement_ss_mat_b.end());
    // ss_mat_c
    auto currentElement_ss_mat_c = (msg + ctr)->ss_mat_c;
    outArray[ctr]["ss_mat_c"] = factory.createArray<labust_msgs::msg::IdentModel::_ss_mat_c_type::const_iterator, float>({currentElement_ss_mat_c.size(), 1}, currentElement_ss_mat_c.begin(), currentElement_ss_mat_c.end());
    // ss_mat_d
    auto currentElement_ss_mat_d = (msg + ctr)->ss_mat_d;
    outArray[ctr]["ss_mat_d"] = factory.createArray<labust_msgs::msg::IdentModel::_ss_mat_d_type::const_iterator, float>({currentElement_ss_mat_d.size(), 1}, currentElement_ss_mat_d.begin(), currentElement_ss_mat_d.end());
    }
    return std::move(outArray);
  } 
class LABUST_MSGS_EXPORT ros2_labust_msgs_IdentModel_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_labust_msgs_IdentModel_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_labust_msgs_IdentModel_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<labust_msgs::msg::IdentModel,ros2_labust_msgs_msg_IdentModel_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_labust_msgs_IdentModel_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<labust_msgs::msg::IdentModel,ros2_labust_msgs_msg_IdentModel_common>>();
  }
  std::shared_ptr<void> ros2_labust_msgs_IdentModel_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<labust_msgs::msg::IdentModel>();
    ros2_labust_msgs_msg_IdentModel_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_labust_msgs_IdentModel_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_labust_msgs_msg_IdentModel_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (labust_msgs::msg::IdentModel*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_msg_IdentModel_common, MATLABROS2MsgInterface<labust_msgs::msg::IdentModel>)
CLASS_LOADER_REGISTER_CLASS(ros2_labust_msgs_IdentModel_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER