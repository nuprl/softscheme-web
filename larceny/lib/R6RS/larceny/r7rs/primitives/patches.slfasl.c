/* Generated from /home/henchman/larcenytest/larceny-petit-Nightly-2017-08-06/larceny_src/lib/R6RS/larceny/r7rs/primitives/patches.slfasl */
#include "petit-instr.h"

static RTYPE compiled_block_1_1029( CONT_PARAMS );
static RTYPE compiled_block_1_1028( CONT_PARAMS );
static RTYPE compiled_start_1_0( CONT_PARAMS );
static RTYPE compiled_block_1_1010( CONT_PARAMS );
static RTYPE compiled_block_1_1014( CONT_PARAMS );
static RTYPE compiled_block_1_1026( CONT_PARAMS );
static RTYPE compiled_block_1_1023( CONT_PARAMS );
static RTYPE compiled_block_1_1024( CONT_PARAMS );
static RTYPE compiled_block_1_1025( CONT_PARAMS );
static RTYPE compiled_block_1_1021( CONT_PARAMS );
static RTYPE compiled_block_1_1022( CONT_PARAMS );
static RTYPE compiled_block_1_1016( CONT_PARAMS );
static RTYPE compiled_block_1_1017( CONT_PARAMS );
static RTYPE compiled_block_1_1006( CONT_PARAMS );
static RTYPE compiled_block_1_1007( CONT_PARAMS );
static RTYPE compiled_block_1_1009( CONT_PARAMS );
static RTYPE compiled_block_1_1013( CONT_PARAMS );
static RTYPE compiled_block_1_1015( CONT_PARAMS );
static RTYPE compiled_block_1_1011( CONT_PARAMS );
static RTYPE compiled_block_1_1005( CONT_PARAMS );
static RTYPE compiled_block_1_1004( CONT_PARAMS );
static RTYPE compiled_block_1_1003( CONT_PARAMS );
static RTYPE compiled_start_1_3( CONT_PARAMS );
static RTYPE compiled_start_1_8( CONT_PARAMS );
static RTYPE compiled_start_1_7( CONT_PARAMS );
static RTYPE compiled_block_1_1019( CONT_PARAMS );
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
  twobit_setglbl( 2 ); /*  jiffies-per-second~1pxGHH~3654 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 3 ); /*  larceny:current-utc-time~1pxGHH~3653 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 4 ); /*  can-use:current-utc-time~1pxGHH~3652 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 5 ); /*  *trusted-arch*~1pxGHH~3651 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 6 ); /*  *trusted-os*~1pxGHH~3650 */
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
  twobit_setrtn( 1028, compiled_block_1_1028 );
  twobit_invoke( 8 );
  twobit_label( 1028, compiled_block_1_1028 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_global( 19 ); /* ex:register-library! */
  twobit_setrtn( 1029, compiled_block_1_1029 );
  twobit_invoke( 1 );
  twobit_label( 1029, compiled_block_1_1029 );
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
  twobit_save( 3 );
  twobit_store( 0, 0 );
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 2 ); /*  jiffies-per-second~1pxGHH~3654 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 3 ); /*  larceny:current-utc-time~1pxGHH~3653 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 4 ); /*  can-use:current-utc-time~1pxGHH~3652 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 5 ); /*  *trusted-arch*~1pxGHH~3651 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 6 ); /*  *trusted-os*~1pxGHH~3650 */
  twobit_lambda( compiled_start_1_4, 8, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_op1_4(); /* undefined */
  twobit_op1_4(); /* undefined */
  twobit_op1_4(); /* undefined */
  twobit_op1_4(); /* undefined */
  twobit_op1_4(); /* undefined */
  twobit_global( 9 ); /* system-features */
  twobit_setrtn( 1003, compiled_block_1_1003 );
  twobit_invoke( 0 );
  twobit_label( 1003, compiled_block_1_1003 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_movereg( 4, 2 );
  twobit_const( 10 );
  twobit_setreg( 1 );
  twobit_global( 11 ); /* assq */
  twobit_setrtn( 1004, compiled_block_1_1004 );
  twobit_invoke( 2 );
  twobit_label( 1004, compiled_block_1_1004 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_const( 12 );
  twobit_setreg( 1 );
  twobit_load( 2, 1 );
  twobit_global( 11 ); /* assq */
  twobit_setrtn( 1005, compiled_block_1_1005 );
  twobit_invoke( 2 );
  twobit_label( 1005, compiled_block_1_1005 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_stack( 2 );
  twobit_branchf( 1007, compiled_block_1_1007 );
  twobit_reg( 4 );
  twobit_branchf( 1009, compiled_block_1_1009 );
  twobit_stack( 2 );
  twobit_op1_11(); /* pair? */
  twobit_load( 2, 2 );
  twobit_check( 2, 0, 0, 1010, compiled_block_1_1010 );
  twobit_stack( 2 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 1 );
  twobit_const( 13 );
  twobit_setreg( 2 );
  twobit_global( 14 ); /*  member~1pxGHH~1539 */
  twobit_setrtn( 1011, compiled_block_1_1011 );
  twobit_invoke( 2 );
  twobit_label( 1011, compiled_block_1_1011 );
  twobit_load( 0, 0 );
  twobit_branchf( 1013, compiled_block_1_1013 );
  twobit_stack( 1 );
  twobit_op1_11(); /* pair? */
  twobit_load( 3, 1 );
  twobit_check( 3, 0, 0, 1014, compiled_block_1_1014 );
  twobit_stack( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 1 );
  twobit_const( 15 );
  twobit_setreg( 2 );
  twobit_global( 14 ); /*  member~1pxGHH~1539 */
  twobit_setrtn( 1015, compiled_block_1_1015 );
  twobit_invoke( 2 );
  twobit_label( 1015, compiled_block_1_1015 );
  twobit_load( 0, 0 );
  twobit_skip( 1006, compiled_block_1_1006 );
  twobit_label( 1013, compiled_block_1_1013 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 1006, compiled_block_1_1006 );
  twobit_label( 1009, compiled_block_1_1009 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 1006, compiled_block_1_1006 );
  twobit_label( 1007, compiled_block_1_1007 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1006, compiled_block_1_1006 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 1017, compiled_block_1_1017 );
  twobit_lambda( compiled_start_1_5, 17, 0 );
  twobit_skip( 1016, compiled_block_1_1016 );
  twobit_label( 1017, compiled_block_1_1017 );
  twobit_lambda( compiled_start_1_6, 19, 0 );
  twobit_label( 1016, compiled_block_1_1016 );
  twobit_setreg( 3 );
  twobit_store( 3, 1 );
  twobit_reg( 4 );
  twobit_branchf( 1022, compiled_block_1_1022 );
  twobit_lambda( compiled_start_1_7, 21, 0 );
  twobit_skip( 1021, compiled_block_1_1021 );
  twobit_label( 1022, compiled_block_1_1022 );
  twobit_lambda( compiled_start_1_8, 23, 0 );
  twobit_label( 1021, compiled_block_1_1021 );
  twobit_setreg( 2 );
  twobit_store( 2, 2 );
  twobit_reg( 4 );
  twobit_branchf( 1024, compiled_block_1_1024 );
  twobit_const( 24 );
  twobit_setreg( 1 );
  twobit_global( 25 ); /* r5rs:require */
  twobit_setrtn( 1025, compiled_block_1_1025 );
  twobit_invoke( 1 );
  twobit_label( 1025, compiled_block_1_1025 );
  twobit_load( 0, 0 );
  twobit_skip( 1023, compiled_block_1_1023 );
  twobit_label( 1024, compiled_block_1_1024 );
  twobit_op1_3(); /* unspecified */
  twobit_label( 1023, compiled_block_1_1023 );
  twobit_global( 26 ); /* values */
  twobit_setrtn( 1026, compiled_block_1_1026 );
  twobit_invoke( 0 );
  twobit_label( 1026, compiled_block_1_1026 );
  twobit_load( 0, 0 );
  twobit_load( 1, 3 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 4 );
  twobit_stack( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 1 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 2 );
  twobit_global( 27 ); /* apply */
  twobit_pop( 3 );
  twobit_invoke( 2 );
  twobit_label( 1014, compiled_block_1_1014 );
  twobit_trap( 3, 0, 0, 1 );
  twobit_label( 1010, compiled_block_1_1010 );
  twobit_trap( 2, 0, 0, 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_4( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_reg( 1 );
  twobit_setglbl( 1 ); /*  larceny:current-utc-time~1pxGHH~3653 */
  twobit_reg( 2 );
  twobit_setglbl( 2 ); /*  jiffies-per-second~1pxGHH~3654 */
  twobit_global( 3 ); /* values */
  twobit_invoke( 0 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_5( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_global( 1 ); /* current-utc-time */
  twobit_invoke( 0 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_6( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_save( 0 );
  twobit_store( 0, 0 );
  twobit_global( 1 ); /* current-seconds */
  twobit_setrtn( 1019, compiled_block_1_1019 );
  twobit_invoke( 0 );
  twobit_label( 1019, compiled_block_1_1019 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 2 );
  twobit_global( 2 ); /* values */
  twobit_pop( 0 );
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_7( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_imm_const( fixnum(1000000) ); /* 1000000 */
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_1_8( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_imm_const( fixnum(1) ); /* 1 */
  twobit_return();
  twobit_epilogue();
}


RTYPE twobit_thunk_a7a5ccd736814088ca24241c7cd17c28_0(CONT_PARAMS) {
  RETURN_RTYPE(compiled_start_1_0(CONT_ACTUALS));
}
codeptr_t CDECL twobit_load_table[] = { 
  twobit_thunk_a7a5ccd736814088ca24241c7cd17c28_0,
  0  /* The table may be empty; some compilers complain */
};
