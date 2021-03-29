/* Generated from /home/henchman/larcenytest/larceny-petit-Nightly-2017-08-06/larceny_src/lib/R6RS/rnrs/conditions.slfasl */
#include "petit-instr.h"

static RTYPE compiled_block_1_1085( CONT_PARAMS );
static RTYPE compiled_block_1_1084( CONT_PARAMS );
static RTYPE compiled_start_1_0( CONT_PARAMS );
static RTYPE compiled_start_1_3( CONT_PARAMS );
static RTYPE compiled_block_1_1081( CONT_PARAMS );
static RTYPE compiled_start_1_2( CONT_PARAMS );
static RTYPE compiled_block_1_1003( CONT_PARAMS );
static RTYPE compiled_block_1_1005( CONT_PARAMS );
static RTYPE compiled_block_1_1007( CONT_PARAMS );
static RTYPE compiled_block_1_1009( CONT_PARAMS );
static RTYPE compiled_block_1_1011( CONT_PARAMS );
static RTYPE compiled_start_1_4( CONT_PARAMS );
static RTYPE compiled_block_1_1019( CONT_PARAMS );
static RTYPE compiled_block_1_1070( CONT_PARAMS );
static RTYPE compiled_block_1_1072( CONT_PARAMS );
static RTYPE compiled_block_1_1071( CONT_PARAMS );
static RTYPE compiled_start_1_6( CONT_PARAMS );
static RTYPE compiled_block_1_1056( CONT_PARAMS );
static RTYPE compiled_block_1_1055( CONT_PARAMS );
static RTYPE compiled_block_1_1068( CONT_PARAMS );
static RTYPE compiled_block_1_1067( CONT_PARAMS );
static RTYPE compiled_block_1_1066( CONT_PARAMS );
static RTYPE compiled_block_1_1065( CONT_PARAMS );
static RTYPE compiled_block_1_1063( CONT_PARAMS );
static RTYPE compiled_block_1_1021( CONT_PARAMS );
static RTYPE compiled_block_1_1060( CONT_PARAMS );
static RTYPE compiled_block_1_1059( CONT_PARAMS );
static RTYPE compiled_block_1_1058( CONT_PARAMS );
static RTYPE compiled_block_1_1057( CONT_PARAMS );
static RTYPE compiled_block_1_1042( CONT_PARAMS );
static RTYPE compiled_block_1_1045( CONT_PARAMS );
static RTYPE compiled_block_1_1053( CONT_PARAMS );
static RTYPE compiled_block_1_1052( CONT_PARAMS );
static RTYPE compiled_block_1_1051( CONT_PARAMS );
static RTYPE compiled_block_1_1046( CONT_PARAMS );
static RTYPE compiled_block_1_1043( CONT_PARAMS );
static RTYPE compiled_block_1_1044( CONT_PARAMS );
static RTYPE compiled_block_1_1039( CONT_PARAMS );
static RTYPE compiled_block_1_1040( CONT_PARAMS );
static RTYPE compiled_block_1_1020( CONT_PARAMS );
static RTYPE compiled_block_1_1035( CONT_PARAMS );
static RTYPE compiled_block_1_1038( CONT_PARAMS );
static RTYPE compiled_block_1_1036( CONT_PARAMS );
static RTYPE compiled_block_1_1037( CONT_PARAMS );
static RTYPE compiled_temp_1_8( CONT_PARAMS );
static RTYPE compiled_block_1_1034( CONT_PARAMS );
static RTYPE compiled_block_1_1033( CONT_PARAMS );
static RTYPE compiled_block_1_1032( CONT_PARAMS );
static RTYPE compiled_block_1_1031( CONT_PARAMS );
static RTYPE compiled_block_1_1030( CONT_PARAMS );
static RTYPE compiled_block_1_1029( CONT_PARAMS );
static RTYPE compiled_block_1_1028( CONT_PARAMS );
static RTYPE compiled_block_1_1027( CONT_PARAMS );
static RTYPE compiled_block_1_1026( CONT_PARAMS );
static RTYPE compiled_block_1_1025( CONT_PARAMS );
static RTYPE compiled_block_1_1024( CONT_PARAMS );
static RTYPE compiled_block_1_1023( CONT_PARAMS );
static RTYPE compiled_start_1_7( CONT_PARAMS );
static RTYPE compiled_block_1_1050( CONT_PARAMS );
static RTYPE compiled_block_1_1049( CONT_PARAMS );
static RTYPE compiled_block_1_1048( CONT_PARAMS );
static RTYPE compiled_block_1_1047( CONT_PARAMS );
static RTYPE compiled_start_1_9( CONT_PARAMS );
static RTYPE compiled_block_1_1013( CONT_PARAMS );
static RTYPE compiled_block_1_1015( CONT_PARAMS );
static RTYPE compiled_block_1_1017( CONT_PARAMS );
static RTYPE compiled_start_1_5( CONT_PARAMS );
static RTYPE compiled_start_1_1( CONT_PARAMS );

