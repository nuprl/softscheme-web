/* Generated from /home/henchman/larcenytest/larceny-petit-Nightly-2017-08-06/larceny_src/lib/SRFI/srfi/142.slfasl */
#include "petit-instr.h"

static RTYPE compiled_block_1_1008( CONT_PARAMS );
static RTYPE compiled_block_1_1007( CONT_PARAMS );
static RTYPE compiled_start_1_0( CONT_PARAMS );
static RTYPE compiled_block_1_1003( CONT_PARAMS );
static RTYPE compiled_start_1_3( CONT_PARAMS );
static RTYPE compiled_block_1_1004( CONT_PARAMS );
static RTYPE compiled_start_1_5( CONT_PARAMS );
static RTYPE compiled_start_1_4( CONT_PARAMS );
static RTYPE compiled_start_1_2( CONT_PARAMS );
static RTYPE compiled_start_1_1( CONT_PARAMS );

static RTYPE compiled_start_1_0( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_save( 0 );
  twobit_store( 0, 0 );
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 2 ); /*  bitwise-if~1pxGHH~50222 */
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
  twobit_setrtn( 1007, compiled_block_1_1007 );
  twobit_invoke( 8 );
  twobit_label( 1007, compiled_block_1_1007 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_global( 15 ); /* ex:register-library! */
  twobit_setrtn( 1008, compiled_block_1_1008 );
  twobit_invoke( 1 );
  twobit_label( 1008, compiled_block_1_1008 );
  twobit_load( 0, 0 );
  twobit_global( 16 ); /* values */
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
  twobit_setglbl( 2 ); /*  bitwise-if~1pxGHH~50222 */
  twobit_lambda( compiled_start_1_4, 4, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_op1_4(); /* undefined */
  twobit_global( 5 ); /* values */
  twobit_setrtn( 1003, compiled_block_1_1003 );
  twobit_invoke( 0 );
  twobit_label( 1003, compiled_block_1_1003 );
  twobit_load( 0, 0 );
  twobit_load( 1, 1 );
  twobit_lambda( compiled_start_1_5, 7, 0 );
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 2 );
  twobit_global( 8 ); /* apply */
  twobit_pop( 1 );
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_4( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_reg( 1 );
  twobit_setglbl( 1 ); /*  bitwise-if~1pxGHH~50222 */
  twobit_global( 2 ); /* values */
  twobit_invoke( 0 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_5( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 3 );
  twobit_save( 3 );
  twobit_store( 0, 0 );
  twobit_store( 1, 3 );
  twobit_store( 2, 1 );
  twobit_store( 3, 2 );
  twobit_const( 1 );
  twobit_setreg( 1 );
  twobit_global( 2 ); /* issue-warning-deprecated */
  twobit_setrtn( 1004, compiled_block_1_1004 );
  twobit_invoke( 1 );
  twobit_label( 1004, compiled_block_1_1004 );
  twobit_load( 0, 0 );
  twobit_load( 3, 1 );
  twobit_load( 2, 2 );
  twobit_load( 1, 3 );
  twobit_global( 3 ); /* bitwise-if */
  twobit_pop( 3 );
  twobit_invoke( 3 );
  twobit_epilogue();
}


RTYPE twobit_thunk_e16327dd41e1aa931f42a8b320cd28e3_0(CONT_PARAMS) {
  RETURN_RTYPE(compiled_start_1_0(CONT_ACTUALS));
}
codeptr_t CDECL twobit_load_table[] = { 
  twobit_thunk_e16327dd41e1aa931f42a8b320cd28e3_0,
  0  /* The table may be empty; some compilers complain */
};
