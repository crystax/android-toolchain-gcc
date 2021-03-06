
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_xml_dom_html2_DomHTMLButtonElement__
#define __gnu_xml_dom_html2_DomHTMLButtonElement__

#pragma interface

#include <gnu/xml/dom/html2/DomHTMLElement.h>
extern "Java"
{
  namespace gnu
  {
    namespace xml
    {
      namespace dom
      {
        namespace html2
        {
            class DomHTMLButtonElement;
            class DomHTMLDocument;
        }
      }
    }
  }
  namespace org
  {
    namespace w3c
    {
      namespace dom
      {
        namespace html2
        {
            class HTMLFormElement;
        }
      }
    }
  }
}

class gnu::xml::dom::html2::DomHTMLButtonElement : public ::gnu::xml::dom::html2::DomHTMLElement
{

public: // actually protected
  DomHTMLButtonElement(::gnu::xml::dom::html2::DomHTMLDocument *, ::java::lang::String *, ::java::lang::String *);
public:
  virtual ::org::w3c::dom::html2::HTMLFormElement * getForm();
  virtual ::java::lang::String * getAccessKey();
  virtual void setAccessKey(::java::lang::String *);
  virtual jboolean getDisabled();
  virtual void setDisabled(jboolean);
  virtual ::java::lang::String * getName();
  virtual void setName(::java::lang::String *);
  virtual jint getTabIndex();
  virtual void setTabIndex(jint);
  virtual ::java::lang::String * getType();
  virtual ::java::lang::String * getValue();
  virtual void setValue(::java::lang::String *);
  static ::java::lang::Class class$;
};

#endif // __gnu_xml_dom_html2_DomHTMLButtonElement__
