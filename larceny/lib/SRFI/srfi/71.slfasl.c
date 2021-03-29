/* Generated from /home/henchman/larcenytest/larceny-petit-Nightly-2017-08-06/larceny_src/lib/SRFI/srfi/71.slfasl */
#include "petit-instr.h"

static RTYPE compiled_block_1_1004( CONT_PARAMS );
static RTYPE compiled_block_1_1003( CONT_PARAMS );
static RTYPE compiled_start_1_0( CONT_PARAMS );
static RTYPE compiled_start_1_3( CONT_PARAMS );
static RTYPE compiled_start_1_2( CONT_PARAMS );
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
  twobit_setrtn( 1003, compiled_block_1_1003 );
  twobit_invoke( 8 );
  twobit_label( 1003, compiled_block_1_1003 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_global( 13 ); /* ex:register-library! */
  twobit_setrtn( 1004, compiled_block_1_1004 );
  twobit_invoke( 1 );
  twobit_label( 1004, compiled_block_1_1004 );
  twobit_load( 0, 0 );
  twobit_global( 14 ); /* values */
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
  twobit_global( 1 ); /* values */
  twobit_invoke( 0 );
  twobit_epilogue();
}


RTYPE twobit_thunk_392ed05721d636ac90fa7deec8319c4e_0(CONT_PARAMS) {
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


RTYPE twobit_thunk_392ed05721d636ac90fa7deec8319c4e_1(CONT_PARAMS) {
  RETURN_RTYPE(compiled_start_2_0(CONT_ACTUALS));
}
codeptr_t CDECL twobit_load_table[] = { 
  twobit_thunk_392ed05721d636ac90fa7deec8319c4e_0,
  twobit_thunk_392ed05721d636ac90fa7deec8319c4e_1,
  0  /* The table may be empty; some compilers complain */
};
