/* Generated from /home/henchman/larcenytest/larceny-petit-Nightly-2017-08-06/larceny_src/lib/SRFI/srfi/124.slfasl */
#include "petit-instr.h"

static RTYPE compiled_block_1_1066( CONT_PARAMS );
static RTYPE compiled_block_1_1065( CONT_PARAMS );
static RTYPE compiled_start_1_0( CONT_PARAMS );
static RTYPE compiled_block_1_1058( CONT_PARAMS );
static RTYPE compiled_temp_1_10( CONT_PARAMS );
static RTYPE compiled_block_1_1011( CONT_PARAMS );
static RTYPE compiled_block_1_1010( CONT_PARAMS );
static RTYPE compiled_block_1_1009( CONT_PARAMS );
static RTYPE compiled_block_1_1008( CONT_PARAMS );
static RTYPE compiled_block_1_1007( CONT_PARAMS );
static RTYPE compiled_block_1_1006( CONT_PARAMS );
static RTYPE compiled_block_1_1005( CONT_PARAMS );
static RTYPE compiled_block_1_1004( CONT_PARAMS );
static RTYPE compiled_block_1_1003( CONT_PARAMS );
static RTYPE compiled_start_1_3( CONT_PARAMS );
static RTYPE compiled_start_1_16( CONT_PARAMS );
static RTYPE compiled_start_1_15( CONT_PARAMS );
static RTYPE compiled_start_1_14( CONT_PARAMS );
static RTYPE compiled_start_1_13( CONT_PARAMS );
static RTYPE compiled_start_1_12( CONT_PARAMS );
static RTYPE compiled_block_1_1056( CONT_PARAMS );
static RTYPE compiled_block_1_1055( CONT_PARAMS );
static RTYPE compiled_block_1_1034( CONT_PARAMS );
static RTYPE compiled_temp_1_19( CONT_PARAMS );
static RTYPE compiled_block_1_1054( CONT_PARAMS );
static RTYPE compiled_block_1_1053( CONT_PARAMS );
static RTYPE compiled_block_1_1052( CONT_PARAMS );
static RTYPE compiled_block_1_1051( CONT_PARAMS );
static RTYPE compiled_block_1_1040( CONT_PARAMS );
static RTYPE compiled_block_1_1039( CONT_PARAMS );
static RTYPE compiled_block_1_1038( CONT_PARAMS );
static RTYPE compiled_block_1_1037( CONT_PARAMS );
static RTYPE compiled_block_1_1036( CONT_PARAMS );
static RTYPE compiled_start_1_11( CONT_PARAMS );
static RTYPE compiled_block_1_1048( CONT_PARAMS );
static RTYPE compiled_block_1_1049( CONT_PARAMS );
static RTYPE compiled_block_1_1046( CONT_PARAMS );
static RTYPE compiled_start_1_18( CONT_PARAMS );
static RTYPE compiled_block_1_1043( CONT_PARAMS );
static RTYPE compiled_block_1_1044( CONT_PARAMS );
static RTYPE compiled_block_1_1041( CONT_PARAMS );
static RTYPE compiled_start_1_17( CONT_PARAMS );
static RTYPE compiled_start_1_9( CONT_PARAMS );
static RTYPE compiled_block_1_1030( CONT_PARAMS );
static RTYPE compiled_block_1_1031( CONT_PARAMS );
static RTYPE compiled_block_1_1032( CONT_PARAMS );
static RTYPE compiled_temp_1_20( CONT_PARAMS );
static RTYPE compiled_start_1_8( CONT_PARAMS );
static RTYPE compiled_block_1_1028( CONT_PARAMS );
static RTYPE compiled_block_1_1026( CONT_PARAMS );
static RTYPE compiled_block_1_1023( CONT_PARAMS );
static RTYPE compiled_block_1_1024( CONT_PARAMS );
static RTYPE compiled_block_1_1025( CONT_PARAMS );
static RTYPE compiled_temp_1_21( CONT_PARAMS );
static RTYPE compiled_start_1_7( CONT_PARAMS );
static RTYPE compiled_block_1_1019( CONT_PARAMS );
static RTYPE compiled_block_1_1020( CONT_PARAMS );
static RTYPE compiled_block_1_1021( CONT_PARAMS );
static RTYPE compiled_temp_1_22( CONT_PARAMS );
static RTYPE compiled_start_1_6( CONT_PARAMS );
static RTYPE compiled_block_1_1016( CONT_PARAMS );
static RTYPE compiled_block_1_1012( CONT_PARAMS );
static RTYPE compiled_block_1_1013( CONT_PARAMS );
static RTYPE compiled_block_1_1014( CONT_PARAMS );
static RTYPE compiled_temp_1_23( CONT_PARAMS );
static RTYPE compiled_start_1_5( CONT_PARAMS );
static RTYPE compiled_start_1_4( CONT_PARAMS );
static RTYPE compiled_start_1_2( CONT_PARAMS );
static RTYPE compiled_start_1_1( CONT_PARAMS );

