//---------------------------------------------------------------------------*
//                                                                           *
//                     File 'goil_obj_application.cpp'                       *
//                        Generated by version 1.8.1                         *
//                      april 17th, 2009, at 9h44'28"                        *
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
#include "goil_obj_application.h"

//---------------------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  #define SOURCE_FILE_AT_LINE(line) "goil_obj_application.ggs", line
  #define COMMA_SOURCE_FILE_AT_LINE(line) , SOURCE_FILE_AT_LINE(line)
#else
  #define SOURCE_FILE_AT_LINE(line) 
  #define COMMA_SOURCE_FILE_AT_LINE(line) 
#endif


//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

//---------------------------------------------------------------------------*
//                                                                           *
//                Implementation of production rule 'appli'                  *
//                                                                           *
//---------------------------------------------------------------------------*

void goil_obj_application::
pr_appli_goil_obj_application_41_12_ (goil_lexique & _inLexique,
                                GGS_app_map  &var_cas_applis) {
  GGS_lstring  var_cas_name ;
  GGS_lstring  var_cas_desc ;
  GGS_app_obj  var_cas_app ;
  _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_APPLICATION) COMMA_HERE) ;
  if (((GGS_bool (true, _inLexique.boolOptionValueFromKeys ("goil_options", "autosar_on" COMMA_SOURCE_FILE_AT_LINE (50))))._operator_isEqual (GGS_bool (true, false))).isBuiltAndTrue ()) {
    GGS_location (_inLexique).reader_location (_inLexique COMMA_HERE).signalGGSSemanticError (_inLexique, GGS_string (true, "AUTOSAR flag is off, turn it on to use APPLICATION objects") COMMA_SOURCE_FILE_AT_LINE (52)) ;
  }
  _inLexique._assignFromAttribute_att_token (var_cas_name) ;
  _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_idf) COMMA_HERE) ;
  if ((var_cas_applis.reader_hasKey (_inLexique, var_cas_name.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (55)) COMMA_SOURCE_FILE_AT_LINE (55))).isBuiltAndTrue ()) {
    var_cas_applis.modifier_del (_inLexique, var_cas_name, var_cas_app COMMA_SOURCE_FILE_AT_LINE (56)) ;
  }else{
    var_cas_app = GGS_app_obj ::constructor_new (_inLexique, GGS_lstring ::constructor_new (_inLexique, GGS_string (true, ""), GGS_location (_inLexique) COMMA_HERE), GGS_app_trusted_void ::constructor_new (_inLexique, GGS_location (_inLexique) COMMA_HERE), GGS_void ::constructor_new (_inLexique, GGS_location (_inLexique) COMMA_HERE), GGS_void ::constructor_new (_inLexique, GGS_location (_inLexique) COMMA_HERE), GGS_void ::constructor_new (_inLexique, GGS_location (_inLexique) COMMA_HERE), GGS_void ::constructor_new (_inLexique, GGS_location (_inLexique) COMMA_HERE), GGS_ident_map ::constructor_emptyMap (_inLexique COMMA_HERE), GGS_ident_map ::constructor_emptyMap (_inLexique COMMA_HERE), GGS_ident_map ::constructor_emptyMap (_inLexique COMMA_HERE), GGS_ident_map ::constructor_emptyMap (_inLexique COMMA_HERE), GGS_ident_map ::constructor_emptyMap (_inLexique COMMA_HERE), GGS_ident_map ::constructor_emptyMap (_inLexique COMMA_HERE), GGS_ident_map ::constructor_emptyMap (_inLexique COMMA_HERE) COMMA_HERE) ;
  }
  _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__7B) COMMA_HERE) ;
  nt_app_attributes_ (_inLexique, var_cas_app, var_cas_name) ;
  _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__7D) COMMA_HERE) ;
  nt_description_ (_inLexique, var_cas_desc) ;
  _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3B) COMMA_HERE) ;
  var_cas_applis.modifier_put (_inLexique, var_cas_name, var_cas_app COMMA_SOURCE_FILE_AT_LINE (81)) ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//            Implementation of production rule 'app_attributes'             *
