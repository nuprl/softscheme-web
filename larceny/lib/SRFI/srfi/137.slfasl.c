/* Generated from /home/henchman/larcenytest/larceny-petit-Nightly-2017-08-06/larceny_src/lib/SRFI/srfi/137.slfasl */
#include "petit-instr.h"

static RTYPE compiled_block_1_1030( CONT_PARAMS );
static RTYPE compiled_block_1_1029( CONT_PARAMS );
static RTYPE compiled_start_1_0( CONT_PARAMS );
static RTYPE compiled_block_1_1026( CONT_PARAMS );
static RTYPE compiled_block_1_1007( CONT_PARAMS );
static RTYPE compiled_block_1_1006( CONT_PARAMS );
static RTYPE compiled_block_1_1005( CONT_PARAMS );
static RTYPE compiled_block_1_1004( CONT_PARAMS );
static RTYPE compiled_block_1_1003( CONT_PARAMS );
static RTYPE compiled_start_1_3( CONT_PARAMS );
static RTYPE compiled_start_1_7( CONT_PARAMS );
static RTYPE compiled_start_1_6( CONT_PARAMS );
static RTYPE compiled_start_1_5( CONT_PARAMS );
static RTYPE compiled_start_1_12( CONT_PARAMS );
static RTYPE compiled_block_1_1019( CONT_PARAMS );
static RTYPE compiled_block_1_1021( CONT_PARAMS );
static RTYPE compiled_block_1_1020( CONT_PARAMS );
static RTYPE compiled_block_1_1018( CONT_PARAMS );
static RTYPE compiled_start_1_11( CONT_PARAMS );
static RTYPE compiled_block_1_1013( CONT_PARAMS );
static RTYPE compiled_block_1_1017( CONT_PARAMS );
static RTYPE compiled_block_1_1015( CONT_PARAMS );
static RTYPE compiled_block_1_1014( CONT_PARAMS );
static RTYPE compiled_block_1_1011( CONT_PARAMS );
static RTYPE compiled_start_1_10( CONT_PARAMS );
static RTYPE compiled_start_1_9( CONT_PARAMS );
static RTYPE compiled_block_1_1009( CONT_PARAMS );
static RTYPE compiled_start_1_8( CONT_PARAMS );
static RTYPE compiled_start_1_4( CONT_PARAMS );
static RTYPE compiled_start_1_2( CONT_PARAMS );
static RTYPE compiled_start_1_1( CONT_PARAMS );

