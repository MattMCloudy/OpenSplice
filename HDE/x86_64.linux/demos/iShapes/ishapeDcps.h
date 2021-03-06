//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: ishapeDcps.h
//  Source: ishapeDcps.idl
//  Generated: Fri Mar 24 02:03:16 2017
//  OpenSplice V6.4.140407OSS
//  
//******************************************************************
#ifndef _ISHAPEDCPS_H_
#define _ISHAPEDCPS_H_
#ifndef OPENSPLICE_ISOCXX_PSM
#define OPENSPLICE_ISOCXX_PSM
#endif

#include "sacpp_mapping.h"
#include "sacpp_DDS_DCPS.h"
#include "dds_dcps.h"
#include "ishape.h"


class ShapeTypeTypeSupportInterface;

typedef ShapeTypeTypeSupportInterface * ShapeTypeTypeSupportInterface_ptr;
typedef DDS_DCPSInterface_var < ShapeTypeTypeSupportInterface> ShapeTypeTypeSupportInterface_var;
typedef DDS_DCPSInterface_out < ShapeTypeTypeSupportInterface> ShapeTypeTypeSupportInterface_out;


class ShapeTypeDataWriter;

typedef ShapeTypeDataWriter * ShapeTypeDataWriter_ptr;
typedef DDS_DCPSInterface_var < ShapeTypeDataWriter> ShapeTypeDataWriter_var;
typedef DDS_DCPSInterface_out < ShapeTypeDataWriter> ShapeTypeDataWriter_out;


class ShapeTypeDataReader;

typedef ShapeTypeDataReader * ShapeTypeDataReader_ptr;
typedef DDS_DCPSInterface_var < ShapeTypeDataReader> ShapeTypeDataReader_var;
typedef DDS_DCPSInterface_out < ShapeTypeDataReader> ShapeTypeDataReader_out;


class ShapeTypeDataReaderView;

typedef ShapeTypeDataReaderView * ShapeTypeDataReaderView_ptr;
typedef DDS_DCPSInterface_var < ShapeTypeDataReaderView> ShapeTypeDataReaderView_var;
typedef DDS_DCPSInterface_out < ShapeTypeDataReaderView> ShapeTypeDataReaderView_out;


struct ShapeTypeSeq_uniq_ {};
typedef DDS_DCPSUVLSeq < ShapeType, struct ShapeTypeSeq_uniq_> ShapeTypeSeq;
typedef DDS_DCPSSequence_var < ShapeTypeSeq> ShapeTypeSeq_var;
typedef DDS_DCPSSequence_out < ShapeTypeSeq> ShapeTypeSeq_out;
class ShapeTypeTypeSupportInterface
:
   virtual public DDS::TypeSupport
{ 
public:
   typedef ShapeTypeTypeSupportInterface_ptr _ptr_type;
   typedef ShapeTypeTypeSupportInterface_var _var_type;

   static ShapeTypeTypeSupportInterface_ptr _duplicate (ShapeTypeTypeSupportInterface_ptr obj);
   DDS::Boolean _local_is_a (const char * id);

   static ShapeTypeTypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
   static ShapeTypeTypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
   static ShapeTypeTypeSupportInterface_ptr _nil () { return 0; }
   static const char * _local_id;
   ShapeTypeTypeSupportInterface_ptr _this () { return this; }


protected:
   ShapeTypeTypeSupportInterface () {};
   ~ShapeTypeTypeSupportInterface () {};
private:
   ShapeTypeTypeSupportInterface (const ShapeTypeTypeSupportInterface &);
   ShapeTypeTypeSupportInterface & operator = (const ShapeTypeTypeSupportInterface &);
};

