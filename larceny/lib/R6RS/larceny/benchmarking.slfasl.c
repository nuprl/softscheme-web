/* Generated from /home/henchman/larcenytest/larceny-petit-Nightly-2017-08-06/larceny_src/lib/R6RS/larceny/benchmarking.slfasl */
#include "petit-instr.h"

static RTYPE compiled_block_1_1018( CONT_PARAMS );
static RTYPE compiled_block_1_1017( CONT_PARAMS );
static RTYPE compiled_start_1_0( CONT_PARAMS );
static RTYPE compiled_start_1_3( CONT_PARAMS );
static RTYPE compiled_start_1_4( CONT_PARAMS );
static RTYPE compiled_start_1_5( CONT_PARAMS );
static RTYPE compiled_block_1_1013( CONT_PARAMS );
static RTYPE compiled_start_1_2( CONT_PARAMS );
static RTYPE compiled_block_1_1003( CONT_PARAMS );
static RTYPE compiled_block_1_1005( CONT_PARAMS );
static RTYPE compiled_block_1_1007( CONT_PARAMS );
static RTYPE compiled_block_1_1009( CONT_PARAMS );
static RTYPE compiled_block_1_1008( CONT_PARAMS );
static RTYPE compiled_start_1_6( CONT_PARAMS );
static RTYPE compiled_start_1_1( CONT_PARAMS );

static RTYPE compiled_start_1_0( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_save( 0 );
  twobit_store( 0, 0 );
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 2 ); /*  time-it~1pxGHH~24075 */
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
  twobit_setrtn( 1017, compiled_block_1_1017 );
  twobit_invoke( 8 );
  twobit_label( 1017, compiled_block_1_1017 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_global( 15 ); /* ex:register-library! */
  twobit_setrtn( 1018, compiled_block_1_1018 );
  twobit_invoke( 1 );
  twobit_label( 1018, compiled_block_1_1018 );
  twobit_load( 0, 0 );
  twobit_global( 16 ); /* values */
  twobit_pop( 0 );
  twobit_invoke( 0 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_1( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_const( 1 );
  twobit_setreg( 1 );
  twobit_global( 2 ); /* ex:uncompress */
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_2( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_save( 0 );
  twobit_store( 0, 0 );
  twobit_lambda( compiled_start_1_6, 2, 0 );
  twobit_setreg( 2 );
  twobit_const( 3 );
  twobit_setreg( 1 );
  twobit_global( 4 ); /* ex:register-macro! */
  twobit_setrtn( 1013, compiled_block_1_1013 );
  twobit_invoke( 2 );
  twobit_label( 1013, compiled_block_1_1013 );
  twobit_load( 0, 0 );
  twobit_global( 5 ); /* values */
  twobit_pop( 0 );
  twobit_invoke( 0 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_6( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_reg( 1 );
  twobit_op1_branchf_611( 1003, compiled_block_1_1003 ); /* internal:branchf-pair? */
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1005, compiled_block_1_1005 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_op1_branchf_610( 1007, compiled_block_1_1007 ); /* internal:branchf-null? */
  twobit_save( 2 );
  twobit_store( 0, 0 );
  twobit_store( 3, 1 );
  twobit_const( 1 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 2 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 3 );
  twobit_setreg( 5 );
  twobit_global( 4 ); /* ex:syntax-rename */
  twobit_setrtn( 1008, compiled_block_1_1008 );
  twobit_invoke( 5 );
  twobit_label( 1008, compiled_block_1_1008 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_stack( 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 1 );
  twobit_const( 5 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 2 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 3 );
  twobit_setreg( 5 );
  twobit_global( 4 ); /* ex:syntax-rename */
  twobit_setrtn( 1009, compiled_block_1_1009 );
  twobit_invoke( 5 );
  twobit_label( 1009, compiled_block_1_1009 );
  twobit_load( 0, 0 );
  twobit_load( 3, 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_pop( 2 );
  twobit_return();
  twobit_label( 1007, compiled_block_1_1007 );
  twobit_global( 6 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1005, compiled_block_1_1005 );
  twobit_global( 6 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1003, compiled_block_1_1003 );
  twobit_global( 6 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_3( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 2 ); /*  time-it~1pxGHH~24075 */
  twobit_lambda( compiled_start_1_4, 4, 0 );
  twobit_setglbl( 2 ); /*  time-it~1pxGHH~24075 */
  twobit_global( 5 ); /* values */
  twobit_invoke( 0 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_4( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_movereg( 2, 3 );
  twobit_lambda( compiled_start_1_5, 2, 0 );
  twobit_setreg( 4 );
  twobit_imm_const( fixnum(1) ); /* 1 */
  twobit_setreg( 2 );
  twobit_global( 3 ); /* run-benchmark */
  twobit_invoke( 4 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_5( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argsge( 0 );
  twobit_imm_const( TRUE_CONST ); /* #t */
  twobit_return();
  twobit_epilogue();
}


RTYPE twobit_thunk_075d36adfeedb6faf6c0da3668461efa_0(CONT_PARAMS) {
  RETURN_RTYPE(compiled_start_1_0(CONT_ACTUALS));
}
codeptr_t CDECL twobit_load_table[] = { 
  twobit_thunk_075d36adfeedb6faf6c0da3668461efa_0,
  0  /* The table may be empty; some compilers complain */
};
