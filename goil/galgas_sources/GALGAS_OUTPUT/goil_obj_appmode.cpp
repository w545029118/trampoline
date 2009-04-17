//---------------------------------------------------------------------------*
//                                                                           *
//                       File 'goil_obj_appmode.cpp'                         *
//                        Generated by version 1.8.1                         *
//                      april 17th, 2009, at 9h43'48"                        *
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
#include "goil_obj_appmode.h"

//---------------------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  #define SOURCE_FILE_AT_LINE(line) "goil_obj_appmode.ggs", line
  #define COMMA_SOURCE_FILE_AT_LINE(line) , SOURCE_FILE_AT_LINE(line)
#else
  #define SOURCE_FILE_AT_LINE(line) 
  #define COMMA_SOURCE_FILE_AT_LINE(line) 
#endif


//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

//---------------------------------------------------------------------------*
//                                                                           *
//               Implementation of production rule 'appmode'                 *
//                                                                           *
//---------------------------------------------------------------------------*

void goil_obj_appmode::
pr_appmode_goil_obj_appmode_33_14_ (goil_lexique & _inLexique) {
  GGS_ident_map  var_cas_others ;
  var_cas_others = GGS_ident_map ::constructor_emptyMap (_inLexique COMMA_HERE) ;
  _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_APPMODE) COMMA_HERE) ;
  _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_idf) COMMA_HERE) ;
  _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__7B) COMMA_HERE) ;
  { bool syntaxRepeat_0 = true ;
    while (syntaxRepeat_0) {
      switch (select_repeat_goil_obj_appmode_0 (_inLexique)) {
        case 2 : {
          nt_free_field_ (_inLexique, var_cas_others) ;
          GGS_lstring  automatic_var_0 ;
          nt_description_ (_inLexique, automatic_var_0) ;
          _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3B) COMMA_HERE) ;
          } break ;
        default :
          syntaxRepeat_0 = false ;
          break ;
      }
    }
  }
  _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__7D) COMMA_HERE) ;
  GGS_lstring  automatic_var_1 ;
  nt_description_ (_inLexique, automatic_var_1) ;
  _inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3B) COMMA_HERE) ;
}

//---------------------------------------------------------------------------*

