/* Generated from /home/henchman/larcenytest/larceny-petit-Nightly-2017-08-06/larceny_src/lib/R7RS/scheme/time.slfasl */
#include "petit-instr.h"

static RTYPE compiled_block_1_1016( CONT_PARAMS );
static RTYPE compiled_block_1_1015( CONT_PARAMS );
static RTYPE compiled_start_1_0( CONT_PARAMS );
static RTYPE compiled_block_1_1013( CONT_PARAMS );
static RTYPE compiled_block_1_1005( CONT_PARAMS );
static RTYPE compiled_block_1_1009( CONT_PARAMS );
static RTYPE compiled_block_1_1006( CONT_PARAMS );
static RTYPE compiled_block_1_1004( CONT_PARAMS );
static RTYPE compiled_block_1_1003( CONT_PARAMS );
static RTYPE compiled_start_1_3( CONT_PARAMS );
static RTYPE compiled_temp_1_12( CONT_PARAMS );
static RTYPE compiled_temp_1_11( CONT_PARAMS );
static RTYPE compiled_temp_1_10( CONT_PARAMS );
static RTYPE compiled_start_1_9( CONT_PARAMS );
static RTYPE compiled_start_1_8( CONT_PARAMS );
static RTYPE compiled_temp_1_18( CONT_PARAMS );
static RTYPE compiled_temp_1_17( CONT_PARAMS );
static RTYPE compiled_temp_1_16( CONT_PARAMS );
static RTYPE compiled_temp_1_15( CONT_PARAMS );
static RTYPE compiled_temp_1_14( CONT_PARAMS );
static RTYPE compiled_block_1_1011( CONT_PARAMS );
static RTYPE compiled_start_1_13( CONT_PARAMS );
static RTYPE compiled_start_1_7( CONT_PARAMS );
static RTYPE compiled_temp_1_19( CONT_PARAMS );
static RTYPE compiled_block_1_1007( CONT_PARAMS );
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
  twobit_setglbl( 2 ); /*  current-utc-time-continuation-microseconds~1pxGHH~9056 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 3 ); /*  current-jiffy~1pxGHH~9055 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 4 ); /*  arbitrary-baseline~1pxGHH~9054 */
  twobit_lambda( compiled_start_1_1, 6, 0 );
  twobit_setreg( 2 );
  twobit_lambda( compiled_start_1_2, 8, 0 );
  twobit_setreg( 4 );
  twobit_lambda( compiled_start_1_3, 10, 0 );
  twobit_setreg( 3 );
  twobit_movereg( 3, 7 );
  twobit_movereg( 4, 6 );
  twobit_const( 11 );
  twobit_setreg( 1 );
  twobit_const( 12 );
  twobit_setreg( 3 );
  twobit_const( 13 );
  twobit_setreg( 4 );
  twobit_const( 14 );
  twobit_setreg( 5 );
  twobit_const( 15 );
  twobit_setreg( 8 );
  twobit_global( 16 ); /* ex:make-library */
  twobit_setrtn( 1015, compiled_block_1_1015 );
  twobit_invoke( 8 );
  twobit_label( 1015, compiled_block_1_1015 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_global( 17 ); /* ex:register-library! */
  twobit_setrtn( 1016, compiled_block_1_1016 );
  twobit_invoke( 1 );
  twobit_label( 1016, compiled_block_1_1016 );
  twobit_load( 0, 0 );
  twobit_global( 18 ); /* values */
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
  twobit_save( 4 );
  twobit_store( 0, 0 );
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 2 ); /*  current-utc-time-continuation-microseconds~1pxGHH~9056 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 3 ); /*  current-jiffy~1pxGHH~9055 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 4 ); /*  arbitrary-baseline~1pxGHH~9054 */
  twobit_lambda( compiled_start_1_4, 6, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_op1_4(); /* undefined */
  twobit_op1_4(); /* undefined */
  twobit_op1_4(); /* undefined */
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 3 );
  twobit_store( 3, 2 );
  twobit_global( 7 ); /*  larceny:current-utc-time~1pxGHH~3653 */
  twobit_setreg( 1 );
  twobit_lambda( compiled_start_1_5, 9, 0 );
  twobit_setreg( 2 );
  twobit_global( 10 ); /* call-with-values */
  twobit_setrtn( 1003, compiled_block_1_1003 );
  twobit_invoke( 2 );
  twobit_label( 1003, compiled_block_1_1003 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_global( 11 ); /*  jiffies-per-second~1pxGHH~3654 */
  twobit_setrtn( 1004, compiled_block_1_1004 );
  twobit_invoke( 0 );
  twobit_label( 1004, compiled_block_1_1004 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op2imm_branchf_640( fixnum(1), 1006, compiled_block_1_1006 ); /* internal:branchf-eq?/imm */
  twobit_load( 1, 1 );
  twobit_lambda( compiled_start_1_6, 13, 1 );
  twobit_skip( 1005, compiled_block_1_1005 );
  twobit_label( 1006, compiled_block_1_1006 );
  twobit_imm_const( fixnum(1000000) ); /* 1000000 */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op2_branchf_624( 3, 1009, compiled_block_1_1009 ); /* internal:branchf-eq? */
  twobit_load( 1, 2 );
  twobit_lambda( compiled_start_1_7, 15, 1 );
  twobit_skip( 1005, compiled_block_1_1005 );
  twobit_label( 1009, compiled_block_1_1009 );
  twobit_load( 1, 1 );
  twobit_lambda( compiled_start_1_8, 17, 1 );
  twobit_label( 1005, compiled_block_1_1005 );
  twobit_setreg( 3 );
  twobit_store( 3, 4 );
  twobit_load( 1, 1 );
  twobit_lambda( compiled_start_1_9, 19, 1 );
  twobit_setreg( 4 );
  twobit_stack( 2 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_global( 20 ); /* values */
  twobit_setrtn( 1013, compiled_block_1_1013 );
  twobit_invoke( 0 );
  twobit_label( 1013, compiled_block_1_1013 );
  twobit_load( 0, 0 );
  twobit_load( 1, 3 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 4 );
  twobit_stack( 4 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 2 );
  twobit_global( 21 ); /* apply */
  twobit_pop( 4 );
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_4( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_reg( 1 );
  twobit_setglbl( 1 ); /*  current-jiffy~1pxGHH~9055 */
  twobit_global( 2 ); /* values */
  twobit_invoke( 0 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_5( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_reg( 1 );
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_1_6( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_save( 0 );
  twobit_store( 0, 0 );
  twobit_global( 1 ); /* current-seconds */
  twobit_setrtn( 1007, compiled_block_1_1007 );
  twobit_invoke( 0 );
  twobit_label( 1007, compiled_block_1_1007 );
  twobit_load( 0, 0 );
  twobit_setreg( 3 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 4 );
  twobit_reg( 3 );
  twobit_op2_62( 4, 19, compiled_temp_1_19 ); /* - */
  twobit_pop( 0 );
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_1_7( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_global( 1 ); /*  larceny:current-utc-time~1pxGHH~3653 */
  twobit_setreg( 1 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 2 );
  twobit_global( 2 ); /* call-with-values */
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_8( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_global( 1 ); /*  larceny:current-utc-time~1pxGHH~3653 */
  twobit_setreg( 1 );
  twobit_lambda( compiled_start_1_13, 3, 0 );
  twobit_setreg( 2 );
  twobit_global( 4 ); /* call-with-values */
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_13( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_save( 2 );
  twobit_store( 0, 0 );
  twobit_store( 1, 2 );
  twobit_store( 2, 1 );
  twobit_global( 1 ); /*  jiffies-per-second~1pxGHH~3654 */
  twobit_setrtn( 1011, compiled_block_1_1011 );
  twobit_invoke( 0 );
  twobit_label( 1011, compiled_block_1_1011 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_load( 3, 1 );
  twobit_reg( 4 );
  twobit_op2_63( 3, 14, compiled_temp_1_14 ); /* * */
  twobit_imm_const_setreg( fixnum(1000000), 2 ); /* 1000000 */
  twobit_op2_65( 2, 15, compiled_temp_1_15 ); /* quotient */
  twobit_setreg( 3 );
  twobit_lexical( 1, 1 );
  twobit_setreg( 2 );
  twobit_stack( 2 );
  twobit_op2_62( 2, 16, compiled_temp_1_16 ); /* - */
  twobit_setreg( 2 );
  twobit_reg( 4 );
  twobit_op2_63( 2, 17, compiled_temp_1_17 ); /* * */
  twobit_op2_61( 3, 18, compiled_temp_1_18 ); /* + */
  twobit_pop( 2 );
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_1_9( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 4 );
  twobit_reg( 1 );
  twobit_op2_62( 4, 10, compiled_temp_1_10 ); /* - */
  twobit_setreg( 4 );
  twobit_imm_const( fixnum(1000000) ); /* 1000000 */
  twobit_op2_63( 4, 11, compiled_temp_1_11 ); /* * */
  twobit_op2_61( 2, 12, compiled_temp_1_12 ); /* + */
  twobit_return();
  twobit_epilogue();
}


RTYPE twobit_thunk_ae967ceb7d153aebeca2d496db463d52_0(CONT_PARAMS) {
  RETURN_RTYPE(compiled_start_1_0(CONT_ACTUALS));
}
codeptr_t CDECL twobit_load_table[] = { 
  twobit_thunk_ae967ceb7d153aebeca2d496db463d52_0,
  0  /* The table may be empty; some compilers complain */
};
