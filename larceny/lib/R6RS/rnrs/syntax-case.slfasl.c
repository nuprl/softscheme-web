/* Generated from /home/henchman/larcenytest/larceny-petit-Nightly-2017-08-06/larceny_src/lib/R6RS/rnrs/syntax-case.slfasl */
#include "petit-instr.h"

static RTYPE compiled_block_1_1038( CONT_PARAMS );
static RTYPE compiled_block_1_1037( CONT_PARAMS );
static RTYPE compiled_start_1_0( CONT_PARAMS );
static RTYPE compiled_start_1_3( CONT_PARAMS );
static RTYPE compiled_block_1_1027( CONT_PARAMS );
static RTYPE compiled_block_1_1031( CONT_PARAMS );
static RTYPE compiled_block_1_1034( CONT_PARAMS );
static RTYPE compiled_block_1_1032( CONT_PARAMS );
static RTYPE compiled_block_1_1033( CONT_PARAMS );
static RTYPE compiled_block_1_1030( CONT_PARAMS );
static RTYPE compiled_block_1_1029( CONT_PARAMS );
static RTYPE compiled_block_1_1028( CONT_PARAMS );
static RTYPE compiled_block_1_1025( CONT_PARAMS );
static RTYPE compiled_block_1_1026( CONT_PARAMS );
static RTYPE compiled_block_1_1011( CONT_PARAMS );
static RTYPE compiled_block_1_1020( CONT_PARAMS );
static RTYPE compiled_block_1_1023( CONT_PARAMS );
static RTYPE compiled_block_1_1024( CONT_PARAMS );
static RTYPE compiled_block_1_1021( CONT_PARAMS );
static RTYPE compiled_block_1_1018( CONT_PARAMS );
static RTYPE compiled_block_1_1014( CONT_PARAMS );
static RTYPE compiled_block_1_1015( CONT_PARAMS );
static RTYPE compiled_block_1_1016( CONT_PARAMS );
static RTYPE compiled_block_1_1013( CONT_PARAMS );
static RTYPE compiled_block_1_1012( CONT_PARAMS );
static RTYPE compiled_block_1_1008( CONT_PARAMS );
static RTYPE compiled_block_1_1010( CONT_PARAMS );
static RTYPE compiled_block_1_1009( CONT_PARAMS );
static RTYPE compiled_block_1_1006( CONT_PARAMS );
static RTYPE compiled_block_1_1007( CONT_PARAMS );
static RTYPE compiled_block_1_1002( CONT_PARAMS );
static RTYPE compiled_block_1_1005( CONT_PARAMS );
static RTYPE compiled_block_1_1003( CONT_PARAMS );
static RTYPE compiled_start_1_4( CONT_PARAMS );
static RTYPE compiled_start_1_2( CONT_PARAMS );
static RTYPE compiled_start_1_1( CONT_PARAMS );