//                                                                           *
//---------------------------------------------------------------------------*

void goil_obj_application::
pr_app_attributes_goil_obj_application_85_21_ (goil_lexique & _inLexique,
                                GGS_app_obj  &var_cas_app,
                                GGS_lstring  var_cas_name) {
  GGS_app_trusted_obj  var_cas_trusted ;
  var_cas_trusted = var_cas_app.reader_trusted (_inLexique COMMA_SOURCE_FILE_AT_LINE (89)) ;
  GGS_basic_type  var_cas_startuphook ;
  var_cas_startuphook = var_cas_app.reader_startuphook (_inLexique COMMA_SOURCE_FILE_AT_LINE (90)) ;
  GGS_basic_type  var_cas_shutdownhook ;
  var_cas_shutdownhook = var_cas_app.reader_shutdownhook (_inLexique COMMA_SOURCE_FILE_AT_LINE (91)) ;
  GGS_basic_type  var_cas_errorhook ;
  var_cas_errorhook = var_cas_app.reader_errorhook (_inLexique COMMA_SOURCE_FILE_AT_LINE (92)) ;
  GGS_basic_type  var_cas_restart ;
  var_cas_restart = var_cas_app.reader_restart (_inLexique COMMA_SOURCE_FILE_AT_LINE (93)) ;
  GGS_ident_map  var_cas_tasks ;
  var_cas_tasks = var_cas_app.reader_tasks (_inLexique COMMA_SOURCE_FILE_AT_LINE (94)) ;
  GGS_ident_map  var_cas_isrs ;
  var_cas_isrs = var_cas_app.reader_isrs (_inLexique COMMA_SOURCE_FILE_AT_LINE (95)) ;
  GGS_ident_map  var_cas_alarms ;
  var_cas_alarms = var_cas_app.reader_alarms (_inLexique COMMA_SOURCE_FILE_AT_LINE (96)) ;
  GGS_ident_map  var_cas_schedtables ;
  var_cas_schedtables = var_cas_app.reader_schedtables (_inLexique COMMA_SOURCE_FILE_AT_LINE (97)) ;
  GGS_ident_map  var_cas_counters ;
  var_cas_counters = var_cas_app.reader_counters (_inLexique COMMA_SOURCE_FILE_AT_LINE (98)) ;
  GGS_ident_map  var_cas_resources ;
  var_cas_resources = var_cas_app.reader_resources (_inLexique COMMA_SOURCE_FILE_AT_LINE (99)) ;
  GGS_ident_map  var_cas_messages ;
  var_cas_messages = var_cas_app.reader_messages (_inLexique COMMA_SOURCE_FILE_AT_LINE (100)) ;
  { bool syntaxRepeat_0 = true ;
    while (syntaxRepeat_0) {
      switch (select_repeat_goil_obj_application_0 (_inLexique)) {
        case 2 : {
          GGS_app_trusted_obj  var_cas_trust ;
          _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_TRUSTED) COMMA_HERE) ;
          _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3D) COMMA_HERE) ;
          switch (select_goil_obj_application_1 (_inLexique)) {
            case 1 : {
              _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_TRUE) COMMA_HERE) ;
              nt_trusted_fcts_ (_inLexique, var_cas_trust) ;
              } break ;
            case 2 : {
              _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_FALSE) COMMA_HERE) ;
              var_cas_trust = GGS_app_trusted_false ::constructor_new (_inLexique, GGS_location (_inLexique) COMMA_HERE) ;
              } break ;
            default :
              break ;
          }
          GGS_lstring  automatic_var_0 ;
          nt_description_ (_inLexique, automatic_var_0) ;
          _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3B) COMMA_HERE) ;
          { const GGS_app_trusted_obj _var_3164 = var_cas_trusted ; // CAST instruction
            if (_var_3164.getPtr () != NULL) {
              macroValidPointer (_var_3164.getPtr ()) ;
              if (typeid (cPtr_app_trusted_void) == typeid (* (_var_3164.getPtr ()))) {
                var_cas_trusted = var_cas_trust ;
              }else{
                var_cas_trust.reader_location (_inLexique COMMA_SOURCE_FILE_AT_LINE (116)).reader_location (_inLexique COMMA_HERE).signalGGSSemanticError (_inLexique, (GGS_string (true, "TRUSTED attribute already defined for Application "))._operator_concat (var_cas_name.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (116))) COMMA_SOURCE_FILE_AT_LINE (117)) ;
                var_cas_trusted.reader_location (_inLexique COMMA_SOURCE_FILE_AT_LINE (117)).reader_location (_inLexique COMMA_HERE).signalGGSSemanticError (_inLexique, GGS_string (true, "Was previously define here") COMMA_SOURCE_FILE_AT_LINE (118)) ;
              }
            }
          }
          } break ;
        case 3 : {
          GGS_bool var_cas_sh ;
          _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_STARTUPHOOK) COMMA_HERE) ;
          _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3D) COMMA_HERE) ;
          switch (select_goil_obj_application_2 (_inLexique)) {
            case 1 : {
              _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_TRUE) COMMA_HERE) ;
              var_cas_sh = GGS_bool (true, true) ;
              } break ;
            case 2 : {
              _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_FALSE) COMMA_HERE) ;
              var_cas_sh = GGS_bool (true, false) ;
              } break ;
            default :
              break ;
          }
          { const GGS_basic_type _var_3636 = var_cas_startuphook ; // CAST instruction
            if (_var_3636.getPtr () != NULL) {
              macroValidPointer (_var_3636.getPtr ()) ;
              if (typeid (cPtr_void) == typeid (* (_var_3636.getPtr ()))) {
                var_cas_startuphook = GGS_bool_class ::constructor_new (_inLexique, GGS_location (_inLexique), var_cas_sh COMMA_HERE) ;
              }else{
                GGS_location (_inLexique).reader_location (_inLexique COMMA_HERE).signalGGSSemanticError (_inLexique, (GGS_string (true, "STARTUPHOOK attribute already defined for Application "))._operator_concat (var_cas_name.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (130))) COMMA_SOURCE_FILE_AT_LINE (131)) ;
                var_cas_startuphook.reader_location (_inLexique COMMA_SOURCE_FILE_AT_LINE (131)).reader_location (_inLexique COMMA_HERE).signalGGSSemanticError (_inLexique, GGS_string (true, "Was previously define here") COMMA_SOURCE_FILE_AT_LINE (132)) ;
              }
            }
          }
          GGS_lstring  automatic_var_1 ;
          nt_description_ (_inLexique, automatic_var_1) ;
          _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3B) COMMA_HERE) ;
          } break ;
        case 4 : {
          GGS_bool var_cas_sh ;
          _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_SHUTDOWNHOOK) COMMA_HERE) ;
          _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3D) COMMA_HERE) ;
          switch (select_goil_obj_application_3 (_inLexique)) {
            case 1 : {
              _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_TRUE) COMMA_HERE) ;
              var_cas_sh = GGS_bool (true, true) ;
              } break ;
            case 2 : {
              _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_FALSE) COMMA_HERE) ;
              var_cas_sh = GGS_bool (true, false) ;
              } break ;
            default :
              break ;
          }
          { const GGS_basic_type _var_4145 = var_cas_shutdownhook ; // CAST instruction
            if (_var_4145.getPtr () != NULL) {
              macroValidPointer (_var_4145.getPtr ()) ;
              if (typeid (cPtr_void) == typeid (* (_var_4145.getPtr ()))) {
                var_cas_shutdownhook = GGS_bool_class ::constructor_new (_inLexique, GGS_location (_inLexique), var_cas_sh COMMA_HERE) ;
              }else{
                GGS_location (_inLexique).reader_location (_inLexique COMMA_HERE).signalGGSSemanticError (_inLexique, (GGS_string (true, "SHUTDOWNHOOK attribute already defined for Application "))._operator_concat (var_cas_name.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (145))) COMMA_SOURCE_FILE_AT_LINE (146)) ;
                var_cas_shutdownhook.reader_location (_inLexique COMMA_SOURCE_FILE_AT_LINE (146)).reader_location (_inLexique COMMA_HERE).signalGGSSemanticError (_inLexique, GGS_string (true, "Was previously define here") COMMA_SOURCE_FILE_AT_LINE (147)) ;
              }
            }
          }
          GGS_lstring  automatic_var_2 ;
          nt_description_ (_inLexique, automatic_var_2) ;
          _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3B) COMMA_HERE) ;
          } break ;
        case 5 : {
          GGS_bool var_cas_eh ;
          _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_ERRORHOOK) COMMA_HERE) ;
          _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3D) COMMA_HERE) ;
          switch (select_goil_obj_application_4 (_inLexique)) {
            case 1 : {
              _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_TRUE) COMMA_HERE) ;
              var_cas_eh = GGS_bool (true, true) ;
              } break ;
            case 2 : {
              _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_FALSE) COMMA_HERE) ;
              var_cas_eh = GGS_bool (true, false) ;
              } break ;
            default :
              break ;
          }
          { const GGS_basic_type _var_4640 = var_cas_errorhook ; // CAST instruction
            if (_var_4640.getPtr () != NULL) {
              macroValidPointer (_var_4640.getPtr ()) ;
              if (typeid (cPtr_void) == typeid (* (_var_4640.getPtr ()))) {
                var_cas_errorhook = GGS_bool_class ::constructor_new (_inLexique, GGS_location (_inLexique), var_cas_eh COMMA_HERE) ;
              }else{
                GGS_location (_inLexique).reader_location (_inLexique COMMA_HERE).signalGGSSemanticError (_inLexique, (GGS_string (true, "ERRORHOOK attribute already defined for Application "))._operator_concat (var_cas_name.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (160))) COMMA_SOURCE_FILE_AT_LINE (161)) ;
                var_cas_errorhook.reader_location (_inLexique COMMA_SOURCE_FILE_AT_LINE (161)).reader_location (_inLexique COMMA_HERE).signalGGSSemanticError (_inLexique, GGS_string (true, "Was previously define here") COMMA_SOURCE_FILE_AT_LINE (162)) ;
              }
            }
          }
          GGS_lstring  automatic_var_3 ;
          nt_description_ (_inLexique, automatic_var_3) ;
          _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3B) COMMA_HERE) ;
          } break ;
        case 6 : {
          GGS_basic_type  var_cas_hr ;
          _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_HAS_5FRESTARTTASK) COMMA_HERE) ;
          _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3D) COMMA_HERE) ;
          switch (select_goil_obj_application_5 (_inLexique)) {
            case 1 : {
              GGS_lstring  var_cas_res_task ;
              _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_TRUE) COMMA_HERE) ;
              _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__7B) COMMA_HERE) ;
              _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_RESTARTTASK) COMMA_HERE) ;
              _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3D) COMMA_HERE) ;
              _inLexique._assignFromAttribute_att_token (var_cas_res_task) ;
              _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_idf) COMMA_HERE) ;
              _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3B) COMMA_HERE) ;
              _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__7D) COMMA_HERE) ;
              var_cas_hr = GGS_string_class ::constructor_new (_inLexique, GGS_location (_inLexique), var_cas_res_task.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (170)) COMMA_HERE) ;
              } break ;
            case 2 : {
              _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_FALSE) COMMA_HERE) ;
              var_cas_hr = GGS_bool_class ::constructor_new (_inLexique, GGS_location (_inLexique), GGS_bool (true, false) COMMA_HERE) ;
              } break ;
            default :
              break ;
          }
          { const GGS_basic_type _var_5297 = var_cas_restart ; // CAST instruction
            if (_var_5297.getPtr () != NULL) {
              macroValidPointer (_var_5297.getPtr ()) ;
              if (typeid (cPtr_void) == typeid (* (_var_5297.getPtr ()))) {
                var_cas_restart = var_cas_hr ;
              }else{
                GGS_location (_inLexique).reader_location (_inLexique COMMA_HERE).signalGGSSemanticError (_inLexique, (GGS_string (true, "RESTARTTASK attribute already defined for Application "))._operator_concat (var_cas_name.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (178))) COMMA_SOURCE_FILE_AT_LINE (179)) ;
                var_cas_restart.reader_location (_inLexique COMMA_SOURCE_FILE_AT_LINE (179)).reader_location (_inLexique COMMA_HERE).signalGGSSemanticError (_inLexique, GGS_string (true, "Was previously define here") COMMA_SOURCE_FILE_AT_LINE (180)) ;
              }
            }
          }
          GGS_lstring  automatic_var_4 ;
          nt_description_ (_inLexique, automatic_var_4) ;
          _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3B) COMMA_HERE) ;
          } break ;
        case 7 : {
          GGS_lstring  var_cas_task ;
          _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_TASK) COMMA_HERE) ;
          _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3D) COMMA_HERE) ;
          _inLexique._assignFromAttribute_att_token (var_cas_task) ;
          _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_idf) COMMA_HERE) ;
          var_cas_tasks.modifier_put (_inLexique, var_cas_task, GGS_string_class ::constructor_new (_inLexique, GGS_location (_inLexique), var_cas_task.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (185)) COMMA_HERE) COMMA_SOURCE_FILE_AT_LINE (185)) ;
          GGS_lstring  automatic_var_5 ;
          nt_description_ (_inLexique, automatic_var_5) ;
          _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3B) COMMA_HERE) ;
          } break ;
        case 8 : {
          GGS_lstring  var_cas_isr ;
          _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_ISR) COMMA_HERE) ;
          _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3D) COMMA_HERE) ;
          _inLexique._assignFromAttribute_att_token (var_cas_isr) ;
          _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_idf) COMMA_HERE) ;
          var_cas_isrs.modifier_put (_inLexique, var_cas_isr, GGS_string_class ::constructor_new (_inLexique, GGS_location (_inLexique), var_cas_isr.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (190)) COMMA_HERE) COMMA_SOURCE_FILE_AT_LINE (190)) ;
          GGS_lstring  automatic_var_6 ;
          nt_description_ (_inLexique, automatic_var_6) ;
          _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3B) COMMA_HERE) ;
          } break ;
        case 9 : {
          GGS_lstring  var_cas_alarm ;
          _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_ALARM) COMMA_HERE) ;
          _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3D) COMMA_HERE) ;
          _inLexique._assignFromAttribute_att_token (var_cas_alarm) ;
          _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_idf) COMMA_HERE) ;
          var_cas_alarms.modifier_put (_inLexique, var_cas_alarm, GGS_string_class ::constructor_new (_inLexique, GGS_location (_inLexique), var_cas_alarm.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (195)) COMMA_HERE) COMMA_SOURCE_FILE_AT_LINE (195)) ;
          GGS_lstring  automatic_var_7 ;
          nt_description_ (_inLexique, automatic_var_7) ;
          _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3B) COMMA_HERE) ;
          } break ;
        case 10 : {
          GGS_lstring  var_cas_st ;
          _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_SCHEDULETABLE) COMMA_HERE) ;
          _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3D) COMMA_HERE) ;
          _inLexique._assignFromAttribute_att_token (var_cas_st) ;
          _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_idf) COMMA_HERE) ;
          var_cas_schedtables.modifier_put (_inLexique, var_cas_st, GGS_string_class ::constructor_new (_inLexique, GGS_location (_inLexique), var_cas_st.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (200)) COMMA_HERE) COMMA_SOURCE_FILE_AT_LINE (200)) ;
          GGS_lstring  automatic_var_8 ;
          nt_description_ (_inLexique, automatic_var_8) ;
          _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3B) COMMA_HERE) ;
          } break ;
        case 11 : {
          GGS_lstring  var_cas_ct ;
          _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_COUNTER) COMMA_HERE) ;
          _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3D) COMMA_HERE) ;
          _inLexique._assignFromAttribute_att_token (var_cas_ct) ;
          _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_idf) COMMA_HERE) ;
          var_cas_counters.modifier_put (_inLexique, var_cas_ct, GGS_string_class ::constructor_new (_inLexique, GGS_location (_inLexique), var_cas_ct.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (205)) COMMA_HERE) COMMA_SOURCE_FILE_AT_LINE (205)) ;
          GGS_lstring  automatic_var_9 ;
          nt_description_ (_inLexique, automatic_var_9) ;
          _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3B) COMMA_HERE) ;
          } break ;
        case 12 : {
          GGS_lstring  var_cas_rez ;
          _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_RESOURCE) COMMA_HERE) ;
          _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3D) COMMA_HERE) ;
          _inLexique._assignFromAttribute_att_token (var_cas_rez) ;
          _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_idf) COMMA_HERE) ;
          var_cas_resources.modifier_put (_inLexique, var_cas_rez, GGS_string_class ::constructor_new (_inLexique, GGS_location (_inLexique), var_cas_rez.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (210)) COMMA_HERE) COMMA_SOURCE_FILE_AT_LINE (210)) ;
          GGS_lstring  automatic_var_10 ;
          nt_description_ (_inLexique, automatic_var_10) ;
          _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3B) COMMA_HERE) ;
          } break ;
        case 13 : {
          GGS_lstring  var_cas_mes ;
          _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_MESSAGE) COMMA_HERE) ;
          _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3D) COMMA_HERE) ;
          _inLexique._assignFromAttribute_att_token (var_cas_mes) ;
          _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_idf) COMMA_HERE) ;
          var_cas_messages.modifier_put (_inLexique, var_cas_mes, GGS_string_class ::constructor_new (_inLexique, GGS_location (_inLexique), var_cas_mes.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (215)) COMMA_HERE) COMMA_SOURCE_FILE_AT_LINE (215)) ;
          GGS_lstring  automatic_var_11 ;
          nt_description_ (_inLexique, automatic_var_11) ;
          _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3B) COMMA_HERE) ;
          } break ;
        default :
          syntaxRepeat_0 = false ;
          break ;
      }
    }
  }
  var_cas_app = GGS_app_obj ::constructor_new (_inLexique, GGS_lstring ::constructor_new (_inLexique, GGS_string (true, ""), GGS_location (_inLexique) COMMA_HERE), var_cas_trusted, var_cas_startuphook, var_cas_shutdownhook, var_cas_errorhook, var_cas_restart, var_cas_tasks, var_cas_isrs, var_cas_alarms, var_cas_schedtables, var_cas_counters, var_cas_resources, var_cas_messages COMMA_HERE) ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//             Implementation of production rule 'trusted_fcts'              *
