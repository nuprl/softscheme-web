/* Generated from /home/henchman/larcenytest/larceny-petit-Nightly-2017-08-06/larceny_src/lib/SRFI/srfi/135.slfasl */
#include "petit-instr.h"

static RTYPE compiled_block_1_1035( CONT_PARAMS );
static RTYPE compiled_block_1_1034( CONT_PARAMS );
static RTYPE compiled_start_1_0( CONT_PARAMS );
static RTYPE compiled_block_1_1016( CONT_PARAMS );
static RTYPE compiled_temp_1_21( CONT_PARAMS );
static RTYPE compiled_temp_1_20( CONT_PARAMS );
static RTYPE compiled_block_1_1030( CONT_PARAMS );
static RTYPE compiled_temp_1_19( CONT_PARAMS );
static RTYPE compiled_temp_1_18( CONT_PARAMS );
static RTYPE compiled_temp_1_17( CONT_PARAMS );
static RTYPE compiled_temp_1_16( CONT_PARAMS );
static RTYPE compiled_block_1_1024( CONT_PARAMS );
static RTYPE compiled_temp_1_15( CONT_PARAMS );
static RTYPE compiled_temp_1_14( CONT_PARAMS );
static RTYPE compiled_block_1_1026( CONT_PARAMS );
static RTYPE compiled_temp_1_13( CONT_PARAMS );
static RTYPE compiled_temp_1_12( CONT_PARAMS );
static RTYPE compiled_temp_1_11( CONT_PARAMS );
static RTYPE compiled_temp_1_10( CONT_PARAMS );
static RTYPE compiled_temp_1_9( CONT_PARAMS );
static RTYPE compiled_block_1_1021( CONT_PARAMS );
static RTYPE compiled_temp_1_8( CONT_PARAMS );
static RTYPE compiled_temp_1_7( CONT_PARAMS );
static RTYPE compiled_temp_1_6( CONT_PARAMS );
static RTYPE compiled_block_1_1018( CONT_PARAMS );
static RTYPE compiled_temp_1_5( CONT_PARAMS );
static RTYPE compiled_block_1_1010( CONT_PARAMS );
static RTYPE compiled_block_1_1011( CONT_PARAMS );
static RTYPE compiled_block_1_1014( CONT_PARAMS );
static RTYPE compiled_block_1_1013( CONT_PARAMS );
static RTYPE compiled_block_1_1007( CONT_PARAMS );
static RTYPE compiled_block_1_1009( CONT_PARAMS );
static RTYPE compiled_block_1_1008( CONT_PARAMS );
static RTYPE compiled_block_1_1002( CONT_PARAMS );
static RTYPE compiled_block_1_1005( CONT_PARAMS );
static RTYPE compiled_start_1_3( CONT_PARAMS );
static RTYPE compiled_start_1_4( CONT_PARAMS );
static RTYPE compiled_start_1_2( CONT_PARAMS );
static RTYPE compiled_start_1_1( CONT_PARAMS );

