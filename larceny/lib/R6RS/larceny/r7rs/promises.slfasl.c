/* Generated from /home/henchman/larcenytest/larceny-petit-Nightly-2017-08-06/larceny_src/lib/R6RS/larceny/r7rs/promises.slfasl */
#include "petit-instr.h"

static RTYPE compiled_block_1_1068( CONT_PARAMS );
static RTYPE compiled_block_1_1067( CONT_PARAMS );
static RTYPE compiled_start_1_0( CONT_PARAMS );
static RTYPE compiled_block_1_1045( CONT_PARAMS );
static RTYPE compiled_block_1_1044( CONT_PARAMS );
static RTYPE compiled_block_1_1043( CONT_PARAMS );
static RTYPE compiled_block_1_1042( CONT_PARAMS );
static RTYPE compiled_block_1_1041( CONT_PARAMS );
static RTYPE compiled_start_1_3( CONT_PARAMS );
static RTYPE compiled_block_1_1063( CONT_PARAMS );
static RTYPE compiled_block_1_1052( CONT_PARAMS );
static RTYPE compiled_block_1_1056( CONT_PARAMS );
static RTYPE compiled_block_1_1059( CONT_PARAMS );
static RTYPE compiled_block_1_1064( CONT_PARAMS );
static RTYPE compiled_block_1_1062( CONT_PARAMS );
static RTYPE compiled_block_1_1061( CONT_PARAMS );
static RTYPE compiled_block_1_1060( CONT_PARAMS );
static RTYPE compiled_temp_1_10( CONT_PARAMS );
static RTYPE compiled_block_1_1058( CONT_PARAMS );
static RTYPE compiled_block_1_1057( CONT_PARAMS );
static RTYPE compiled_block_1_1054( CONT_PARAMS );
static RTYPE compiled_block_1_1051( CONT_PARAMS );
static RTYPE compiled_start_1_9( CONT_PARAMS );
static RTYPE compiled_start_1_8( CONT_PARAMS );
static RTYPE compiled_start_1_7( CONT_PARAMS );
static RTYPE compiled_start_1_6( CONT_PARAMS );
static RTYPE compiled_start_1_5( CONT_PARAMS );
static RTYPE compiled_start_1_4( CONT_PARAMS );
static RTYPE compiled_block_1_1039( CONT_PARAMS );
static RTYPE compiled_block_1_1028( CONT_PARAMS );
static RTYPE compiled_block_1_1016( CONT_PARAMS );
static RTYPE compiled_start_1_2( CONT_PARAMS );
static RTYPE compiled_block_1_1030( CONT_PARAMS );
static RTYPE compiled_block_1_1032( CONT_PARAMS );
static RTYPE compiled_block_1_1034( CONT_PARAMS );
static RTYPE compiled_block_1_1035( CONT_PARAMS );
static RTYPE compiled_start_1_13( CONT_PARAMS );
static RTYPE compiled_block_1_1018( CONT_PARAMS );
static RTYPE compiled_block_1_1020( CONT_PARAMS );
static RTYPE compiled_block_1_1022( CONT_PARAMS );
static RTYPE compiled_block_1_1024( CONT_PARAMS );
static RTYPE compiled_block_1_1023( CONT_PARAMS );
static RTYPE compiled_start_1_12( CONT_PARAMS );
static RTYPE compiled_block_1_1003( CONT_PARAMS );
static RTYPE compiled_block_1_1005( CONT_PARAMS );
static RTYPE compiled_block_1_1007( CONT_PARAMS );
static RTYPE compiled_block_1_1012( CONT_PARAMS );
static RTYPE compiled_block_1_1011( CONT_PARAMS );
static RTYPE compiled_block_1_1010( CONT_PARAMS );
static RTYPE compiled_block_1_1009( CONT_PARAMS );
static RTYPE compiled_block_1_1008( CONT_PARAMS );
static RTYPE compiled_start_1_11( CONT_PARAMS );
static RTYPE compiled_start_1_1( CONT_PARAMS );

