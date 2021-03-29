/* Generated from /home/henchman/larcenytest/larceny-petit-Nightly-2017-08-06/larceny_src/lib/SRFI/srfi/%3a2.slfasl */
#include "petit-instr.h"

static RTYPE compiled_block_1_1180( CONT_PARAMS );
static RTYPE compiled_block_1_1179( CONT_PARAMS );
static RTYPE compiled_start_1_0( CONT_PARAMS );
static RTYPE compiled_start_1_3( CONT_PARAMS );
static RTYPE compiled_block_1_1176( CONT_PARAMS );
static RTYPE compiled_start_1_2( CONT_PARAMS );
static RTYPE compiled_block_1_1153( CONT_PARAMS );
static RTYPE compiled_block_1_1155( CONT_PARAMS );
static RTYPE compiled_block_1_1157( CONT_PARAMS );
static RTYPE compiled_block_1_1159( CONT_PARAMS );
static RTYPE compiled_block_1_1161( CONT_PARAMS );
static RTYPE compiled_block_1_1163( CONT_PARAMS );
static RTYPE compiled_block_1_1165( CONT_PARAMS );
static RTYPE compiled_block_1_1167( CONT_PARAMS );
static RTYPE compiled_block_1_1009( CONT_PARAMS );
static RTYPE compiled_block_1_1132( CONT_PARAMS );
static RTYPE compiled_block_1_1134( CONT_PARAMS );
static RTYPE compiled_block_1_1136( CONT_PARAMS );
static RTYPE compiled_block_1_1138( CONT_PARAMS );
static RTYPE compiled_block_1_1140( CONT_PARAMS );
static RTYPE compiled_block_1_1142( CONT_PARAMS );
static RTYPE compiled_block_1_1144( CONT_PARAMS );
static RTYPE compiled_block_1_1008( CONT_PARAMS );
static RTYPE compiled_block_1_1117( CONT_PARAMS );
static RTYPE compiled_block_1_1119( CONT_PARAMS );
static RTYPE compiled_block_1_1121( CONT_PARAMS );
static RTYPE compiled_block_1_1123( CONT_PARAMS );
static RTYPE compiled_block_1_1125( CONT_PARAMS );
static RTYPE compiled_block_1_1007( CONT_PARAMS );
static RTYPE compiled_block_1_1107( CONT_PARAMS );
static RTYPE compiled_block_1_1109( CONT_PARAMS );
static RTYPE compiled_block_1_1111( CONT_PARAMS );
static RTYPE compiled_block_1_1112( CONT_PARAMS );
static RTYPE compiled_block_1_1006( CONT_PARAMS );
static RTYPE compiled_block_1_1082( CONT_PARAMS );
static RTYPE compiled_block_1_1084( CONT_PARAMS );
static RTYPE compiled_block_1_1086( CONT_PARAMS );
static RTYPE compiled_block_1_1088( CONT_PARAMS );
static RTYPE compiled_block_1_1090( CONT_PARAMS );
static RTYPE compiled_block_1_1092( CONT_PARAMS );
static RTYPE compiled_block_1_1095( CONT_PARAMS );
static RTYPE compiled_block_1_1098( CONT_PARAMS );
static RTYPE compiled_block_1_1097( CONT_PARAMS );
static RTYPE compiled_block_1_1096( CONT_PARAMS );
static RTYPE compiled_block_1_1093( CONT_PARAMS );
static RTYPE compiled_block_1_1005( CONT_PARAMS );
static RTYPE compiled_block_1_1060( CONT_PARAMS );
static RTYPE compiled_block_1_1062( CONT_PARAMS );
static RTYPE compiled_block_1_1064( CONT_PARAMS );
static RTYPE compiled_block_1_1066( CONT_PARAMS );
static RTYPE compiled_block_1_1068( CONT_PARAMS );
static RTYPE compiled_block_1_1071( CONT_PARAMS );
static RTYPE compiled_block_1_1074( CONT_PARAMS );
static RTYPE compiled_block_1_1073( CONT_PARAMS );
static RTYPE compiled_block_1_1072( CONT_PARAMS );
static RTYPE compiled_block_1_1069( CONT_PARAMS );
static RTYPE compiled_block_1_1004( CONT_PARAMS );
static RTYPE compiled_block_1_1039( CONT_PARAMS );
static RTYPE compiled_block_1_1041( CONT_PARAMS );
static RTYPE compiled_block_1_1043( CONT_PARAMS );
static RTYPE compiled_block_1_1045( CONT_PARAMS );
static RTYPE compiled_block_1_1047( CONT_PARAMS );
static RTYPE compiled_block_1_1050( CONT_PARAMS );
static RTYPE compiled_block_1_1052( CONT_PARAMS );
static RTYPE compiled_block_1_1051( CONT_PARAMS );
static RTYPE compiled_block_1_1048( CONT_PARAMS );
static RTYPE compiled_block_1_1003( CONT_PARAMS );
static RTYPE compiled_block_1_1024( CONT_PARAMS );
static RTYPE compiled_block_1_1026( CONT_PARAMS );
static RTYPE compiled_block_1_1028( CONT_PARAMS );
static RTYPE compiled_block_1_1031( CONT_PARAMS );
static RTYPE compiled_block_1_1033( CONT_PARAMS );
static RTYPE compiled_block_1_1032( CONT_PARAMS );
static RTYPE compiled_block_1_1029( CONT_PARAMS );
static RTYPE compiled_block_1_1002( CONT_PARAMS );
static RTYPE compiled_block_1_1012( CONT_PARAMS );
static RTYPE compiled_block_1_1014( CONT_PARAMS );
static RTYPE compiled_block_1_1016( CONT_PARAMS );
static RTYPE compiled_block_1_1018( CONT_PARAMS );
static RTYPE compiled_start_1_4( CONT_PARAMS );
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
  twobit_setrtn( 1179, compiled_block_1_1179 );
  twobit_invoke( 8 );
  twobit_label( 1179, compiled_block_1_1179 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_global( 13 ); /* ex:register-library! */
  twobit_setrtn( 1180, compiled_block_1_1180 );
  twobit_invoke( 1 );
  twobit_label( 1180, compiled_block_1_1180 );
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
  twobit_setrtn( 1176, compiled_block_1_1176 );
  twobit_invoke( 2 );
  twobit_label( 1176, compiled_block_1_1176 );
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
  twobit_op1_branchf_611( 1012, compiled_block_1_1012 ); /* internal:branchf-pair? */
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1014, compiled_block_1_1014 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_op1_branchf_610( 1016, compiled_block_1_1016 ); /* internal:branchf-null? */
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_op1_branchf_610( 1018, compiled_block_1_1018 ); /* internal:branchf-null? */
  twobit_imm_const( TRUE_CONST ); /* #t */
  twobit_return();
  twobit_label( 1018, compiled_block_1_1018 );
  twobit_branch( 1009, compiled_block_1_1009 );
  twobit_label( 1016, compiled_block_1_1016 );
  twobit_branch( 1009, compiled_block_1_1009 );
  twobit_label( 1014, compiled_block_1_1014 );
  twobit_branch( 1009, compiled_block_1_1009 );
  twobit_label( 1012, compiled_block_1_1012 );
  twobit_branch( 1009, compiled_block_1_1009 );
  twobit_label( 1002, compiled_block_1_1002 );
  twobit_reg( 1 );
  twobit_op1_branchf_611( 1024, compiled_block_1_1024 ); /* internal:branchf-pair? */
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1026, compiled_block_1_1026 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_reg( 3 );
  twobit_op1_branchf_611( 1028, compiled_block_1_1028 ); /* internal:branchf-pair? */
  twobit_save( 6 );
  twobit_store( 0, 0 );
  twobit_store( 1, 6 );
  twobit_store( 4, 1 );
  twobit_reg( 3 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_store( 2, 4 );
  twobit_reg( 3 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 3 );
  twobit_store( 3, 2 );
  twobit_movereg( 3, 1 );
  twobit_global( 1 ); /* list? */
  twobit_setrtn( 1029, compiled_block_1_1029 );
  twobit_invoke( 1 );
  twobit_label( 1029, compiled_block_1_1029 );
  twobit_load( 0, 0 );
  twobit_branchf( 1031, compiled_block_1_1031 );
  twobit_stack( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_const( 2 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 3 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1032, compiled_block_1_1032 );
  twobit_invoke( 5 );
  twobit_label( 1032, compiled_block_1_1032 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 5 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 3 );
  twobit_load( 2, 1 );
  twobit_stack( 2 );
  twobit_op2_58( 2 ); /* cons */
  twobit_setreg( 2 );
  twobit_store( 2, 1 );
  twobit_const( 6 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 3 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1033, compiled_block_1_1033 );
  twobit_invoke( 5 );
  twobit_label( 1033, compiled_block_1_1033 );
  twobit_load( 0, 0 );
  twobit_load( 3, 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_load( 3, 3 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 4 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 5 );
  twobit_op2_58( 4 ); /* cons */
  twobit_pop( 6 );
  twobit_return();
  twobit_label( 1031, compiled_block_1_1031 );
  twobit_load( 1, 6 );
  twobit_global( 7 ); /* ex:invalid-form */
  twobit_pop( 6 );
  twobit_invoke( 1 );
  twobit_label( 1028, compiled_block_1_1028 );
  twobit_global( 7 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1026, compiled_block_1_1026 );
  twobit_global( 7 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1024, compiled_block_1_1024 );
  twobit_global( 7 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1003, compiled_block_1_1003 );
  twobit_reg( 1 );
  twobit_op1_branchf_611( 1039, compiled_block_1_1039 ); /* internal:branchf-pair? */
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1041, compiled_block_1_1041 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_reg( 3 );
  twobit_op1_branchf_611( 1043, compiled_block_1_1043 ); /* internal:branchf-pair? */
  twobit_reg( 3 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_reg( 2 );
  twobit_op1_branchf_611( 1045, compiled_block_1_1045 ); /* internal:branchf-pair? */
  twobit_reg( 2 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 31 );
  twobit_reg( 2 );
  twobit_op1_405(); /* cdr:pair */
  twobit_op1_branchf_610( 1047, compiled_block_1_1047 ); /* internal:branchf-null? */
  twobit_save( 6 );
  twobit_store( 0, 0 );
  twobit_store( 1, 6 );
  twobit_store( 4, 1 );
  twobit_store( 31, 4 );
  twobit_reg( 3 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 3 );
  twobit_store( 3, 2 );
  twobit_movereg( 3, 1 );
  twobit_global( 1 ); /* list? */
  twobit_setrtn( 1048, compiled_block_1_1048 );
  twobit_invoke( 1 );
  twobit_label( 1048, compiled_block_1_1048 );
  twobit_load( 0, 0 );
  twobit_branchf( 1050, compiled_block_1_1050 );
  twobit_stack( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_const( 2 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 8 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1051, compiled_block_1_1051 );
  twobit_invoke( 5 );
  twobit_label( 1051, compiled_block_1_1051 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 5 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 3 );
  twobit_load( 2, 1 );
  twobit_stack( 2 );
  twobit_op2_58( 2 ); /* cons */
  twobit_setreg( 2 );
  twobit_store( 2, 1 );
  twobit_const( 6 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 8 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1052, compiled_block_1_1052 );
  twobit_invoke( 5 );
  twobit_label( 1052, compiled_block_1_1052 );
  twobit_load( 0, 0 );
  twobit_load( 3, 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_load( 3, 3 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 4 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 5 );
  twobit_op2_58( 4 ); /* cons */
  twobit_pop( 6 );
  twobit_return();
  twobit_label( 1050, compiled_block_1_1050 );
  twobit_load( 1, 6 );
  twobit_pop( 6 );
  twobit_branch( 1002, compiled_block_1_1002 );
  twobit_label( 1047, compiled_block_1_1047 );
  twobit_branch( 1002, compiled_block_1_1002 );
  twobit_label( 1045, compiled_block_1_1045 );
  twobit_branch( 1002, compiled_block_1_1002 );
  twobit_label( 1043, compiled_block_1_1043 );
  twobit_branch( 1002, compiled_block_1_1002 );
  twobit_label( 1041, compiled_block_1_1041 );
  twobit_branch( 1002, compiled_block_1_1002 );
  twobit_label( 1039, compiled_block_1_1039 );
  twobit_branch( 1002, compiled_block_1_1002 );
  twobit_label( 1004, compiled_block_1_1004 );
  twobit_reg( 1 );
  twobit_op1_branchf_611( 1060, compiled_block_1_1060 ); /* internal:branchf-pair? */
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1062, compiled_block_1_1062 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_reg( 3 );
  twobit_op1_branchf_611( 1064, compiled_block_1_1064 ); /* internal:branchf-pair? */
  twobit_reg( 3 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_reg( 2 );
  twobit_op1_branchf_611( 1066, compiled_block_1_1066 ); /* internal:branchf-pair? */
  twobit_reg( 2 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 31 );
  twobit_reg( 2 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 2 );
  twobit_reg( 2 );
  twobit_op1_branchf_611( 1068, compiled_block_1_1068 ); /* internal:branchf-pair? */
  twobit_save( 8 );
  twobit_store( 0, 0 );
  twobit_store( 1, 8 );
  twobit_store( 4, 1 );
  twobit_store( 31, 4 );
  twobit_reg( 2 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 30 );
  twobit_store( 30, 3 );
  twobit_reg( 2 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 2 );
  twobit_store( 2, 2 );
  twobit_reg( 3 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 3 );
  twobit_store( 3, 5 );
  twobit_movereg( 3, 1 );
  twobit_global( 1 ); /* list? */
  twobit_setrtn( 1069, compiled_block_1_1069 );
  twobit_invoke( 1 );
  twobit_label( 1069, compiled_block_1_1069 );
  twobit_load( 0, 0 );
  twobit_branchf( 1071, compiled_block_1_1071 );
  twobit_stack( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_const( 9 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 10 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1072, compiled_block_1_1072 );
  twobit_invoke( 5 );
  twobit_label( 1072, compiled_block_1_1072 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 7 );
  twobit_const( 11 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 10 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1073, compiled_block_1_1073 );
  twobit_invoke( 5 );
  twobit_label( 1073, compiled_block_1_1073 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 6 );
  twobit_load( 3, 2 );
  twobit_stack( 3 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_stack( 4 );
  twobit_op2_58( 3 ); /* cons */
  twobit_load( 2, 5 );
  twobit_op2_58( 2 ); /* cons */
  twobit_load( 2, 1 );
  twobit_op2_58( 2 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 4 );
  twobit_const( 6 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 10 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1074, compiled_block_1_1074 );
  twobit_invoke( 5 );
  twobit_label( 1074, compiled_block_1_1074 );
  twobit_load( 0, 0 );
  twobit_load( 3, 4 );
  twobit_op2_58( 3 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 6 );
  twobit_op2_58( 4 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 12 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 7 );
  twobit_op2_58( 4 ); /* cons */
  twobit_pop( 8 );
  twobit_return();
  twobit_label( 1071, compiled_block_1_1071 );
  twobit_load( 1, 8 );
  twobit_pop( 8 );
  twobit_branch( 1003, compiled_block_1_1003 );
  twobit_label( 1068, compiled_block_1_1068 );
  twobit_branch( 1003, compiled_block_1_1003 );
  twobit_label( 1066, compiled_block_1_1066 );
  twobit_branch( 1003, compiled_block_1_1003 );
  twobit_label( 1064, compiled_block_1_1064 );
  twobit_branch( 1003, compiled_block_1_1003 );
  twobit_label( 1062, compiled_block_1_1062 );
  twobit_branch( 1003, compiled_block_1_1003 );
  twobit_label( 1060, compiled_block_1_1060 );
  twobit_branch( 1003, compiled_block_1_1003 );
  twobit_label( 1005, compiled_block_1_1005 );
  twobit_reg( 1 );
  twobit_op1_branchf_611( 1082, compiled_block_1_1082 ); /* internal:branchf-pair? */
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1084, compiled_block_1_1084 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_reg( 3 );
  twobit_op1_branchf_611( 1086, compiled_block_1_1086 ); /* internal:branchf-pair? */
  twobit_reg( 3 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_reg( 2 );
  twobit_op1_branchf_611( 1088, compiled_block_1_1088 ); /* internal:branchf-pair? */
  twobit_reg( 2 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 31 );
  twobit_reg( 2 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 2 );
  twobit_reg( 2 );
  twobit_op1_branchf_611( 1090, compiled_block_1_1090 ); /* internal:branchf-pair? */
  twobit_reg( 2 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 30 );
  twobit_reg( 2 );
  twobit_op1_405(); /* cdr:pair */
  twobit_op1_branchf_610( 1092, compiled_block_1_1092 ); /* internal:branchf-null? */
  twobit_save( 8 );
  twobit_store( 0, 0 );
  twobit_store( 1, 8 );
  twobit_store( 4, 1 );
  twobit_store( 30, 2 );
  twobit_store( 31, 3 );
  twobit_reg( 3 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 3 );
  twobit_store( 3, 4 );
  twobit_movereg( 3, 1 );
  twobit_global( 1 ); /* list? */
  twobit_setrtn( 1093, compiled_block_1_1093 );
  twobit_invoke( 1 );
  twobit_label( 1093, compiled_block_1_1093 );
  twobit_load( 0, 0 );
  twobit_branchf( 1095, compiled_block_1_1095 );
  twobit_stack( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_const( 13 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 14 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1096, compiled_block_1_1096 );
  twobit_invoke( 5 );
  twobit_label( 1096, compiled_block_1_1096 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 7 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_stack( 2 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_stack( 3 );
  twobit_op2_58( 3 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 2 ); /* () */
  twobit_op2_58( 2 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 6 );
  twobit_const( 2 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 14 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1097, compiled_block_1_1097 );
  twobit_invoke( 5 );
  twobit_label( 1097, compiled_block_1_1097 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 5 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 2 );
  twobit_load( 2, 1 );
  twobit_stack( 4 );
  twobit_op2_58( 2 ); /* cons */
  twobit_setreg( 2 );
  twobit_store( 2, 1 );
  twobit_const( 6 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 14 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1098, compiled_block_1_1098 );
  twobit_invoke( 5 );
  twobit_label( 1098, compiled_block_1_1098 );
  twobit_load( 0, 0 );
  twobit_load( 3, 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_load( 3, 2 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 3 );
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
  twobit_pop( 8 );
  twobit_return();
  twobit_label( 1095, compiled_block_1_1095 );
  twobit_load( 1, 8 );
  twobit_pop( 8 );
  twobit_branch( 1004, compiled_block_1_1004 );
  twobit_label( 1092, compiled_block_1_1092 );
  twobit_branch( 1004, compiled_block_1_1004 );
  twobit_label( 1090, compiled_block_1_1090 );
  twobit_branch( 1004, compiled_block_1_1004 );
  twobit_label( 1088, compiled_block_1_1088 );
  twobit_branch( 1004, compiled_block_1_1004 );
  twobit_label( 1086, compiled_block_1_1086 );
  twobit_branch( 1004, compiled_block_1_1004 );
  twobit_label( 1084, compiled_block_1_1084 );
  twobit_branch( 1004, compiled_block_1_1004 );
  twobit_label( 1082, compiled_block_1_1082 );
  twobit_branch( 1004, compiled_block_1_1004 );
  twobit_label( 1006, compiled_block_1_1006 );
  twobit_reg( 1 );
  twobit_op1_branchf_611( 1107, compiled_block_1_1107 ); /* internal:branchf-pair? */
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1109, compiled_block_1_1109 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_op1_branchf_610( 1111, compiled_block_1_1111 ); /* internal:branchf-null? */
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_const( 15 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 16 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1112, compiled_block_1_1112 );
  twobit_invoke( 5 );
  twobit_label( 1112, compiled_block_1_1112 );
  twobit_load( 0, 0 );
  twobit_load( 3, 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_pop( 1 );
  twobit_return();
  twobit_label( 1111, compiled_block_1_1111 );
  twobit_branch( 1005, compiled_block_1_1005 );
  twobit_label( 1109, compiled_block_1_1109 );
  twobit_branch( 1005, compiled_block_1_1005 );
  twobit_label( 1107, compiled_block_1_1107 );
  twobit_branch( 1005, compiled_block_1_1005 );
  twobit_label( 1007, compiled_block_1_1007 );
  twobit_reg( 1 );
  twobit_op1_branchf_611( 1117, compiled_block_1_1117 ); /* internal:branchf-pair? */
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1119, compiled_block_1_1119 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_reg( 3 );
  twobit_op1_branchf_611( 1121, compiled_block_1_1121 ); /* internal:branchf-pair? */
  twobit_reg( 3 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_reg( 3 );
  twobit_op1_405(); /* cdr:pair */
  twobit_op1_branchf_610( 1123, compiled_block_1_1123 ); /* internal:branchf-null? */
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_op1_branchf_610( 1125, compiled_block_1_1125 ); /* internal:branchf-null? */
  twobit_reg( 2 );
  twobit_return();
  twobit_label( 1125, compiled_block_1_1125 );
  twobit_branch( 1006, compiled_block_1_1006 );
  twobit_label( 1123, compiled_block_1_1123 );
  twobit_branch( 1006, compiled_block_1_1006 );
  twobit_label( 1121, compiled_block_1_1121 );
  twobit_branch( 1006, compiled_block_1_1006 );
  twobit_label( 1119, compiled_block_1_1119 );
  twobit_branch( 1006, compiled_block_1_1006 );
  twobit_label( 1117, compiled_block_1_1117 );
  twobit_branch( 1006, compiled_block_1_1006 );
  twobit_label( 1008, compiled_block_1_1008 );
  twobit_reg( 1 );
  twobit_op1_branchf_611( 1132, compiled_block_1_1132 ); /* internal:branchf-pair? */
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1134, compiled_block_1_1134 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_reg( 3 );
  twobit_op1_branchf_611( 1136, compiled_block_1_1136 ); /* internal:branchf-pair? */
  twobit_reg( 3 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_reg( 2 );
  twobit_op1_branchf_611( 1138, compiled_block_1_1138 ); /* internal:branchf-pair? */
  twobit_reg( 2 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 31 );
  twobit_reg( 2 );
  twobit_op1_405(); /* cdr:pair */
  twobit_op1_branchf_610( 1140, compiled_block_1_1140 ); /* internal:branchf-null? */
  twobit_reg( 3 );
  twobit_op1_405(); /* cdr:pair */
  twobit_op1_branchf_610( 1142, compiled_block_1_1142 ); /* internal:branchf-null? */
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_op1_branchf_610( 1144, compiled_block_1_1144 ); /* internal:branchf-null? */
  twobit_reg( 31 );
  twobit_return();
  twobit_label( 1144, compiled_block_1_1144 );
  twobit_branch( 1007, compiled_block_1_1007 );
  twobit_label( 1142, compiled_block_1_1142 );
  twobit_branch( 1007, compiled_block_1_1007 );
  twobit_label( 1140, compiled_block_1_1140 );
  twobit_branch( 1007, compiled_block_1_1007 );
  twobit_label( 1138, compiled_block_1_1138 );
  twobit_branch( 1007, compiled_block_1_1007 );
  twobit_label( 1136, compiled_block_1_1136 );
  twobit_branch( 1007, compiled_block_1_1007 );
  twobit_label( 1134, compiled_block_1_1134 );
  twobit_branch( 1007, compiled_block_1_1007 );
  twobit_label( 1132, compiled_block_1_1132 );
  twobit_branch( 1007, compiled_block_1_1007 );
  twobit_label( 1009, compiled_block_1_1009 );
  twobit_reg( 1 );
  twobit_op1_branchf_611( 1153, compiled_block_1_1153 ); /* internal:branchf-pair? */
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1155, compiled_block_1_1155 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_reg( 3 );
  twobit_op1_branchf_611( 1157, compiled_block_1_1157 ); /* internal:branchf-pair? */
  twobit_reg( 3 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_reg( 2 );
  twobit_op1_branchf_611( 1159, compiled_block_1_1159 ); /* internal:branchf-pair? */
  twobit_reg( 2 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 2 );
  twobit_reg( 2 );
  twobit_op1_branchf_611( 1161, compiled_block_1_1161 ); /* internal:branchf-pair? */
  twobit_reg( 2 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 31 );
  twobit_reg( 2 );
  twobit_op1_405(); /* cdr:pair */
  twobit_op1_branchf_610( 1163, compiled_block_1_1163 ); /* internal:branchf-null? */
  twobit_reg( 3 );
  twobit_op1_405(); /* cdr:pair */
  twobit_op1_branchf_610( 1165, compiled_block_1_1165 ); /* internal:branchf-null? */
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_op1_branchf_610( 1167, compiled_block_1_1167 ); /* internal:branchf-null? */
  twobit_reg( 31 );
  twobit_return();
  twobit_label( 1167, compiled_block_1_1167 );
  twobit_branch( 1008, compiled_block_1_1008 );
  twobit_label( 1165, compiled_block_1_1165 );
  twobit_branch( 1008, compiled_block_1_1008 );
  twobit_label( 1163, compiled_block_1_1163 );
  twobit_branch( 1008, compiled_block_1_1008 );
  twobit_label( 1161, compiled_block_1_1161 );
  twobit_branch( 1008, compiled_block_1_1008 );
  twobit_label( 1159, compiled_block_1_1159 );
  twobit_branch( 1008, compiled_block_1_1008 );
  twobit_label( 1157, compiled_block_1_1157 );
  twobit_branch( 1008, compiled_block_1_1008 );
  twobit_label( 1155, compiled_block_1_1155 );
  twobit_branch( 1008, compiled_block_1_1008 );
  twobit_label( 1153, compiled_block_1_1153 );
  twobit_branch( 1008, compiled_block_1_1008 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_3( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_global( 1 ); /* values */
  twobit_invoke( 0 );
  twobit_epilogue();
}


RTYPE twobit_thunk_54607b9151df7be41aaabee0ef57bad0_0(CONT_PARAMS) {
  RETURN_RTYPE(compiled_start_1_0(CONT_ACTUALS));
}
static RTYPE compiled_block_2_1004( CONT_PARAMS );
static RTYPE compiled_block_2_1003( CONT_PARAMS );
static RTYPE compiled_start_2_0( CONT_PARAMS );
static RTYPE compiled_start_2_3( CONT_PARAMS );
static RTYPE compiled_start_2_2( CONT_PARAMS );
static RTYPE compiled_start_2_1( CONT_PARAMS );

static RTYPE compiled_start_2_0( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_save( 0 );
  twobit_store( 0, 0 );
  twobit_lambda( compiled_start_2_1, 2, 0 );
  twobit_setreg( 2 );
  twobit_lambda( compiled_start_2_2, 4, 0 );
  twobit_setreg( 4 );
  twobit_lambda( compiled_start_2_3, 6, 0 );
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
  twobit_setrtn( 1003, compiled_block_2_1003 );
  twobit_invoke( 8 );
  twobit_label( 1003, compiled_block_2_1003 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_global( 13 ); /* ex:register-library! */
  twobit_setrtn( 1004, compiled_block_2_1004 );
  twobit_invoke( 1 );
  twobit_label( 1004, compiled_block_2_1004 );
  twobit_load( 0, 0 );
  twobit_global( 14 ); /* values */
  twobit_pop( 0 );
  twobit_invoke( 0 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_1( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_2_2( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_global( 1 ); /* values */
  twobit_invoke( 0 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_3( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_global( 1 ); /* values */
  twobit_invoke( 0 );
  twobit_epilogue();
}


RTYPE twobit_thunk_54607b9151df7be41aaabee0ef57bad0_1(CONT_PARAMS) {
  RETURN_RTYPE(compiled_start_2_0(CONT_ACTUALS));
}
codeptr_t CDECL twobit_load_table[] = { 
  twobit_thunk_54607b9151df7be41aaabee0ef57bad0_0,
  twobit_thunk_54607b9151df7be41aaabee0ef57bad0_1,
  0  /* The table may be empty; some compilers complain */
};