static RTYPE compiled_start_1_0( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_save( 0 );
  twobit_store( 0, 0 );
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 2 ); /*  mod~1pxGHH~28703 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 3 ); /*  div~1pxGHH~28702 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 4 ); /*  div-and-mod~1pxGHH~28701 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 5 ); /*  assertion-violation~1pxGHH~28700 */
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
  twobit_setrtn( 1034, compiled_block_1_1034 );
  twobit_invoke( 8 );
  twobit_label( 1034, compiled_block_1_1034 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_global( 18 ); /* ex:register-library! */
  twobit_setrtn( 1035, compiled_block_1_1035 );
  twobit_invoke( 1 );
  twobit_label( 1035, compiled_block_1_1035 );
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
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 2 ); /*  mod~1pxGHH~28703 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 3 ); /*  div~1pxGHH~28702 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 4 ); /*  div-and-mod~1pxGHH~28701 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 5 ); /*  assertion-violation~1pxGHH~28700 */
  twobit_lambda( compiled_start_1_4, 7, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_op1_4(); /* undefined */
  twobit_op1_4(); /* undefined */
  twobit_op1_4(); /* undefined */
  twobit_op1_4(); /* undefined */
  twobit_global( 8 ); /* values */
  twobit_setrtn( 1005, compiled_block_1_1005 );
  twobit_invoke( 0 );
  twobit_label( 1005, compiled_block_1_1005 );
  twobit_load( 0, 0 );
  twobit_load( 1, 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_global( 9 ); /* apply */
  twobit_pop( 1 );
  twobit_invoke( 2 );
  twobit_label( 1002, compiled_block_1_1002 );
  twobit_save( 2 );
  twobit_store( 0, 0 );
  twobit_store( 1, 2 );
  twobit_store( 2, 1 );
  twobit_reg( 1 );
  twobit_op1_23(); /* fixnum? */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 1008, compiled_block_1_1008 );
  twobit_reg( 4 );
  twobit_skip( 1007, compiled_block_1_1007 );
  twobit_label( 1008, compiled_block_1_1008 );
  twobit_global( 10 ); /* bignum? */
  twobit_setrtn( 1009, compiled_block_1_1009 );
  twobit_invoke( 1 );
  twobit_label( 1009, compiled_block_1_1009 );
  twobit_load( 0, 0 );
  twobit_label( 1007, compiled_block_1_1007 );
  twobit_branchf( 1011, compiled_block_1_1011 );
  twobit_stack( 1 );
  twobit_op1_23(); /* fixnum? */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 1013, compiled_block_1_1013 );
  twobit_reg( 4 );
  twobit_skip( 1010, compiled_block_1_1010 );
  twobit_label( 1013, compiled_block_1_1013 );
  twobit_load( 1, 1 );
  twobit_global( 10 ); /* bignum? */
  twobit_setrtn( 1014, compiled_block_1_1014 );
  twobit_invoke( 1 );
  twobit_label( 1014, compiled_block_1_1014 );
  twobit_load( 0, 0 );
  twobit_skip( 1010, compiled_block_1_1010 );
  twobit_label( 1011, compiled_block_1_1011 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1010, compiled_block_1_1010 );
  twobit_branchf( 1016, compiled_block_1_1016 );
  twobit_stack( 1 );
  twobit_op2imm_branchf_639( fixnum(0), 5, compiled_temp_1_5, 1018, compiled_block_1_1018 ); /* internal:branchf-=/imm */
  twobit_load( 2, 2 );
  twobit_load( 3, 1 );
  twobit_const( 11 );
  twobit_setreg( 1 );
  twobit_global( 12 ); /* error */
  twobit_pop( 2 );
  twobit_invoke( 3 );
  twobit_label( 1018, compiled_block_1_1018 );
  twobit_stack( 2 );
  twobit_op2imm_branchf_637( fixnum(0), 6, compiled_temp_1_6, 1021, compiled_block_1_1021 ); /* internal:branchf->=/imm */
  twobit_load( 4, 1 );
  twobit_stack( 2 );
  twobit_op2_65( 4, 7, compiled_temp_1_7 ); /* quotient */
  twobit_setreg( 3 );
  twobit_stack( 2 );
  twobit_op2_103( 4, 8, compiled_temp_1_8 ); /* remainder */
  twobit_setreg( 2 );
  twobit_movereg( 3, 1 );
  twobit_global( 8 ); /* values */
  twobit_pop( 2 );
  twobit_invoke( 2 );
  twobit_label( 1021, compiled_block_1_1021 );
  twobit_stack( 1 );
  twobit_op2imm_branchf_635( fixnum(0), 9, compiled_temp_1_9, 1024, compiled_block_1_1024 ); /* internal:branchf-</imm */
  twobit_load( 4, 1 );
  twobit_stack( 2 );
  twobit_op2_65( 4, 10, compiled_temp_1_10 ); /* quotient */
  twobit_setreg( 3 );
  twobit_reg( 3 );
  twobit_op2_63( 4, 11, compiled_temp_1_11 ); /* * */
  twobit_setreg( 2 );
  twobit_stack( 2 );
  twobit_op2_62( 2, 12, compiled_temp_1_12 ); /* - */
  twobit_setreg( 2 );
  twobit_reg( 2 );
  twobit_op2imm_branchf_639( fixnum(0), 13, compiled_temp_1_13, 1026, compiled_block_1_1026 ); /* internal:branchf-=/imm */
  twobit_movereg( 3, 1 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 2 );
  twobit_global( 8 ); /* values */
  twobit_pop( 2 );
  twobit_invoke( 2 );
  twobit_label( 1026, compiled_block_1_1026 );
  twobit_reg( 3 );
  twobit_op2imm_130( fixnum(1), 14, compiled_temp_1_14 ); /* + */
  twobit_setreg( 1 );
  twobit_reg( 2 );
  twobit_op2_62( 4, 15, compiled_temp_1_15 ); /* - */
  twobit_setreg( 2 );
  twobit_global( 8 ); /* values */
  twobit_pop( 2 );
  twobit_invoke( 2 );
  twobit_label( 1024, compiled_block_1_1024 );
  twobit_load( 4, 1 );
  twobit_stack( 2 );
  twobit_op2_65( 4, 16, compiled_temp_1_16 ); /* quotient */
  twobit_setreg( 3 );
  twobit_reg( 3 );
  twobit_op2_63( 4, 17, compiled_temp_1_17 ); /* * */
  twobit_setreg( 2 );
  twobit_stack( 2 );
  twobit_op2_62( 2, 18, compiled_temp_1_18 ); /* - */
  twobit_setreg( 2 );
  twobit_reg( 2 );
  twobit_op2imm_branchf_639( fixnum(0), 19, compiled_temp_1_19, 1030, compiled_block_1_1030 ); /* internal:branchf-=/imm */
  twobit_movereg( 3, 1 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 2 );
  twobit_global( 8 ); /* values */
  twobit_pop( 2 );
  twobit_invoke( 2 );
  twobit_label( 1030, compiled_block_1_1030 );
  twobit_reg( 3 );
  twobit_op2imm_131( fixnum(1), 20, compiled_temp_1_20 ); /* - */
  twobit_setreg( 1 );
  twobit_reg( 2 );
  twobit_op2_61( 4, 21, compiled_temp_1_21 ); /* + */
  twobit_setreg( 2 );
  twobit_global( 8 ); /* values */
  twobit_pop( 2 );
  twobit_invoke( 2 );
  twobit_label( 1016, compiled_block_1_1016 );
  twobit_load( 2, 2 );
  twobit_load( 3, 1 );
  twobit_const( 13 );
  twobit_setreg( 1 );
  twobit_global( 12 ); /* error */
  twobit_pop( 2 );
  twobit_invoke( 3 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_4( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_global( 1 ); /* values */
  twobit_invoke( 0 );
  twobit_epilogue();
}


RTYPE twobit_thunk_5cb917c76d509280b3fe166df4524b2a_0(CONT_PARAMS) {
  RETURN_RTYPE(compiled_start_1_0(CONT_ACTUALS));
}
codeptr_t CDECL twobit_load_table[] = { 
  twobit_thunk_5cb917c76d509280b3fe166df4524b2a_0,
  0  /* The table may be empty; some compilers complain */
};
