/* Generated from /home/henchman/larcenytest/larceny-petit-Nightly-2017-08-06/larceny_src/lib/SRFI/srfi/145.slfasl */
#include "petit-instr.h"

static RTYPE compiled_block_1_1045( CONT_PARAMS );
static RTYPE compiled_block_1_1044( CONT_PARAMS );
static RTYPE compiled_start_1_0( CONT_PARAMS );
static RTYPE compiled_start_1_3( CONT_PARAMS );
static RTYPE compiled_block_1_1038( CONT_PARAMS );
static RTYPE compiled_block_1_1040( CONT_PARAMS );
static RTYPE compiled_block_1_1039( CONT_PARAMS );
static RTYPE compiled_block_1_1036( CONT_PARAMS );
static RTYPE compiled_block_1_1035( CONT_PARAMS );
static RTYPE compiled_block_1_1034( CONT_PARAMS );
static RTYPE compiled_start_1_4( CONT_PARAMS );
static RTYPE compiled_start_1_5( CONT_PARAMS );
static RTYPE compiled_block_1_1031( CONT_PARAMS );
static RTYPE compiled_start_1_7( CONT_PARAMS );
static RTYPE compiled_start_1_8( CONT_PARAMS );
static RTYPE compiled_start_1_9( CONT_PARAMS );
static RTYPE compiled_start_1_6( CONT_PARAMS );
static RTYPE compiled_start_1_11( CONT_PARAMS );
static RTYPE compiled_start_1_12( CONT_PARAMS );
static RTYPE compiled_start_1_10( CONT_PARAMS );
static RTYPE compiled_block_1_1024( CONT_PARAMS );
static RTYPE compiled_start_1_2( CONT_PARAMS );
static RTYPE compiled_block_1_1003( CONT_PARAMS );
static RTYPE compiled_block_1_1005( CONT_PARAMS );
static RTYPE compiled_block_1_1008( CONT_PARAMS );
static RTYPE compiled_block_1_1020( CONT_PARAMS );
static RTYPE compiled_block_1_1019( CONT_PARAMS );
static RTYPE compiled_block_1_1018( CONT_PARAMS );
static RTYPE compiled_block_1_1017( CONT_PARAMS );
static RTYPE compiled_block_1_1016( CONT_PARAMS );
static RTYPE compiled_block_1_1015( CONT_PARAMS );
static RTYPE compiled_block_1_1014( CONT_PARAMS );
static RTYPE compiled_block_1_1013( CONT_PARAMS );
static RTYPE compiled_block_1_1012( CONT_PARAMS );
static RTYPE compiled_block_1_1011( CONT_PARAMS );
static RTYPE compiled_block_1_1010( CONT_PARAMS );
static RTYPE compiled_block_1_1009( CONT_PARAMS );
static RTYPE compiled_block_1_1006( CONT_PARAMS );
static RTYPE compiled_start_1_13( CONT_PARAMS );
static RTYPE compiled_start_1_1( CONT_PARAMS );

