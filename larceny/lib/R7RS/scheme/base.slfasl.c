/* Generated from /home/henchman/larcenytest/larceny-petit-Nightly-2017-08-06/larceny_src/lib/R7RS/scheme/base.slfasl */
#include "petit-instr.h"

static RTYPE compiled_block_1_1005( CONT_PARAMS );
static RTYPE compiled_block_1_1004( CONT_PARAMS );
static RTYPE compiled_start_1_0( CONT_PARAMS );
static RTYPE compiled_block_1_1002( CONT_PARAMS );
static RTYPE compiled_start_1_3( CONT_PARAMS );
static RTYPE compiled_start_1_2( CONT_PARAMS );
static RTYPE compiled_start_1_1( CONT_PARAMS );

static RTYPE compiled_start_1_0( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_save( 0 );
  twobit_store( 0, 0 );
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 2 ); /*  features~1pxGHH~4480 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 3 ); /*  bytevector-copy!~1pxGHH~4479 */
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
  twobit_setrtn( 1004, compiled_block_1_1004 );
  twobit_invoke( 8 );
  twobit_label( 1004, compiled_block_1_1004 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_global( 16 ); /* ex:register-library! */
  twobit_setrtn( 1005, compiled_block_1_1005 );
  twobit_invoke( 1 );
  twobit_label( 1005, compiled_block_1_1005 );
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
  twobit_setglbl( 2 ); /*  features~1pxGHH~4480 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 3 ); /*  bytevector-copy!~1pxGHH~4479 */
  twobit_global( 4 ); /* larceny:use-r7rs-semantics! */
  twobit_setrtn( 1002, compiled_block_1_1002 );
  twobit_invoke( 0 );
  twobit_label( 1002, compiled_block_1_1002 );
  twobit_load( 0, 0 );
  twobit_global( 5 ); /* r7rs:bytevector-copy! */
  twobit_setglbl( 3 ); /*  bytevector-copy!~1pxGHH~4479 */
  twobit_global( 6 ); /* larceny:features */
  twobit_setglbl( 2 ); /*  features~1pxGHH~4480 */
  twobit_global( 7 ); /* values */
  twobit_pop( 0 );
  twobit_invoke( 0 );
  twobit_epilogue();
}


RTYPE twobit_thunk_442cd839ed6b1d861b5db0536a1b1ff5_0(CONT_PARAMS) {
  RETURN_RTYPE(compiled_start_1_0(CONT_ACTUALS));
}
codeptr_t CDECL twobit_load_table[] = { 
  twobit_thunk_442cd839ed6b1d861b5db0536a1b1ff5_0,
  0  /* The table may be empty; some compilers complain */
};
