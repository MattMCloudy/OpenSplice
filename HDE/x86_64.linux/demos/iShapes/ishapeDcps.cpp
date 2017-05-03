//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: ishapeDcps.cpp
//  Source: ishapeDcps.idl
//  Generated: Fri Mar 24 02:03:16 2017
//  OpenSplice V6.4.140407OSS
//  
//******************************************************************

#include "ishapeDcps.h"

#if DDS_USE_EXPLICIT_TEMPLATES
template class DDS_DCPSUVLSeq < ShapeType, struct ShapeTypeSeq_uniq_>;
#endif

const char * ShapeTypeTypeSupportInterface::_local_id = "IDL:ShapeTypeTypeSupportInterface:1.0";

ShapeTypeTypeSupportInterface_ptr ShapeTypeTypeSupportInterface::_duplicate (ShapeTypeTypeSupportInterface_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean ShapeTypeTypeSupportInterface::_local_is_a (const char * _id)
{
   if (strcmp (_id, ShapeTypeTypeSupportInterface::_local_id) == 0)
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

ShapeTypeTypeSupportInterface_ptr ShapeTypeTypeSupportInterface::_narrow (DDS::Object_ptr p)
{
   ShapeTypeTypeSupportInterface_ptr result = NULL;
   if (p && p->_is_a (ShapeTypeTypeSupportInterface::_local_id))
   {
      result = dynamic_cast < ShapeTypeTypeSupportInterface_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

ShapeTypeTypeSupportInterface_ptr ShapeTypeTypeSupportInterface::_unchecked_narrow (DDS::Object_ptr p)
{
   ShapeTypeTypeSupportInterface_ptr result;
   result = dynamic_cast < ShapeTypeTypeSupportInterface_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * ShapeTypeDataWriter::_local_id = "IDL:ShapeTypeDataWriter:1.0";

ShapeTypeDataWriter_ptr ShapeTypeDataWriter::_duplicate (ShapeTypeDataWriter_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean ShapeTypeDataWriter::_local_is_a (const char * _id)
{
   if (strcmp (_id, ShapeTypeDataWriter::_local_id) == 0)
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

ShapeTypeDataWriter_ptr ShapeTypeDataWriter::_narrow (DDS::Object_ptr p)
{
   ShapeTypeDataWriter_ptr result = NULL;
   if (p && p->_is_a (ShapeTypeDataWriter::_local_id))
   {
      result = dynamic_cast < ShapeTypeDataWriter_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

ShapeTypeDataWriter_ptr ShapeTypeDataWriter::_unchecked_narrow (DDS::Object_ptr p)
{
   ShapeTypeDataWriter_ptr result;
   result = dynamic_cast < ShapeTypeDataWriter_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * ShapeTypeDataReader::_local_id = "IDL:ShapeTypeDataReader:1.0";

ShapeTypeDataReader_ptr ShapeTypeDataReader::_duplicate (ShapeTypeDataReader_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean ShapeTypeDataReader::_local_is_a (const char * _id)
{
   if (strcmp (_id, ShapeTypeDataReader::_local_id) == 0)
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

ShapeTypeDataReader_ptr ShapeTypeDataReader::_narrow (DDS::Object_ptr p)
{
   ShapeTypeDataReader_ptr result = NULL;
   if (p && p->_is_a (ShapeTypeDataReader::_local_id))
   {
      result = dynamic_cast < ShapeTypeDataReader_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

ShapeTypeDataReader_ptr ShapeTypeDataReader::_unchecked_narrow (DDS::Object_ptr p)
{
   ShapeTypeDataReader_ptr result;
   result = dynamic_cast < ShapeTypeDataReader_ptr> (p);
   if (result) result->m_count++;
   return result;
}

const char * ShapeTypeDataReaderView::_local_id = "IDL:ShapeTypeDataReaderView:1.0";

ShapeTypeDataReaderView_ptr ShapeTypeDataReaderView::_duplicate (ShapeTypeDataReaderView_ptr p)
{
   if (p) p->m_count++;
   return p;
}

DDS::Boolean ShapeTypeDataReaderView::_local_is_a (const char * _id)
{
   if (strcmp (_id, ShapeTypeDataReaderView::_local_id) == 0)
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

ShapeTypeDataReaderView_ptr ShapeTypeDataReaderView::_narrow (DDS::Object_ptr p)
{
   ShapeTypeDataReaderView_ptr result = NULL;
   if (p && p->_is_a (ShapeTypeDataReaderView::_local_id))
   {
      result = dynamic_cast < ShapeTypeDataReaderView_ptr> (p);
      if (result) result->m_count++;
   }
   return result;
}

ShapeTypeDataReaderView_ptr ShapeTypeDataReaderView::_unchecked_narrow (DDS::Object_ptr p)
{
   ShapeTypeDataReaderView_ptr result;
   result = dynamic_cast < ShapeTypeDataReaderView_ptr> (p);
   if (result) result->m_count++;
   return result;
}


