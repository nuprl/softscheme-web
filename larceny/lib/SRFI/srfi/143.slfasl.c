/* Generated from /home/henchman/larcenytest/larceny-petit-Nightly-2017-08-06/larceny_src/lib/SRFI/srfi/143.slfasl */
#include "petit-instr.h"

static RTYPE compiled_block_1_1015( CONT_PARAMS );
static RTYPE compiled_block_1_1014( CONT_PARAMS );
static RTYPE compiled_start_1_0( CONT_PARAMS );
static RTYPE compiled_block_1_1010( CONT_PARAMS );
static RTYPE compiled_block_1_1005( CONT_PARAMS );
static RTYPE compiled_block_1_1004( CONT_PARAMS );
static RTYPE compiled_block_1_1003( CONT_PARAMS );
static RTYPE compiled_start_1_3( CONT_PARAMS );
static RTYPE compiled_start_1_8( CONT_PARAMS );
static RTYPE compiled_start_1_7( CONT_PARAMS );
static RTYPE compiled_block_1_1007( CONT_PARAMS );
static RTYPE compiled_block_1_1008( CONT_PARAMS );
static RTYPE compiled_start_1_6( CONT_PARAMS );
static RTYPE compiled_start_1_5( CONT_PARAMS );
static RTYPE compiled_start_1_4( CONT_PARAMS );
static RTYPE compiled_start_1_2( CONT_PARAMS );
static RTYPE compiled_start_1_1( CONT_PARAMS );

static RTYPE compiled_start_1_0( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_save( 0 );
  twobit_store( 0, 0 );
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 2 ); /*  fxcopy-bit~1pxGHH~37330 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 3 ); /*  fxbit-set?~1pxGHH~37329 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 4 ); /*  fx-least~1pxGHH~37328 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 5 ); /*  fx-greatest~1pxGHH~37327 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 6 ); /*  fx-width~1pxGHH~37326 */
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
  twobit_setrtn( 1014, compiled_block_1_1014 );
  twobit_invoke( 8 );
  twobit_label( 1014, compiled_block_1_1014 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_global( 19 ); /* ex:register-library! */
  twobit_setrtn( 1015, compiled_block_1_1015 );
  twobit_invoke( 1 );
  twobit_label( 1015, compiled_block_1_1015 );
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
  twobit_save( 7 );
  twobit_store( 0, 0 );
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 2 ); /*  fxcopy-bit~1pxGHH~37330 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 3 ); /*  fxbit-set?~1pxGHH~37329 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 4 ); /*  fx-least~1pxGHH~37328 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 5 ); /*  fx-greatest~1pxGHH~37327 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 6 ); /*  fx-width~1pxGHH~37326 */
  twobit_lambda( compiled_start_1_4, 8, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_op1_4(); /* undefined */
  twobit_op1_4(); /* undefined */
  twobit_op1_4(); /* undefined */
  twobit_op1_4(); /* undefined */
  twobit_setreg( 3 );
  twobit_op1_4(); /* undefined */
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 2 );
  twobit_store( 2, 2 );
  twobit_reg( 3 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 3 );
  twobit_store( 3, 1 );
  twobit_global( 9 ); /* fixnum-width */
  twobit_setrtn( 1003, compiled_block_1_1003 );
  twobit_invoke( 0 );
  twobit_label( 1003, compiled_block_1_1003 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 6 );
  twobit_global( 10 ); /* greatest-fixnum */
  twobit_setrtn( 1004, compiled_block_1_1004 );
  twobit_invoke( 0 );
  twobit_label( 1004, compiled_block_1_1004 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 5 );
  twobit_global( 11 ); /* least-fixnum */
  twobit_setrtn( 1005, compiled_block_1_1005 );
  twobit_invoke( 0 );
  twobit_label( 1005, compiled_block_1_1005 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 4 );
  twobit_lambda( compiled_start_1_5, 13, 0 );
  twobit_setreg( 3 );
  twobit_stack( 1 );
  twobit_op2_84( 3 ); /* cell-set! */
  twobit_lambda( compiled_start_1_6, 15, 0 );
  twobit_setreg( 3 );
  twobit_stack( 2 );
  twobit_op2_84( 3 ); /* cell-set! */
  twobit_global( 16 ); /* values */
  twobit_setrtn( 1010, compiled_block_1_1010 );
  twobit_invoke( 0 );
  twobit_label( 1010, compiled_block_1_1010 );
  twobit_load( 0, 0 );
  twobit_load( 1, 3 );
  twobit_store( 1, 7 );
  twobit_load( 1, 1 );
  twobit_lambda( compiled_start_1_7, 18, 1 );
  twobit_setreg( 4 );
  twobit_load( 1, 2 );
  twobit_lambda( compiled_start_1_8, 20, 1 );
  twobit_imm_const_setreg( NIL_CONST, 2 ); /* () */
  twobit_op2_58( 2 ); /* cons */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 4 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 5 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 6 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 2 );
  twobit_load( 1, 7 );
  twobit_global( 21 ); /* apply */
  twobit_pop( 7 );
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_4( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 5 );
  twobit_reg( 1 );
  twobit_setglbl( 1 ); /*  fx-width~1pxGHH~37326 */
  twobit_reg( 2 );
  twobit_setglbl( 2 ); /*  fx-greatest~1pxGHH~37327 */
  twobit_reg( 3 );
  twobit_setglbl( 3 ); /*  fx-least~1pxGHH~37328 */
  twobit_reg( 4 );
  twobit_setglbl( 4 ); /*  fxbit-set?~1pxGHH~37329 */
  twobit_reg( 5 );
  twobit_setglbl( 5 ); /*  fxcopy-bit~1pxGHH~37330 */
  twobit_global( 6 ); /* values */
  twobit_invoke( 0 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_5( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_store( 1, 1 );
  twobit_movereg( 2, 1 );
  twobit_load( 2, 1 );
  twobit_global( 1 ); /* fxbit-set? */
  twobit_pop( 1 );
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_6( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 3 );
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_store( 2, 1 );
  twobit_reg( 3 );
  twobit_branchf( 1008, compiled_block_1_1008 );
  twobit_imm_const( fixnum(1) ); /* 1 */
  twobit_setreg( 3 );
  twobit_skip( 1007, compiled_block_1_1007 );
  twobit_label( 1008, compiled_block_1_1008 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 3 );
  twobit_label( 1007, compiled_block_1_1007 );
  twobit_movereg( 1, 2 );
  twobit_load( 1, 1 );
  twobit_global( 1 ); /* fxcopy-bit */
  twobit_pop( 1 );
  twobit_invoke( 3 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_7( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_8( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 3 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_invoke( 3 );
  twobit_epilogue();
}


RTYPE twobit_thunk_3619d6ede02ffe7ec14790d672ba255b_0(CONT_PARAMS) {
  RETURN_RTYPE(compiled_start_1_0(CONT_ACTUALS));
}
codeptr_t CDECL twobit_load_table[] = { 
  twobit_thunk_3619d6ede02ffe7ec14790d672ba255b_0,
  0  /* The table may be empty; some compilers complain */
};