//                                                                           *
//---------------------------------------------------------------------------*

void goil_obj_application::
pr_trusted_fcts_goil_obj_application_237_19_ (goil_lexique & _inLexique,
                                GGS_app_trusted_obj  &var_cas_trust_attr) {
  GGS_stringset  var_cas_t_funcs ;
  var_cas_t_funcs = GGS_stringset ::constructor_emptySet () ;
  switch (select_goil_obj_application_6 (_inLexique)) {
    case 1 : {
      _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__7B) COMMA_HERE) ;
      { bool syntaxRepeat_7 = true ;
        while (syntaxRepeat_7) {
          switch (select_repeat_goil_obj_application_7 (_inLexique)) {
            case 2 : {
              GGS_lstring  var_cas_f_name ;
              _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_TRUSTED_5FFUNCTION) COMMA_HERE) ;
              _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3D) COMMA_HERE) ;
              _inLexique._assignFromAttribute_att_token (var_cas_f_name) ;
              _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_idf) COMMA_HERE) ;
              _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3B) COMMA_HERE) ;
              var_cas_t_funcs._addAssign_operation (var_cas_f_name.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (247))) ;
              } break ;
            default :
              syntaxRepeat_7 = false ;
              break ;
          }
        }
      }
      _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__7D) COMMA_HERE) ;
      } break ;
    case 2 : {
      } break ;
    default :
      break ;
  }
  var_cas_trust_attr = GGS_app_trusted_true ::constructor_new (_inLexique, GGS_location (_inLexique), var_cas_t_funcs COMMA_HERE) ;
}

//---------------------------------------------------------------------------*

