/* Generated from /home/henchman/larcenytest/larceny-petit-Nightly-2017-08-06/larceny_src/lib/SRFI/srfi/111.slfasl */
#include "petit-instr.h"

static RTYPE compiled_block_1_1011( CONT_PARAMS );
static RTYPE compiled_block_1_1010( CONT_PARAMS );
static RTYPE compiled_start_1_0( CONT_PARAMS );
static RTYPE compiled_block_1_1008( CONT_PARAMS );
static RTYPE compiled_block_1_1007( CONT_PARAMS );
static RTYPE compiled_block_1_1006( CONT_PARAMS );
static RTYPE compiled_block_1_1005( CONT_PARAMS );
static RTYPE compiled_block_1_1004( CONT_PARAMS );
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
  twobit_setglbl( 2 ); /*  set-box!~1pxGHH~23564 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 3 ); /*  unbox~1pxGHH~23563 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 4 ); /*  box?~1pxGHH~23562 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 5 ); /*  box~1pxGHH~23561 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 6 ); /*  box-type~1pxGHH~23560 */
  twobit_lambda( compiled_start_1_1, 8, 0 );
  twobit_setreg( 2 );
  twobit_lambda( compiled_start_1_2, 10, 0 );
  twobit_setreg( 4 );
  twobit_lambda( compiled_start_1_3, 12, 0 );
  twobit_setreg( 3 );
  twobit_movereg( 3, 7 );
  twobit_movereg( 4, 6 );
  twobit_const( 13 );
  twobit_setreg( 1 );
  twobit_const( 14 );
  twobit_setreg( 3 );
  twobit_const( 15 );
  twobit_setreg( 4 );
  twobit_const( 16 );
  twobit_setreg( 5 );
  twobit_const( 17 );
  twobit_setreg( 8 );
  twobit_global( 18 ); /* ex:make-library */
  twobit_setrtn( 1010, compiled_block_1_1010 );
  twobit_invoke( 8 );
  twobit_label( 1010, compiled_block_1_1010 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_global( 19 ); /* ex:register-library! */
  twobit_setrtn( 1011, compiled_block_1_1011 );
  twobit_invoke( 1 );
  twobit_label( 1011, compiled_block_1_1011 );
  twobit_load( 0, 0 );
  twobit_global( 20 ); /* values */
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
  twobit_setglbl( 2 ); /*  set-box!~1pxGHH~23564 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 3 ); /*  unbox~1pxGHH~23563 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 4 ); /*  box?~1pxGHH~23562 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 5 ); /*  box~1pxGHH~23561 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 6 ); /*  box-type~1pxGHH~23560 */
  twobit_lambda( compiled_start_1_4, 8, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_op1_4(); /* undefined */
  twobit_op1_4(); /* undefined */
  twobit_op1_4(); /* undefined */
  twobit_op1_4(); /* undefined */
  twobit_op1_4(); /* undefined */
  twobit_const( 9 );
  twobit_setreg( 1 );
  twobit_const( 10 );
  twobit_setreg( 2 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_setreg( 3 );
  twobit_global( 11 ); /* make-rtd */
  twobit_setrtn( 1003, compiled_block_1_1003 );
  twobit_invoke( 3 );
  twobit_label( 1003, compiled_block_1_1003 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_movereg( 4, 1 );
  twobit_const( 12 );
  twobit_setreg( 2 );
  twobit_global( 13 ); /* rtd-constructor */
  twobit_setrtn( 1004, compiled_block_1_1004 );
  twobit_invoke( 2 );
  twobit_label( 1004, compiled_block_1_1004 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 5 );
  twobit_load( 1, 1 );
  twobit_global( 14 ); /* rtd-predicate */
  twobit_setrtn( 1005, compiled_block_1_1005 );
  twobit_invoke( 1 );
  twobit_label( 1005, compiled_block_1_1005 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 4 );
  twobit_load( 1, 1 );
  twobit_const( 15 );
  twobit_setreg( 2 );
  twobit_global( 16 ); /* rtd-accessor */
  twobit_setrtn( 1006, compiled_block_1_1006 );
  twobit_invoke( 2 );
  twobit_label( 1006, compiled_block_1_1006 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_load( 1, 1 );
  twobit_const( 15 );
  twobit_setreg( 2 );
  twobit_global( 17 ); /* rtd-mutator */
  twobit_setrtn( 1007, compiled_block_1_1007 );
  twobit_invoke( 2 );
  twobit_label( 1007, compiled_block_1_1007 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_global( 18 ); /* values */
  twobit_setrtn( 1008, compiled_block_1_1008 );
  twobit_invoke( 0 );
  twobit_label( 1008, compiled_block_1_1008 );
  twobit_load( 0, 0 );
  twobit_load( 1, 2 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 4 );
  twobit_stack( 1 );
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
  twobit_global( 19 ); /* apply */
  twobit_pop( 5 );
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_4( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 4 );
  twobit_reg( 1 );
  twobit_setglbl( 1 ); /*  box~1pxGHH~23561 */
  twobit_reg( 2 );
  twobit_setglbl( 2 ); /*  box?~1pxGHH~23562 */
  twobit_reg( 3 );
  twobit_setglbl( 3 ); /*  unbox~1pxGHH~23563 */
  twobit_reg( 4 );
  twobit_setglbl( 4 ); /*  set-box!~1pxGHH~23564 */
  twobit_global( 5 ); /* values */
  twobit_invoke( 0 );
  twobit_epilogue();
}


RTYPE twobit_thunk_48795f309d6439c3b45dcefb9d33fb43_0(CONT_PARAMS) {
  RETURN_RTYPE(compiled_start_1_0(CONT_ACTUALS));
}
codeptr_t CDECL twobit_load_table[] = { 
  twobit_thunk_48795f309d6439c3b45dcefb9d33fb43_0,
  0  /* The table may be empty; some compilers complain */
};
