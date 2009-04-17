//---------------------------------------------------------------------------*
//                                                                           *
//                   File 'goil_code_schedtable_gen.cpp'                     *
//                        Generated by version 1.8.1                         *
//                      april 17th, 2009, at 9h44'34"                        *
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
#include "goil_code_schedtable_gen.h"

//---------------------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  #define SOURCE_FILE_AT_LINE(line) "goil_code_schedtable_gen.ggs", line
  #define COMMA_SOURCE_FILE_AT_LINE(line) , SOURCE_FILE_AT_LINE(line)
#else
  #define SOURCE_FILE_AT_LINE(line) 
  #define COMMA_SOURCE_FILE_AT_LINE(line) 
#endif


//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

//---------------------------------------------------------------------------*
//                                                                           *
//           Implementation of routine "generate_schedule_tables"            *
//                                                                           *
//---------------------------------------------------------------------------*

void routine_generate_schedule_tables (C_Compiler & _inLexique,
                                GGS_scheduletable_map   var_cas_sts,
                                GGS_string_map   var_cas_app_for_obj,
                                GGS_string & /* var_cas_header */,
                                GGS_string & var_cas_obj_header,
                                GGS_string & var_cas_implementation COMMA_UNUSED_LOCATION_ARGS) {
  #ifdef DEBUG_TRACE_ENABLED
    printf ("ENTER routine_generate_schedule_tables at %s:%d\n", __FILE__, __LINE__) ;
  #endif
  GGS_string var_cas_h_result ;
  var_cas_h_result = GGS_string (true, "") ;
  GGS_string var_cas_i_result ;
  var_cas_i_result = GGS_string (true, "") ;
  GGS_string var_cas_st_table ;
  var_cas_st_table = GGS_string (true, "CONSTP2VAR(tpl_schedule_table, AUTOMATIC, OS_APPL_DATA)\n") ;
  var_cas_st_table.appendCstring ("  tpl_schedtable_table[SCHEDTABLE_COUNT] = {\n") ;
  {
    GGS_scheduletable_map::cEnumerator enumerator_840 (var_cas_sts, true) ;
    const GGS_scheduletable_map::cElement * operand_840 = enumerator_840.nextObject () ;
    if ((operand_840 != NULL)) {
      GGS_uint var_cas_i (true, 0) ;
      bool _foreach_loop_840 ;
      do{
        macroValidPointer (operand_840) ;
        GGS_string var_cas_app_name ;
        var_cas_app_name = GGS_string (true, "") ;
        if (((var_cas_app_for_obj.reader_count (_inLexique COMMA_SOURCE_FILE_AT_LINE (24)))._operator_strictSup (GGS_uint (true, 0U))).isBuiltAndTrue ()) {
          const GGS_string_map  _temp_977 = var_cas_app_for_obj ;
          if (_temp_977._isBuilt ()) {
            _temp_977 (HERE)->method_get (_inLexique, operand_840->mKey, var_cas_app_name COMMA_SOURCE_FILE_AT_LINE (25)) ;
          }
        }
        const GGS_scheduletable_obj  _temp_1030 = operand_840->mInfo.st ;
        if (_temp_1030._isBuilt ()) {
          _temp_1030 (HERE)->method_generate (_inLexique, operand_840->mKey, var_cas_app_name, var_cas_i_result COMMA_SOURCE_FILE_AT_LINE (27)) ;
        }
        var_cas_h_result.appendCstring ("#define ") ;
        var_cas_h_result._dotAssign_operation (operand_840->mKey.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (28))) ;
        var_cas_h_result.appendCstring ("_id ") ;
        var_cas_h_result._dotAssign_operation (var_cas_i.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (28))) ;
        var_cas_h_result.appendCstring ("\n") ;
        var_cas_h_result.appendCstring ("CONST(ScheduleTableType, AUTOMATIC) ") ;
        var_cas_h_result._dotAssign_operation (operand_840->mKey.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (29))) ;
        var_cas_h_result.appendCstring (" = ") ;
        var_cas_h_result._dotAssign_operation (operand_840->mKey.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (29))) ;
        var_cas_h_result.appendCstring ("_id;\n") ;
        var_cas_st_table.appendCstring ("    &") ;
        var_cas_st_table._dotAssign_operation (operand_840->mKey.reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (30))) ;
        var_cas_st_table.appendCstring ("_sched_table") ;
        var_cas_i.mValue ++ ;
        operand_840 = enumerator_840.nextObject () ;
        _foreach_loop_840 = ((operand_840 != NULL)) ;
        if (_foreach_loop_840) {
          var_cas_st_table.appendCstring (",\n") ;
        }
      }while (_foreach_loop_840) ;
    }
  }
  var_cas_st_table.appendCstring ("\n"
    "};\n") ;
  if (((var_cas_sts.reader_count (_inLexique COMMA_SOURCE_FILE_AT_LINE (36)))._operator_isNotEqual (GGS_uint (true, 0U))).isBuiltAndTrue ()) {
    var_cas_i_result._dotAssign_operation (var_cas_st_table) ;
  }
  ::routine_doReplace (_inLexique,  var_cas_obj_header,  GGS_string (true, "$SCHEDTABLE_COUNT$"),  var_cas_sts.reader_count (_inLexique COMMA_SOURCE_FILE_AT_LINE (40)).reader_string (_inLexique COMMA_SOURCE_FILE_AT_LINE (40)) COMMA_SOURCE_FILE_AT_LINE (40)) ;
  ::routine_doReplace (_inLexique,  var_cas_implementation,  GGS_string (true, "$SCHEDTABLEIDS$"),  var_cas_h_result COMMA_SOURCE_FILE_AT_LINE (41)) ;
  ::routine_doReplace (_inLexique,  var_cas_implementation,  GGS_string (true, "$SCHEDULETABLES$"),  var_cas_i_result COMMA_SOURCE_FILE_AT_LINE (42)) ;
  #ifdef DEBUG_TRACE_ENABLED
    printf ("LEAVE routine_generate_schedule_tables\n") ;
  #endif
}

//---------------------------------------------------------------------------*

