// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for houghmessage/RWhoughLine
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
#include "houghmessage/msg/r_whough_line.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class HOUGHMESSAGE_EXPORT ros2_houghmessage_msg_RWhoughLine_common : public MATLABROS2MsgInterface<houghmessage::msg::RWhoughLine> {
  public:
    virtual ~ros2_houghmessage_msg_RWhoughLine_common(){}
    virtual void copy_from_struct(houghmessage::msg::RWhoughLine* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const houghmessage::msg::RWhoughLine* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_houghmessage_msg_RWhoughLine_common::copy_from_struct(houghmessage::msg::RWhoughLine* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //cmatrix
        const matlab::data::TypedArray<float> cmatrix_arr = arr["cmatrix"];
        size_t nelem = cmatrix_arr.getNumberOfElements();
        	msg->cmatrix.resize(nelem);
        	std::copy(cmatrix_arr.begin(), cmatrix_arr.begin()+nelem, msg->cmatrix.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'cmatrix' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'cmatrix' is wrong type; expected a single.");
    }
    try {
        //thaxis
        const matlab::data::TypedArray<float> thaxis_arr = arr["thaxis"];
        msg->thaxis = thaxis_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'thaxis' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'thaxis' is wrong type; expected a single.");
    }
    try {
        //raxis
        const matlab::data::TypedArray<float> raxis_arr = arr["raxis"];
        msg->raxis = raxis_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'raxis' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'raxis' is wrong type; expected a single.");
    }
    try {
        //vranges
        const matlab::data::TypedArray<float> vranges_arr = arr["vranges"];
        size_t nelem = vranges_arr.getNumberOfElements();
        	msg->vranges.resize(nelem);
        	std::copy(vranges_arr.begin(), vranges_arr.begin()+nelem, msg->vranges.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'vranges' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'vranges' is wrong type; expected a single.");
    }
    try {
        //vangles
        const matlab::data::TypedArray<float> vangles_arr = arr["vangles"];
        size_t nelem = vangles_arr.getNumberOfElements();
        	msg->vangles.resize(nelem);
        	std::copy(vangles_arr.begin(), vangles_arr.begin()+nelem, msg->vangles.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'vangles' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'vangles' is wrong type; expected a single.");
    }
    try {
        //row
        const matlab::data::TypedArray<int32_t> row_arr = arr["row"];
        msg->row = row_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'row' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'row' is wrong type; expected a int32.");
    }
    try {
        //col
        const matlab::data::TypedArray<int32_t> col_arr = arr["col"];
        msg->col = col_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'col' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'col' is wrong type; expected a int32.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_houghmessage_msg_RWhoughLine_common::get_arr(MDFactory_T& factory, const houghmessage::msg::RWhoughLine* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","cmatrix","thaxis","raxis","vranges","vangles","row","col"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("houghmessage/RWhoughLine");
    // cmatrix
    auto currentElement_cmatrix = (msg + ctr)->cmatrix;
    outArray[ctr]["cmatrix"] = factory.createArray<houghmessage::msg::RWhoughLine::_cmatrix_type::const_iterator, float>({currentElement_cmatrix.size(), 1}, currentElement_cmatrix.begin(), currentElement_cmatrix.end());
    // thaxis
    auto currentElement_thaxis = (msg + ctr)->thaxis;
    outArray[ctr]["thaxis"] = factory.createScalar(currentElement_thaxis);
    // raxis
    auto currentElement_raxis = (msg + ctr)->raxis;
    outArray[ctr]["raxis"] = factory.createScalar(currentElement_raxis);
    // vranges
    auto currentElement_vranges = (msg + ctr)->vranges;
    outArray[ctr]["vranges"] = factory.createArray<houghmessage::msg::RWhoughLine::_vranges_type::const_iterator, float>({currentElement_vranges.size(), 1}, currentElement_vranges.begin(), currentElement_vranges.end());
    // vangles
    auto currentElement_vangles = (msg + ctr)->vangles;
    outArray[ctr]["vangles"] = factory.createArray<houghmessage::msg::RWhoughLine::_vangles_type::const_iterator, float>({currentElement_vangles.size(), 1}, currentElement_vangles.begin(), currentElement_vangles.end());
    // row
    auto currentElement_row = (msg + ctr)->row;
    outArray[ctr]["row"] = factory.createScalar(currentElement_row);
    // col
    auto currentElement_col = (msg + ctr)->col;
    outArray[ctr]["col"] = factory.createScalar(currentElement_col);
    }
    return std::move(outArray);
  } 
class HOUGHMESSAGE_EXPORT ros2_houghmessage_RWhoughLine_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_houghmessage_RWhoughLine_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_houghmessage_RWhoughLine_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<houghmessage::msg::RWhoughLine,ros2_houghmessage_msg_RWhoughLine_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_houghmessage_RWhoughLine_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<houghmessage::msg::RWhoughLine,ros2_houghmessage_msg_RWhoughLine_common>>();
  }
  std::shared_ptr<void> ros2_houghmessage_RWhoughLine_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<houghmessage::msg::RWhoughLine>();
    ros2_houghmessage_msg_RWhoughLine_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_houghmessage_RWhoughLine_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_houghmessage_msg_RWhoughLine_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (houghmessage::msg::RWhoughLine*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_houghmessage_msg_RWhoughLine_common, MATLABROS2MsgInterface<houghmessage::msg::RWhoughLine>)
CLASS_LOADER_REGISTER_CLASS(ros2_houghmessage_RWhoughLine_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER