/* Generated from /home/henchman/larcenytest/larceny-petit-Nightly-2017-08-06/larceny_src/lib/R6RS/larceny/parse-options.slfasl */
#include "petit-instr.h"

static RTYPE compiled_block_1_1086( CONT_PARAMS );
static RTYPE compiled_block_1_1085( CONT_PARAMS );
static RTYPE compiled_start_1_0( CONT_PARAMS );
static RTYPE compiled_block_1_1012( CONT_PARAMS );
static RTYPE compiled_block_1_1026( CONT_PARAMS );
static RTYPE compiled_block_1_1049( CONT_PARAMS );
static RTYPE compiled_block_1_1027( CONT_PARAMS );
static RTYPE compiled_block_1_1031( CONT_PARAMS );
static RTYPE compiled_block_1_1067( CONT_PARAMS );
static RTYPE compiled_block_1_1004( CONT_PARAMS );
static RTYPE compiled_block_1_1062( CONT_PARAMS );
static RTYPE compiled_block_1_1064( CONT_PARAMS );
static RTYPE compiled_block_1_1063( CONT_PARAMS );
static RTYPE compiled_block_1_1060( CONT_PARAMS );
static RTYPE compiled_block_1_1058( CONT_PARAMS );
static RTYPE compiled_block_1_1055( CONT_PARAMS );
static RTYPE compiled_block_1_1003( CONT_PARAMS );
static RTYPE compiled_block_1_1045( CONT_PARAMS );
static RTYPE compiled_block_1_1051( CONT_PARAMS );
static RTYPE compiled_block_1_1048( CONT_PARAMS );
static RTYPE compiled_block_1_1046( CONT_PARAMS );
static RTYPE compiled_block_1_1040( CONT_PARAMS );
static RTYPE compiled_block_1_1041( CONT_PARAMS );
static RTYPE compiled_block_1_1043( CONT_PARAMS );
static RTYPE compiled_block_1_1025( CONT_PARAMS );
static RTYPE compiled_block_1_1030( CONT_PARAMS );
static RTYPE compiled_block_1_1038( CONT_PARAMS );
static RTYPE compiled_block_1_1036( CONT_PARAMS );
static RTYPE compiled_block_1_1035( CONT_PARAMS );
static RTYPE compiled_block_1_1034( CONT_PARAMS );
static RTYPE compiled_block_1_1033( CONT_PARAMS );
static RTYPE compiled_block_1_1028( CONT_PARAMS );
static RTYPE compiled_block_1_1020( CONT_PARAMS );
static RTYPE compiled_block_1_1021( CONT_PARAMS );
static RTYPE compiled_block_1_1023( CONT_PARAMS );
static RTYPE compiled_block_1_1016( CONT_PARAMS );
static RTYPE compiled_block_1_1019( CONT_PARAMS );
static RTYPE compiled_block_1_1017( CONT_PARAMS );
static RTYPE compiled_block_1_1014( CONT_PARAMS );
static RTYPE compiled_block_1_1011( CONT_PARAMS );
static RTYPE compiled_block_1_1002( CONT_PARAMS );
static RTYPE compiled_block_1_1007( CONT_PARAMS );
static RTYPE compiled_start_1_3( CONT_PARAMS );
static RTYPE compiled_block_1_1069( CONT_PARAMS );
static RTYPE compiled_block_1_1073( CONT_PARAMS );
static RTYPE compiled_block_1_1070( CONT_PARAMS );
static RTYPE compiled_start_1_6( CONT_PARAMS );
static RTYPE compiled_block_1_1081( CONT_PARAMS );
static RTYPE compiled_block_1_1077( CONT_PARAMS );
static RTYPE compiled_block_1_1079( CONT_PARAMS );
static RTYPE compiled_block_1_1078( CONT_PARAMS );
static RTYPE compiled_start_1_9( CONT_PARAMS );
static RTYPE compiled_start_1_8( CONT_PARAMS );
static RTYPE compiled_block_1_1071( CONT_PARAMS );
static RTYPE compiled_start_1_7( CONT_PARAMS );
static RTYPE compiled_start_1_5( CONT_PARAMS );
static RTYPE compiled_start_1_4( CONT_PARAMS );
static RTYPE compiled_start_1_2( CONT_PARAMS );
static RTYPE compiled_start_1_1( CONT_PARAMS );

static RTYPE compiled_start_1_0( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_save( 0 );
  twobit_store( 0, 0 );
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 2 ); /*  match1~1pxGHH~8887 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 3 ); /*  matcher~1pxGHH~8886 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 4 ); /*  larceny:parse-options~1pxGHH~8885 */
  twobit_lambda( compiled_start_1_1, 6, 0 );
  twobit_setreg( 2 );
  twobit_lambda( compiled_start_1_2, 8, 0 );
  twobit_setreg( 4 );
  twobit_lambda( compiled_start_1_3, 10, 0 );
  twobit_setreg( 3 );
  twobit_movereg( 3, 7 );
  twobit_movereg( 4, 6 );
  twobit_const( 11 );
  twobit_setreg( 1 );
  twobit_const( 12 );
  twobit_setreg( 3 );
  twobit_const( 13 );
  twobit_setreg( 4 );
  twobit_const( 14 );
  twobit_setreg( 5 );
  twobit_const( 15 );
  twobit_setreg( 8 );
  twobit_global( 16 ); /* ex:make-library */
  twobit_setrtn( 1085, compiled_block_1_1085 );
  twobit_invoke( 8 );
  twobit_label( 1085, compiled_block_1_1085 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_global( 17 ); /* ex:register-library! */
  twobit_setrtn( 1086, compiled_block_1_1086 );
  twobit_invoke( 1 );
  twobit_label( 1086, compiled_block_1_1086 );
  twobit_load( 0, 0 );
  twobit_global( 18 ); /* values */
  twobit_pop( 0 );
  twobit_invoke( 0 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_1( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_1_2( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_global( 1 ); /* values */
  twobit_invoke( 0 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_3( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 2 ); /*  match1~1pxGHH~8887 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 3 ); /*  matcher~1pxGHH~8886 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 4 ); /*  larceny:parse-options~1pxGHH~8885 */
  twobit_lambda( compiled_start_1_4, 6, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_op1_4(); /* undefined */
  twobit_op1_4(); /* undefined */
  twobit_op1_4(); /* undefined */
  twobit_global( 7 ); /* values */
  twobit_setrtn( 1007, compiled_block_1_1007 );
  twobit_invoke( 0 );
  twobit_label( 1007, compiled_block_1_1007 );
  twobit_load( 0, 0 );
  twobit_load( 1, 1 );
  twobit_lambda( compiled_start_1_5, 9, 0 );
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 2 );
  twobit_global( 10 ); /* apply */
  twobit_pop( 1 );
  twobit_invoke( 2 );
  twobit_label( 1002, compiled_block_1_1002 );
  twobit_reg( 1 );
  twobit_op1_branchf_610( 1011, compiled_block_1_1011 ); /* internal:branchf-null? */
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_return();
  twobit_label( 1011, compiled_block_1_1011 );
  twobit_reg_op1_check_652(reg(1),1012,compiled_block_1_1012); /* internal:check-pair? with (1 0 0) */
  twobit_reg( 1 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 4 );
  twobit_const( 11 );
  twobit_op2_branchf_624( 2, 1014, compiled_block_1_1014 ); /* internal:branchf-eq? */
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op2_58( 3 ); /* cons */
  twobit_return();
  twobit_label( 1014, compiled_block_1_1014 );
  twobit_reg( 2 );
  twobit_op1_800(); /* ustring? */
  twobit_branchf( 1016, compiled_block_1_1016 );
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_store( 4, 1 );
  twobit_movereg( 4, 1 );
  twobit_global( 12 ); /* string=? */
  twobit_setrtn( 1017, compiled_block_1_1017 );
  twobit_invoke( 2 );
  twobit_label( 1017, compiled_block_1_1017 );
  twobit_load( 0, 0 );
  twobit_branchf( 1019, compiled_block_1_1019 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 4 );
  twobit_stack( 1 );
  twobit_op2_58( 4 ); /* cons */
  twobit_pop( 1 );
  twobit_return();
  twobit_label( 1019, compiled_block_1_1019 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_pop( 1 );
  twobit_return();
  twobit_label( 1016, compiled_block_1_1016 );
  twobit_reg( 2 );
  twobit_op1_11(); /* pair? */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 1021, compiled_block_1_1021 );
  twobit_reg( 2 );
  twobit_op1_405(); /* cdr:pair */
  twobit_op1_branchf_611( 1023, compiled_block_1_1023 ); /* internal:branchf-pair? */
  twobit_reg( 2 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_const( 13 );
  twobit_op2_56( 3 ); /* eq? */
  twobit_skip( 1020, compiled_block_1_1020 );
  twobit_label( 1023, compiled_block_1_1023 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 1020, compiled_block_1_1020 );
  twobit_label( 1021, compiled_block_1_1021 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1020, compiled_block_1_1020 );
  twobit_branchf( 1025, compiled_block_1_1025 );
  twobit_save( 3 );
  twobit_store( 0, 0 );
  twobit_store( 1, 2 );
  twobit_store( 2, 1 );
  twobit_reg( 4 );
  twobit_check( 2, 0, 0, 1026, compiled_block_1_1026 );
  twobit_reg( 2 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg_op1_check_652(reg(4),1027,compiled_block_1_1027); /* internal:check-pair? with (4 0 0) */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_setrtn( 1028, compiled_block_1_1028 );
  twobit_branch( 1002, compiled_block_1_1002 );
  twobit_label( 1028, compiled_block_1_1028 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_reg( 4 );
  twobit_branchf( 1030, compiled_block_1_1030 );
  twobit_stack( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 3 );
  twobit_reg_op1_check_652(reg(3),1031,compiled_block_1_1031); /* internal:check-pair? with (3 0 0) */
  twobit_reg( 3 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 3 );
  twobit_reg( 3 );
  twobit_op1_branchf_610( 1033, compiled_block_1_1033 ); /* internal:branchf-null? */
  twobit_reg( 4 );
  twobit_pop( 3 );
  twobit_return();
  twobit_label( 1033, compiled_block_1_1033 );
  twobit_const( 13 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 1 );
  twobit_movereg( 4, 1 );
  twobit_global( 14 ); /* length */
  twobit_setrtn( 1034, compiled_block_1_1034 );
  twobit_invoke( 1 );
  twobit_label( 1034, compiled_block_1_1034 );
  twobit_load( 0, 0 );
  twobit_setreg( 2 );
  twobit_load( 1, 2 );
  twobit_global( 15 ); /* list-tail */
  twobit_setrtn( 1035, compiled_block_1_1035 );
  twobit_invoke( 2 );
  twobit_label( 1035, compiled_block_1_1035 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_load( 2, 1 );
  twobit_setrtn( 1036, compiled_block_1_1036 );
  twobit_branch( 1002, compiled_block_1_1002 );
  twobit_label( 1036, compiled_block_1_1036 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 1038, compiled_block_1_1038 );
  twobit_load( 1, 3 );
  twobit_movereg( 4, 2 );
  twobit_global( 16 ); /* append */
  twobit_pop( 3 );
  twobit_invoke( 2 );
  twobit_label( 1038, compiled_block_1_1038 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_pop( 3 );
  twobit_return();
  twobit_label( 1030, compiled_block_1_1030 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_pop( 3 );
  twobit_return();
  twobit_label( 1025, compiled_block_1_1025 );
  twobit_reg( 4 );
  twobit_branchf( 1041, compiled_block_1_1041 );
  twobit_reg( 2 );
  twobit_op1_405(); /* cdr:pair */
  twobit_op1_branchf_611( 1043, compiled_block_1_1043 ); /* internal:branchf-pair? */
  twobit_reg( 2 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_const( 17 );
  twobit_op2_56( 3 ); /* eq? */
  twobit_skip( 1040, compiled_block_1_1040 );
  twobit_label( 1043, compiled_block_1_1043 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 1040, compiled_block_1_1040 );
  twobit_label( 1041, compiled_block_1_1041 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1040, compiled_block_1_1040 );
  twobit_branchf( 1045, compiled_block_1_1045 );
  twobit_save( 2 );
  twobit_store( 0, 0 );
  twobit_store( 1, 2 );
  twobit_store( 2, 1 );
  twobit_reg( 4 );
  twobit_check( 2, 0, 0, 1026, compiled_block_1_1026 );
  twobit_reg( 2 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg_op1_check_652(reg(4),1027,compiled_block_1_1027); /* internal:check-pair? with (4 0 0) */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_setrtn( 1046, compiled_block_1_1046 );
  twobit_branch( 1002, compiled_block_1_1002 );
  twobit_label( 1046, compiled_block_1_1046 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 1048, compiled_block_1_1048 );
  twobit_reg( 4 );
  twobit_pop( 2 );
  twobit_return();
  twobit_label( 1048, compiled_block_1_1048 );
  twobit_stack( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg_op1_check_652(reg(4),1049,compiled_block_1_1049); /* internal:check-pair? with (4 0 0) */
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_610( 1051, compiled_block_1_1051 ); /* internal:branchf-null? */
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_pop( 2 );
  twobit_return();
  twobit_label( 1051, compiled_block_1_1051 );
  twobit_const( 17 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 2 );
  twobit_load( 1, 2 );
  twobit_pop( 2 );
  twobit_branch( 1002, compiled_block_1_1002 );
  twobit_label( 1045, compiled_block_1_1045 );
  twobit_const( 18 );
  twobit_setreg( 1 );
  twobit_global( 19 ); /* error */
  twobit_invoke( 2 );
  twobit_label( 1003, compiled_block_1_1003 );
  twobit_reg( 2 );
  twobit_op1_branchf_610( 1055, compiled_block_1_1055 ); /* internal:branchf-null? */
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_setreg( 3 );
  twobit_global( 7 ); /* values */
  twobit_invoke( 3 );
  twobit_label( 1055, compiled_block_1_1055 );
  twobit_reg_op1_check_652(reg(2),1026,compiled_block_1_1026); /* internal:check-pair? with (2 0 0) */
  twobit_reg( 2 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 2 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_reg( 1 );
  twobit_op1_branchf_610( 1058, compiled_block_1_1058 ); /* internal:branchf-null? */
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_setreg( 3 );
  twobit_global( 7 ); /* values */
  twobit_invoke( 3 );
  twobit_label( 1058, compiled_block_1_1058 );
  twobit_save( 4 );
  twobit_store( 0, 0 );
  twobit_store( 1, 1 );
  twobit_store( 3, 3 );
  twobit_store( 4, 4 );
  twobit_movereg( 3, 2 );
  twobit_setrtn( 1060, compiled_block_1_1060 );
  twobit_branch( 1002, compiled_block_1_1002 );
  twobit_label( 1060, compiled_block_1_1060 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_reg( 4 );
  twobit_branchf( 1062, compiled_block_1_1062 );
  twobit_movereg( 4, 1 );
  twobit_global( 14 ); /* length */
  twobit_setrtn( 1063, compiled_block_1_1063 );
  twobit_invoke( 1 );
  twobit_label( 1063, compiled_block_1_1063 );
  twobit_load( 0, 0 );
  twobit_setreg( 2 );
  twobit_load( 1, 1 );
  twobit_global( 15 ); /* list-tail */
  twobit_setrtn( 1064, compiled_block_1_1064 );
  twobit_invoke( 2 );
  twobit_label( 1064, compiled_block_1_1064 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_load( 2, 2 );
  twobit_load( 3, 3 );
  twobit_global( 7 ); /* values */
  twobit_pop( 4 );
  twobit_invoke( 3 );
  twobit_label( 1062, compiled_block_1_1062 );
  twobit_load( 2, 4 );
  twobit_load( 1, 1 );
  twobit_pop( 4 );
  twobit_branch( 1003, compiled_block_1_1003 );
  twobit_label( 1004, compiled_block_1_1004 );
  twobit_save( 3 );
  twobit_store( 0, 0 );
  twobit_store( 1, 3 );
  twobit_store( 2, 1 );
  twobit_global( 1 ); /* ex:undefined */
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_global( 20 ); /*  make-eq-hashtable~1pxGHH~7675 */
  twobit_setrtn( 1067, compiled_block_1_1067 );
  twobit_invoke( 0 );
  twobit_label( 1067, compiled_block_1_1067 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_load( 3, 1 );
  twobit_load( 2, 2 );
  twobit_movereg( 4, 1 );
  twobit_lambda( compiled_start_1_6, 22, 3 );
  twobit_setreg( 4 );
  twobit_reg( 2 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_reg( 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_load( 1, 3 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_reg( 4 );
  twobit_pop( 3 );
  twobit_invoke( 2 );
  twobit_label( 1031, compiled_block_1_1031 );
  twobit_trap( 3, 0, 0, 1 );
  twobit_label( 1027, compiled_block_1_1027 );
  twobit_trap( 4, 0, 0, 0 );
  twobit_label( 1049, compiled_block_1_1049 );
  twobit_trap( 4, 0, 0, 1 );
  twobit_label( 1026, compiled_block_1_1026 );
  twobit_trap( 2, 0, 0, 1 );
  twobit_label( 1012, compiled_block_1_1012 );
  twobit_trap( 1, 0, 0, 0 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_4( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_reg( 1 );
  twobit_setglbl( 1 ); /*  larceny:parse-options~1pxGHH~8885 */
  twobit_global( 2 ); /* values */
  twobit_invoke( 0 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_5( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_jump( 1, 1004, compiled_block_1_1004 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_6( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_reg( 1 );
  twobit_op1_branchf_610( 1069, compiled_block_1_1069 ); /* internal:branchf-null? */
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_movereg( 2, 1 );
  twobit_global( 1 ); /* reverse */
  twobit_setrtn( 1070, compiled_block_1_1070 );
  twobit_invoke( 1 );
  twobit_label( 1070, compiled_block_1_1070 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_lambda( compiled_start_1_7, 3, 0 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 2 );
  twobit_global( 4 ); /*  map~1pxGHH~1463 */
  twobit_setrtn( 1073, compiled_block_1_1073 );
  twobit_invoke( 2 );
  twobit_label( 1073, compiled_block_1_1073 );
  twobit_load( 0, 0 );
  twobit_setreg( 3 );
  twobit_load( 2, 1 );
  twobit_global( 5 ); /* values */
  twobit_setreg( 1 );
  twobit_global( 6 ); /* apply */
  twobit_pop( 1 );
  twobit_invoke( 3 );
  twobit_label( 1069, compiled_block_1_1069 );
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_lambda( compiled_start_1_8, 8, 1 );
  twobit_setreg( 1 );
  twobit_store( 1, 1 );
  twobit_movereg( 2, 1 );
  twobit_lambda( compiled_start_1_9, 10, 1 );
  twobit_setreg( 2 );
  twobit_load( 1, 1 );
  twobit_global( 11 ); /* call-with-values */
  twobit_pop( 1 );
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_7( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_save( 0 );
  twobit_store( 0, 0 );
  twobit_movereg( 1, 2 );
  twobit_lexical( 1, 1 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_global( 1 ); /*  hashtable-ref~1pxGHH~7722 */
  twobit_setrtn( 1071, compiled_block_1_1071 );
  twobit_invoke( 3 );
  twobit_label( 1071, compiled_block_1_1071 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_global( 2 ); /* reverse */
  twobit_pop( 0 );
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_8( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_lexical( 1, 3 );
  twobit_setreg( 2 );
  twobit_jump( 2, 1003, compiled_block_1_1003 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_9( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 3 );
  twobit_reg( 3 );
  twobit_branchf( 1077, compiled_block_1_1077 );
  twobit_save( 3 );
  twobit_store( 0, 0 );
  twobit_store( 1, 3 );
  twobit_store( 2, 1 );
  twobit_store( 3, 2 );
  twobit_movereg( 3, 2 );
  twobit_lexical( 1, 1 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_global( 1 ); /*  hashtable-ref~1pxGHH~7722 */
  twobit_setrtn( 1078, compiled_block_1_1078 );
  twobit_invoke( 3 );
  twobit_label( 1078, compiled_block_1_1078 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_stack( 1 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 3 );
  twobit_load( 2, 2 );
  twobit_lexical( 1, 1 );
  twobit_setreg( 1 );
  twobit_global( 2 ); /*  hashtable-set!~1pxGHH~7723 */
  twobit_setrtn( 1079, compiled_block_1_1079 );
  twobit_invoke( 3 );
  twobit_label( 1079, compiled_block_1_1079 );
  twobit_load( 0, 0 );
  twobit_lexical( 1, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_load( 1, 3 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 2 );
  twobit_reg( 4 );
  twobit_pop( 3 );
  twobit_invoke( 2 );
  twobit_label( 1077, compiled_block_1_1077 );
  twobit_reg_op1_check_652(reg(1),1081,compiled_block_1_1081); /* internal:check-pair? with (1 0 0) */
  twobit_reg( 1 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 4 );
  twobit_reg( 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 2 );
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 1 );
  twobit_lexical( 1, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_invoke( 2 );
  twobit_label( 1081, compiled_block_1_1081 );
  twobit_trap( 1, 0, 0, 0 );
  twobit_epilogue();
}


RTYPE twobit_thunk_0a3f29bb5a83d8c54a8e2851dacf8c6b_0(CONT_PARAMS) {
  RETURN_RTYPE(compiled_start_1_0(CONT_ACTUALS));
}
codeptr_t CDECL twobit_load_table[] = { 
  twobit_thunk_0a3f29bb5a83d8c54a8e2851dacf8c6b_0,
  0  /* The table may be empty; some compilers complain */
};
