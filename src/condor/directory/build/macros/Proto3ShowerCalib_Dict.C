// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME Proto3ShowerCalib_Dict

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
#include "../../analysis/Prototype3/EMCal/ShowerCalib/Proto3ShowerCalib.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *Proto3ShowerCalib_Dictionary();
   static void Proto3ShowerCalib_TClassManip(TClass*);
   static void *new_Proto3ShowerCalib(void *p = 0);
   static void *newArray_Proto3ShowerCalib(Long_t size, void *p);
   static void delete_Proto3ShowerCalib(void *p);
   static void deleteArray_Proto3ShowerCalib(void *p);
   static void destruct_Proto3ShowerCalib(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Proto3ShowerCalib*)
   {
      ::Proto3ShowerCalib *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::Proto3ShowerCalib));
      static ::ROOT::TGenericClassInfo 
         instance("Proto3ShowerCalib", "Proto3ShowerCalib.h", 25,
                  typeid(::Proto3ShowerCalib), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &Proto3ShowerCalib_Dictionary, isa_proxy, 3,
                  sizeof(::Proto3ShowerCalib) );
      instance.SetNew(&new_Proto3ShowerCalib);
      instance.SetNewArray(&newArray_Proto3ShowerCalib);
      instance.SetDelete(&delete_Proto3ShowerCalib);
      instance.SetDeleteArray(&deleteArray_Proto3ShowerCalib);
      instance.SetDestructor(&destruct_Proto3ShowerCalib);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Proto3ShowerCalib*)
   {
      return GenerateInitInstanceLocal((::Proto3ShowerCalib*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::Proto3ShowerCalib*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *Proto3ShowerCalib_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::Proto3ShowerCalib*)0x0)->GetClass();
      Proto3ShowerCalib_TClassManip(theClass);
   return theClass;
   }

   static void Proto3ShowerCalib_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_Proto3ShowerCalibcLcLEval_Run(void *p = 0);
   static void *newArray_Proto3ShowerCalibcLcLEval_Run(Long_t size, void *p);
   static void delete_Proto3ShowerCalibcLcLEval_Run(void *p);
   static void deleteArray_Proto3ShowerCalibcLcLEval_Run(void *p);
   static void destruct_Proto3ShowerCalibcLcLEval_Run(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Proto3ShowerCalib::Eval_Run*)
   {
      ::Proto3ShowerCalib::Eval_Run *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Proto3ShowerCalib::Eval_Run >(0);
      static ::ROOT::TGenericClassInfo 
         instance("Proto3ShowerCalib::Eval_Run", ::Proto3ShowerCalib::Eval_Run::Class_Version(), "Proto3ShowerCalib.h", 49,
                  typeid(::Proto3ShowerCalib::Eval_Run), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Proto3ShowerCalib::Eval_Run::Dictionary, isa_proxy, 4,
                  sizeof(::Proto3ShowerCalib::Eval_Run) );
      instance.SetNew(&new_Proto3ShowerCalibcLcLEval_Run);
      instance.SetNewArray(&newArray_Proto3ShowerCalibcLcLEval_Run);
      instance.SetDelete(&delete_Proto3ShowerCalibcLcLEval_Run);
      instance.SetDeleteArray(&deleteArray_Proto3ShowerCalibcLcLEval_Run);
      instance.SetDestructor(&destruct_Proto3ShowerCalibcLcLEval_Run);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Proto3ShowerCalib::Eval_Run*)
   {
      return GenerateInitInstanceLocal((::Proto3ShowerCalib::Eval_Run*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::Proto3ShowerCalib::Eval_Run*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_Proto3ShowerCalibcLcLEval_Cluster(void *p = 0);
   static void *newArray_Proto3ShowerCalibcLcLEval_Cluster(Long_t size, void *p);
   static void delete_Proto3ShowerCalibcLcLEval_Cluster(void *p);
   static void deleteArray_Proto3ShowerCalibcLcLEval_Cluster(void *p);
   static void destruct_Proto3ShowerCalibcLcLEval_Cluster(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Proto3ShowerCalib::Eval_Cluster*)
   {
      ::Proto3ShowerCalib::Eval_Cluster *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Proto3ShowerCalib::Eval_Cluster >(0);
      static ::ROOT::TGenericClassInfo 
         instance("Proto3ShowerCalib::Eval_Cluster", ::Proto3ShowerCalib::Eval_Cluster::Class_Version(), "Proto3ShowerCalib.h", 115,
                  typeid(::Proto3ShowerCalib::Eval_Cluster), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Proto3ShowerCalib::Eval_Cluster::Dictionary, isa_proxy, 4,
                  sizeof(::Proto3ShowerCalib::Eval_Cluster) );
      instance.SetNew(&new_Proto3ShowerCalibcLcLEval_Cluster);
      instance.SetNewArray(&newArray_Proto3ShowerCalibcLcLEval_Cluster);
      instance.SetDelete(&delete_Proto3ShowerCalibcLcLEval_Cluster);
      instance.SetDeleteArray(&deleteArray_Proto3ShowerCalibcLcLEval_Cluster);
      instance.SetDestructor(&destruct_Proto3ShowerCalibcLcLEval_Cluster);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Proto3ShowerCalib::Eval_Cluster*)
   {
      return GenerateInitInstanceLocal((::Proto3ShowerCalib::Eval_Cluster*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::Proto3ShowerCalib::Eval_Cluster*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr Proto3ShowerCalib::Eval_Run::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Proto3ShowerCalib::Eval_Run::Class_Name()
{
   return "Proto3ShowerCalib::Eval_Run";
}

//______________________________________________________________________________
const char *Proto3ShowerCalib::Eval_Run::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Proto3ShowerCalib::Eval_Run*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Proto3ShowerCalib::Eval_Run::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Proto3ShowerCalib::Eval_Run*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Proto3ShowerCalib::Eval_Run::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Proto3ShowerCalib::Eval_Run*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Proto3ShowerCalib::Eval_Run::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Proto3ShowerCalib::Eval_Run*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr Proto3ShowerCalib::Eval_Cluster::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Proto3ShowerCalib::Eval_Cluster::Class_Name()
{
   return "Proto3ShowerCalib::Eval_Cluster";
}

//______________________________________________________________________________
const char *Proto3ShowerCalib::Eval_Cluster::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Proto3ShowerCalib::Eval_Cluster*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Proto3ShowerCalib::Eval_Cluster::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Proto3ShowerCalib::Eval_Cluster*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Proto3ShowerCalib::Eval_Cluster::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Proto3ShowerCalib::Eval_Cluster*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Proto3ShowerCalib::Eval_Cluster::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Proto3ShowerCalib::Eval_Cluster*)0x0)->GetClass(); }
   return fgIsA;
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_Proto3ShowerCalib(void *p) {
      return  p ? new(p) ::Proto3ShowerCalib : new ::Proto3ShowerCalib;
   }
   static void *newArray_Proto3ShowerCalib(Long_t nElements, void *p) {
      return p ? new(p) ::Proto3ShowerCalib[nElements] : new ::Proto3ShowerCalib[nElements];
   }
   // Wrapper around operator delete
   static void delete_Proto3ShowerCalib(void *p) {
      delete ((::Proto3ShowerCalib*)p);
   }
   static void deleteArray_Proto3ShowerCalib(void *p) {
      delete [] ((::Proto3ShowerCalib*)p);
   }
   static void destruct_Proto3ShowerCalib(void *p) {
      typedef ::Proto3ShowerCalib current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Proto3ShowerCalib

//______________________________________________________________________________
void Proto3ShowerCalib::Eval_Run::Streamer(TBuffer &R__b)
{
   // Stream an object of class Proto3ShowerCalib::Eval_Run.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Proto3ShowerCalib::Eval_Run::Class(),this);
   } else {
      R__b.WriteClassBuffer(Proto3ShowerCalib::Eval_Run::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_Proto3ShowerCalibcLcLEval_Run(void *p) {
      return  p ? new(p) ::Proto3ShowerCalib::Eval_Run : new ::Proto3ShowerCalib::Eval_Run;
   }
   static void *newArray_Proto3ShowerCalibcLcLEval_Run(Long_t nElements, void *p) {
      return p ? new(p) ::Proto3ShowerCalib::Eval_Run[nElements] : new ::Proto3ShowerCalib::Eval_Run[nElements];
   }
   // Wrapper around operator delete
   static void delete_Proto3ShowerCalibcLcLEval_Run(void *p) {
      delete ((::Proto3ShowerCalib::Eval_Run*)p);
   }
   static void deleteArray_Proto3ShowerCalibcLcLEval_Run(void *p) {
      delete [] ((::Proto3ShowerCalib::Eval_Run*)p);
   }
   static void destruct_Proto3ShowerCalibcLcLEval_Run(void *p) {
      typedef ::Proto3ShowerCalib::Eval_Run current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Proto3ShowerCalib::Eval_Run

//______________________________________________________________________________
void Proto3ShowerCalib::Eval_Cluster::Streamer(TBuffer &R__b)
{
   // Stream an object of class Proto3ShowerCalib::Eval_Cluster.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Proto3ShowerCalib::Eval_Cluster::Class(),this);
   } else {
      R__b.WriteClassBuffer(Proto3ShowerCalib::Eval_Cluster::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_Proto3ShowerCalibcLcLEval_Cluster(void *p) {
      return  p ? new(p) ::Proto3ShowerCalib::Eval_Cluster : new ::Proto3ShowerCalib::Eval_Cluster;
   }
   static void *newArray_Proto3ShowerCalibcLcLEval_Cluster(Long_t nElements, void *p) {
      return p ? new(p) ::Proto3ShowerCalib::Eval_Cluster[nElements] : new ::Proto3ShowerCalib::Eval_Cluster[nElements];
   }
   // Wrapper around operator delete
   static void delete_Proto3ShowerCalibcLcLEval_Cluster(void *p) {
      delete ((::Proto3ShowerCalib::Eval_Cluster*)p);
   }
   static void deleteArray_Proto3ShowerCalibcLcLEval_Cluster(void *p) {
      delete [] ((::Proto3ShowerCalib::Eval_Cluster*)p);
   }
   static void destruct_Proto3ShowerCalibcLcLEval_Cluster(void *p) {
      typedef ::Proto3ShowerCalib::Eval_Cluster current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Proto3ShowerCalib::Eval_Cluster

namespace {
  void TriggerDictionaryInitialization_Proto3ShowerCalib_Dict_Impl() {
    static const char* headers[] = {
"../../analysis/Prototype3/EMCal/ShowerCalib/Proto3ShowerCalib.h",
0
    };
    static const char* includePaths[] = {
"../../analysis/Prototype3/EMCal/ShowerCalib",
"/gpfs/mnt/gpfs02/sphenix/user/zshi/SimulationWork/2019sPHENIXAna/EMCAL/Simulations/TutorialTest/tutorials/AnaTutorial/src/condor/directory/install/include",
"/cvmfs/sphenix.sdcc.bnl.gov/x8664_sl7/release/release_new/new.1/include/eigen3",
"/cvmfs/sphenix.sdcc.bnl.gov/x8664_sl7/release/release_new/new.1/include",
"/cvmfs/sphenix.sdcc.bnl.gov/x8664_sl7/opt/sphenix/core/geant4.10.02.p02/include",
"/cvmfs/sphenix.sdcc.bnl.gov/x8664_sl7/opt/sphenix/core/geant4.10.02.p02/include/Geant4",
"/cvmfs/sphenix.sdcc.bnl.gov/x8664_sl7/opt/sphenix/core/root-6.16.00/include",
"/cvmfs/sphenix.sdcc.bnl.gov/x8664_sl7/opt/sphenix/core/root-6.16.00/include",
"/gpfs/mnt/gpfs02/sphenix/user/zshi/SimulationWork/2019sPHENIXAna/EMCAL/Simulations/TutorialTest/tutorials/AnaTutorial/src/condor/directory/build/macros/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "Proto3ShowerCalib_Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$../../analysis/Prototype3/EMCal/ShowerCalib/Proto3ShowerCalib.h")))  Proto3ShowerCalib;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "Proto3ShowerCalib_Dict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "../../analysis/Prototype3/EMCal/ShowerCalib/Proto3ShowerCalib.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"Proto3ShowerCalib", payloadCode, "@",
"Proto3ShowerCalib::Eval_Cluster", payloadCode, "@",
"Proto3ShowerCalib::Eval_Run", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("Proto3ShowerCalib_Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_Proto3ShowerCalib_Dict_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_Proto3ShowerCalib_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_Proto3ShowerCalib_Dict() {
  TriggerDictionaryInitialization_Proto3ShowerCalib_Dict_Impl();
}
