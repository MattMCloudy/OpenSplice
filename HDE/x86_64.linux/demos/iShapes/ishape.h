//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: ishape.h
//  Source: ishape.idl
//  Generated: Fri Mar 24 02:03:16 2017
//  OpenSplice V6.4.140407OSS
//  
//******************************************************************
#ifndef _ISHAPE_H_
#define _ISHAPE_H_
#ifndef OPENSPLICE_ISOCXX_PSM
#define OPENSPLICE_ISOCXX_PSM
#endif

#include "sacpp_mapping.h"
#include "sacpp_DDS_DCPS.h"
#include <dds/core/ddscore.hpp>

class ShapeType;


class ShapeType OSPL_DDS_FINAL
{
public:
      ShapeType() {}
      explicit ShapeType(
            const ::std::string& color,
            DDS::Long x,
            DDS::Long y,
            DDS::Long shapesize)      :
                  color_(color),
                  x_(x),
                  y_(y),
                  shapesize_(shapesize) {}
#ifdef OSPL_DDS_CXX11
#  ifdef OSPL_CXX11_NO_FUNCTION_DEFAULTS
      ShapeType(const ShapeType& _other)
      :
                  color_(_other.color_),
                  x_(_other.x_),
                  y_(_other.y_),
                  shapesize_(_other.shapesize_)
      {}
      ShapeType(ShapeType&& _other)
      :
                  color_(::std::move(_other.color_)),
                  x_(::std::move(_other.x_)),
                  y_(::std::move(_other.y_)),
                  shapesize_(::std::move(_other.shapesize_))
      {}
      ShapeType& operator=(ShapeType&& _other)
      {
            if (this != &_other)
            {
                  color_ = ::std::move(_other.color_);
                  x_ = ::std::move(_other.x_);
                  y_ = ::std::move(_other.y_);
                  shapesize_ = ::std::move(_other.shapesize_);
            }
            return *this;
      }
      ShapeType& operator=(const ShapeType& _other)
      {
            if (this != &_other)
            {
                  color_ = _other.color_;
                  x_ = _other.x_;
                  y_ = _other.y_;
                  shapesize_ = _other.shapesize_;
            }
            return *this;
      }
#  else
      ShapeType(const ShapeType& _other) = default;
      ShapeType(ShapeType&& _other) = default;
      ShapeType& operator=(ShapeType&& _other) = default;
      ShapeType& operator=(const ShapeType& _other) = default;
#  endif
#endif
      const ::std::string& color() const { return this->color_; }
      ::std::string& color() { return this->color_; }
      void color(const ::std::string& _val_) { this->color_ = _val_; }
#ifdef OSPL_DDS_CXX11
      void color(::std::string&& _val_) { this->color_ = _val_; }
#endif
      DDS::Long x() const { return this->x_; }
      DDS::Long& x() { return this->x_; }
      void x(DDS::Long _val_) { this->x_ = _val_; }
#ifdef OSPL_DDS_CXX11
      void x(DDS::Long&& _val_) { this->x_ = _val_; }
#endif
      DDS::Long y() const { return this->y_; }
      DDS::Long& y() { return this->y_; }
      void y(DDS::Long _val_) { this->y_ = _val_; }
#ifdef OSPL_DDS_CXX11
      void y(DDS::Long&& _val_) { this->y_ = _val_; }
#endif
      DDS::Long shapesize() const { return this->shapesize_; }
      DDS::Long& shapesize() { return this->shapesize_; }
      void shapesize(DDS::Long _val_) { this->shapesize_ = _val_; }
#ifdef OSPL_DDS_CXX11
      void shapesize(DDS::Long&& _val_) { this->shapesize_ = _val_; }
#endif
      bool operator==(const ShapeType& _other) const
      {
            return color_ == _other.color_ &&
            x_ == _other.x_ &&
            y_ == _other.y_ &&
            shapesize_ == _other.shapesize_;
      }
      bool operator!=(const ShapeType& other) const
      {
            return !(*this == other);
      }
      ::std::string color_;
      DDS::Long x_;
      DDS::Long y_;
      DDS::Long shapesize_;
};





#endif 
