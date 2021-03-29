/* Generated from /home/henchman/larcenytest/larceny-petit-Nightly-2017-08-06/larceny_src/lib/R6RS/larceny/r7r6.slfasl */
#include "petit-instr.h"

static RTYPE compiled_block_1_1023( CONT_PARAMS );
static RTYPE compiled_block_1_1022( CONT_PARAMS );
static RTYPE compiled_start_1_0( CONT_PARAMS );
static RTYPE compiled_start_1_3( CONT_PARAMS );
static RTYPE compiled_block_1_1019( CONT_PARAMS );
static RTYPE compiled_block_1_1010( CONT_PARAMS );
static RTYPE compiled_start_1_2( CONT_PARAMS );
static RTYPE compiled_block_1_1012( CONT_PARAMS );
static RTYPE compiled_block_1_1014( CONT_PARAMS );
static RTYPE compiled_block_1_1016( CONT_PARAMS );
static RTYPE compiled_block_1_1015( CONT_PARAMS );
static RTYPE compiled_start_1_5( CONT_PARAMS );
static RTYPE compiled_block_1_1003( CONT_PARAMS );
static RTYPE compiled_block_1_1005( CONT_PARAMS );
static RTYPE compiled_block_1_1007( CONT_PARAMS );
static RTYPE compiled_block_1_1006( CONT_PARAMS );
static RTYPE compiled_start_1_4( CONT_PARAMS );
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
  twobit_setrtn( 1022, compiled_block_1_1022 );
  twobit_invoke( 8 );
  twobit_label( 1022, compiled_block_1_1022 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_global( 13 ); /* ex:register-library! */
  twobit_setrtn( 1023, compiled_block_1_1023 );
  twobit_invoke( 1 );
  twobit_label( 1023, compiled_block_1_1023 );
  twobit_load( 0, 0 );
  twobit_global( 14 ); /* values */
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
  twobit_lambda( compiled_start_1_4, 2, 0 );
  twobit_setreg( 2 );
  twobit_const( 3 );
  twobit_setreg( 1 );
  twobit_global( 4 ); /* ex:register-macro! */
  twobit_setrtn( 1010, compiled_block_1_1010 );
  twobit_invoke( 2 );
  twobit_label( 1010, compiled_block_1_1010 );
  twobit_load( 0, 0 );
  twobit_lambda( compiled_start_1_5, 6, 0 );
  twobit_setreg( 2 );
  twobit_const( 7 );
  twobit_setreg( 1 );
  twobit_global( 4 ); /* ex:register-macro! */
  twobit_setrtn( 1019, compiled_block_1_1019 );
  twobit_invoke( 2 );
  twobit_label( 1019, compiled_block_1_1019 );
  twobit_load( 0, 0 );
  twobit_global( 8 ); /* values */
  twobit_pop( 0 );
  twobit_invoke( 0 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_4( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_reg( 1 );
  twobit_op1_branchf_611( 1003, compiled_block_1_1003 ); /* internal:branchf-pair? */
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1005, compiled_block_1_1005 ); /* internal:branchf-pair? */
  twobit_save( 3 );
  twobit_store( 0, 0 );
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_store( 3, 2 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
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
  twobit_setrtn( 1006, compiled_block_1_1006 );
  twobit_invoke( 5 );
  twobit_label( 1006, compiled_block_1_1006 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_load( 3, 1 );
  twobit_stack( 2 );
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
  twobit_setrtn( 1007, compiled_block_1_1007 );
  twobit_invoke( 5 );
  twobit_label( 1007, compiled_block_1_1007 );
  twobit_load( 0, 0 );
  twobit_load( 3, 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_pop( 3 );
  twobit_return();
  twobit_label( 1005, compiled_block_1_1005 );
  twobit_global( 6 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1003, compiled_block_1_1003 );
  twobit_global( 6 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_5( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_reg( 1 );
  twobit_op1_branchf_611( 1012, compiled_block_1_1012 ); /* internal:branchf-pair? */
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1014, compiled_block_1_1014 ); /* internal:branchf-pair? */
  twobit_save( 3 );
  twobit_store( 0, 0 );
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_store( 3, 2 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
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
  twobit_setrtn( 1015, compiled_block_1_1015 );
  twobit_invoke( 5 );
  twobit_label( 1015, compiled_block_1_1015 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_load( 3, 1 );
  twobit_stack( 2 );
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
  twobit_setrtn( 1016, compiled_block_1_1016 );
  twobit_invoke( 5 );
  twobit_label( 1016, compiled_block_1_1016 );
  twobit_load( 0, 0 );
  twobit_load( 3, 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_pop( 3 );
  twobit_return();
  twobit_label( 1014, compiled_block_1_1014 );
  twobit_global( 6 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1012, compiled_block_1_1012 );
  twobit_global( 6 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_3( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_global( 1 ); /* values */
  twobit_invoke( 0 );
  twobit_epilogue();
}


RTYPE twobit_thunk_3ae54f5e777523060adad131f703fb46_0(CONT_PARAMS) {
  RETURN_RTYPE(compiled_start_1_0(CONT_ACTUALS));
}
codeptr_t CDECL twobit_load_table[] = { 
  twobit_thunk_3ae54f5e777523060adad131f703fb46_0,
  0  /* The table may be empty; some compilers complain */
};