static RTYPE compiled_start_1_0( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_save( 0 );
  twobit_store( 0, 0 );
  twobit_lambda( compiled_start_1_1, 2, 0 );
  twobit_setreg( 2 );
  twobit_lambda( compiled_start_1_2, 4, 0 );
  twobit_setreg( 4 );
  twobit_lambda( compiled_start_1_3, 6, 0 );
  twobit_setreg( 3 );
  twobit_movereg( 3, 7 );
  twobit_movereg( 4, 6 );
  twobit_const( 7 );
  twobit_setreg( 1 );
  twobit_const( 8 );
  twobit_setreg( 3 );
  twobit_const( 9 );
  twobit_setreg( 4 );
  twobit_const( 10 );
  twobit_setreg( 5 );
  twobit_const( 11 );
  twobit_setreg( 8 );
  twobit_global( 12 ); /* ex:make-library */
  twobit_setrtn( 1084, compiled_block_1_1084 );
  twobit_invoke( 8 );
  twobit_label( 1084, compiled_block_1_1084 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_global( 13 ); /* ex:register-library! */
  twobit_setrtn( 1085, compiled_block_1_1085 );
  twobit_invoke( 1 );
  twobit_label( 1085, compiled_block_1_1085 );
  twobit_load( 0, 0 );
  twobit_global( 14 ); /* values */
  twobit_pop( 0 );
  twobit_invoke( 0 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_1( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_const( 1 );
  twobit_setreg( 1 );
  twobit_global( 2 ); /* ex:uncompress */
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_2( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_save( 0 );
  twobit_store( 0, 0 );
  twobit_lambda( compiled_start_1_4, 2, 0 );
  twobit_setreg( 2 );
  twobit_const( 3 );
  twobit_setreg( 1 );
  twobit_global( 4 ); /* ex:register-macro! */
  twobit_setrtn( 1081, compiled_block_1_1081 );
  twobit_invoke( 2 );
  twobit_label( 1081, compiled_block_1_1081 );
  twobit_load( 0, 0 );
  twobit_global( 5 ); /* values */
  twobit_pop( 0 );
  twobit_invoke( 0 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_4( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_reg( 1 );
  twobit_op1_branchf_611( 1003, compiled_block_1_1003 ); /* internal:branchf-pair? */
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1005, compiled_block_1_1005 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1007, compiled_block_1_1007 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1009, compiled_block_1_1009 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 31 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1011, compiled_block_1_1011 ); /* internal:branchf-pair? */
  twobit_save( 3 );
  twobit_store( 0, 0 );
  twobit_store( 2, 1 );
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 30 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 2 );
  twobit_store( 2, 3 );
  twobit_lambda( compiled_start_1_5, 2, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_load( 5, 1 );
  twobit_movereg( 31, 4 );
  twobit_movereg( 30, 2 );
  twobit_lambda( compiled_start_1_6, 4, 5 );
  twobit_setreg( 3 );
  twobit_load( 1, 2 );
  twobit_load( 2, 3 );
  twobit_global( 5 ); /* ex:map-while */
  twobit_pop( 3 );
  twobit_invoke( 3 );
  twobit_label( 1011, compiled_block_1_1011 );
  twobit_global( 6 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1009, compiled_block_1_1009 );
  twobit_global( 6 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1007, compiled_block_1_1007 );
  twobit_global( 6 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1005, compiled_block_1_1005 );
  twobit_global( 6 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1003, compiled_block_1_1003 );
  twobit_global( 6 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_5( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_reg( 1 );
  twobit_op1_branchf_611( 1013, compiled_block_1_1013 ); /* internal:branchf-pair? */
  twobit_reg( 1 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 4 );
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 3 );
  twobit_reg( 3 );
  twobit_op1_branchf_611( 1015, compiled_block_1_1015 ); /* internal:branchf-pair? */
  twobit_reg( 3 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_reg( 3 );
  twobit_op1_405(); /* cdr:pair */
  twobit_op1_branchf_610( 1017, compiled_block_1_1017 ); /* internal:branchf-null? */
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_reg( 2 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op2_58( 3 ); /* cons */
  twobit_return();
  twobit_label( 1017, compiled_block_1_1017 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_return();
  twobit_label( 1015, compiled_block_1_1015 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_return();
  twobit_label( 1013, compiled_block_1_1013 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_1_6( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_reg( 2 );
  twobit_op1_branchf_610( 1019, compiled_block_1_1019 ); /* internal:branchf-null? */
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_lambda( compiled_start_1_7, 2, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_reg( 1 );
  twobit_op1_branchf_610( 1071, compiled_block_1_1071 ); /* internal:branchf-null? */
  twobit_const( 3 );
  twobit_skip( 1070, compiled_block_1_1070 );
  twobit_label( 1071, compiled_block_1_1071 );
  twobit_movereg( 1, 3 );
  twobit_global( 4 ); /* map */
  twobit_setreg( 1 );
  twobit_global( 5 ); /* list */
  twobit_setreg( 2 );
  twobit_global( 6 ); /* apply */
  twobit_setrtn( 1072, compiled_block_1_1072 );
  twobit_invoke( 3 );
  twobit_label( 1072, compiled_block_1_1072 );
  twobit_load( 0, 0 );
  twobit_label( 1070, compiled_block_1_1070 );
  twobit_setreg( 2 );
  twobit_load( 1, 1 );
  twobit_global( 6 ); /* apply */
  twobit_pop( 1 );
  twobit_invoke( 2 );
  twobit_label( 1019, compiled_block_1_1019 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_global( 7 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_7( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_save( 8 );
  twobit_store( 0, 0 );
  twobit_store( 1, 2 );
  twobit_store( 2, 7 );
  twobit_const( 1 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 2 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 3 );
  twobit_setreg( 5 );
  twobit_global( 4 ); /* ex:syntax-rename */
  twobit_setrtn( 1023, compiled_block_1_1023 );
  twobit_invoke( 5 );
  twobit_label( 1023, compiled_block_1_1023 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 8 );
  twobit_const( 5 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 2 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 3 );
  twobit_setreg( 5 );
  twobit_global( 4 ); /* ex:syntax-rename */
  twobit_setrtn( 1024, compiled_block_1_1024 );
  twobit_invoke( 5 );
  twobit_label( 1024, compiled_block_1_1024 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 6 );
  twobit_const( 6 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 2 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 3 );
  twobit_setreg( 5 );
  twobit_global( 4 ); /* ex:syntax-rename */
  twobit_setrtn( 1025, compiled_block_1_1025 );
  twobit_invoke( 5 );
  twobit_label( 1025, compiled_block_1_1025 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 5 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_lexical( 1, 3 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 1 );
  twobit_const( 7 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 2 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 3 );
  twobit_setreg( 5 );
  twobit_global( 4 ); /* ex:syntax-rename */
  twobit_setrtn( 1026, compiled_block_1_1026 );
  twobit_invoke( 5 );
  twobit_label( 1026, compiled_block_1_1026 );
  twobit_load( 0, 0 );
  twobit_load( 3, 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 4 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_lexical( 1, 5 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 3 );
  twobit_const( 8 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 2 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 3 );
  twobit_setreg( 5 );
  twobit_global( 4 ); /* ex:syntax-rename */
  twobit_setrtn( 1027, compiled_block_1_1027 );
  twobit_invoke( 5 );
  twobit_label( 1027, compiled_block_1_1027 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_load( 1, 2 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_setrtn( 1028, compiled_block_1_1028 );
  twobit_branch( 1021, compiled_block_1_1021 );
  twobit_label( 1028, compiled_block_1_1028 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_stack( 1 );
  twobit_op2_58( 4 ); /* cons */
  twobit_load( 3, 3 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 4 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 5 );
  twobit_op2_58( 4 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_lexical( 1, 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 6 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 4 );
  twobit_const( 5 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 2 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 3 );
  twobit_setreg( 5 );
  twobit_global( 4 ); /* ex:syntax-rename */
  twobit_setrtn( 1029, compiled_block_1_1029 );
  twobit_invoke( 5 );
  twobit_label( 1029, compiled_block_1_1029 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 5 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_lexical( 1, 3 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 6 );
  twobit_const( 9 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 2 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 3 );
  twobit_setreg( 5 );
  twobit_global( 4 ); /* ex:syntax-rename */
  twobit_setrtn( 1030, compiled_block_1_1030 );
  twobit_invoke( 5 );
  twobit_label( 1030, compiled_block_1_1030 );
  twobit_load( 0, 0 );
  twobit_load( 3, 6 );
  twobit_op2_58( 3 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_lexical( 1, 4 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 5 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_const( 5 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 2 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 3 );
  twobit_setreg( 5 );
  twobit_global( 4 ); /* ex:syntax-rename */
  twobit_setrtn( 1031, compiled_block_1_1031 );
  twobit_invoke( 5 );
  twobit_label( 1031, compiled_block_1_1031 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 6 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_lexical( 1, 3 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 5 );
  twobit_const( 10 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 2 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 3 );
  twobit_setreg( 5 );
  twobit_global( 4 ); /* ex:syntax-rename */
  twobit_setrtn( 1032, compiled_block_1_1032 );
  twobit_invoke( 5 );
  twobit_label( 1032, compiled_block_1_1032 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_load( 1, 7 );
  twobit_load( 3, 5 );
  twobit_reg( 4 );
  twobit_op2_58( 3 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_lexical( 1, 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 6 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 5 );
  twobit_global( 11 ); /* length */
  twobit_setrtn( 1033, compiled_block_1_1033 );
  twobit_invoke( 1 );
  twobit_label( 1033, compiled_block_1_1033 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 6 );
  twobit_load( 1, 2 );
  twobit_global( 11 ); /* length */
  twobit_setrtn( 1034, compiled_block_1_1034 );
  twobit_invoke( 1 );
  twobit_label( 1034, compiled_block_1_1034 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_stack( 6 );
  twobit_op2_branchf_623( 4, 8, compiled_temp_1_8, 1036, compiled_block_1_1036 ); /* internal:branchf-= */
  twobit_load( 1, 7 );
  twobit_load( 2, 2 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_setrtn( 1037, compiled_block_1_1037 );
  twobit_branch( 1020, compiled_block_1_1020 );
  twobit_label( 1037, compiled_block_1_1037 );
  twobit_load( 0, 0 );
  twobit_skip( 1035, compiled_block_1_1035 );
  twobit_label( 1036, compiled_block_1_1036 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 4 );
  twobit_stack( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 7 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 12 );
  twobit_setreg( 1 );
  twobit_const( 13 );
  twobit_setreg( 2 );
  twobit_const( 14 );
  twobit_setreg( 3 );
  twobit_global( 15 ); /* ex:syntax-violation */
  twobit_setrtn( 1038, compiled_block_1_1038 );
  twobit_invoke( 4 );
  twobit_label( 1038, compiled_block_1_1038 );
  twobit_load( 0, 0 );
  twobit_label( 1035, compiled_block_1_1035 );
  twobit_setreg( 4 );
  twobit_stack( 5 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 4 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 8 );
  twobit_op2_58( 4 ); /* cons */
  twobit_pop( 8 );
  twobit_return();
  twobit_label( 1020, compiled_block_1_1020 );
  twobit_reg( 1 );
  twobit_op1_10(); /* null? */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 1040, compiled_block_1_1040 );
  twobit_imm_const( TRUE_CONST ); /* #t */
  twobit_skip( 1039, compiled_block_1_1039 );
  twobit_label( 1040, compiled_block_1_1040 );
  twobit_reg( 2 );
  twobit_op1_10(); /* null? */
  twobit_label( 1039, compiled_block_1_1039 );
  twobit_branchf( 1042, compiled_block_1_1042 );
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_store( 3, 1 );
  twobit_reg( 4 );
  twobit_branchf( 1044, compiled_block_1_1044 );
  twobit_reg( 2 );
  twobit_op1_10(); /* null? */
  twobit_skip( 1043, compiled_block_1_1043 );
  twobit_label( 1044, compiled_block_1_1044 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1043, compiled_block_1_1043 );
  twobit_branchf( 1046, compiled_block_1_1046 );
  twobit_reg( 3 );
  twobit_skip( 1045, compiled_block_1_1045 );
  twobit_label( 1046, compiled_block_1_1046 );
  twobit_movereg( 2, 3 );
  twobit_movereg( 1, 2 );
  twobit_lambda( compiled_start_1_9, 17, 0 );
  twobit_setreg( 1 );
  twobit_global( 18 ); /* larceny:map */
  twobit_setrtn( 1051, compiled_block_1_1051 );
  twobit_invoke( 3 );
  twobit_label( 1051, compiled_block_1_1051 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_global( 19 ); /* reverse */
  twobit_setrtn( 1052, compiled_block_1_1052 );
  twobit_invoke( 1 );
  twobit_label( 1052, compiled_block_1_1052 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_load( 2, 1 );
  twobit_global( 20 ); /* append */
  twobit_setrtn( 1053, compiled_block_1_1053 );
  twobit_invoke( 2 );
  twobit_label( 1053, compiled_block_1_1053 );
  twobit_load( 0, 0 );
  twobit_label( 1045, compiled_block_1_1045 );
  twobit_setreg( 1 );
  twobit_global( 19 ); /* reverse */
  twobit_pop( 1 );
  twobit_invoke( 1 );
  twobit_label( 1042, compiled_block_1_1042 );
  twobit_save( 8 );
  twobit_store( 0, 0 );
  twobit_store( 3, 8 );
  twobit_reg_op1_check_652(reg(1),1055,compiled_block_1_1055); /* internal:check-pair? with (1 0 0) */
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_reg_op1_check_652(reg(2),1056,compiled_block_1_1056); /* internal:check-pair? with (2 0 0) */
  twobit_reg( 2 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 31 );
  twobit_store( 31, 3 );
  twobit_reg( 2 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_store( 2, 1 );
  twobit_reg( 1 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 1 );
  twobit_store( 1, 6 );
  twobit_const( 5 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 2 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 3 );
  twobit_setreg( 5 );
  twobit_global( 4 ); /* ex:syntax-rename */
  twobit_setrtn( 1057, compiled_block_1_1057 );
  twobit_invoke( 5 );
  twobit_label( 1057, compiled_block_1_1057 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 7 );
  twobit_const( 21 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 2 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 3 );
  twobit_setreg( 5 );
  twobit_global( 4 ); /* ex:syntax-rename */
  twobit_setrtn( 1058, compiled_block_1_1058 );
  twobit_invoke( 5 );
  twobit_label( 1058, compiled_block_1_1058 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 5 );
  twobit_const( 22 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 2 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 3 );
  twobit_setreg( 5 );
  twobit_global( 4 ); /* ex:syntax-rename */
  twobit_setrtn( 1059, compiled_block_1_1059 );
  twobit_invoke( 5 );
  twobit_label( 1059, compiled_block_1_1059 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 4 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_stack( 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 1 );
  twobit_const( 7 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 2 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 3 );
  twobit_setreg( 5 );
  twobit_global( 4 ); /* ex:syntax-rename */
  twobit_setrtn( 1060, compiled_block_1_1060 );
  twobit_invoke( 5 );
  twobit_label( 1060, compiled_block_1_1060 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_load( 1, 2 );
  twobit_load( 2, 3 );
  twobit_load( 3, 1 );
  twobit_reg( 4 );
  twobit_op2_58( 3 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_lexical( 1, 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 4 );
  twobit_op2_58( 4 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_lexical( 1, 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 5 );
  twobit_op2_58( 4 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 6 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 7 );
  twobit_op2_58( 4 ); /* cons */
  twobit_load( 3, 8 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_pop( 8 );
  twobit_branch( 1020, compiled_block_1_1020 );
  twobit_label( 1021, compiled_block_1_1021 );
  twobit_reg( 1 );
  twobit_op1_branchf_610( 1063, compiled_block_1_1063 ); /* internal:branchf-null? */
  twobit_movereg( 2, 1 );
  twobit_global( 19 ); /* reverse */
  twobit_invoke( 1 );
  twobit_label( 1063, compiled_block_1_1063 );
  twobit_save( 5 );
  twobit_store( 0, 0 );
  twobit_store( 2, 5 );
  twobit_reg_op1_check_652(reg(1),1055,compiled_block_1_1055); /* internal:check-pair? with (1 0 0) */
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_reg( 1 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_store( 3, 2 );
  twobit_const( 23 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 2 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 3 );
  twobit_setreg( 5 );
  twobit_global( 4 ); /* ex:syntax-rename */
  twobit_setrtn( 1065, compiled_block_1_1065 );
  twobit_invoke( 5 );
  twobit_label( 1065, compiled_block_1_1065 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 4 );
  twobit_const( 7 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 2 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 3 );
  twobit_setreg( 5 );
  twobit_global( 4 ); /* ex:syntax-rename */
  twobit_setrtn( 1066, compiled_block_1_1066 );
  twobit_invoke( 5 );
  twobit_label( 1066, compiled_block_1_1066 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_const( 24 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 2 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 3 );
  twobit_setreg( 5 );
  twobit_global( 4 ); /* ex:syntax-rename */
  twobit_setrtn( 1067, compiled_block_1_1067 );
  twobit_invoke( 5 );
  twobit_label( 1067, compiled_block_1_1067 );
  twobit_load( 0, 0 );
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 1 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_stack( 2 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 2 );
  twobit_const( 7 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 2 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 3 );
  twobit_setreg( 5 );
  twobit_global( 4 ); /* ex:syntax-rename */
  twobit_setrtn( 1068, compiled_block_1_1068 );
  twobit_invoke( 5 );
  twobit_label( 1068, compiled_block_1_1068 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_load( 1, 3 );
  twobit_load( 3, 2 );
  twobit_reg( 4 );
  twobit_op2_58( 3 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 1 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 4 );
  twobit_op2_58( 4 ); /* cons */
  twobit_load( 3, 5 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 2 );
  twobit_pop( 5 );
  twobit_branch( 1021, compiled_block_1_1021 );
  twobit_label( 1055, compiled_block_1_1055 );
  twobit_trap( 1, 0, 0, 1 );
  twobit_label( 1056, compiled_block_1_1056 );
  twobit_trap( 2, 0, 0, 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_9( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_save( 5 );
  twobit_store( 0, 0 );
  twobit_store( 1, 4 );
  twobit_store( 2, 1 );
  twobit_const( 1 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 2 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 3 );
  twobit_setreg( 5 );
  twobit_global( 4 ); /* ex:syntax-rename */
  twobit_setrtn( 1047, compiled_block_1_1047 );
  twobit_invoke( 5 );
  twobit_label( 1047, compiled_block_1_1047 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 5 );
  twobit_const( 5 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 2 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 3 );
  twobit_setreg( 5 );
  twobit_global( 4 ); /* ex:syntax-rename */
  twobit_setrtn( 1048, compiled_block_1_1048 );
  twobit_invoke( 5 );
  twobit_label( 1048, compiled_block_1_1048 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_const( 6 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 2 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 3 );
  twobit_setreg( 5 );
  twobit_global( 4 ); /* ex:syntax-rename */
  twobit_setrtn( 1049, compiled_block_1_1049 );
  twobit_invoke( 5 );
  twobit_label( 1049, compiled_block_1_1049 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_stack( 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 1 );
  twobit_const( 7 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 2 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 3 );
  twobit_setreg( 5 );
  twobit_global( 4 ); /* ex:syntax-rename */
  twobit_setrtn( 1050, compiled_block_1_1050 );
  twobit_invoke( 5 );
  twobit_label( 1050, compiled_block_1_1050 );
  twobit_load( 0, 0 );
  twobit_load( 3, 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_lexical( 2, 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_lexical( 2, 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 4 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 5 );
  twobit_op2_58( 4 ); /* cons */
  twobit_pop( 5 );
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_1_3( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_global( 1 ); /* values */
  twobit_invoke( 0 );
  twobit_epilogue();
}


RTYPE twobit_thunk_9d6288f0ada685eccafdf5d4f61c0be3_0(CONT_PARAMS) {
  RETURN_RTYPE(compiled_start_1_0(CONT_ACTUALS));
}
codeptr_t CDECL twobit_load_table[] = { 
  twobit_thunk_9d6288f0ada685eccafdf5d4f61c0be3_0,
  0  /* The table may be empty; some compilers complain */
};