static RTYPE compiled_start_1_0( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_save( 0 );
  twobit_store( 0, 0 );
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 2 ); /*  break-ephemera!~1pxGHH~23947 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 3 ); /*  next-breaking~1pxGHH~23946 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 4 ); /*  gcs-between-breaking~1pxGHH~23945 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 5 ); /*  reference-barrier~1pxGHH~23944 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 6 ); /*  ephemeron-broken?~1pxGHH~23943 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 7 ); /*  ephemeron-datum~1pxGHH~23942 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 8 ); /*  ephemeron-key~1pxGHH~23941 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 9 ); /*  make-ephemeron~1pxGHH~23940 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 10 ); /*  %ephemeron-broken!~1pxGHH~23939 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 11 ); /*  %ephemeron-datum!~1pxGHH~23938 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 12 ); /*  %ephemeron-key!~1pxGHH~23937 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 13 ); /*  %ephemeron-broken?~1pxGHH~23936 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 14 ); /*  %ephemeron-datum~1pxGHH~23935 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 15 ); /*  %ephemeron-key~1pxGHH~23934 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 16 ); /*  ephemeron?~1pxGHH~23933 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 17 ); /*  %make-ephemeron~1pxGHH~23932 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 18 ); /*  <ephemeron>~1pxGHH~23931 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 19 ); /*  same-as-key~1pxGHH~23926 */
  twobit_lambda( compiled_start_1_1, 21, 0 );
  twobit_setreg( 2 );
  twobit_lambda( compiled_start_1_2, 23, 0 );
  twobit_setreg( 4 );
  twobit_lambda( compiled_start_1_3, 25, 0 );
  twobit_setreg( 3 );
  twobit_movereg( 3, 7 );
  twobit_movereg( 4, 6 );
  twobit_const( 26 );
  twobit_setreg( 1 );
  twobit_const( 27 );
  twobit_setreg( 3 );
  twobit_const( 28 );
  twobit_setreg( 4 );
  twobit_const( 29 );
  twobit_setreg( 5 );
  twobit_const( 30 );
  twobit_setreg( 8 );
  twobit_global( 31 ); /* ex:make-library */
  twobit_setrtn( 1065, compiled_block_1_1065 );
  twobit_invoke( 8 );
  twobit_label( 1065, compiled_block_1_1065 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_global( 32 ); /* ex:register-library! */
  twobit_setrtn( 1066, compiled_block_1_1066 );
  twobit_invoke( 1 );
  twobit_label( 1066, compiled_block_1_1066 );
  twobit_load( 0, 0 );
  twobit_global( 33 ); /* values */
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
  twobit_save( 19 );
  twobit_store( 0, 0 );
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 2 ); /*  break-ephemera!~1pxGHH~23947 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 3 ); /*  next-breaking~1pxGHH~23946 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 4 ); /*  gcs-between-breaking~1pxGHH~23945 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 5 ); /*  reference-barrier~1pxGHH~23944 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 6 ); /*  ephemeron-broken?~1pxGHH~23943 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 7 ); /*  ephemeron-datum~1pxGHH~23942 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 8 ); /*  ephemeron-key~1pxGHH~23941 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 9 ); /*  make-ephemeron~1pxGHH~23940 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 10 ); /*  %ephemeron-broken!~1pxGHH~23939 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 11 ); /*  %ephemeron-datum!~1pxGHH~23938 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 12 ); /*  %ephemeron-key!~1pxGHH~23937 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 13 ); /*  %ephemeron-broken?~1pxGHH~23936 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 14 ); /*  %ephemeron-datum~1pxGHH~23935 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 15 ); /*  %ephemeron-key~1pxGHH~23934 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 16 ); /*  ephemeron?~1pxGHH~23933 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 17 ); /*  %make-ephemeron~1pxGHH~23932 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 18 ); /*  <ephemeron>~1pxGHH~23931 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 19 ); /*  same-as-key~1pxGHH~23926 */
  twobit_lambda( compiled_start_1_4, 21, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 19 );
  twobit_op1_4(); /* undefined */
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
  twobit_setreg( 29 );
  twobit_op1_4(); /* undefined */
  twobit_setreg( 28 );
  twobit_op1_4(); /* undefined */
  twobit_setreg( 27 );
  twobit_op1_4(); /* undefined */
  twobit_setreg( 26 );
  twobit_op1_4(); /* undefined */
  twobit_setreg( 25 );
  twobit_op1_4(); /* undefined */
  twobit_setreg( 24 );
  twobit_op1_4(); /* undefined */
  twobit_setreg( 23 );
  twobit_op1_4(); /* undefined */
  twobit_setreg( 22 );
  twobit_op1_4(); /* undefined */
  twobit_setreg( 21 );
  twobit_op1_4(); /* undefined */
  twobit_setreg( 20 );
  twobit_op1_4(); /* undefined */
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 19 );
  twobit_store( 19, 11 );
  twobit_reg( 20 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 20 );
  twobit_store( 20, 10 );
  twobit_reg( 21 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 21 );
  twobit_store( 21, 18 );
  twobit_reg( 22 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 22 );
  twobit_store( 22, 17 );
  twobit_reg( 23 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 23 );
  twobit_store( 23, 16 );
  twobit_reg( 24 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 24 );
  twobit_store( 24, 15 );
  twobit_reg( 25 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 25 );
  twobit_store( 25, 14 );
  twobit_reg( 26 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 26 );
  twobit_store( 26, 13 );
  twobit_reg( 27 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 27 );
  twobit_store( 27, 9 );
  twobit_reg( 28 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 28 );
  twobit_store( 28, 8 );
  twobit_reg( 29 );
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
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 18 );
  twobit_const( 22 );
  twobit_op2_58( 18 ); /* cons */
  twobit_setreg( 18 );
  twobit_store( 18, 12 );
  twobit_const( 23 );
  twobit_setreg( 1 );
  twobit_const( 24 );
  twobit_setreg( 2 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_setreg( 3 );
  twobit_global( 25 ); /* make-rtd */
  twobit_setrtn( 1003, compiled_block_1_1003 );
  twobit_invoke( 3 );
  twobit_label( 1003, compiled_block_1_1003 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_movereg( 4, 1 );
  twobit_const( 26 );
  twobit_setreg( 2 );
  twobit_global( 27 ); /* rtd-constructor */
  twobit_setrtn( 1004, compiled_block_1_1004 );
  twobit_invoke( 2 );
  twobit_label( 1004, compiled_block_1_1004 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_stack( 1 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_load( 1, 2 );
  twobit_global( 28 ); /* rtd-predicate */
  twobit_setrtn( 1005, compiled_block_1_1005 );
  twobit_invoke( 1 );
  twobit_label( 1005, compiled_block_1_1005 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_stack( 3 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_load( 1, 2 );
  twobit_const( 29 );
  twobit_setreg( 2 );
  twobit_global( 30 ); /* rtd-accessor */
  twobit_setrtn( 1006, compiled_block_1_1006 );
  twobit_invoke( 2 );
  twobit_label( 1006, compiled_block_1_1006 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_stack( 4 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_load( 1, 2 );
  twobit_const( 31 );
  twobit_setreg( 2 );
  twobit_global( 30 ); /* rtd-accessor */
  twobit_setrtn( 1007, compiled_block_1_1007 );
  twobit_invoke( 2 );
  twobit_label( 1007, compiled_block_1_1007 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_stack( 5 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_load( 1, 2 );
  twobit_const( 32 );
  twobit_setreg( 2 );
  twobit_global( 30 ); /* rtd-accessor */
  twobit_setrtn( 1008, compiled_block_1_1008 );
  twobit_invoke( 2 );
  twobit_label( 1008, compiled_block_1_1008 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_stack( 6 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_load( 1, 2 );
  twobit_const( 29 );
  twobit_setreg( 2 );
  twobit_global( 33 ); /* rtd-mutator */
  twobit_setrtn( 1009, compiled_block_1_1009 );
  twobit_invoke( 2 );
  twobit_label( 1009, compiled_block_1_1009 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_stack( 7 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_load( 1, 2 );
  twobit_const( 31 );
  twobit_setreg( 2 );
  twobit_global( 33 ); /* rtd-mutator */
  twobit_setrtn( 1010, compiled_block_1_1010 );
  twobit_invoke( 2 );
  twobit_label( 1010, compiled_block_1_1010 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_stack( 8 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_load( 1, 2 );
  twobit_const( 32 );
  twobit_setreg( 2 );
  twobit_global( 33 ); /* rtd-mutator */
  twobit_setrtn( 1011, compiled_block_1_1011 );
  twobit_invoke( 2 );
  twobit_label( 1011, compiled_block_1_1011 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_stack( 9 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_load( 4, 10 );
  twobit_load( 3, 11 );
  twobit_load( 2, 12 );
  twobit_load( 1, 1 );
  twobit_lambda( compiled_start_1_5, 35, 4 );
  twobit_setreg( 1 );
  twobit_stack( 13 );
  twobit_op2_84( 1 ); /* cell-set! */
  twobit_movereg( 4, 2 );
  twobit_load( 1, 4 );
  twobit_lambda( compiled_start_1_6, 37, 3 );
  twobit_setreg( 4 );
  twobit_stack( 14 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_load( 5, 5 );
  twobit_load( 4, 12 );
  twobit_lambda( compiled_start_1_7, 39, 5 );
  twobit_setreg( 4 );
  twobit_stack( 15 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_load( 1, 6 );
  twobit_lambda( compiled_start_1_8, 41, 3 );
  twobit_setreg( 4 );
  twobit_stack( 16 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_lambda( compiled_start_1_9, 43, 0 );
  twobit_setreg( 4 );
  twobit_stack( 17 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_imm_const( fixnum(10) ); /* 10 */
  twobit_setreg( 4 );
  twobit_stack( 18 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_stack( 18 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_op1_109(); /* major-gc-counter */
  twobit_op2_61( 4, 10, compiled_temp_1_10 ); /* + */
  twobit_setreg( 1 );
  twobit_reg( 2 );
  twobit_op2_84( 1 ); /* cell-set! */
  twobit_load( 7, 9 );
  twobit_load( 6, 7 );
  twobit_load( 5, 8 );
  twobit_load( 4, 4 );
  twobit_load( 3, 3 );
  twobit_load( 1, 18 );
  twobit_lambda( compiled_start_1_11, 45, 7 );
  twobit_setreg( 4 );
  twobit_stack( 11 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_global( 46 ); /* values */
  twobit_setrtn( 1058, compiled_block_1_1058 );
  twobit_invoke( 0 );
  twobit_label( 1058, compiled_block_1_1058 );
  twobit_load( 0, 0 );
  twobit_load( 1, 19 );
  twobit_store( 1, 11 );
  twobit_stack( 3 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_load( 1, 13 );
  twobit_lambda( compiled_start_1_12, 48, 1 );
  twobit_setreg( 3 );
  twobit_load( 1, 14 );
  twobit_lambda( compiled_start_1_13, 50, 1 );
  twobit_setreg( 2 );
  twobit_load( 1, 15 );
  twobit_lambda( compiled_start_1_14, 52, 1 );
  twobit_setreg( 1 );
  twobit_store( 1, 15 );
  twobit_load( 1, 16 );
  twobit_lambda( compiled_start_1_15, 54, 1 );
  twobit_setreg( 1 );
  twobit_store( 1, 16 );
  twobit_load( 1, 17 );
  twobit_lambda( compiled_start_1_16, 56, 1 );
  twobit_imm_const_setreg( NIL_CONST, 1 ); /* () */
  twobit_op2_58( 1 ); /* cons */
  twobit_setreg( 1 );
  twobit_stack( 16 );
  twobit_op2_58( 1 ); /* cons */
  twobit_setreg( 1 );
  twobit_stack( 15 );
  twobit_op2_58( 1 ); /* cons */
  twobit_setreg( 1 );
  twobit_reg( 2 );
  twobit_op2_58( 1 ); /* cons */
  twobit_setreg( 2 );
  twobit_reg( 3 );
  twobit_op2_58( 2 ); /* cons */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 2 );
  twobit_load( 1, 11 );
  twobit_global( 57 ); /* apply */
  twobit_pop( 19 );
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_4( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 6 );
  twobit_reg( 1 );
  twobit_setglbl( 1 ); /*  ephemeron?~1pxGHH~23933 */
  twobit_reg( 2 );
  twobit_setglbl( 2 ); /*  make-ephemeron~1pxGHH~23940 */
  twobit_reg( 3 );
  twobit_setglbl( 3 ); /*  ephemeron-key~1pxGHH~23941 */
  twobit_reg( 4 );
  twobit_setglbl( 4 ); /*  ephemeron-datum~1pxGHH~23942 */
  twobit_reg( 5 );
  twobit_setglbl( 5 ); /*  ephemeron-broken?~1pxGHH~23943 */
  twobit_reg( 6 );
  twobit_setglbl( 6 ); /*  reference-barrier~1pxGHH~23944 */
  twobit_global( 7 ); /* values */
  twobit_invoke( 0 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_5( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_save( 2 );
  twobit_store( 0, 0 );
  twobit_store( 1, 2 );
  twobit_store( 2, 1 );
  twobit_lexical( 0, 4 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_op1_109(); /* major-gc-counter */
  twobit_op2_branchf_620( 4, 23, compiled_temp_1_23, 1013, compiled_block_1_1013 ); /* internal:branchf-> */
  twobit_lexical( 0, 3 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_setrtn( 1014, compiled_block_1_1014 );
  twobit_invoke( 0 );
  twobit_label( 1014, compiled_block_1_1014 );
  twobit_load( 0, 0 );
  twobit_skip( 1012, compiled_block_1_1012 );
  twobit_label( 1013, compiled_block_1_1013 );
  twobit_op1_3(); /* unspecified */
  twobit_label( 1012, compiled_block_1_1012 );
  twobit_load( 4, 1 );
  twobit_stack( 2 );
  twobit_op2_branchf_624( 4, 1016, compiled_block_1_1016 ); /* internal:branchf-eq? */
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_load( 1, 2 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 2 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_pop( 2 );
  twobit_invoke( 3 );
  twobit_label( 1016, compiled_block_1_1016 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_movereg( 4, 2 );
  twobit_movereg( 3, 4 );
  twobit_load( 1, 2 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_pop( 2 );
  twobit_invoke( 3 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_6( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_store( 1, 1 );
  twobit_lexical( 0, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_op1_109(); /* major-gc-counter */
  twobit_op2_branchf_620( 4, 22, compiled_temp_1_22, 1020, compiled_block_1_1020 ); /* internal:branchf-> */
  twobit_lexical( 0, 3 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_setrtn( 1021, compiled_block_1_1021 );
  twobit_invoke( 0 );
  twobit_label( 1021, compiled_block_1_1021 );
  twobit_load( 0, 0 );
  twobit_skip( 1019, compiled_block_1_1019 );
  twobit_label( 1020, compiled_block_1_1020 );
  twobit_op1_3(); /* unspecified */
  twobit_label( 1019, compiled_block_1_1019 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_load( 1, 1 );
  twobit_reg( 4 );
  twobit_pop( 1 );
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_7( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_store( 1, 1 );
  twobit_lexical( 0, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_op1_109(); /* major-gc-counter */
  twobit_op2_branchf_620( 4, 21, compiled_temp_1_21, 1024, compiled_block_1_1024 ); /* internal:branchf-> */
  twobit_lexical( 0, 3 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_setrtn( 1025, compiled_block_1_1025 );
  twobit_invoke( 0 );
  twobit_label( 1025, compiled_block_1_1025 );
  twobit_load( 0, 0 );
  twobit_skip( 1023, compiled_block_1_1023 );
  twobit_label( 1024, compiled_block_1_1024 );
  twobit_op1_3(); /* unspecified */
  twobit_label( 1023, compiled_block_1_1023 );
  twobit_lexical( 0, 5 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_load( 1, 1 );
  twobit_reg( 4 );
  twobit_setrtn( 1026, compiled_block_1_1026 );
  twobit_invoke( 1 );
  twobit_label( 1026, compiled_block_1_1026 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_lexical( 0, 4 );
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op2_branchf_624( 3, 1028, compiled_block_1_1028 ); /* internal:branchf-eq? */
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_load( 1, 1 );
  twobit_reg( 4 );
  twobit_pop( 1 );
  twobit_invoke( 1 );
  twobit_label( 1028, compiled_block_1_1028 );
  twobit_reg( 4 );
  twobit_pop( 1 );
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_1_8( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_store( 1, 1 );
  twobit_lexical( 0, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_op1_109(); /* major-gc-counter */
  twobit_op2_branchf_620( 4, 20, compiled_temp_1_20, 1031, compiled_block_1_1031 ); /* internal:branchf-> */
  twobit_lexical( 0, 3 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_setrtn( 1032, compiled_block_1_1032 );
  twobit_invoke( 0 );
  twobit_label( 1032, compiled_block_1_1032 );
  twobit_load( 0, 0 );
  twobit_skip( 1030, compiled_block_1_1030 );
  twobit_label( 1031, compiled_block_1_1031 );
  twobit_op1_3(); /* unspecified */
  twobit_label( 1030, compiled_block_1_1030 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_load( 1, 1 );
  twobit_reg( 4 );
  twobit_pop( 1 );
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_9( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_imm_const( TRUE_CONST ); /* #t */
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_1_11( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_save( 4 );
  twobit_store( 0, 0 );
  twobit_imm_const( fixnum(1) ); /* 1 */
  twobit_setreg( 1 );
  twobit_imm_const( fixnum(-1) ); /* -1 */
  twobit_setreg( 2 );
  twobit_imm_const( fixnum(1) ); /* 1 */
  twobit_setreg( 3 );
  twobit_global( 1 ); /* sro */
  twobit_setrtn( 1036, compiled_block_1_1036 );
  twobit_invoke( 3 );
  twobit_label( 1036, compiled_block_1_1036 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_imm_const( fixnum(3) ); /* 3 */
  twobit_setreg( 1 );
  twobit_imm_const( fixnum(-1) ); /* -1 */
  twobit_setreg( 2 );
  twobit_imm_const( fixnum(1) ); /* 1 */
  twobit_setreg( 3 );
  twobit_global( 1 ); /* sro */
  twobit_setrtn( 1037, compiled_block_1_1037 );
  twobit_invoke( 3 );
  twobit_label( 1037, compiled_block_1_1037 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_imm_const( fixnum(5) ); /* 5 */
  twobit_setreg( 1 );
  twobit_imm_const( fixnum(-1) ); /* -1 */
  twobit_setreg( 2 );
  twobit_imm_const( fixnum(1) ); /* 1 */
  twobit_setreg( 3 );
  twobit_global( 1 ); /* sro */
  twobit_setrtn( 1038, compiled_block_1_1038 );
  twobit_invoke( 3 );
  twobit_label( 1038, compiled_block_1_1038 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 4 );
  twobit_imm_const( fixnum(3) ); /* 3 */
  twobit_setreg( 1 );
  twobit_imm_const( fixnum(5) ); /* 5 */
  twobit_setreg( 2 );
  twobit_imm_const( fixnum(-1) ); /* -1 */
  twobit_setreg( 3 );
  twobit_global( 1 ); /* sro */
  twobit_setrtn( 1039, compiled_block_1_1039 );
  twobit_invoke( 3 );
  twobit_label( 1039, compiled_block_1_1039 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_global( 2 ); /* make-eq-hashtable */
  twobit_setrtn( 1040, compiled_block_1_1040 );
  twobit_invoke( 0 );
  twobit_label( 1040, compiled_block_1_1040 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_load( 2, 1 );
  twobit_movereg( 4, 1 );
  twobit_lambda( compiled_start_1_17, 4, 1 );
  twobit_setreg( 3 );
  twobit_store( 3, 1 );
  twobit_movereg( 4, 1 );
  twobit_lambda( compiled_start_1_18, 6, 1 );
  twobit_setreg( 1 );
  twobit_global( 7 ); /* vector-for-each */
  twobit_setrtn( 1051, compiled_block_1_1051 );
  twobit_invoke( 2 );
  twobit_label( 1051, compiled_block_1_1051 );
  twobit_load( 0, 0 );
  twobit_load( 2, 2 );
  twobit_load( 1, 1 );
  twobit_global( 7 ); /* vector-for-each */
  twobit_setrtn( 1052, compiled_block_1_1052 );
  twobit_invoke( 2 );
  twobit_label( 1052, compiled_block_1_1052 );
  twobit_load( 0, 0 );
  twobit_load( 2, 3 );
  twobit_load( 1, 1 );
  twobit_global( 7 ); /* vector-for-each */
  twobit_setrtn( 1053, compiled_block_1_1053 );
  twobit_invoke( 2 );
  twobit_label( 1053, compiled_block_1_1053 );
  twobit_load( 0, 0 );
  twobit_load( 2, 4 );
  twobit_load( 1, 1 );
  twobit_global( 7 ); /* vector-for-each */
  twobit_setrtn( 1054, compiled_block_1_1054 );
  twobit_invoke( 2 );
  twobit_label( 1054, compiled_block_1_1054 );
  twobit_load( 0, 0 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_op1_109(); /* major-gc-counter */
  twobit_op2_61( 4, 19, compiled_temp_1_19 ); /* + */
  twobit_setreg( 3 );
  twobit_lexical( 0, 2 );
  twobit_op2_84( 3 ); /* cell-set! */
  twobit_pop( 4 );
  twobit_return();
  twobit_label( 1034, compiled_block_1_1034 );
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_store( 1, 1 );
  twobit_lexical( 0, 7 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_imm_const( TRUE_CONST ); /* #t */
  twobit_setreg( 2 );
  twobit_reg( 4 );
  twobit_setrtn( 1055, compiled_block_1_1055 );
  twobit_invoke( 2 );
  twobit_label( 1055, compiled_block_1_1055 );
  twobit_load( 0, 0 );
  twobit_lexical( 0, 6 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_load( 1, 1 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_setreg( 2 );
  twobit_reg( 4 );
  twobit_setrtn( 1056, compiled_block_1_1056 );
  twobit_invoke( 2 );
  twobit_label( 1056, compiled_block_1_1056 );
  twobit_load( 0, 0 );
  twobit_lexical( 0, 5 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_load( 1, 1 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_setreg( 2 );
  twobit_reg( 4 );
  twobit_pop( 1 );
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_17( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_store( 1, 1 );
  twobit_movereg( 1, 2 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_global( 1 ); /* hashtable-contains? */
  twobit_setrtn( 1041, compiled_block_1_1041 );
  twobit_invoke( 2 );
  twobit_label( 1041, compiled_block_1_1041 );
  twobit_load( 0, 0 );
  twobit_branchf( 1043, compiled_block_1_1043 );
  twobit_load( 2, 1 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_setreg( 3 );
  twobit_global( 2 ); /* hashtable-ref */
  twobit_setrtn( 1044, compiled_block_1_1044 );
  twobit_invoke( 3 );
  twobit_label( 1044, compiled_block_1_1044 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_pop( 1 );
  twobit_jump( 1, 1034, compiled_block_1_1034 );
  twobit_label( 1043, compiled_block_1_1043 );
  twobit_op1_3(); /* unspecified */
  twobit_pop( 1 );
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_1_18( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_store( 1, 1 );
  twobit_lexical( 1, 3 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_setrtn( 1046, compiled_block_1_1046 );
  twobit_invoke( 1 );
  twobit_label( 1046, compiled_block_1_1046 );
  twobit_load( 0, 0 );
  twobit_branchf( 1048, compiled_block_1_1048 );
  twobit_lexical( 1, 4 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_load( 1, 1 );
  twobit_reg( 4 );
  twobit_setrtn( 1049, compiled_block_1_1049 );
  twobit_invoke( 1 );
  twobit_label( 1049, compiled_block_1_1049 );
  twobit_load( 0, 0 );
  twobit_setreg( 2 );
  twobit_load( 3, 1 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_global( 1 ); /* hashtable-set! */
  twobit_pop( 1 );
  twobit_invoke( 3 );
  twobit_label( 1048, compiled_block_1_1048 );
  twobit_op1_3(); /* unspecified */
  twobit_pop( 1 );
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_1_12( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_13( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_14( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_15( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_16( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_invoke( 1 );
  twobit_epilogue();
}


RTYPE twobit_thunk_5fa62a8fa5d6100c09b4d54446974ffe_0(CONT_PARAMS) {
  RETURN_RTYPE(compiled_start_1_0(CONT_ACTUALS));
}
codeptr_t CDECL twobit_load_table[] = { 
  twobit_thunk_5fa62a8fa5d6100c09b4d54446974ffe_0,
  0  /* The table may be empty; some compilers complain */
};
