/* Generated from /home/henchman/larcenytest/larceny-petit-Nightly-2017-08-06/larceny_src/lib/R6RS/rnrs/r5rs.slfasl */
#include "petit-instr.h"

static RTYPE compiled_block_1_1012( CONT_PARAMS );
static RTYPE compiled_block_1_1011( CONT_PARAMS );
static RTYPE compiled_start_1_0( CONT_PARAMS );
static RTYPE compiled_block_1_1006( CONT_PARAMS );
static RTYPE compiled_start_1_3( CONT_PARAMS );
static RTYPE compiled_block_1_1007( CONT_PARAMS );
static RTYPE compiled_block_1_1009( CONT_PARAMS );
static RTYPE compiled_block_1_1008( CONT_PARAMS );
static RTYPE compiled_temp_1_6( CONT_PARAMS );
static RTYPE compiled_start_1_5( CONT_PARAMS );
static RTYPE compiled_block_1_1002( CONT_PARAMS );
static RTYPE compiled_block_1_1004( CONT_PARAMS );
static RTYPE compiled_block_1_1003( CONT_PARAMS );
static RTYPE compiled_temp_1_7( CONT_PARAMS );
static RTYPE compiled_start_1_4( CONT_PARAMS );
static RTYPE compiled_start_1_2( CONT_PARAMS );
static RTYPE compiled_start_1_1( CONT_PARAMS );

static RTYPE compiled_start_1_0( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_save( 0 );
  twobit_store( 0, 0 );
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 2 ); /*  null-environment~1pxGHH~4440 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 3 ); /*  scheme-report-environment~1pxGHH~4439 */
  twobit_lambda( compiled_start_1_1, 5, 0 );
  twobit_setreg( 2 );
  twobit_lambda( compiled_start_1_2, 7, 0 );
  twobit_setreg( 4 );
  twobit_lambda( compiled_start_1_3, 9, 0 );
  twobit_setreg( 3 );
  twobit_movereg( 3, 7 );
  twobit_movereg( 4, 6 );
  twobit_const( 10 );
  twobit_setreg( 1 );
  twobit_const( 11 );
  twobit_setreg( 3 );
  twobit_const( 12 );
  twobit_setreg( 4 );
  twobit_const( 13 );
  twobit_setreg( 5 );
  twobit_const( 14 );
  twobit_setreg( 8 );
  twobit_global( 15 ); /* ex:make-library */
  twobit_setrtn( 1011, compiled_block_1_1011 );
  twobit_invoke( 8 );
  twobit_label( 1011, compiled_block_1_1011 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_global( 16 ); /* ex:register-library! */
  twobit_setrtn( 1012, compiled_block_1_1012 );
  twobit_invoke( 1 );
  twobit_label( 1012, compiled_block_1_1012 );
  twobit_load( 0, 0 );
  twobit_global( 17 ); /* values */
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
  twobit_save( 0 );
  twobit_store( 0, 0 );
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 2 ); /*  null-environment~1pxGHH~4440 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 3 ); /*  scheme-report-environment~1pxGHH~4439 */
  twobit_lambda( compiled_start_1_4, 5, 0 );
  twobit_setglbl( 3 ); /*  scheme-report-environment~1pxGHH~4439 */
  twobit_const( 6 );
  twobit_setreg( 1 );
  twobit_const( 7 );
  twobit_setreg( 2 );
  twobit_global( 8 ); /* ex:environment */
  twobit_setrtn( 1006, compiled_block_1_1006 );
  twobit_invoke( 2 );
  twobit_label( 1006, compiled_block_1_1006 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_movereg( 4, 1 );
  twobit_lambda( compiled_start_1_5, 10, 1 );
  twobit_setglbl( 2 ); /*  null-environment~1pxGHH~4440 */
  twobit_global( 11 ); /* values */
  twobit_pop( 0 );
  twobit_invoke( 0 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_4( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_save( 0 );
  twobit_store( 0, 0 );
  twobit_reg( 1 );
  twobit_op2imm_branchf_639( fixnum(5), 7, compiled_temp_1_7, 1003, compiled_block_1_1003 ); /* internal:branchf-=/imm */
  twobit_op1_3(); /* unspecified */
  twobit_skip( 1002, compiled_block_1_1002 );
  twobit_label( 1003, compiled_block_1_1003 );
  twobit_movereg( 1, 3 );
  twobit_const( 1 );
  twobit_setreg( 1 );
  twobit_const( 2 );
  twobit_setreg( 2 );
  twobit_global( 3 ); /* assertion-violation */
  twobit_setrtn( 1004, compiled_block_1_1004 );
  twobit_invoke( 3 );
  twobit_label( 1004, compiled_block_1_1004 );
  twobit_load( 0, 0 );
  twobit_label( 1002, compiled_block_1_1002 );
  twobit_const( 4 );
  twobit_setreg( 1 );
  twobit_global( 5 ); /* ex:environment */
  twobit_pop( 0 );
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_5( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_save( 0 );
  twobit_store( 0, 0 );
  twobit_reg( 1 );
  twobit_op2imm_branchf_639( fixnum(5), 6, compiled_temp_1_6, 1008, compiled_block_1_1008 ); /* internal:branchf-=/imm */
  twobit_op1_3(); /* unspecified */
  twobit_skip( 1007, compiled_block_1_1007 );
  twobit_label( 1008, compiled_block_1_1008 );
  twobit_movereg( 1, 3 );
  twobit_const( 1 );
  twobit_setreg( 1 );
  twobit_const( 2 );
  twobit_setreg( 2 );
  twobit_global( 3 ); /* assertion-violation */
  twobit_setrtn( 1009, compiled_block_1_1009 );
  twobit_invoke( 3 );
  twobit_label( 1009, compiled_block_1_1009 );
  twobit_load( 0, 0 );
  twobit_label( 1007, compiled_block_1_1007 );
  twobit_lexical( 0, 1 );
  twobit_pop( 0 );
  twobit_return();
  twobit_epilogue();
}


RTYPE twobit_thunk_127859c78ce268f3b4017d9124814ec8_0(CONT_PARAMS) {
  RETURN_RTYPE(compiled_start_1_0(CONT_ACTUALS));
}
codeptr_t CDECL twobit_load_table[] = { 
  twobit_thunk_127859c78ce268f3b4017d9124814ec8_0,
  0  /* The table may be empty; some compilers complain */
};