static RTYPE compiled_start_1_0( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_save( 0 );
  twobit_store( 0, 0 );
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 2 ); /*  assumption-failed~1pxGHH~50250 */
  twobit_lambda( compiled_start_1_1, 4, 0 );
  twobit_setreg( 2 );
  twobit_lambda( compiled_start_1_2, 6, 0 );
  twobit_setreg( 4 );
  twobit_lambda( compiled_start_1_3, 8, 0 );
  twobit_setreg( 3 );
  twobit_movereg( 3, 7 );
  twobit_movereg( 4, 6 );
  twobit_const( 9 );
  twobit_setreg( 1 );
  twobit_const( 10 );
  twobit_setreg( 3 );
  twobit_const( 11 );
  twobit_setreg( 4 );
  twobit_const( 12 );
  twobit_setreg( 5 );
  twobit_const( 13 );
  twobit_setreg( 8 );
  twobit_global( 14 ); /* ex:make-library */
  twobit_setrtn( 1044, compiled_block_1_1044 );
  twobit_invoke( 8 );
  twobit_label( 1044, compiled_block_1_1044 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_global( 15 ); /* ex:register-library! */
  twobit_setrtn( 1045, compiled_block_1_1045 );
  twobit_invoke( 1 );
  twobit_label( 1045, compiled_block_1_1045 );
  twobit_load( 0, 0 );
  twobit_global( 16 ); /* values */
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
  twobit_lambda( compiled_start_1_13, 2, 0 );
  twobit_setreg( 2 );
  twobit_const( 3 );
  twobit_setreg( 1 );
  twobit_global( 4 ); /* ex:register-macro! */
  twobit_setrtn( 1024, compiled_block_1_1024 );
  twobit_invoke( 2 );
  twobit_label( 1024, compiled_block_1_1024 );
  twobit_load( 0, 0 );
  twobit_global( 5 ); /* values */
  twobit_pop( 0 );
  twobit_invoke( 0 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_13( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_reg( 1 );
  twobit_op1_branchf_611( 1003, compiled_block_1_1003 ); /* internal:branchf-pair? */
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1005, compiled_block_1_1005 ); /* internal:branchf-pair? */
  twobit_save( 9 );
  twobit_store( 0, 0 );
  twobit_store( 1, 9 );
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_store( 3, 1 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_movereg( 4, 1 );
  twobit_global( 1 ); /* list? */
  twobit_setrtn( 1006, compiled_block_1_1006 );
  twobit_invoke( 1 );
  twobit_label( 1006, compiled_block_1_1006 );
  twobit_load( 0, 0 );
  twobit_branchf( 1008, compiled_block_1_1008 );
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
  twobit_setrtn( 1009, compiled_block_1_1009 );
  twobit_invoke( 5 );
  twobit_label( 1009, compiled_block_1_1009 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 8 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_stack( 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 2 );
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
  twobit_setrtn( 1010, compiled_block_1_1010 );
  twobit_invoke( 5 );
  twobit_label( 1010, compiled_block_1_1010 );
  twobit_load( 0, 0 );
  twobit_load( 3, 2 );
  twobit_op2_58( 3 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 7 );
  twobit_const( 7 );
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
  twobit_setrtn( 1011, compiled_block_1_1011 );
  twobit_invoke( 5 );
  twobit_label( 1011, compiled_block_1_1011 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 6 );
  twobit_const( 8 );
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
  twobit_setrtn( 1012, compiled_block_1_1012 );
  twobit_invoke( 5 );
  twobit_label( 1012, compiled_block_1_1012 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
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
  twobit_setrtn( 1013, compiled_block_1_1013 );
  twobit_invoke( 5 );
  twobit_label( 1013, compiled_block_1_1013 );
  twobit_load( 0, 0 );
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 5 );
  twobit_const( 9 );
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
  twobit_setrtn( 1014, compiled_block_1_1014 );
  twobit_invoke( 5 );
  twobit_label( 1014, compiled_block_1_1014 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 4 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_stack( 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 1 );
  twobit_const( 10 );
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
  twobit_setrtn( 1015, compiled_block_1_1015 );
  twobit_invoke( 5 );
  twobit_label( 1015, compiled_block_1_1015 );
  twobit_load( 0, 0 );
  twobit_load( 3, 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_const( 11 );
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
  twobit_setrtn( 1016, compiled_block_1_1016 );
  twobit_invoke( 5 );
  twobit_label( 1016, compiled_block_1_1016 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_const( 12 );
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
  twobit_setrtn( 1017, compiled_block_1_1017 );
  twobit_invoke( 5 );
  twobit_label( 1017, compiled_block_1_1017 );
  twobit_load( 0, 0 );
  twobit_load( 3, 3 );
  twobit_op2_58( 3 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 1 );
  twobit_op2_58( 4 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 4 );
  twobit_op2_58( 4 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 5 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 6 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 5 );
  twobit_const( 13 );
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
  twobit_setrtn( 1018, compiled_block_1_1018 );
  twobit_invoke( 5 );
  twobit_label( 1018, compiled_block_1_1018 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 6 );
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
  twobit_setrtn( 1019, compiled_block_1_1019 );
  twobit_invoke( 5 );
  twobit_label( 1019, compiled_block_1_1019 );
  twobit_load( 0, 0 );
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 6 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 6 );
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
  twobit_setrtn( 1020, compiled_block_1_1020 );
  twobit_invoke( 5 );
  twobit_label( 1020, compiled_block_1_1020 );
  twobit_load( 0, 0 );
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 6 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 5 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 7 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 8 );
  twobit_op2_58( 4 ); /* cons */
  twobit_pop( 9 );
  twobit_return();
  twobit_label( 1008, compiled_block_1_1008 );
  twobit_load( 1, 9 );
  twobit_global( 14 ); /* ex:invalid-form */
  twobit_pop( 9 );
  twobit_invoke( 1 );
  twobit_label( 1005, compiled_block_1_1005 );
  twobit_global( 14 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1003, compiled_block_1_1003 );
  twobit_global( 14 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_3( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 2 ); /*  assumption-failed~1pxGHH~50250 */
  twobit_lambda( compiled_start_1_4, 4, 0 );
  twobit_setglbl( 2 ); /*  assumption-failed~1pxGHH~50250 */
  twobit_global( 5 ); /* values */
  twobit_invoke( 0 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_4( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_save( 3 );
  twobit_store( 0, 0 );
  twobit_store( 1, 2 );
  twobit_movereg( 2, 1 );
  twobit_lambda( compiled_start_1_5, 2, 1 );
  twobit_setreg( 1 );
  twobit_global( 3 ); /* call-with-current-continuation */
  twobit_setrtn( 1034, compiled_block_1_1034 );
  twobit_invoke( 1 );
  twobit_label( 1034, compiled_block_1_1034 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_setrtn( 1035, compiled_block_1_1035 );
  twobit_invoke( 0 );
  twobit_label( 1035, compiled_block_1_1035 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_movereg( 4, 1 );
  twobit_global( 4 ); /* error-object? */
  twobit_setrtn( 1036, compiled_block_1_1036 );
  twobit_invoke( 1 );
  twobit_label( 1036, compiled_block_1_1036 );
  twobit_load( 0, 0 );
  twobit_branchf( 1038, compiled_block_1_1038 );
  twobit_load( 1, 1 );
  twobit_global( 5 ); /* error-object-message */
  twobit_setrtn( 1039, compiled_block_1_1039 );
  twobit_invoke( 1 );
  twobit_label( 1039, compiled_block_1_1039 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_load( 1, 1 );
  twobit_global( 6 ); /* error-object-irritants */
  twobit_setrtn( 1040, compiled_block_1_1040 );
  twobit_invoke( 1 );
  twobit_label( 1040, compiled_block_1_1040 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_load( 3, 2 );
  twobit_load( 4, 3 );
  twobit_global( 7 ); /* error */
  twobit_setreg( 1 );
  twobit_const( 8 );
  twobit_setreg( 2 );
  twobit_load( 5, 1 );
  twobit_global( 9 ); /* apply */
  twobit_pop( 3 );
  twobit_invoke( 5 );
  twobit_label( 1038, compiled_block_1_1038 );
  twobit_load( 3, 2 );
  twobit_global( 7 ); /* error */
  twobit_setreg( 1 );
  twobit_const( 10 );
  twobit_setreg( 2 );
  twobit_load( 4, 1 );
  twobit_global( 9 ); /* apply */
  twobit_pop( 3 );
  twobit_invoke( 4 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_5( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_lambda( compiled_start_1_6, 2, 1 );
  twobit_setreg( 2 );
  twobit_lambda( compiled_start_1_7, 4, 1 );
  twobit_setreg( 1 );
  twobit_global( 5 ); /* with-exception-handler */
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_6( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_lambda( compiled_start_1_10, 2, 0 );
  twobit_setreg( 1 );
  twobit_lambda( compiled_start_1_11, 4, 0 );
  twobit_setreg( 2 );
  twobit_global( 5 ); /* call-with-values */
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_10( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_lexical( 2, 1 );
  twobit_invoke( 0 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_11( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argsge( 0 );
  twobit_lambda( compiled_start_1_12, 2, 1 );
  twobit_setreg( 1 );
  twobit_lexical( 1, 1 );
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_12( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_global( 1 ); /* values */
  twobit_setreg( 1 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 2 );
  twobit_global( 2 ); /* apply */
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_7( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_save( 0 );
  twobit_store( 0, 0 );
  twobit_lambda( compiled_start_1_8, 2, 1 );
  twobit_setreg( 1 );
  twobit_global( 3 ); /* call-with-current-continuation */
  twobit_setrtn( 1031, compiled_block_1_1031 );
  twobit_invoke( 1 );
  twobit_label( 1031, compiled_block_1_1031 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_pop( 0 );
  twobit_invoke( 0 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_8( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_lambda( compiled_start_1_9, 2, 0 );
  twobit_setreg( 1 );
  twobit_lexical( 1, 1 );
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_9( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_lexical( 1, 1 );
  twobit_return();
  twobit_epilogue();
}


RTYPE twobit_thunk_b96eff9cbf3118ba01844f8c9f872c0b_0(CONT_PARAMS) {
  RETURN_RTYPE(compiled_start_1_0(CONT_ACTUALS));
}
codeptr_t CDECL twobit_load_table[] = { 
  twobit_thunk_b96eff9cbf3118ba01844f8c9f872c0b_0,
  0  /* The table may be empty; some compilers complain */
};
