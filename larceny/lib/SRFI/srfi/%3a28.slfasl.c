/* Generated from /home/henchman/larcenytest/larceny-petit-Nightly-2017-08-06/larceny_src/lib/SRFI/srfi/%3a28.slfasl */
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
  twobit_setglbl( 2 ); /*  larceny:format~1pxGHH~55503 */
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
  twobit_setrtn( 1005, compiled_block_1_1005 );
  twobit_invoke( 8 );
  twobit_label( 1005, compiled_block_1_1005 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_global( 15 ); /* ex:register-library! */
  twobit_setrtn( 1006, compiled_block_1_1006 );
  twobit_invoke( 1 );
  twobit_label( 1006, compiled_block_1_1006 );
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
  twobit_save( 2 );
  twobit_store( 0, 0 );
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 2 ); /*  larceny:format~1pxGHH~55503 */
  twobit_lambda( compiled_start_1_4, 4, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_op1_4(); /* undefined */
  twobit_global( 5 ); /* format */
  twobit_setreg( 3 );
  twobit_store( 3, 2 );
  twobit_global( 6 ); /* values */
  twobit_setrtn( 1003, compiled_block_1_1003 );
  twobit_invoke( 0 );
  twobit_label( 1003, compiled_block_1_1003 );
  twobit_load( 0, 0 );
  twobit_load( 1, 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 4 );
  twobit_stack( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 2 );
  twobit_global( 7 ); /* apply */
  twobit_pop( 2 );
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_4( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_reg( 1 );
  twobit_setglbl( 1 ); /*  larceny:format~1pxGHH~55503 */
  twobit_global( 2 ); /* values */
  twobit_invoke( 0 );
  twobit_epilogue();
}


RTYPE twobit_thunk_98e5ca0f3fc1ac0a36f4b148b5063aad_0(CONT_PARAMS) {
  RETURN_RTYPE(compiled_start_1_0(CONT_ACTUALS));
}
static RTYPE compiled_block_2_1012( CONT_PARAMS );
static RTYPE compiled_block_2_1011( CONT_PARAMS );
static RTYPE compiled_start_2_0( CONT_PARAMS );
static RTYPE compiled_block_2_1009( CONT_PARAMS );
static RTYPE compiled_start_2_3( CONT_PARAMS );
static RTYPE compiled_block_2_1004( CONT_PARAMS );
static RTYPE compiled_block_2_1006( CONT_PARAMS );
static RTYPE compiled_block_2_1005( CONT_PARAMS );
static RTYPE compiled_start_2_5( CONT_PARAMS );
static RTYPE compiled_start_2_4( CONT_PARAMS );
static RTYPE compiled_start_2_2( CONT_PARAMS );
static RTYPE compiled_start_2_1( CONT_PARAMS );

static RTYPE compiled_start_2_0( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_save( 0 );
  twobit_store( 0, 0 );
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 2 ); /*  format~1pxGHH~55505 */
  twobit_lambda( compiled_start_2_1, 4, 0 );
  twobit_setreg( 2 );
  twobit_lambda( compiled_start_2_2, 6, 0 );
  twobit_setreg( 4 );
  twobit_lambda( compiled_start_2_3, 8, 0 );
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
  twobit_setrtn( 1011, compiled_block_2_1011 );
  twobit_invoke( 8 );
  twobit_label( 1011, compiled_block_2_1011 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_global( 15 ); /* ex:register-library! */
  twobit_setrtn( 1012, compiled_block_2_1012 );
  twobit_invoke( 1 );
  twobit_label( 1012, compiled_block_2_1012 );
  twobit_load( 0, 0 );
  twobit_global( 16 ); /* values */
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
  twobit_save( 2 );
  twobit_store( 0, 0 );
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 2 ); /*  format~1pxGHH~55505 */
  twobit_lambda( compiled_start_2_4, 4, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_op1_4(); /* undefined */
  twobit_lambda( compiled_start_2_5, 6, 0 );
  twobit_setreg( 3 );
  twobit_store( 3, 2 );
  twobit_global( 7 ); /* values */
  twobit_setrtn( 1009, compiled_block_2_1009 );
  twobit_invoke( 0 );
  twobit_label( 1009, compiled_block_2_1009 );
  twobit_load( 0, 0 );
  twobit_load( 1, 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 4 );
  twobit_stack( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 2 );
  twobit_global( 8 ); /* apply */
  twobit_pop( 2 );
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_4( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_reg( 1 );
  twobit_setglbl( 1 ); /*  format~1pxGHH~55505 */
  twobit_global( 2 ); /* values */
  twobit_invoke( 0 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_5( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argsge( 1 );
  twobit_reg( 1 );
  twobit_op1_800(); /* ustring? */
  twobit_branchf( 1004, compiled_block_2_1004 );
  twobit_save( 3 );
  twobit_store( 0, 0 );
  twobit_store( 1, 1 );
  twobit_store( 2, 2 );
  twobit_global( 1 ); /* open-output-string */
  twobit_setrtn( 1005, compiled_block_2_1005 );
  twobit_invoke( 0 );
  twobit_label( 1005, compiled_block_2_1005 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_load( 3, 1 );
  twobit_load( 4, 2 );
  twobit_load( 2, 3 );
  twobit_global( 2 ); /*  larceny:format~1pxGHH~55503 */
  twobit_setreg( 1 );
  twobit_global( 3 ); /* apply */
  twobit_setrtn( 1006, compiled_block_2_1006 );
  twobit_invoke( 4 );
  twobit_label( 1006, compiled_block_2_1006 );
  twobit_load( 0, 0 );
  twobit_load( 1, 3 );
  twobit_global( 4 ); /* get-output-string */
  twobit_pop( 3 );
  twobit_invoke( 1 );
  twobit_label( 1004, compiled_block_2_1004 );
  twobit_movereg( 2, 3 );
  twobit_movereg( 1, 2 );
  twobit_global( 2 ); /*  larceny:format~1pxGHH~55503 */
  twobit_setreg( 1 );
  twobit_global( 3 ); /* apply */
  twobit_invoke( 3 );
  twobit_epilogue();
}


RTYPE twobit_thunk_98e5ca0f3fc1ac0a36f4b148b5063aad_1(CONT_PARAMS) {
  RETURN_RTYPE(compiled_start_2_0(CONT_ACTUALS));
}
static RTYPE compiled_block_3_1006( CONT_PARAMS );
static RTYPE compiled_block_3_1005( CONT_PARAMS );
static RTYPE compiled_start_3_0( CONT_PARAMS );
static RTYPE compiled_block_3_1003( CONT_PARAMS );
static RTYPE compiled_start_3_3( CONT_PARAMS );
static RTYPE compiled_start_3_4( CONT_PARAMS );
static RTYPE compiled_start_3_2( CONT_PARAMS );
static RTYPE compiled_start_3_1( CONT_PARAMS );

static RTYPE compiled_start_3_0( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_save( 0 );
  twobit_store( 0, 0 );
  twobit_lambda( compiled_start_3_1, 2, 0 );
  twobit_setreg( 2 );
  twobit_lambda( compiled_start_3_2, 4, 0 );
  twobit_setreg( 4 );
  twobit_lambda( compiled_start_3_3, 6, 0 );
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
  twobit_setrtn( 1005, compiled_block_3_1005 );
  twobit_invoke( 8 );
  twobit_label( 1005, compiled_block_3_1005 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_global( 13 ); /* ex:register-library! */
  twobit_setrtn( 1006, compiled_block_3_1006 );
  twobit_invoke( 1 );
  twobit_label( 1006, compiled_block_3_1006 );
  twobit_load( 0, 0 );
  twobit_global( 14 ); /* values */
  twobit_pop( 0 );
  twobit_invoke( 0 );
  twobit_epilogue();
}


static RTYPE compiled_start_3_1( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_3_2( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_global( 1 ); /* values */
  twobit_invoke( 0 );
  twobit_epilogue();
}


static RTYPE compiled_start_3_3( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_lambda( compiled_start_3_4, 2, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_global( 3 ); /* values */
  twobit_setrtn( 1003, compiled_block_3_1003 );
  twobit_invoke( 0 );
  twobit_label( 1003, compiled_block_3_1003 );
  twobit_load( 0, 0 );
  twobit_load( 1, 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_global( 4 ); /* apply */
  twobit_pop( 1 );
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_3_4( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_global( 1 ); /* values */
  twobit_invoke( 0 );
  twobit_epilogue();
}


RTYPE twobit_thunk_98e5ca0f3fc1ac0a36f4b148b5063aad_2(CONT_PARAMS) {
  RETURN_RTYPE(compiled_start_3_0(CONT_ACTUALS));
}
codeptr_t CDECL twobit_load_table[] = { 
  twobit_thunk_98e5ca0f3fc1ac0a36f4b148b5063aad_0,
  twobit_thunk_98e5ca0f3fc1ac0a36f4b148b5063aad_1,
  twobit_thunk_98e5ca0f3fc1ac0a36f4b148b5063aad_2,
  0  /* The table may be empty; some compilers complain */
};
