/* Generated from /home/henchman/larcenytest/larceny-petit-Nightly-2017-08-06/larceny_src/lib/R6RS/rnrs/lists.slfasl */
#include "petit-instr.h"

static RTYPE compiled_block_1_1006( CONT_PARAMS );
static RTYPE compiled_block_1_1005( CONT_PARAMS );
static RTYPE compiled_start_1_0( CONT_PARAMS );
static RTYPE compiled_block_1_1003( CONT_PARAMS );
static RTYPE compiled_start_1_3( CONT_PARAMS );
static RTYPE compiled_start_1_4( CONT_PARAMS );
static RTYPE compiled_start_1_2( CONT_PARAMS );
static RTYPE compiled_start_1_1( CONT_PARAMS );

static RTYPE compiled_start_1_0( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_save( 0 );
  twobit_store( 0, 0 );
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 2 ); /*  assoc~1pxGHH~1540 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 3 ); /*  member~1pxGHH~1539 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 4 ); /*  remove~1pxGHH~1538 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 5 ); /*  fold-right~1pxGHH~1537 */
  twobit_lambda( compiled_start_1_1, 7, 0 );
  twobit_setreg( 2 );
  twobit_lambda( compiled_start_1_2, 9, 0 );
  twobit_setreg( 4 );
  twobit_lambda( compiled_start_1_3, 11, 0 );
  twobit_setreg( 3 );
  twobit_movereg( 3, 7 );
  twobit_movereg( 4, 6 );
  twobit_const( 12 );
  twobit_setreg( 1 );
  twobit_const( 13 );
  twobit_setreg( 3 );
  twobit_const( 14 );
  twobit_setreg( 4 );
  twobit_const( 15 );
  twobit_setreg( 5 );
  twobit_const( 16 );
  twobit_setreg( 8 );
  twobit_global( 17 ); /* ex:make-library */
  twobit_setrtn( 1005, compiled_block_1_1005 );
  twobit_invoke( 8 );
  twobit_label( 1005, compiled_block_1_1005 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_global( 18 ); /* ex:register-library! */
  twobit_setrtn( 1006, compiled_block_1_1006 );
  twobit_invoke( 1 );
  twobit_label( 1006, compiled_block_1_1006 );
  twobit_load( 0, 0 );
  twobit_global( 19 ); /* values */
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
  twobit_save( 5 );
  twobit_store( 0, 0 );
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 2 ); /*  assoc~1pxGHH~1540 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 3 ); /*  member~1pxGHH~1539 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 4 ); /*  remove~1pxGHH~1538 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 5 ); /*  fold-right~1pxGHH~1537 */
  twobit_lambda( compiled_start_1_4, 7, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_op1_4(); /* undefined */
  twobit_op1_4(); /* undefined */
  twobit_op1_4(); /* undefined */
  twobit_op1_4(); /* undefined */
  twobit_global( 8 ); /* larceny:fold-right */
  twobit_setreg( 3 );
  twobit_store( 3, 5 );
  twobit_global( 9 ); /* larceny:remove */
  twobit_setreg( 2 );
  twobit_store( 2, 4 );
  twobit_global( 10 ); /* larceny:member */
  twobit_setreg( 1 );
  twobit_store( 1, 3 );
  twobit_global( 11 ); /* larceny:assoc */
  twobit_setreg( 31 );
  twobit_store( 31, 2 );
  twobit_global( 12 ); /* values */
  twobit_setrtn( 1003, compiled_block_1_1003 );
  twobit_invoke( 0 );
  twobit_label( 1003, compiled_block_1_1003 );
  twobit_load( 0, 0 );
  twobit_load( 1, 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 4 );
  twobit_stack( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 4 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 5 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 2 );
  twobit_global( 13 ); /* apply */
  twobit_pop( 5 );
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_4( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 4 );
  twobit_reg( 1 );
  twobit_setglbl( 1 ); /*  fold-right~1pxGHH~1537 */
  twobit_reg( 2 );
  twobit_setglbl( 2 ); /*  remove~1pxGHH~1538 */
  twobit_reg( 3 );
  twobit_setglbl( 3 ); /*  member~1pxGHH~1539 */
  twobit_reg( 4 );
  twobit_setglbl( 4 ); /*  assoc~1pxGHH~1540 */
  twobit_global( 5 ); /* values */
  twobit_invoke( 0 );
  twobit_epilogue();
}


RTYPE twobit_thunk_795c573ee2e8b5607500fe82836a1aa7_0(CONT_PARAMS) {
  RETURN_RTYPE(compiled_start_1_0(CONT_ACTUALS));
}
codeptr_t CDECL twobit_load_table[] = { 
  twobit_thunk_795c573ee2e8b5607500fe82836a1aa7_0,
  0  /* The table may be empty; some compilers complain */
};
