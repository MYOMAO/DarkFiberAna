// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME PHG4Cellv2_Dict

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "PHG4Cellv2.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_PHG4Cellv2(void *p = 0);
   static void *newArray_PHG4Cellv2(Long_t size, void *p);
   static void delete_PHG4Cellv2(void *p);
   static void deleteArray_PHG4Cellv2(void *p);
   static void destruct_PHG4Cellv2(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::PHG4Cellv2*)
   {
      ::PHG4Cellv2 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::PHG4Cellv2 >(0);
      static ::ROOT::TGenericClassInfo 
         instance("PHG4Cellv2", ::PHG4Cellv2::Class_Version(), "", 28,
                  typeid(::PHG4Cellv2), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::PHG4Cellv2::Dictionary, isa_proxy, 4,
                  sizeof(::PHG4Cellv2) );
      instance.SetNew(&new_PHG4Cellv2);
      instance.SetNewArray(&newArray_PHG4Cellv2);
      instance.SetDelete(&delete_PHG4Cellv2);
      instance.SetDeleteArray(&deleteArray_PHG4Cellv2);
      instance.SetDestructor(&destruct_PHG4Cellv2);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::PHG4Cellv2*)
   {
      return GenerateInitInstanceLocal((::PHG4Cellv2*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::PHG4Cellv2*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr PHG4Cellv2::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *PHG4Cellv2::Class_Name()
{
   return "PHG4Cellv2";
}

//______________________________________________________________________________
const char *PHG4Cellv2::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::PHG4Cellv2*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int PHG4Cellv2::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::PHG4Cellv2*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *PHG4Cellv2::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::PHG4Cellv2*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *PHG4Cellv2::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::PHG4Cellv2*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void PHG4Cellv2::Streamer(TBuffer &R__b)
{
   // Stream an object of class PHG4Cellv2.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(PHG4Cellv2::Class(),this);
   } else {
      R__b.WriteClassBuffer(PHG4Cellv2::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_PHG4Cellv2(void *p) {
      return  p ? new(p) ::PHG4Cellv2 : new ::PHG4Cellv2;
   }
   static void *newArray_PHG4Cellv2(Long_t nElements, void *p) {
      return p ? new(p) ::PHG4Cellv2[nElements] : new ::PHG4Cellv2[nElements];
   }
   // Wrapper around operator delete
   static void delete_PHG4Cellv2(void *p) {
      delete ((::PHG4Cellv2*)p);
   }
   static void deleteArray_PHG4Cellv2(void *p) {
      delete [] ((::PHG4Cellv2*)p);
   }
   static void destruct_PHG4Cellv2(void *p) {
      typedef ::PHG4Cellv2 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::PHG4Cellv2

namespace ROOT {
   static TClass *maplEULong64_tcOfloatgR_Dictionary();
   static void maplEULong64_tcOfloatgR_TClassManip(TClass*);
   static void *new_maplEULong64_tcOfloatgR(void *p = 0);
   static void *newArray_maplEULong64_tcOfloatgR(Long_t size, void *p);
   static void delete_maplEULong64_tcOfloatgR(void *p);
   static void deleteArray_maplEULong64_tcOfloatgR(void *p);
   static void destruct_maplEULong64_tcOfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<ULong64_t,float>*)
   {
      map<ULong64_t,float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<ULong64_t,float>));
      static ::ROOT::TGenericClassInfo 
         instance("map<ULong64_t,float>", -2, "map", 96,
                  typeid(map<ULong64_t,float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEULong64_tcOfloatgR_Dictionary, isa_proxy, 0,
                  sizeof(map<ULong64_t,float>) );
      instance.SetNew(&new_maplEULong64_tcOfloatgR);
      instance.SetNewArray(&newArray_maplEULong64_tcOfloatgR);
      instance.SetDelete(&delete_maplEULong64_tcOfloatgR);
      instance.SetDeleteArray(&deleteArray_maplEULong64_tcOfloatgR);
      instance.SetDestructor(&destruct_maplEULong64_tcOfloatgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<ULong64_t,float> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<ULong64_t,float>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEULong64_tcOfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<ULong64_t,float>*)0x0)->GetClass();
      maplEULong64_tcOfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEULong64_tcOfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEULong64_tcOfloatgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<ULong64_t,float> : new map<ULong64_t,float>;
   }
   static void *newArray_maplEULong64_tcOfloatgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<ULong64_t,float>[nElements] : new map<ULong64_t,float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEULong64_tcOfloatgR(void *p) {
      delete ((map<ULong64_t,float>*)p);
   }
   static void deleteArray_maplEULong64_tcOfloatgR(void *p) {
      delete [] ((map<ULong64_t,float>*)p);
   }
   static void destruct_maplEULong64_tcOfloatgR(void *p) {
      typedef map<ULong64_t,float> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<ULong64_t,float>

namespace {
  void TriggerDictionaryInitialization_PHG4Cellv2_Dict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "PHG4Cellv2_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class PHG4Cellv2;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "PHG4Cellv2_Dict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif
#ifndef CGAL_DISABLE_ROUNDING_MATH_CHECK
  #define CGAL_DISABLE_ROUNDING_MATH_CHECK 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
// Tell emacs that this is a C++ source
//  -*- C++ -*-.
#ifndef G4DETECTORS_PHG4CELLV2_H
#define G4DETECTORS_PHG4CELLV2_H

#include "PHG4Cell.h"
#include "PHG4CellDefs.h"

#include <g4main/PHG4HitDefs.h>  // for keytype

#include <iostream>
#include <map>
#include <utility>               // for make_pair

#if !defined(__CINT__) || defined(__CLING__)
#include <type_traits>           // for __decay_and_strip<>::__type
#endif

//! specialized cells for TPC operations
class PHG4Cellv2 : public PHG4Cell
{
 public:
  PHG4Cellv2();
  explicit PHG4Cellv2(const PHG4CellDefs::keytype g4cellid);
  virtual ~PHG4Cellv2();

  virtual void identify(std::ostream& os = std::cout) const;
  virtual void Reset();

  void set_cellid(const PHG4CellDefs::keytype i) { cellid = i; }
  PHG4CellDefs::keytype get_cellid() const { return cellid; }
  bool has_binning(const PHG4CellDefs::CellBinning binning) const;
  short int get_detid() const;

  void add_edep(const PHG4HitDefs::keytype g4hitid, const float edep);

  EdepConstRange get_g4hits()
  {
    return std::make_pair(hitedeps.begin(), hitedeps.end());
  }

  void add_edep(const float f) { _edep += f; }
  double get_edep() const { return _edep; }
  //  tpctod* get_train_of_digits() {return &trainOfDigits;}

  void print() const;

 protected:
  PHG4CellDefs::keytype cellid;
  EdepMap hitedeps;

  float _edep;
  //  tpctod trainOfDigits;

  ClassDef(PHG4Cellv2, 1)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"PHG4Cellv2", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("PHG4Cellv2_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_PHG4Cellv2_Dict_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_PHG4Cellv2_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_PHG4Cellv2_Dict() {
  TriggerDictionaryInitialization_PHG4Cellv2_Dict_Impl();
}