static RTYPE compiled_start_1_0( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_save( 0 );
  twobit_store( 0, 0 );
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 2 ); /*  make-type~1pxGHH~48387 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 3 ); /*  %make-type~1pxGHH~48386 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 4 ); /*  instance-payload~1pxGHH~48385 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 5 ); /*  instance-ancestors~1pxGHH~48384 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 6 ); /*  instance?~1pxGHH~48383 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 7 ); /*  make-instance~1pxGHH~48382 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 8 ); /*  <instance>~1pxGHH~48381 */
  twobit_lambda( compiled_start_1_1, 10, 0 );
  twobit_setreg( 2 );
  twobit_lambda( compiled_start_1_2, 12, 0 );
  twobit_setreg( 4 );
  twobit_lambda( compiled_start_1_3, 14, 0 );
  twobit_setreg( 3 );
  twobit_movereg( 3, 7 );
  twobit_movereg( 4, 6 );
  twobit_const( 15 );
  twobit_setreg( 1 );
  twobit_const( 16 );
  twobit_setreg( 3 );
  twobit_const( 17 );
  twobit_setreg( 4 );
  twobit_const( 18 );
  twobit_setreg( 5 );
  twobit_const( 19 );
  twobit_setreg( 8 );
  twobit_global( 20 ); /* ex:make-library */
  twobit_setrtn( 1029, compiled_block_1_1029 );
  twobit_invoke( 8 );
  twobit_label( 1029, compiled_block_1_1029 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_global( 21 ); /* ex:register-library! */
  twobit_setrtn( 1030, compiled_block_1_1030 );
  twobit_invoke( 1 );
  twobit_label( 1030, compiled_block_1_1030 );
  twobit_load( 0, 0 );
  twobit_global( 22 ); /* values */
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
  twobit_save( 8 );
  twobit_store( 0, 0 );
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 2 ); /*  make-type~1pxGHH~48387 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 3 ); /*  %make-type~1pxGHH~48386 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 4 ); /*  instance-payload~1pxGHH~48385 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 5 ); /*  instance-ancestors~1pxGHH~48384 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 6 ); /*  instance?~1pxGHH~48383 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 7 ); /*  make-instance~1pxGHH~48382 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 8 ); /*  <instance>~1pxGHH~48381 */
  twobit_lambda( compiled_start_1_4, 10, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 8 );
  twobit_op1_4(); /* undefined */
  twobit_op1_4(); /* undefined */
  twobit_setreg( 3 );
  twobit_op1_4(); /* undefined */
  twobit_setreg( 2 );
  twobit_op1_4(); /* undefined */
  twobit_setreg( 1 );
  twobit_op1_4(); /* undefined */
  twobit_setreg( 31 );
  twobit_op1_4(); /* undefined */
  twobit_setreg( 30 );
  twobit_op1_4(); /* undefined */
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 29 );
  twobit_store( 29, 7 );
  twobit_reg( 30 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 30 );
  twobit_store( 30, 6 );
  twobit_reg( 31 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 31 );
  twobit_store( 31, 5 );
  twobit_reg( 1 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 1 );
  twobit_store( 1, 4 );
  twobit_reg( 2 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 2 );
  twobit_store( 2, 3 );
  twobit_reg( 3 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 3 );
  twobit_store( 3, 1 );
  twobit_const( 11 );
  twobit_setreg( 1 );
  twobit_const( 12 );
  twobit_setreg( 2 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_setreg( 3 );
  twobit_global( 13 ); /* make-rtd */
  twobit_setrtn( 1003, compiled_block_1_1003 );
  twobit_invoke( 3 );
  twobit_label( 1003, compiled_block_1_1003 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_movereg( 4, 1 );
  twobit_const( 14 );
  twobit_setreg( 2 );
  twobit_global( 15 ); /* rtd-constructor */
  twobit_setrtn( 1004, compiled_block_1_1004 );
  twobit_invoke( 2 );
  twobit_label( 1004, compiled_block_1_1004 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_stack( 1 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_load( 1, 2 );
  twobit_global( 16 ); /* rtd-predicate */
  twobit_setrtn( 1005, compiled_block_1_1005 );
  twobit_invoke( 1 );
  twobit_label( 1005, compiled_block_1_1005 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_stack( 3 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_load( 1, 2 );
  twobit_const( 17 );
  twobit_setreg( 2 );
  twobit_global( 18 ); /* rtd-accessor */
  twobit_setrtn( 1006, compiled_block_1_1006 );
  twobit_invoke( 2 );
  twobit_label( 1006, compiled_block_1_1006 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_stack( 4 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_load( 1, 2 );
  twobit_const( 19 );
  twobit_setreg( 2 );
  twobit_global( 18 ); /* rtd-accessor */
  twobit_setrtn( 1007, compiled_block_1_1007 );
  twobit_invoke( 2 );
  twobit_label( 1007, compiled_block_1_1007 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_stack( 5 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_load( 5, 1 );
  twobit_load( 4, 4 );
  twobit_load( 3, 3 );
  twobit_load( 2, 5 );
  twobit_load( 1, 6 );
  twobit_lambda( compiled_start_1_5, 21, 5 );
  twobit_setreg( 4 );
  twobit_reg( 1 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_lambda( compiled_start_1_6, 23, 1 );
  twobit_setreg( 4 );
  twobit_stack( 7 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_global( 24 ); /* values */
  twobit_setrtn( 1026, compiled_block_1_1026 );
  twobit_invoke( 0 );
  twobit_label( 1026, compiled_block_1_1026 );
  twobit_load( 0, 0 );
  twobit_load( 1, 8 );
  twobit_store( 1, 6 );
  twobit_load( 1, 7 );
  twobit_lambda( compiled_start_1_7, 26, 1 );
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 2 );
  twobit_load( 1, 6 );
  twobit_global( 27 ); /* apply */
  twobit_pop( 8 );
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_4( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_reg( 1 );
  twobit_setglbl( 1 ); /*  make-type~1pxGHH~48387 */
  twobit_global( 2 ); /* values */
  twobit_invoke( 0 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_5( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_save( 4 );
  twobit_store( 0, 0 );
  twobit_store( 1, 2 );
  twobit_global( 1 ); /* ex:undefined */
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_movereg( 4, 1 );
  twobit_lambda( compiled_start_1_8, 3, 2 );
  twobit_setreg( 3 );
  twobit_movereg( 4, 1 );
  twobit_lambda( compiled_start_1_9, 5, 1 );
  twobit_setreg( 2 );
  twobit_movereg( 2, 1 );
  twobit_lambda( compiled_start_1_10, 7, 1 );
  twobit_setreg( 31 );
  twobit_movereg( 31, 1 );
  twobit_lambda( compiled_start_1_11, 9, 1 );
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_load( 1, 1 );
  twobit_lambda( compiled_start_1_12, 11, 1 );
  twobit_setreg( 1 );
  twobit_store( 1, 4 );
  twobit_load( 4, 2 );
  twobit_reg( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_movereg( 3, 1 );
  twobit_stack( 1 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_movereg( 31, 3 );
  twobit_load( 4, 3 );
  twobit_load( 5, 4 );
  twobit_global( 12 ); /* values */
  twobit_pop( 4 );
  twobit_invoke( 5 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_8( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argsge( 0 );
  twobit_reg( 1 );
  twobit_op1_branchf_610( 1009, compiled_block_1_1009 ); /* internal:branchf-null? */
  twobit_lexical( 0, 2 );
  twobit_return();
  twobit_label( 1009, compiled_block_1_1009 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_1_9( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_movereg( 1, 2 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 1 );
  twobit_lexical( 1, 5 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_10( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_store( 1, 1 );
  twobit_lexical( 1, 3 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_setrtn( 1011, compiled_block_1_1011 );
  twobit_invoke( 1 );
  twobit_label( 1011, compiled_block_1_1011 );
  twobit_load( 0, 0 );
  twobit_branchf( 1013, compiled_block_1_1013 );
  twobit_lexical( 1, 4 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_load( 1, 1 );
  twobit_reg( 4 );
  twobit_setrtn( 1014, compiled_block_1_1014 );
  twobit_invoke( 1 );
  twobit_label( 1014, compiled_block_1_1014 );
  twobit_load( 0, 0 );
  twobit_setreg( 2 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_global( 1 ); /* memq */
  twobit_setrtn( 1015, compiled_block_1_1015 );
  twobit_invoke( 2 );
  twobit_label( 1015, compiled_block_1_1015 );
  twobit_load( 0, 0 );
  twobit_branchf( 1017, compiled_block_1_1017 );
  twobit_imm_const( TRUE_CONST ); /* #t */
  twobit_pop( 1 );
  twobit_return();
  twobit_label( 1017, compiled_block_1_1017 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_pop( 1 );
  twobit_return();
  twobit_label( 1013, compiled_block_1_1013 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_pop( 1 );
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_1_11( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_store( 1, 1 );
  twobit_lexical( 0, 1 );
  twobit_setrtn( 1018, compiled_block_1_1018 );
  twobit_invoke( 1 );
  twobit_label( 1018, compiled_block_1_1018 );
  twobit_load( 0, 0 );
  twobit_branchf( 1020, compiled_block_1_1020 );
  twobit_op1_3(); /* unspecified */
  twobit_skip( 1019, compiled_block_1_1019 );
  twobit_label( 1020, compiled_block_1_1020 );
  twobit_load( 2, 1 );
  twobit_const( 1 );
  twobit_setreg( 1 );
  twobit_global( 2 ); /* error */
  twobit_setrtn( 1021, compiled_block_1_1021 );
  twobit_invoke( 2 );
  twobit_label( 1021, compiled_block_1_1021 );
  twobit_load( 0, 0 );
  twobit_label( 1019, compiled_block_1_1019 );
  twobit_lexical( 1, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_load( 1, 1 );
  twobit_reg( 4 );
  twobit_pop( 1 );
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_12( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_movereg( 1, 2 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 1 );
  twobit_lexical( 1, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_6( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_movereg( 1, 2 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 1 );
  twobit_reg( 4 );
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_7( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_invoke( 1 );
  twobit_epilogue();
}


RTYPE twobit_thunk_251f3b41750582bc0b5ac92a82a2d7f3_0(CONT_PARAMS) {
  RETURN_RTYPE(compiled_start_1_0(CONT_ACTUALS));
}
codeptr_t CDECL twobit_load_table[] = { 
  twobit_thunk_251f3b41750582bc0b5ac92a82a2d7f3_0,
  0  /* The table may be empty; some compilers complain */
};