static RTYPE compiled_start_1_0( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_save( 0 );
  twobit_store( 0, 0 );
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 2 ); /*  force~1pxGHH~3751 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 3 ); /*  eager~1pxGHH~3735 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 4 ); /*  set-box!~1pxGHH~3719 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 5 ); /*  unbox~1pxGHH~3718 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 6 ); /*  box~1pxGHH~3717 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 7 ); /*  make-promise~1pxGHH~3716 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 8 ); /*  promise-contents!~1pxGHH~3715 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 9 ); /*  promise-contents~1pxGHH~3714 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 10 ); /*  promise?~1pxGHH~3713 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 11 ); /*  make-promise0~1pxGHH~3712 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 12 ); /*  :promise~1pxGHH~3711 */
  twobit_lambda( compiled_start_1_1, 14, 0 );
  twobit_setreg( 2 );
  twobit_lambda( compiled_start_1_2, 16, 0 );
  twobit_setreg( 4 );
  twobit_lambda( compiled_start_1_3, 18, 0 );
  twobit_setreg( 3 );
  twobit_movereg( 3, 7 );
  twobit_movereg( 4, 6 );
  twobit_const( 19 );
  twobit_setreg( 1 );
  twobit_const( 20 );
  twobit_setreg( 3 );
  twobit_const( 21 );
  twobit_setreg( 4 );
  twobit_const( 22 );
  twobit_setreg( 5 );
  twobit_const( 23 );
  twobit_setreg( 8 );
  twobit_global( 24 ); /* ex:make-library */
  twobit_setrtn( 1067, compiled_block_1_1067 );
  twobit_invoke( 8 );
  twobit_label( 1067, compiled_block_1_1067 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_global( 25 ); /* ex:register-library! */
  twobit_setrtn( 1068, compiled_block_1_1068 );
  twobit_invoke( 1 );
  twobit_label( 1068, compiled_block_1_1068 );
  twobit_load( 0, 0 );
  twobit_global( 26 ); /* values */
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
  twobit_lambda( compiled_start_1_11, 2, 0 );
  twobit_setreg( 2 );
  twobit_const( 3 );
  twobit_setreg( 1 );
  twobit_global( 4 ); /* ex:register-macro! */
  twobit_setrtn( 1016, compiled_block_1_1016 );
  twobit_invoke( 2 );
  twobit_label( 1016, compiled_block_1_1016 );
  twobit_load( 0, 0 );
  twobit_lambda( compiled_start_1_12, 6, 0 );
  twobit_setreg( 2 );
  twobit_const( 7 );
  twobit_setreg( 1 );
  twobit_global( 4 ); /* ex:register-macro! */
  twobit_setrtn( 1028, compiled_block_1_1028 );
  twobit_invoke( 2 );
  twobit_label( 1028, compiled_block_1_1028 );
  twobit_load( 0, 0 );
  twobit_lambda( compiled_start_1_13, 9, 0 );
  twobit_setreg( 2 );
  twobit_const( 10 );
  twobit_setreg( 1 );
  twobit_global( 4 ); /* ex:register-macro! */
  twobit_setrtn( 1039, compiled_block_1_1039 );
  twobit_invoke( 2 );
  twobit_label( 1039, compiled_block_1_1039 );
  twobit_load( 0, 0 );
  twobit_global( 11 ); /* values */
  twobit_pop( 0 );
  twobit_invoke( 0 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_11( CONT_PARAMS ) {
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
  twobit_op1_branchf_610( 1007, compiled_block_1_1007 ); /* internal:branchf-null? */
  twobit_save( 4 );
  twobit_store( 0, 0 );
  twobit_store( 3, 2 );
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
  twobit_setrtn( 1008, compiled_block_1_1008 );
  twobit_invoke( 5 );
  twobit_label( 1008, compiled_block_1_1008 );
  twobit_load( 0, 0 );
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
  twobit_setrtn( 1009, compiled_block_1_1009 );
  twobit_invoke( 5 );
  twobit_label( 1009, compiled_block_1_1009 );
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
  twobit_setrtn( 1010, compiled_block_1_1010 );
  twobit_invoke( 5 );
  twobit_label( 1010, compiled_block_1_1010 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
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
  twobit_setrtn( 1011, compiled_block_1_1011 );
  twobit_invoke( 5 );
  twobit_label( 1011, compiled_block_1_1011 );
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
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 2 );
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
  twobit_setrtn( 1012, compiled_block_1_1012 );
  twobit_invoke( 5 );
  twobit_label( 1012, compiled_block_1_1012 );
  twobit_load( 0, 0 );
  twobit_load( 3, 2 );
  twobit_op2_58( 3 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 1 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 4 );
  twobit_op2_58( 4 ); /* cons */
  twobit_pop( 4 );
  twobit_return();
  twobit_label( 1007, compiled_block_1_1007 );
  twobit_global( 9 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1005, compiled_block_1_1005 );
  twobit_global( 9 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1003, compiled_block_1_1003 );
  twobit_global( 9 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_12( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_reg( 1 );
  twobit_op1_branchf_611( 1018, compiled_block_1_1018 ); /* internal:branchf-pair? */
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1020, compiled_block_1_1020 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_op1_branchf_610( 1022, compiled_block_1_1022 ); /* internal:branchf-null? */
  twobit_save( 2 );
  twobit_store( 0, 0 );
  twobit_store( 3, 1 );
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
  twobit_store( 4, 2 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_stack( 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 1 );
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
  twobit_load( 3, 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_pop( 2 );
  twobit_return();
  twobit_label( 1022, compiled_block_1_1022 );
  twobit_global( 6 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1020, compiled_block_1_1020 );
  twobit_global( 6 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1018, compiled_block_1_1018 );
  twobit_global( 6 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_13( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_reg( 1 );
  twobit_op1_branchf_611( 1030, compiled_block_1_1030 ); /* internal:branchf-pair? */
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1032, compiled_block_1_1032 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_op1_branchf_610( 1034, compiled_block_1_1034 ); /* internal:branchf-null? */
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 4 );
  twobit_reg( 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
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
  twobit_setrtn( 1035, compiled_block_1_1035 );
  twobit_invoke( 5 );
  twobit_label( 1035, compiled_block_1_1035 );
  twobit_load( 0, 0 );
  twobit_load( 3, 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_pop( 1 );
  twobit_return();
  twobit_label( 1034, compiled_block_1_1034 );
  twobit_global( 5 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1032, compiled_block_1_1032 );
  twobit_global( 5 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1030, compiled_block_1_1030 );
  twobit_global( 5 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_3( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_save( 0 );
  twobit_store( 0, 0 );
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 2 ); /*  force~1pxGHH~3751 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 3 ); /*  eager~1pxGHH~3735 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 4 ); /*  set-box!~1pxGHH~3719 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 5 ); /*  unbox~1pxGHH~3718 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 6 ); /*  box~1pxGHH~3717 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 7 ); /*  make-promise~1pxGHH~3716 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 8 ); /*  promise-contents!~1pxGHH~3715 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 9 ); /*  promise-contents~1pxGHH~3714 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 10 ); /*  promise?~1pxGHH~3713 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 11 ); /*  make-promise0~1pxGHH~3712 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 12 ); /*  :promise~1pxGHH~3711 */
  twobit_const( 13 );
  twobit_setreg( 1 );
  twobit_const( 14 );
  twobit_setreg( 2 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_setreg( 3 );
  twobit_global( 15 ); /* make-rtd */
  twobit_setrtn( 1041, compiled_block_1_1041 );
  twobit_invoke( 3 );
  twobit_label( 1041, compiled_block_1_1041 );
  twobit_load( 0, 0 );
  twobit_setglbl( 12 ); /*  :promise~1pxGHH~3711 */
  twobit_global( 12 ); /*  :promise~1pxGHH~3711 */
  twobit_setreg( 1 );
  twobit_global( 16 ); /* rtd-constructor */
  twobit_setrtn( 1042, compiled_block_1_1042 );
  twobit_invoke( 1 );
  twobit_label( 1042, compiled_block_1_1042 );
  twobit_load( 0, 0 );
  twobit_setglbl( 11 ); /*  make-promise0~1pxGHH~3712 */
  twobit_global( 12 ); /*  :promise~1pxGHH~3711 */
  twobit_setreg( 1 );
  twobit_global( 17 ); /* rtd-predicate */
  twobit_setrtn( 1043, compiled_block_1_1043 );
  twobit_invoke( 1 );
  twobit_label( 1043, compiled_block_1_1043 );
  twobit_load( 0, 0 );
  twobit_setglbl( 10 ); /*  promise?~1pxGHH~3713 */
  twobit_global( 12 ); /*  :promise~1pxGHH~3711 */
  twobit_setreg( 1 );
  twobit_const( 18 );
  twobit_setreg( 2 );
  twobit_global( 19 ); /* rtd-accessor */
  twobit_setrtn( 1044, compiled_block_1_1044 );
  twobit_invoke( 2 );
  twobit_label( 1044, compiled_block_1_1044 );
  twobit_load( 0, 0 );
  twobit_setglbl( 9 ); /*  promise-contents~1pxGHH~3714 */
  twobit_global( 12 ); /*  :promise~1pxGHH~3711 */
  twobit_setreg( 1 );
  twobit_const( 18 );
  twobit_setreg( 2 );
  twobit_global( 20 ); /* rtd-mutator */
  twobit_setrtn( 1045, compiled_block_1_1045 );
  twobit_invoke( 2 );
  twobit_label( 1045, compiled_block_1_1045 );
  twobit_load( 0, 0 );
  twobit_setglbl( 8 ); /*  promise-contents!~1pxGHH~3715 */
  twobit_lambda( compiled_start_1_4, 22, 0 );
  twobit_setglbl( 7 ); /*  make-promise~1pxGHH~3716 */
  twobit_lambda( compiled_start_1_5, 24, 0 );
  twobit_setglbl( 6 ); /*  box~1pxGHH~3717 */
  twobit_lambda( compiled_start_1_6, 26, 0 );
  twobit_setglbl( 5 ); /*  unbox~1pxGHH~3718 */
  twobit_lambda( compiled_start_1_7, 28, 0 );
  twobit_setglbl( 4 ); /*  set-box!~1pxGHH~3719 */
  twobit_lambda( compiled_start_1_8, 30, 0 );
  twobit_setglbl( 3 ); /*  eager~1pxGHH~3735 */
  twobit_lambda( compiled_start_1_9, 32, 0 );
  twobit_setglbl( 2 ); /*  force~1pxGHH~3751 */
  twobit_global( 33 ); /* values */
  twobit_pop( 0 );
  twobit_invoke( 0 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_4( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_global( 1 ); /*  eager~1pxGHH~3735 */
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_5( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_global( 1 ); /*  make-promise0~1pxGHH~3712 */
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_6( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_global( 1 ); /*  promise-contents~1pxGHH~3714 */
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_7( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_global( 1 ); /*  promise-contents!~1pxGHH~3715 */
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_8( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_const( 1 );
  twobit_op2_58( 1 ); /* cons */
  twobit_setreg( 1 );
  twobit_global( 2 ); /*  box~1pxGHH~3717 */
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_9( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_save( 3 );
  twobit_store( 0, 0 );
  twobit_store( 1, 1 );
  twobit_global( 1 ); /*  unbox~1pxGHH~3718 */
  twobit_setrtn( 1051, compiled_block_1_1051 );
  twobit_invoke( 1 );
  twobit_label( 1051, compiled_block_1_1051 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_reg_op1_check_652(reg(4),1052,compiled_block_1_1052); /* internal:check-pair? with (4 0 0) */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_const( 2 );
  twobit_setreg( 2 );
  twobit_reg( 3 );
  twobit_op2_branchf_624( 2, 1054, compiled_block_1_1054 ); /* internal:branchf-eq? */
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_pop( 3 );
  twobit_return();
  twobit_label( 1054, compiled_block_1_1054 );
  twobit_const( 3 );
  twobit_setreg( 2 );
  twobit_reg( 3 );
  twobit_op2_branchf_624( 2, 1056, compiled_block_1_1056 ); /* internal:branchf-eq? */
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_setrtn( 1057, compiled_block_1_1057 );
  twobit_invoke( 0 );
  twobit_label( 1057, compiled_block_1_1057 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_load( 1, 1 );
  twobit_global( 1 ); /*  unbox~1pxGHH~3718 */
  twobit_setrtn( 1058, compiled_block_1_1058 );
  twobit_invoke( 1 );
  twobit_label( 1058, compiled_block_1_1058 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_reg_op1_check_652(reg(4),1052,compiled_block_1_1052); /* internal:check-pair? with (4 0 0) */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_const_setreg( 2, 2 );
  twobit_op2_57( 2, 10, compiled_temp_1_10 ); /* eqv? */
  twobit_branchf( 1060, compiled_block_1_1060 );
  twobit_op1_3(); /* unspecified */
  twobit_skip( 1059, compiled_block_1_1059 );
  twobit_label( 1060, compiled_block_1_1060 );
  twobit_load( 1, 2 );
  twobit_global( 1 ); /*  unbox~1pxGHH~3718 */
  twobit_setrtn( 1061, compiled_block_1_1061 );
  twobit_invoke( 1 );
  twobit_label( 1061, compiled_block_1_1061 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_reg_op1_check_652(reg(4),1052,compiled_block_1_1052); /* internal:check-pair? with (4 0 0) */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 4 );
  twobit_stack( 3 );
  twobit_op2_59( 4 ); /* set-car! */
  twobit_load( 1, 2 );
  twobit_global( 1 ); /*  unbox~1pxGHH~3718 */
  twobit_setrtn( 1062, compiled_block_1_1062 );
  twobit_invoke( 1 );
  twobit_label( 1062, compiled_block_1_1062 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_reg_op1_check_652(reg(4),1063,compiled_block_1_1063); /* internal:check-pair? with (4 0 0) */
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_stack( 3 );
  twobit_op2_60( 4 ); /* set-cdr! */
  twobit_load( 1, 2 );
  twobit_load( 2, 3 );
  twobit_global( 4 ); /*  set-box!~1pxGHH~3719 */
  twobit_setrtn( 1064, compiled_block_1_1064 );
  twobit_invoke( 2 );
  twobit_label( 1064, compiled_block_1_1064 );
  twobit_load( 0, 0 );
  twobit_label( 1059, compiled_block_1_1059 );
  twobit_load( 1, 1 );
  twobit_global( 5 ); /*  force~1pxGHH~3751 */
  twobit_pop( 3 );
  twobit_invoke( 1 );
  twobit_label( 1056, compiled_block_1_1056 );
  twobit_op1_3(); /* unspecified */
  twobit_pop( 3 );
  twobit_return();
  twobit_label( 1052, compiled_block_1_1052 );
  twobit_trap( 4, 0, 0, 0 );
  twobit_label( 1063, compiled_block_1_1063 );
  twobit_trap( 4, 0, 0, 1 );
  twobit_epilogue();
}


RTYPE twobit_thunk_458bbaae66a4bbc45cfe64005971a393_0(CONT_PARAMS) {
  RETURN_RTYPE(compiled_start_1_0(CONT_ACTUALS));
}
codeptr_t CDECL twobit_load_table[] = { 
  twobit_thunk_458bbaae66a4bbc45cfe64005971a393_0,
  0  /* The table may be empty; some compilers complain */
};
