//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: HelloWorldDataDcps.cpp
//  Source: HelloWorldDataDcps.idl
//  Generated: Tue Mar 28 13:02:27 2017
//  OpenSplice V6.4.140407OSS
//  
//******************************************************************

#include "HelloWorldDataDcps.h"

#if DDS_USE_EXPLICIT_TEMPLATES
template class DDS_DCPSUVLSeq < HelloWorldData::Msg, struct MsgSeq_uniq_>;
#endif

const char * HelloWorldData::MsgTypeSupportInterface::_local_id = "IDL:HelloWorldData/MsgTypeSupportInterface:1.0";

HelloWorldData::MsgTypeSupportInterface_ptr HelloWorldData::MsgTypeSupportInterface::_duplicate (HelloWorldData::MsgTypeSupportInterface_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean HelloWorldData::MsgTypeSupportInterface::_local_is_a (const char * _id)
{
   if (strcmp (_id, HelloWorldData::MsgTypeSupportInterface::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::TypeSupport NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

HelloWorldData::MsgTypeSupportInterface_ptr HelloWorldData::MsgTypeSupportInterface::_narrow (DDS::Object_ptr p)
{
   HelloWorldData::MsgTypeSupportInterface_ptr result = NULL;
   if (p && p->_is_a (HelloWorldData::MsgTypeSupportInterface::_local_id))
   {
      result = dynamic_cast < HelloWorldData::MsgTypeSupportInterface_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

HelloWorldData::MsgTypeSupportInterface_ptr HelloWorldData::MsgTypeSupportInterface::_unchecked_narrow (DDS::Object_ptr p)
{
   HelloWorldData::MsgTypeSupportInterface_ptr result;
   result = dynamic_cast < HelloWorldData::MsgTypeSupportInterface_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * HelloWorldData::MsgDataWriter::_local_id = "IDL:HelloWorldData/MsgDataWriter:1.0";

HelloWorldData::MsgDataWriter_ptr HelloWorldData::MsgDataWriter::_duplicate (HelloWorldData::MsgDataWriter_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean HelloWorldData::MsgDataWriter::_local_is_a (const char * _id)
{
   if (strcmp (_id, HelloWorldData::MsgDataWriter::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::DataWriter NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

HelloWorldData::MsgDataWriter_ptr HelloWorldData::MsgDataWriter::_narrow (DDS::Object_ptr p)
{
   HelloWorldData::MsgDataWriter_ptr result = NULL;
   if (p && p->_is_a (HelloWorldData::MsgDataWriter::_local_id))
   {
      result = dynamic_cast < HelloWorldData::MsgDataWriter_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

HelloWorldData::MsgDataWriter_ptr HelloWorldData::MsgDataWriter::_unchecked_narrow (DDS::Object_ptr p)
{
   HelloWorldData::MsgDataWriter_ptr result;
   result = dynamic_cast < HelloWorldData::MsgDataWriter_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * HelloWorldData::MsgDataReader::_local_id = "IDL:HelloWorldData/MsgDataReader:1.0";

HelloWorldData::MsgDataReader_ptr HelloWorldData::MsgDataReader::_duplicate (HelloWorldData::MsgDataReader_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean HelloWorldData::MsgDataReader::_local_is_a (const char * _id)
{
   if (strcmp (_id, HelloWorldData::MsgDataReader::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::DataReader NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

HelloWorldData::MsgDataReader_ptr HelloWorldData::MsgDataReader::_narrow (DDS::Object_ptr p)
{
   HelloWorldData::MsgDataReader_ptr result = NULL;
   if (p && p->_is_a (HelloWorldData::MsgDataReader::_local_id))
   {
      result = dynamic_cast < HelloWorldData::MsgDataReader_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

HelloWorldData::MsgDataReader_ptr HelloWorldData::MsgDataReader::_unchecked_narrow (DDS::Object_ptr p)
{
   HelloWorldData::MsgDataReader_ptr result;
   result = dynamic_cast < HelloWorldData::MsgDataReader_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * HelloWorldData::MsgDataReaderView::_local_id = "IDL:HelloWorldData/MsgDataReaderView:1.0";

HelloWorldData::MsgDataReaderView_ptr HelloWorldData::MsgDataReaderView::_duplicate (HelloWorldData::MsgDataReaderView_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean HelloWorldData::MsgDataReaderView::_local_is_a (const char * _id)
{
   if (strcmp (_id, HelloWorldData::MsgDataReaderView::_local_id) == 0)
   {
      return true;
   }

   typedef DDS::DataReaderView NestedBase_1;

   if (NestedBase_1::_local_is_a (_id))
   {
      return true;
   }

   return false;
}

HelloWorldData::MsgDataReaderView_ptr HelloWorldData::MsgDataReaderView::_narrow (DDS::Object_ptr p)
{
   HelloWorldData::MsgDataReaderView_ptr result = NULL;
   if (p && p->_is_a (HelloWorldData::MsgDataReaderView::_local_id))
   {
      result = dynamic_cast < HelloWorldData::MsgDataReaderView_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

HelloWorldData::MsgDataReaderView_ptr HelloWorldData::MsgDataReaderView::_unchecked_narrow (DDS::Object_ptr p)
{
   HelloWorldData::MsgDataReaderView_ptr result;
   result = dynamic_cast < HelloWorldData::MsgDataReaderView_ptr> (p);
   if (result) result->m_count++;
   return result;
}



