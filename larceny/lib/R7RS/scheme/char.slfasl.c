/* Generated from /home/henchman/larcenytest/larceny-petit-Nightly-2017-08-06/larceny_src/lib/R7RS/scheme/char.slfasl */
#include "petit-instr.h"

static RTYPE compiled_block_1_1026( CONT_PARAMS );
static RTYPE compiled_block_1_1025( CONT_PARAMS );
static RTYPE compiled_start_1_0( CONT_PARAMS );
static RTYPE compiled_block_1_1013( CONT_PARAMS );
static RTYPE compiled_block_1_1019( CONT_PARAMS );
static RTYPE compiled_block_1_1023( CONT_PARAMS );
static RTYPE compiled_temp_1_8( CONT_PARAMS );
static RTYPE compiled_block_1_1020( CONT_PARAMS );
static RTYPE compiled_block_1_1021( CONT_PARAMS );
static RTYPE compiled_block_1_1017( CONT_PARAMS );
static RTYPE compiled_block_1_1003( CONT_PARAMS );
static RTYPE compiled_block_1_1015( CONT_PARAMS );
static RTYPE compiled_temp_1_7( CONT_PARAMS );
static RTYPE compiled_temp_1_6( CONT_PARAMS );
static RTYPE compiled_block_1_1012( CONT_PARAMS );
static RTYPE compiled_block_1_1002( CONT_PARAMS );
static RTYPE compiled_block_1_1008( CONT_PARAMS );
static RTYPE compiled_block_1_1007( CONT_PARAMS );
static RTYPE compiled_block_1_1006( CONT_PARAMS );
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
  twobit_setglbl( 2 ); /*  *unicode-zero-characters*~1pxGHH~8990 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 3 ); /*  digit-value~1pxGHH~8989 */
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
  twobit_setrtn( 1025, compiled_block_1_1025 );
  twobit_invoke( 8 );
  twobit_label( 1025, compiled_block_1_1025 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_global( 16 ); /* ex:register-library! */
  twobit_setrtn( 1026, compiled_block_1_1026 );
  twobit_invoke( 1 );
  twobit_label( 1026, compiled_block_1_1026 );
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
  twobit_save( 3 );
  twobit_store( 0, 0 );
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 2 ); /*  *unicode-zero-characters*~1pxGHH~8990 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 3 ); /*  digit-value~1pxGHH~8989 */
  twobit_lambda( compiled_start_1_4, 5, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_op1_4(); /* undefined */
  twobit_op1_4(); /* undefined */
  twobit_global( 6 ); /* char->integer */
  twobit_setreg( 1 );
  twobit_const( 7 );
  twobit_setreg( 2 );
  twobit_global( 8 ); /*  map~1pxGHH~1463 */
  twobit_setrtn( 1006, compiled_block_1_1006 );
  twobit_invoke( 2 );
  twobit_label( 1006, compiled_block_1_1006 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_global( 9 ); /* reverse */
  twobit_setrtn( 1007, compiled_block_1_1007 );
  twobit_invoke( 1 );
  twobit_label( 1007, compiled_block_1_1007 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_global( 10 ); /* values */
  twobit_setrtn( 1008, compiled_block_1_1008 );
  twobit_invoke( 0 );
  twobit_label( 1008, compiled_block_1_1008 );
  twobit_load( 0, 0 );
  twobit_load( 1, 1 );
  twobit_store( 1, 3 );
  twobit_load( 1, 2 );
  twobit_lambda( compiled_start_1_5, 12, 1 );
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 2 );
  twobit_load( 1, 3 );
  twobit_global( 13 ); /* apply */
  twobit_pop( 3 );
  twobit_invoke( 2 );
  twobit_label( 1002, compiled_block_1_1002 );
  twobit_reg( 2 );
  twobit_op1_branchf_610( 1012, compiled_block_1_1012 ); /* internal:branchf-null? */
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_return();
  twobit_label( 1012, compiled_block_1_1012 );
  twobit_reg_op1_check_652(reg(2),1013,compiled_block_1_1013); /* internal:check-pair? with (2 0 0) */
  twobit_reg( 2 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op2_branchf_622( 1, 6, compiled_temp_1_6, 1015, compiled_block_1_1015 ); /* internal:branchf-<= */
  twobit_reg( 1 );
  twobit_op2_62( 4, 7, compiled_temp_1_7 ); /* - */
  twobit_return();
  twobit_label( 1015, compiled_block_1_1015 );
  twobit_reg( 2 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 2 );
  twobit_branch( 1002, compiled_block_1_1002 );
  twobit_label( 1003, compiled_block_1_1003 );
  twobit_save( 2 );
  twobit_store( 0, 0 );
  twobit_store( 1, 2 );
  twobit_store( 2, 1 );
  twobit_movereg( 2, 1 );
  twobit_global( 14 ); /* char-numeric? */
  twobit_setrtn( 1017, compiled_block_1_1017 );
  twobit_invoke( 1 );
  twobit_label( 1017, compiled_block_1_1017 );
  twobit_load( 0, 0 );
  twobit_branchf( 1019, compiled_block_1_1019 );
  twobit_stack( 1 );
  twobit_op2imm_138( int_to_char(57) ); /* char<=? */
  twobit_setreg( 4 );
  twobit_load( 3, 1 );
  twobit_imm_const( int_to_char(48) ); /* #\0 */
  twobit_op2_branchf_628( 3, 1021, compiled_block_1_1021 ); /* internal:branchf-char<=? */
  twobit_reg( 4 );
  twobit_skip( 1020, compiled_block_1_1020 );
  twobit_label( 1021, compiled_block_1_1021 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1020, compiled_block_1_1020 );
  twobit_branchf( 1023, compiled_block_1_1023 );
  twobit_reg( 3 );
  twobit_op1_37(); /* char->integer */
  twobit_op2imm_131( fixnum(48), 8, compiled_temp_1_8 ); /* - */
  twobit_pop( 2 );
  twobit_return();
  twobit_label( 1023, compiled_block_1_1023 );
  twobit_reg( 3 );
  twobit_op1_37(); /* char->integer */
  twobit_setreg( 1 );
  twobit_load( 2, 2 );
  twobit_pop( 2 );
  twobit_branch( 1002, compiled_block_1_1002 );
  twobit_label( 1019, compiled_block_1_1019 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_pop( 2 );
  twobit_return();
  twobit_label( 1013, compiled_block_1_1013 );
  twobit_trap( 2, 0, 0, 0 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_4( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_reg( 1 );
  twobit_setglbl( 1 ); /*  digit-value~1pxGHH~8989 */
  twobit_global( 2 ); /* values */
  twobit_invoke( 0 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_5( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_movereg( 1, 2 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_jump( 1, 1003, compiled_block_1_1003 );
  twobit_epilogue();
}


RTYPE twobit_thunk_c22dbd1b7d85c7a648dfcc09b6e65aa3_0(CONT_PARAMS) {
  RETURN_RTYPE(compiled_start_1_0(CONT_ACTUALS));
}
codeptr_t CDECL twobit_load_table[] = { 
  twobit_thunk_c22dbd1b7d85c7a648dfcc09b6e65aa3_0,
  0  /* The table may be empty; some compilers complain */
};