class ShapeTypeDataWriter
:
   virtual public DDS::DataWriter
{ 
public:
   typedef ShapeTypeDataWriter_ptr _ptr_type;
   typedef ShapeTypeDataWriter_var _var_type;

   static ShapeTypeDataWriter_ptr _duplicate (ShapeTypeDataWriter_ptr obj);
   DDS::Boolean _local_is_a (const char * id);

   static ShapeTypeDataWriter_ptr _narrow (DDS::Object_ptr obj);
   static ShapeTypeDataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
   static ShapeTypeDataWriter_ptr _nil () { return 0; }
   static const char * _local_id;
   ShapeTypeDataWriter_ptr _this () { return this; }

   virtual DDS::LongLong register_instance (const ShapeType& instance_data) = 0;
   virtual DDS::LongLong register_instance_w_timestamp (const ShapeType& instance_data, const DDS::Time_t& source_timestamp) = 0;
   virtual DDS::Long unregister_instance (const ShapeType& instance_data, DDS::LongLong handle) = 0;
   virtual DDS::Long unregister_instance_w_timestamp (const ShapeType& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
   virtual DDS::Long write (const ShapeType& instance_data, DDS::LongLong handle) = 0;
   virtual DDS::Long write_w_timestamp (const ShapeType& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
   virtual DDS::Long dispose (const ShapeType& instance_data, DDS::LongLong handle) = 0;
   virtual DDS::Long dispose_w_timestamp (const ShapeType& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
   virtual DDS::Long writedispose (const ShapeType& instance_data, DDS::LongLong handle) = 0;
   virtual DDS::Long writedispose_w_timestamp (const ShapeType& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
   virtual DDS::Long get_key_value (ShapeType& key_holder, DDS::LongLong handle) = 0;
   virtual DDS::LongLong lookup_instance (const ShapeType& instance_data) = 0;

protected:
   ShapeTypeDataWriter () {};
   ~ShapeTypeDataWriter () {};
private:
   ShapeTypeDataWriter (const ShapeTypeDataWriter &);
   ShapeTypeDataWriter & operator = (const ShapeTypeDataWriter &);
};

class ShapeTypeDataReader
:
   virtual public DDS::DataReader
{ 
public:
   typedef ShapeTypeDataReader_ptr _ptr_type;
   typedef ShapeTypeDataReader_var _var_type;

   static ShapeTypeDataReader_ptr _duplicate (ShapeTypeDataReader_ptr obj);
   DDS::Boolean _local_is_a (const char * id);

   static ShapeTypeDataReader_ptr _narrow (DDS::Object_ptr obj);
   static ShapeTypeDataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
   static ShapeTypeDataReader_ptr _nil () { return 0; }
   static const char * _local_id;
   ShapeTypeDataReader_ptr _this () { return this; }

   virtual DDS::Long read (ShapeTypeSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
   virtual DDS::Long take (ShapeTypeSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
   virtual DDS::Long read_w_condition (ShapeTypeSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
   virtual DDS::Long take_w_condition (ShapeTypeSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
   virtual DDS::Long read_next_sample (ShapeType& received_data, DDS::SampleInfo& sample_info) = 0;
   virtual DDS::Long take_next_sample (ShapeType& received_data, DDS::SampleInfo& sample_info) = 0;
   virtual DDS::Long read_instance (ShapeTypeSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
   virtual DDS::Long take_instance (ShapeTypeSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
   virtual DDS::Long read_next_instance (ShapeTypeSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
   virtual DDS::Long take_next_instance (ShapeTypeSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
   virtual DDS::Long read_next_instance_w_condition (ShapeTypeSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
   virtual DDS::Long take_next_instance_w_condition (ShapeTypeSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
   virtual DDS::Long return_loan (ShapeTypeSeq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
   virtual DDS::Long get_key_value (ShapeType& key_holder, DDS::LongLong handle) = 0;
   virtual DDS::LongLong lookup_instance (const ShapeType& instance) = 0;

protected:
   ShapeTypeDataReader () {};
   ~ShapeTypeDataReader () {};
private:
   ShapeTypeDataReader (const ShapeTypeDataReader &);
   ShapeTypeDataReader & operator = (const ShapeTypeDataReader &);
};

class ShapeTypeDataReaderView
:
   virtual public DDS::DataReaderView
{ 
public:
   typedef ShapeTypeDataReaderView_ptr _ptr_type;
   typedef ShapeTypeDataReaderView_var _var_type;

   static ShapeTypeDataReaderView_ptr _duplicate (ShapeTypeDataReaderView_ptr obj);
   DDS::Boolean _local_is_a (const char * id);

   static ShapeTypeDataReaderView_ptr _narrow (DDS::Object_ptr obj);
   static ShapeTypeDataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
   static ShapeTypeDataReaderView_ptr _nil () { return 0; }
   static const char * _local_id;
   ShapeTypeDataReaderView_ptr _this () { return this; }

   virtual DDS::Long read (ShapeTypeSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
   virtual DDS::Long take (ShapeTypeSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
   virtual DDS::Long read_w_condition (ShapeTypeSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
   virtual DDS::Long take_w_condition (ShapeTypeSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
   virtual DDS::Long read_next_sample (ShapeType& received_data, DDS::SampleInfo& sample_info) = 0;
   virtual DDS::Long take_next_sample (ShapeType& received_data, DDS::SampleInfo& sample_info) = 0;
   virtual DDS::Long read_instance (ShapeTypeSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
   virtual DDS::Long take_instance (ShapeTypeSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
   virtual DDS::Long read_next_instance (ShapeTypeSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
   virtual DDS::Long take_next_instance (ShapeTypeSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
   virtual DDS::Long read_next_instance_w_condition (ShapeTypeSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
   virtual DDS::Long take_next_instance_w_condition (ShapeTypeSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
   virtual DDS::Long return_loan (ShapeTypeSeq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
   virtual DDS::Long get_key_value (ShapeType& key_holder, DDS::LongLong handle) = 0;
   virtual DDS::LongLong lookup_instance (const ShapeType& instance) = 0;

protected:
   ShapeTypeDataReaderView () {};
   ~ShapeTypeDataReaderView () {};
private:
   ShapeTypeDataReaderView (const ShapeTypeDataReaderView &);
   ShapeTypeDataReaderView & operator = (const ShapeTypeDataReaderView &);
};





#endif 