static RTYPE compiled_start_1_0( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_save( 0 );
  twobit_store( 0, 0 );
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 2 ); /*  syntax-violation~1pxGHH~1758 */
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
  twobit_setrtn( 1037, compiled_block_1_1037 );
  twobit_invoke( 8 );
  twobit_label( 1037, compiled_block_1_1037 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_global( 15 ); /* ex:register-library! */
  twobit_setrtn( 1038, compiled_block_1_1038 );
  twobit_invoke( 1 );
  twobit_label( 1038, compiled_block_1_1038 );
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
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 2 ); /*  syntax-violation~1pxGHH~1758 */
  twobit_lambda( compiled_start_1_4, 4, 0 );
  twobit_setglbl( 2 ); /*  syntax-violation~1pxGHH~1758 */
  twobit_global( 5 ); /* values */
  twobit_invoke( 0 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_4( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argsge( 3 );
  twobit_save( 5 );
  twobit_store( 0, 0 );
  twobit_store( 1, 2 );
  twobit_store( 2, 1 );
  twobit_store( 3, 3 );
  twobit_store( 4, 4 );
  twobit_reg( 1 );
  twobit_op2imm_branchf_640( FALSE_CONST, 1003, compiled_block_1_1003 ); /* internal:branchf-eq?/imm */
  twobit_imm_const( TRUE_CONST ); /* #t */
  twobit_skip( 1002, compiled_block_1_1002 );
  twobit_label( 1003, compiled_block_1_1003 );
  twobit_reg( 1 );
  twobit_op1_800(); /* ustring? */
  twobit_setreg( 31 );
  twobit_reg( 31 );
  twobit_branchf( 1005, compiled_block_1_1005 );
  twobit_reg( 31 );
  twobit_skip( 1002, compiled_block_1_1002 );
  twobit_label( 1005, compiled_block_1_1005 );
  twobit_reg( 1 );
  twobit_op1_17(); /* symbol? */
  twobit_label( 1002, compiled_block_1_1002 );
  twobit_branchf( 1007, compiled_block_1_1007 );
  twobit_reg( 2 );
  twobit_op1_800(); /* ustring? */
  twobit_skip( 1006, compiled_block_1_1006 );
  twobit_label( 1007, compiled_block_1_1007 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1006, compiled_block_1_1006 );
  twobit_branchf( 1009, compiled_block_1_1009 );
  twobit_op1_3(); /* unspecified */
  twobit_skip( 1008, compiled_block_1_1008 );
  twobit_label( 1009, compiled_block_1_1009 );
  twobit_movereg( 1, 2 );
  twobit_load( 3, 1 );
  twobit_const( 1 );
  twobit_setreg( 1 );
  twobit_global( 2 ); /* assertion-violation */
  twobit_setrtn( 1010, compiled_block_1_1010 );
  twobit_invoke( 3 );
  twobit_label( 1010, compiled_block_1_1010 );
  twobit_load( 0, 0 );
  twobit_label( 1008, compiled_block_1_1008 );
  twobit_stack( 2 );
  twobit_branchf( 1012, compiled_block_1_1012 );
  twobit_stack( 2 );
  twobit_skip( 1011, compiled_block_1_1011 );
  twobit_label( 1012, compiled_block_1_1012 );
  twobit_load( 1, 3 );
  twobit_global( 3 ); /* ex:identifier? */
  twobit_setrtn( 1013, compiled_block_1_1013 );
  twobit_invoke( 1 );
  twobit_label( 1013, compiled_block_1_1013 );
  twobit_load( 0, 0 );
  twobit_branchf( 1015, compiled_block_1_1015 );
  twobit_load( 1, 3 );
  twobit_global( 4 ); /* ex:syntax->datum */
  twobit_setrtn( 1016, compiled_block_1_1016 );
  twobit_invoke( 1 );
  twobit_label( 1016, compiled_block_1_1016 );
  twobit_load( 0, 0 );
  twobit_skip( 1014, compiled_block_1_1014 );
  twobit_label( 1015, compiled_block_1_1015 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1014, compiled_block_1_1014 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 1018, compiled_block_1_1018 );
  twobit_reg( 4 );
  twobit_skip( 1011, compiled_block_1_1011 );
  twobit_label( 1018, compiled_block_1_1018 );
  twobit_stack( 3 );
  twobit_op1_branchf_611( 1020, compiled_block_1_1020 ); /* internal:branchf-pair? */
  twobit_stack( 3 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 1 );
  twobit_global( 3 ); /* ex:identifier? */
  twobit_setrtn( 1021, compiled_block_1_1021 );
  twobit_invoke( 1 );
  twobit_label( 1021, compiled_block_1_1021 );
  twobit_load( 0, 0 );
  twobit_branchf( 1023, compiled_block_1_1023 );
  twobit_stack( 3 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 1 );
  twobit_global( 4 ); /* ex:syntax->datum */
  twobit_setrtn( 1024, compiled_block_1_1024 );
  twobit_invoke( 1 );
  twobit_label( 1024, compiled_block_1_1024 );
  twobit_load( 0, 0 );
  twobit_skip( 1011, compiled_block_1_1011 );
  twobit_label( 1023, compiled_block_1_1023 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 1011, compiled_block_1_1011 );
  twobit_label( 1020, compiled_block_1_1020 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1011, compiled_block_1_1011 );
  twobit_setreg( 4 );
  twobit_store( 4, 5 );
  twobit_stack( 4 );
  twobit_op1_branchf_610( 1026, compiled_block_1_1026 ); /* internal:branchf-null? */
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 1025, compiled_block_1_1025 );
  twobit_label( 1026, compiled_block_1_1026 );
  twobit_stack( 4 );
  twobit_op1_11(); /* pair? */
  twobit_load( 2, 4 );
  twobit_check( 2, 0, 0, 1027, compiled_block_1_1027 );
  twobit_stack( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_label( 1025, compiled_block_1_1025 );
  twobit_setreg( 3 );
  twobit_store( 3, 2 );
  twobit_movereg( 4, 1 );
  twobit_global( 5 ); /* make-who-condition */
  twobit_setrtn( 1028, compiled_block_1_1028 );
  twobit_invoke( 1 );
  twobit_label( 1028, compiled_block_1_1028 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 4 );
  twobit_load( 1, 1 );
  twobit_global( 6 ); /* make-message-condition */
  twobit_setrtn( 1029, compiled_block_1_1029 );
  twobit_invoke( 1 );
  twobit_label( 1029, compiled_block_1_1029 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_load( 2, 2 );
  twobit_load( 1, 3 );
  twobit_global( 7 ); /* make-syntax-violation */
  twobit_setrtn( 1030, compiled_block_1_1030 );
  twobit_invoke( 2 );
  twobit_label( 1030, compiled_block_1_1030 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_stack( 5 );
  twobit_branchf( 1032, compiled_block_1_1032 );
  twobit_load( 1, 4 );
  twobit_load( 2, 1 );
  twobit_movereg( 4, 3 );
  twobit_global( 8 ); /* condition */
  twobit_setrtn( 1033, compiled_block_1_1033 );
  twobit_invoke( 3 );
  twobit_label( 1033, compiled_block_1_1033 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_skip( 1031, compiled_block_1_1031 );
  twobit_label( 1032, compiled_block_1_1032 );
  twobit_load( 1, 1 );
  twobit_movereg( 4, 2 );
  twobit_global( 8 ); /* condition */
  twobit_setrtn( 1034, compiled_block_1_1034 );
  twobit_invoke( 2 );
  twobit_label( 1034, compiled_block_1_1034 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_label( 1031, compiled_block_1_1031 );
  twobit_global( 9 ); /* raise */
  twobit_pop( 5 );
  twobit_invoke( 1 );
  twobit_label( 1027, compiled_block_1_1027 );
  twobit_trap( 2, 0, 0, 0 );
  twobit_epilogue();
}


RTYPE twobit_thunk_210336b23ec096658d39697c7c3fb9b4_0(CONT_PARAMS) {
  RETURN_RTYPE(compiled_start_1_0(CONT_ACTUALS));
}
codeptr_t CDECL twobit_load_table[] = { 
  twobit_thunk_210336b23ec096658d39697c7c3fb9b4_0,
  0  /* The table may be empty; some compilers complain */
};
