//---------------------------------------------------------------------------*
//                                                                           *
//                        File 'goil_types_root.cpp'                         *
//                        Generated by version 1.8.1                         *
//                      april 17th, 2009, at 9h43'31"                        *
//                                                                           *
//---------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

//---------------------------------------------------------------------------*

#include "version_libpm.h"
#if LIBPM_VERSION != 456
  #error "This file has been compiled with a version of GALGAS different than the version of libpm"
#endif

//---------------------------------------------------------------------------*

#include <typeinfo>
#include "utilities/MF_MemoryControl.h"
#include "files/C_TextFileWrite.h"
#include "goil_types_root.h"

//---------------------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  #define SOURCE_FILE_AT_LINE(line) "goil_types_root.ggs", line
  #define COMMA_SOURCE_FILE_AT_LINE(line) , SOURCE_FILE_AT_LINE(line)
#else
  #define SOURCE_FILE_AT_LINE(line) 
  #define COMMA_SOURCE_FILE_AT_LINE(line) 
#endif


//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

//---------------------------------------------------------------------------*
//                                                                           *
//                          class 'cPtr_root_obj'                            *
//                                                                           *
//---------------------------------------------------------------------------*

cPtr_root_obj::
cPtr_root_obj (const GGS_os_obj & argument_0,
                                const GGS_com & argument_1,
                                const GGS_task_map & argument_2,
                                const GGS_counter_map & argument_3,
                                const GGS_alarm_map & argument_4,
                                const GGS_resource_map & argument_5,
                                const GGS_event_map & argument_6,
                                const GGS_isr_map & argument_7,
                                const GGS_message_map & argument_8,
                                const GGS_netmess_map & argument_9,
                                const GGS_scheduletable_map & argument_10,
                                const GGS_app_map & argument_11
                                COMMA_LOCATION_ARGS)
:cPtr__AC_galgas_class (THERE),
os (argument_0),
com (argument_1),
tasks (argument_2),
counters (argument_3),
alarms (argument_4),
resources (argument_5),
events (argument_6),
isrs (argument_7),
messages (argument_8),
net_messages (argument_9),
scheduletables (argument_10),
applis (argument_11) {
}

//---------------------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  cPtr_root_obj * GGS_root_obj::
  operator () (LOCATION_ARGS) const {
    macroValidPointerThere (mPointer) ;
    MF_Assert (dynamic_cast <cPtr_root_obj *> (mPointer) != NULL,
               "dynamic cast error", 0, 0) ;
    return (cPtr_root_obj *) mPointer ;
  }
#endif

//---------------------------------------------------------------------------*

bool cPtr_root_obj::
isEqualToObject (const cPtr__AC_galgas_class * inOperand) const {
  bool equal = typeid (this) == typeid (inOperand) ;
  if (equal) {
    const cPtr_root_obj * _p = dynamic_cast <const cPtr_root_obj *> (inOperand) ;
    macroValidPointer (_p) ;
    equal = os._operator_isEqual (_p->os).boolValue ()
         && com._operator_isEqual (_p->com).boolValue ()
         && tasks._operator_isEqual (_p->tasks).boolValue ()
         && counters._operator_isEqual (_p->counters).boolValue ()
         && alarms._operator_isEqual (_p->alarms).boolValue ()
         && resources._operator_isEqual (_p->resources).boolValue ()
         && events._operator_isEqual (_p->events).boolValue ()
         && isrs._operator_isEqual (_p->isrs).boolValue ()
         && messages._operator_isEqual (_p->messages).boolValue ()
         && net_messages._operator_isEqual (_p->net_messages).boolValue ()
         && scheduletables._operator_isEqual (_p->scheduletables).boolValue ()
         && applis._operator_isEqual (_p->applis).boolValue () ;
  }
  return equal ;
}

//---------------------------------------------------------------------------*

