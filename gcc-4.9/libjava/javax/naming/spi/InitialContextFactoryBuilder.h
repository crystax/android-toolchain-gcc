
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_naming_spi_InitialContextFactoryBuilder__
#define __javax_naming_spi_InitialContextFactoryBuilder__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace javax
  {
    namespace naming
    {
      namespace spi
      {
          class InitialContextFactory;
          class InitialContextFactoryBuilder;
      }
    }
  }
}

class javax::naming::spi::InitialContextFactoryBuilder : public ::java::lang::Object
{

public:
  virtual ::javax::naming::spi::InitialContextFactory * createInitialContextFactory(::java::util::Hashtable *) = 0;
  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif // __javax_naming_spi_InitialContextFactoryBuilder__
