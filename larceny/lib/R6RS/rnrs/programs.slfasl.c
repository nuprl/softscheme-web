/* Generated from /home/henchman/larcenytest/larceny-petit-Nightly-2017-08-06/larceny_src/lib/R6RS/rnrs/programs.slfasl */
#include "petit-instr.h"

static RTYPE compiled_block_1_1011( CONT_PARAMS );
static RTYPE compiled_block_1_1010( CONT_PARAMS );
static RTYPE compiled_start_1_0( CONT_PARAMS );
static RTYPE compiled_block_1_1009( CONT_PARAMS );
static RTYPE compiled_block_1_1008( CONT_PARAMS );
static RTYPE compiled_block_1_1002( CONT_PARAMS );
static RTYPE compiled_block_1_1005( CONT_PARAMS );
static RTYPE compiled_start_1_3( CONT_PARAMS );
static RTYPE compiled_start_1_5( CONT_PARAMS );
static RTYPE compiled_start_1_4( CONT_PARAMS );
static RTYPE compiled_start_1_2( CONT_PARAMS );
static RTYPE compiled_start_1_1( CONT_PARAMS );

static RTYPE compiled_start_1_0( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_save( 0 );
  twobit_store( 0, 0 );
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 2 ); /*  command-line~1pxGHH~7223 */
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
  twobit_setrtn( 1010, compiled_block_1_1010 );
  twobit_invoke( 8 );
  twobit_label( 1010, compiled_block_1_1010 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_global( 15 ); /* ex:register-library! */
  twobit_setrtn( 1011, compiled_block_1_1011 );
  twobit_invoke( 1 );
  twobit_label( 1011, compiled_block_1_1011 );
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
  twobit_setglbl( 2 ); /*  command-line~1pxGHH~7223 */
  twobit_lambda( compiled_start_1_4, 4, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_op1_4(); /* undefined */
  twobit_global( 5 ); /* values */
  twobit_setrtn( 1005, compiled_block_1_1005 );
  twobit_invoke( 0 );
  twobit_label( 1005, compiled_block_1_1005 );
  twobit_load( 0, 0 );
  twobit_load( 1, 1 );
  twobit_lambda( compiled_start_1_5, 7, 0 );
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 2 );
  twobit_global( 8 ); /* apply */
  twobit_pop( 1 );
  twobit_invoke( 2 );
  twobit_label( 1002, compiled_block_1_1002 );
  twobit_save( 0 );
  twobit_store( 0, 0 );
  twobit_global( 9 ); /* command-line-arguments */
  twobit_setrtn( 1008, compiled_block_1_1008 );
  twobit_invoke( 0 );
  twobit_label( 1008, compiled_block_1_1008 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_global( 10 ); /* vector->list */
  twobit_setrtn( 1009, compiled_block_1_1009 );
  twobit_invoke( 1 );
  twobit_label( 1009, compiled_block_1_1009 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_const( 11 );
  twobit_op2_58( 4 ); /* cons */
  twobit_pop( 0 );
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_1_4( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_reg( 1 );
  twobit_setglbl( 1 ); /*  command-line~1pxGHH~7223 */
  twobit_global( 2 ); /* values */
  twobit_invoke( 0 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_5( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_jump( 1, 1002, compiled_block_1_1002 );
  twobit_epilogue();
}


RTYPE twobit_thunk_a89fbadd3377424b1374d4c5860e5504_0(CONT_PARAMS) {
  RETURN_RTYPE(compiled_start_1_0(CONT_ACTUALS));
}
codeptr_t CDECL twobit_load_table[] = { 
  twobit_thunk_a89fbadd3377424b1374d4c5860e5504_0,
  0  /* The table may be empty; some compilers complain */
};