void cPtr_root_obj::
appendForDescription (C_Compiler & _inLexique,
                      C_String & ioString,
                      const sint32 inIndentation
                      COMMA_LOCATION_ARGS) const {
  ioString << "->@root_obj:"
           << os.reader_description  (_inLexique COMMA_THERE, inIndentation + 1)
           << com.reader_description  (_inLexique COMMA_THERE, inIndentation + 1)
           << tasks.reader_description  (_inLexique COMMA_THERE, inIndentation + 1)
           << counters.reader_description  (_inLexique COMMA_THERE, inIndentation + 1)
           << alarms.reader_description  (_inLexique COMMA_THERE, inIndentation + 1)
           << resources.reader_description  (_inLexique COMMA_THERE, inIndentation + 1)
           << events.reader_description  (_inLexique COMMA_THERE, inIndentation + 1)
           << isrs.reader_description  (_inLexique COMMA_THERE, inIndentation + 1)
           << messages.reader_description  (_inLexique COMMA_THERE, inIndentation + 1)
           << net_messages.reader_description  (_inLexique COMMA_THERE, inIndentation + 1)
           << scheduletables.reader_description  (_inLexique COMMA_THERE, inIndentation + 1)
           << applis.reader_description  (_inLexique COMMA_THERE, inIndentation + 1) ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//                              Class message                                *
//                                                                           *
//---------------------------------------------------------------------------*

const char * cPtr_root_obj::
_message (void) const {
  return "" ;
}

//---------------------------------------------------------------------------*

const char * cPtr_root_obj::
_static_message (void) {
  return "" ;
}

//---------------------------------------------------------------------------*

C_galgas_class_inspector _gInspectorFor_root_obj (& typeid (cPtr_root_obj), NULL
, "") ;
//---------------------------------------------------------------------------*

AC_galgasClassRunTimeInformation * cPtr_root_obj::galgasRTTI (void) const {
  return & gClassInfoFor__root_obj ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//                       GALGAS class 'GGS_root_obj'                         *
//                                                                           *
//---------------------------------------------------------------------------*

GGS_root_obj::
GGS_root_obj (cPtr__AC_galgas_class * inPointer) {
  macroAssignPointer (mPointer, inPointer) ;
}

//---------------------------------------------------------------------------*

GGS_root_obj::
GGS_root_obj (cPtr__AC_galgas_class & inObject) {
  macroAssignPointer (mPointer, & inObject) ;
}

//---------------------------------------------------------------------------*

//--- _castFrom class method (implements cast expression)
GGS_root_obj GGS_root_obj::
_castFrom (C_Compiler & inLexique,
           cPtr__AC_galgas_class * inPointer,
           const bool inUseKindOfClass,
           const GGS_location & inErrorLocation
           COMMA_LOCATION_ARGS) {
  GGS_root_obj _result ;
  if (inPointer != NULL) {
    macroValidPointer (inPointer) ;
    const bool ok = inUseKindOfClass
      ? (dynamic_cast <cPtr_root_obj *> (inPointer) != NULL)
      : (typeid (cPtr_root_obj) == typeid (*inPointer)) ;
    if (ok) {
      _result = GGS_root_obj (inPointer) ;
    }else{
      inErrorLocation.signalCastError (inLexique,
                                       & typeid (cPtr_root_obj),
                                       inUseKindOfClass,
                                       inPointer->_message ()
                                       COMMA_THERE) ;
    }
  }
  return _result ;
}

//---------------------------------------------------------------------------*

GGS_root_obj GGS_root_obj::
constructor_new (C_Compiler & /* inLexique */,
                 const GGS_os_obj & argument_0,
                 const GGS_com & argument_1,
                 const GGS_task_map & argument_2,
                 const GGS_counter_map & argument_3,
                 const GGS_alarm_map & argument_4,
                 const GGS_resource_map & argument_5,
                 const GGS_event_map & argument_6,
                 const GGS_isr_map & argument_7,
                 const GGS_message_map & argument_8,
                 const GGS_netmess_map & argument_9,
                 const GGS_scheduletable_map & argument_10,
                 const GGS_app_map & argument_11
                                COMMA_LOCATION_ARGS) {
  GGS_root_obj result ;
  macroMyNew (result.mPointer, cPtr_root_obj (argument_0,
                                argument_1,
                                argument_2,
                                argument_3,
                                argument_4,
                                argument_5,
                                argument_6,
                                argument_7,
                                argument_8,
                                argument_9,
                                argument_10,
                                argument_11 COMMA_THERE)) ;
  return result ;
}

//---------------------------------------------------------------------------*

GGS_os_obj  GGS_root_obj::
reader_os (C_Compiler & /* inLexique */ COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_os_obj   result ;
  if (mPointer != NULL) {
    macroValidPointer (mPointer) ;
    MF_Assert (dynamic_cast <cPtr_root_obj *> (mPointer) != NULL,
               "dynamic cast error", 0, 0) ;
    result = ((cPtr_root_obj *) mPointer)->os ;
  }
  return result ;
}

//---------------------------------------------------------------------------*

GGS_com  GGS_root_obj::
reader_com (C_Compiler & /* inLexique */ COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_com   result ;
  if (mPointer != NULL) {
    macroValidPointer (mPointer) ;
    MF_Assert (dynamic_cast <cPtr_root_obj *> (mPointer) != NULL,
               "dynamic cast error", 0, 0) ;
    result = ((cPtr_root_obj *) mPointer)->com ;
  }
  return result ;
}

//---------------------------------------------------------------------------*

GGS_task_map  GGS_root_obj::
reader_tasks (C_Compiler & /* inLexique */ COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_task_map   result ;
  if (mPointer != NULL) {
    macroValidPointer (mPointer) ;
    MF_Assert (dynamic_cast <cPtr_root_obj *> (mPointer) != NULL,
               "dynamic cast error", 0, 0) ;
    result = ((cPtr_root_obj *) mPointer)->tasks ;
  }
  return result ;
}

//---------------------------------------------------------------------------*

GGS_counter_map  GGS_root_obj::
reader_counters (C_Compiler & /* inLexique */ COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_counter_map   result ;
  if (mPointer != NULL) {
    macroValidPointer (mPointer) ;
    MF_Assert (dynamic_cast <cPtr_root_obj *> (mPointer) != NULL,
               "dynamic cast error", 0, 0) ;
    result = ((cPtr_root_obj *) mPointer)->counters ;
  }
  return result ;
}

//---------------------------------------------------------------------------*

GGS_alarm_map  GGS_root_obj::
reader_alarms (C_Compiler & /* inLexique */ COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_alarm_map   result ;
  if (mPointer != NULL) {
    macroValidPointer (mPointer) ;
    MF_Assert (dynamic_cast <cPtr_root_obj *> (mPointer) != NULL,
               "dynamic cast error", 0, 0) ;
    result = ((cPtr_root_obj *) mPointer)->alarms ;
  }
  return result ;
}

//---------------------------------------------------------------------------*

GGS_resource_map  GGS_root_obj::
reader_resources (C_Compiler & /* inLexique */ COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_resource_map   result ;
  if (mPointer != NULL) {
    macroValidPointer (mPointer) ;
    MF_Assert (dynamic_cast <cPtr_root_obj *> (mPointer) != NULL,
               "dynamic cast error", 0, 0) ;
    result = ((cPtr_root_obj *) mPointer)->resources ;
  }
  return result ;
}

//---------------------------------------------------------------------------*

GGS_event_map  GGS_root_obj::
reader_events (C_Compiler & /* inLexique */ COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_event_map   result ;
  if (mPointer != NULL) {
    macroValidPointer (mPointer) ;
    MF_Assert (dynamic_cast <cPtr_root_obj *> (mPointer) != NULL,
               "dynamic cast error", 0, 0) ;
    result = ((cPtr_root_obj *) mPointer)->events ;
  }
  return result ;
}

//---------------------------------------------------------------------------*

GGS_isr_map  GGS_root_obj::
reader_isrs (C_Compiler & /* inLexique */ COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_isr_map   result ;
  if (mPointer != NULL) {
    macroValidPointer (mPointer) ;
    MF_Assert (dynamic_cast <cPtr_root_obj *> (mPointer) != NULL,
               "dynamic cast error", 0, 0) ;
    result = ((cPtr_root_obj *) mPointer)->isrs ;
  }
  return result ;
}

//---------------------------------------------------------------------------*

GGS_message_map  GGS_root_obj::
reader_messages (C_Compiler & /* inLexique */ COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_message_map   result ;
  if (mPointer != NULL) {
    macroValidPointer (mPointer) ;
    MF_Assert (dynamic_cast <cPtr_root_obj *> (mPointer) != NULL,
               "dynamic cast error", 0, 0) ;
    result = ((cPtr_root_obj *) mPointer)->messages ;
  }
  return result ;
}

//---------------------------------------------------------------------------*

GGS_netmess_map  GGS_root_obj::
reader_net_messages (C_Compiler & /* inLexique */ COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_netmess_map   result ;
  if (mPointer != NULL) {
    macroValidPointer (mPointer) ;
    MF_Assert (dynamic_cast <cPtr_root_obj *> (mPointer) != NULL,
               "dynamic cast error", 0, 0) ;
    result = ((cPtr_root_obj *) mPointer)->net_messages ;
  }
  return result ;
}

//---------------------------------------------------------------------------*

GGS_scheduletable_map  GGS_root_obj::
reader_scheduletables (C_Compiler & /* inLexique */ COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_scheduletable_map   result ;
  if (mPointer != NULL) {
    macroValidPointer (mPointer) ;
    MF_Assert (dynamic_cast <cPtr_root_obj *> (mPointer) != NULL,
               "dynamic cast error", 0, 0) ;
    result = ((cPtr_root_obj *) mPointer)->scheduletables ;
  }
  return result ;
}

//---------------------------------------------------------------------------*

GGS_app_map  GGS_root_obj::
reader_applis (C_Compiler & /* inLexique */ COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_app_map   result ;
  if (mPointer != NULL) {
    macroValidPointer (mPointer) ;
    MF_Assert (dynamic_cast <cPtr_root_obj *> (mPointer) != NULL,
               "dynamic cast error", 0, 0) ;
    result = ((cPtr_root_obj *) mPointer)->applis ;
  }
  return result ;
}

//---------------------------------------------------------------------------*

const char * GGS_root_obj::actualTypeName (void) const {
  return "root_obj" ;
}

//---------------------------------------------------------------------------*

AC_galgasClassRunTimeInformation * GGS_root_obj::_galgasObjectRunTimeInfo (void) const {
  AC_galgasClassRunTimeInformation * result = NULL ;
  if (mPointer != NULL) {
    result = mPointer->galgasRTTI () ;
  }
  return result ;
}

//---------------------------------------------------------------------------*

C_galgasRootClassRunTimeInformation gClassInfoFor__root_obj ("root_obj") ;

//---------------------------------------------------------------------------*

