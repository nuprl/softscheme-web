/* Generated from /home/henchman/larcenytest/larceny-petit-Nightly-2017-08-06/larceny_src/lib/SRFI/srfi/128/kernel.slfasl */
#include "petit-instr.h"

static RTYPE compiled_block_1_1091( CONT_PARAMS );
static RTYPE compiled_block_1_1090( CONT_PARAMS );
static RTYPE compiled_start_1_0( CONT_PARAMS );
static RTYPE compiled_block_1_1085( CONT_PARAMS );
static RTYPE compiled_block_1_1013( CONT_PARAMS );
static RTYPE compiled_block_1_1012( CONT_PARAMS );
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
static RTYPE compiled_start_1_14( CONT_PARAMS );
static RTYPE compiled_start_1_13( CONT_PARAMS );
static RTYPE compiled_start_1_12( CONT_PARAMS );
static RTYPE compiled_start_1_11( CONT_PARAMS );
static RTYPE compiled_start_1_10( CONT_PARAMS );
static RTYPE compiled_start_1_9( CONT_PARAMS );
static RTYPE compiled_start_1_8( CONT_PARAMS );
static RTYPE compiled_start_1_7( CONT_PARAMS );
static RTYPE compiled_start_1_6( CONT_PARAMS );
static RTYPE compiled_block_1_1014( CONT_PARAMS );
static RTYPE compiled_block_1_1069( CONT_PARAMS );
static RTYPE compiled_block_1_1070( CONT_PARAMS );
static RTYPE compiled_block_1_1067( CONT_PARAMS );
static RTYPE compiled_block_1_1068( CONT_PARAMS );
static RTYPE compiled_block_1_1028( CONT_PARAMS );
static RTYPE compiled_block_1_1044( CONT_PARAMS );
static RTYPE compiled_block_1_1045( CONT_PARAMS );
static RTYPE compiled_block_1_1041( CONT_PARAMS );
static RTYPE compiled_block_1_1042( CONT_PARAMS );
static RTYPE compiled_block_1_1039( CONT_PARAMS );
static RTYPE compiled_block_1_1040( CONT_PARAMS );
static RTYPE compiled_block_1_1037( CONT_PARAMS );
static RTYPE compiled_block_1_1038( CONT_PARAMS );
static RTYPE compiled_block_1_1035( CONT_PARAMS );
static RTYPE compiled_block_1_1036( CONT_PARAMS );
static RTYPE compiled_block_1_1033( CONT_PARAMS );
static RTYPE compiled_block_1_1034( CONT_PARAMS );
static RTYPE compiled_block_1_1031( CONT_PARAMS );
static RTYPE compiled_block_1_1032( CONT_PARAMS );
static RTYPE compiled_block_1_1029( CONT_PARAMS );
static RTYPE compiled_block_1_1030( CONT_PARAMS );
static RTYPE compiled_block_1_1025( CONT_PARAMS );
static RTYPE compiled_block_1_1026( CONT_PARAMS );
static RTYPE compiled_block_1_1017( CONT_PARAMS );
static RTYPE compiled_block_1_1022( CONT_PARAMS );
static RTYPE compiled_block_1_1023( CONT_PARAMS );
static RTYPE compiled_block_1_1020( CONT_PARAMS );
static RTYPE compiled_block_1_1021( CONT_PARAMS );
static RTYPE compiled_block_1_1018( CONT_PARAMS );
static RTYPE compiled_block_1_1019( CONT_PARAMS );
static RTYPE compiled_start_1_5( CONT_PARAMS );
static RTYPE compiled_block_1_1079( CONT_PARAMS );
static RTYPE compiled_block_1_1077( CONT_PARAMS );
static RTYPE compiled_block_1_1076( CONT_PARAMS );
static RTYPE compiled_block_1_1074( CONT_PARAMS );
static RTYPE compiled_start_1_21( CONT_PARAMS );
static RTYPE compiled_start_1_20( CONT_PARAMS );
static RTYPE compiled_start_1_19( CONT_PARAMS );
static RTYPE compiled_temp_1_23( CONT_PARAMS );
static RTYPE compiled_block_1_1064( CONT_PARAMS );
static RTYPE compiled_block_1_1065( CONT_PARAMS );
static RTYPE compiled_block_1_1061( CONT_PARAMS );
static RTYPE compiled_block_1_1062( CONT_PARAMS );
static RTYPE compiled_block_1_1060( CONT_PARAMS );
static RTYPE compiled_start_1_18( CONT_PARAMS );
static RTYPE compiled_temp_1_24( CONT_PARAMS );
static RTYPE compiled_block_1_1066( CONT_PARAMS );
static RTYPE compiled_start_1_22( CONT_PARAMS );
static RTYPE compiled_block_1_1052( CONT_PARAMS );
static RTYPE compiled_block_1_1058( CONT_PARAMS );
static RTYPE compiled_block_1_1056( CONT_PARAMS );
static RTYPE compiled_block_1_1055( CONT_PARAMS );
static RTYPE compiled_block_1_1053( CONT_PARAMS );
static RTYPE compiled_block_1_1049( CONT_PARAMS );
static RTYPE compiled_block_1_1050( CONT_PARAMS );
static RTYPE compiled_block_1_1048( CONT_PARAMS );
static RTYPE compiled_start_1_17( CONT_PARAMS );
static RTYPE compiled_temp_1_26( CONT_PARAMS );
static RTYPE compiled_block_1_1059( CONT_PARAMS );
static RTYPE compiled_start_1_25( CONT_PARAMS );
static RTYPE compiled_temp_1_27( CONT_PARAMS );
static RTYPE compiled_block_1_1046( CONT_PARAMS );
static RTYPE compiled_start_1_16( CONT_PARAMS );
static RTYPE compiled_temp_1_28( CONT_PARAMS );
static RTYPE compiled_block_1_1043( CONT_PARAMS );
static RTYPE compiled_start_1_15( CONT_PARAMS );
static RTYPE compiled_start_1_4( CONT_PARAMS );
static RTYPE compiled_start_1_2( CONT_PARAMS );
static RTYPE compiled_start_1_1( CONT_PARAMS );

static RTYPE compiled_start_1_0( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_save( 0 );
  twobit_store( 0, 0 );
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 2 ); /*  comparator-hash-function?~1pxGHH~11495 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 3 ); /*  comparator-type-test-procedure~1pxGHH~11494 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 4 ); /*  no-hash~1pxGHH~11493 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 5 ); /*  no-comparison~1pxGHH~11492 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 6 ); /*  no-ordering~1pxGHH~11491 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 7 ); /*  universal-type-test~1pxGHH~11490 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 8 ); /*  make-comparator~1pxGHH~11489 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 9 ); /*  comparator-hashable?~1pxGHH~11488 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 10 ); /*  comparator-comparison-procedure?~1pxGHH~11487 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 11 ); /*  comparator-ordered?~1pxGHH~11486 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 12 ); /*  comparator-hash-function~1pxGHH~11485 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 13 ); /*  comparator-comparison-procedure~1pxGHH~11484 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 14 ); /*  comparator-ordering-predicate~1pxGHH~11483 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 15 ); /*  comparator-equality-predicate~1pxGHH~11482 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 16 ); /*  comparator-type-test-predicate~1pxGHH~11481 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 17 ); /*  comparator?~1pxGHH~11480 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 18 ); /*  make-raw-comparator~1pxGHH~11479 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 19 ); /*  comparator~1pxGHH~11478 */
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
  twobit_setrtn( 1090, compiled_block_1_1090 );
  twobit_invoke( 8 );
  twobit_label( 1090, compiled_block_1_1090 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_global( 32 ); /* ex:register-library! */
  twobit_setrtn( 1091, compiled_block_1_1091 );
  twobit_invoke( 1 );
  twobit_label( 1091, compiled_block_1_1091 );
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
  twobit_setglbl( 2 ); /*  comparator-hash-function?~1pxGHH~11495 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 3 ); /*  comparator-type-test-procedure~1pxGHH~11494 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 4 ); /*  no-hash~1pxGHH~11493 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 5 ); /*  no-comparison~1pxGHH~11492 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 6 ); /*  no-ordering~1pxGHH~11491 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 7 ); /*  universal-type-test~1pxGHH~11490 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 8 ); /*  make-comparator~1pxGHH~11489 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 9 ); /*  comparator-hashable?~1pxGHH~11488 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 10 ); /*  comparator-comparison-procedure?~1pxGHH~11487 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 11 ); /*  comparator-ordered?~1pxGHH~11486 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 12 ); /*  comparator-hash-function~1pxGHH~11485 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 13 ); /*  comparator-comparison-procedure~1pxGHH~11484 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 14 ); /*  comparator-ordering-predicate~1pxGHH~11483 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 15 ); /*  comparator-equality-predicate~1pxGHH~11482 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 16 ); /*  comparator-type-test-predicate~1pxGHH~11481 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 17 ); /*  comparator?~1pxGHH~11480 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 18 ); /*  make-raw-comparator~1pxGHH~11479 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 19 ); /*  comparator~1pxGHH~11478 */
  twobit_lambda( compiled_start_1_4, 21, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 19 );
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
  twobit_setreg( 19 );
  twobit_op1_4(); /* undefined */
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 18 );
  twobit_store( 18, 18 );
  twobit_reg( 19 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 19 );
  twobit_store( 19, 17 );
  twobit_reg( 20 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 20 );
  twobit_store( 20, 15 );
  twobit_reg( 21 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 21 );
  twobit_store( 21, 14 );
  twobit_reg( 22 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 22 );
  twobit_store( 22, 12 );
  twobit_reg( 23 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 23 );
  twobit_store( 23, 13 );
  twobit_reg( 24 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 24 );
  twobit_store( 24, 16 );
  twobit_reg( 25 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 25 );
  twobit_store( 25, 11 );
  twobit_reg( 26 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 26 );
  twobit_store( 26, 10 );
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
  twobit_const( 22 );
  twobit_setreg( 1 );
  twobit_const( 23 );
  twobit_setreg( 2 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_setreg( 3 );
  twobit_global( 24 ); /* make-rtd */
  twobit_setrtn( 1003, compiled_block_1_1003 );
  twobit_invoke( 3 );
  twobit_label( 1003, compiled_block_1_1003 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_movereg( 4, 1 );
  twobit_const( 25 );
  twobit_setreg( 2 );
  twobit_global( 26 ); /* rtd-constructor */
  twobit_setrtn( 1004, compiled_block_1_1004 );
  twobit_invoke( 2 );
  twobit_label( 1004, compiled_block_1_1004 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_stack( 1 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_load( 1, 2 );
  twobit_global( 27 ); /* rtd-predicate */
  twobit_setrtn( 1005, compiled_block_1_1005 );
  twobit_invoke( 1 );
  twobit_label( 1005, compiled_block_1_1005 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_stack( 3 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_load( 1, 2 );
  twobit_const( 28 );
  twobit_setreg( 2 );
  twobit_global( 29 ); /* rtd-accessor */
  twobit_setrtn( 1006, compiled_block_1_1006 );
  twobit_invoke( 2 );
  twobit_label( 1006, compiled_block_1_1006 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_stack( 4 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_load( 1, 2 );
  twobit_const( 30 );
  twobit_setreg( 2 );
  twobit_global( 29 ); /* rtd-accessor */
  twobit_setrtn( 1007, compiled_block_1_1007 );
  twobit_invoke( 2 );
  twobit_label( 1007, compiled_block_1_1007 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_stack( 5 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_load( 1, 2 );
  twobit_const( 31 );
  twobit_setreg( 2 );
  twobit_global( 29 ); /* rtd-accessor */
  twobit_setrtn( 1008, compiled_block_1_1008 );
  twobit_invoke( 2 );
  twobit_label( 1008, compiled_block_1_1008 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_stack( 6 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_load( 1, 2 );
  twobit_const( 32 );
  twobit_setreg( 2 );
  twobit_global( 29 ); /* rtd-accessor */
  twobit_setrtn( 1009, compiled_block_1_1009 );
  twobit_invoke( 2 );
  twobit_label( 1009, compiled_block_1_1009 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_stack( 7 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_load( 1, 2 );
  twobit_const( 33 );
  twobit_setreg( 2 );
  twobit_global( 29 ); /* rtd-accessor */
  twobit_setrtn( 1010, compiled_block_1_1010 );
  twobit_invoke( 2 );
  twobit_label( 1010, compiled_block_1_1010 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_stack( 8 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_load( 1, 2 );
  twobit_const( 34 );
  twobit_setreg( 2 );
  twobit_global( 29 ); /* rtd-accessor */
  twobit_setrtn( 1011, compiled_block_1_1011 );
  twobit_invoke( 2 );
  twobit_label( 1011, compiled_block_1_1011 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_stack( 9 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_load( 1, 2 );
  twobit_const( 35 );
  twobit_setreg( 2 );
  twobit_global( 29 ); /* rtd-accessor */
  twobit_setrtn( 1012, compiled_block_1_1012 );
  twobit_invoke( 2 );
  twobit_label( 1012, compiled_block_1_1012 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_stack( 10 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_load( 1, 2 );
  twobit_const( 36 );
  twobit_setreg( 2 );
  twobit_global( 29 ); /* rtd-accessor */
  twobit_setrtn( 1013, compiled_block_1_1013 );
  twobit_invoke( 2 );
  twobit_label( 1013, compiled_block_1_1013 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_stack( 11 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_load( 5, 12 );
  twobit_load( 4, 13 );
  twobit_load( 3, 14 );
  twobit_load( 2, 15 );
  twobit_load( 1, 1 );
  twobit_lambda( compiled_start_1_5, 38, 5 );
  twobit_setreg( 1 );
  twobit_stack( 16 );
  twobit_op2_84( 1 ); /* cell-set! */
  twobit_lambda( compiled_start_1_6, 40, 0 );
  twobit_setreg( 1 );
  twobit_reg( 4 );
  twobit_op2_84( 1 ); /* cell-set! */
  twobit_lambda( compiled_start_1_7, 42, 0 );
  twobit_setreg( 4 );
  twobit_reg( 5 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_lambda( compiled_start_1_8, 44, 0 );
  twobit_setreg( 4 );
  twobit_reg( 3 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_lambda( compiled_start_1_9, 46, 0 );
  twobit_setreg( 4 );
  twobit_reg( 2 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_load( 1, 4 );
  twobit_lambda( compiled_start_1_10, 48, 1 );
  twobit_setreg( 4 );
  twobit_stack( 17 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_load( 1, 11 );
  twobit_lambda( compiled_start_1_11, 50, 1 );
  twobit_setreg( 4 );
  twobit_stack( 18 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_global( 51 ); /* values */
  twobit_setrtn( 1085, compiled_block_1_1085 );
  twobit_invoke( 0 );
  twobit_label( 1085, compiled_block_1_1085 );
  twobit_load( 0, 0 );
  twobit_load( 1, 19 );
  twobit_store( 1, 15 );
  twobit_stack( 3 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_stack( 4 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_stack( 5 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 2 );
  twobit_stack( 6 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_store( 4, 6 );
  twobit_stack( 7 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_store( 4, 7 );
  twobit_stack( 8 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_store( 4, 8 );
  twobit_stack( 9 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_store( 4, 9 );
  twobit_stack( 10 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_store( 4, 10 );
  twobit_stack( 11 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_load( 1, 16 );
  twobit_lambda( compiled_start_1_12, 53, 1 );
  twobit_setreg( 1 );
  twobit_store( 1, 16 );
  twobit_load( 1, 17 );
  twobit_lambda( compiled_start_1_13, 55, 1 );
  twobit_setreg( 1 );
  twobit_store( 1, 17 );
  twobit_load( 1, 18 );
  twobit_lambda( compiled_start_1_14, 57, 1 );
  twobit_imm_const_setreg( NIL_CONST, 1 ); /* () */
  twobit_op2_58( 1 ); /* cons */
  twobit_setreg( 1 );
  twobit_stack( 17 );
  twobit_op2_58( 1 ); /* cons */
  twobit_setreg( 1 );
  twobit_stack( 16 );
  twobit_op2_58( 1 ); /* cons */
  twobit_setreg( 1 );
  twobit_reg( 4 );
  twobit_op2_58( 1 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 10 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 9 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 8 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 7 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 6 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_reg( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_reg( 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 2 );
  twobit_load( 1, 15 );
  twobit_global( 58 ); /* apply */
  twobit_pop( 19 );
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_4( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 12 );
  twobit_reg( 1 );
  twobit_setglbl( 1 ); /*  comparator?~1pxGHH~11480 */
  twobit_reg( 2 );
  twobit_setglbl( 2 ); /*  comparator-type-test-predicate~1pxGHH~11481 */
  twobit_reg( 3 );
  twobit_setglbl( 3 ); /*  comparator-equality-predicate~1pxGHH~11482 */
  twobit_reg( 4 );
  twobit_setglbl( 4 ); /*  comparator-ordering-predicate~1pxGHH~11483 */
  twobit_reg( 5 );
  twobit_setglbl( 5 ); /*  comparator-comparison-procedure~1pxGHH~11484 */
  twobit_reg( 6 );
  twobit_setglbl( 6 ); /*  comparator-hash-function~1pxGHH~11485 */
  twobit_reg( 7 );
  twobit_setglbl( 7 ); /*  comparator-ordered?~1pxGHH~11486 */
  twobit_reg( 8 );
  twobit_setglbl( 8 ); /*  comparator-comparison-procedure?~1pxGHH~11487 */
  twobit_reg( 9 );
  twobit_setglbl( 9 ); /*  comparator-hashable?~1pxGHH~11488 */
  twobit_reg( 10 );
  twobit_setglbl( 10 ); /*  make-comparator~1pxGHH~11489 */
  twobit_reg( 11 );
  twobit_setglbl( 11 ); /*  comparator-type-test-procedure~1pxGHH~11494 */
  twobit_reg( 12 );
  twobit_setglbl( 12 ); /*  comparator-hash-function?~1pxGHH~11495 */
  twobit_global( 13 ); /* values */
  twobit_invoke( 0 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_5( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 4 );
  twobit_reg( 3 );
  twobit_op2imm_branchf_640( FALSE_CONST, 1017, compiled_block_1_1017 ); /* internal:branchf-eq?/imm */
  twobit_save( 2 );
  twobit_store( 0, 0 );
  twobit_reg( 4 );
  twobit_branchf( 1019, compiled_block_1_1019 );
  twobit_reg( 4 );
  twobit_skip( 1018, compiled_block_1_1018 );
  twobit_label( 1019, compiled_block_1_1019 );
  twobit_lexical( 0, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_label( 1018, compiled_block_1_1018 );
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_branchf( 1021, compiled_block_1_1021 );
  twobit_imm_const( TRUE_CONST ); /* #t */
  twobit_skip( 1020, compiled_block_1_1020 );
  twobit_label( 1021, compiled_block_1_1021 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1020, compiled_block_1_1020 );
  twobit_setreg( 4 );
  twobit_reg( 1 );
  twobit_op2imm_branchf_640( TRUE_CONST, 1023, compiled_block_1_1023 ); /* internal:branchf-eq?/imm */
  twobit_lexical( 0, 4 );
  twobit_op1_54(); /* cell-ref */
  twobit_skip( 1022, compiled_block_1_1022 );
  twobit_label( 1023, compiled_block_1_1023 );
  twobit_reg( 1 );
  twobit_label( 1022, compiled_block_1_1022 );
  twobit_setreg( 1 );
  twobit_store( 3, 1 );
  twobit_store( 4, 2 );
  twobit_lexical( 0, 5 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_lexical( 0, 3 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 31 );
  twobit_load( 5, 1 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_setreg( 6 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_setreg( 7 );
  twobit_load( 8, 2 );
  twobit_reg( 31 );
  twobit_pop( 2 );
  twobit_invoke( 8 );
  twobit_label( 1017, compiled_block_1_1017 );
  twobit_reg( 1 );
  twobit_op2imm_129( TRUE_CONST ); /* eq? */
  twobit_setreg( 31 );
  twobit_reg( 31 );
  twobit_branchf( 1026, compiled_block_1_1026 );
  twobit_reg( 31 );
  twobit_skip( 1025, compiled_block_1_1025 );
  twobit_label( 1026, compiled_block_1_1026 );
  twobit_reg( 2 );
  twobit_op2imm_129( TRUE_CONST ); /* eq? */
  twobit_label( 1025, compiled_block_1_1025 );
  twobit_branchf( 1028, compiled_block_1_1028 );
  twobit_save( 5 );
  twobit_store( 0, 0 );
  twobit_reg( 4 );
  twobit_branchf( 1030, compiled_block_1_1030 );
  twobit_imm_const( TRUE_CONST ); /* #t */
  twobit_skip( 1029, compiled_block_1_1029 );
  twobit_label( 1030, compiled_block_1_1030 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1029, compiled_block_1_1029 );
  twobit_setreg( 30 );
  twobit_reg( 3 );
  twobit_branchf( 1032, compiled_block_1_1032 );
  twobit_imm_const( TRUE_CONST ); /* #t */
  twobit_skip( 1031, compiled_block_1_1031 );
  twobit_label( 1032, compiled_block_1_1032 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1031, compiled_block_1_1031 );
  twobit_setreg( 29 );
  twobit_reg( 3 );
  twobit_branchf( 1034, compiled_block_1_1034 );
  twobit_imm_const( TRUE_CONST ); /* #t */
  twobit_skip( 1033, compiled_block_1_1033 );
  twobit_label( 1034, compiled_block_1_1034 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1033, compiled_block_1_1033 );
  twobit_setreg( 28 );
  twobit_reg( 4 );
  twobit_branchf( 1036, compiled_block_1_1036 );
  twobit_reg( 4 );
  twobit_skip( 1035, compiled_block_1_1035 );
  twobit_label( 1036, compiled_block_1_1036 );
  twobit_lexical( 0, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_label( 1035, compiled_block_1_1035 );
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_reg( 3 );
  twobit_branchf( 1038, compiled_block_1_1038 );
  twobit_reg( 3 );
  twobit_skip( 1037, compiled_block_1_1037 );
  twobit_label( 1038, compiled_block_1_1038 );
  twobit_lexical( 0, 3 );
  twobit_op1_54(); /* cell-ref */
  twobit_label( 1037, compiled_block_1_1037 );
  twobit_setreg( 27 );
  twobit_reg( 31 );
  twobit_branchf( 1040, compiled_block_1_1040 );
  twobit_lexical( 0, 4 );
  twobit_op1_54(); /* cell-ref */
  twobit_skip( 1039, compiled_block_1_1039 );
  twobit_label( 1040, compiled_block_1_1040 );
  twobit_reg( 1 );
  twobit_label( 1039, compiled_block_1_1039 );
  twobit_setreg( 1 );
  twobit_store( 1, 1 );
  twobit_reg( 2 );
  twobit_op2imm_branchf_640( TRUE_CONST, 1042, compiled_block_1_1042 ); /* internal:branchf-eq?/imm */
  twobit_movereg( 3, 1 );
  twobit_lambda( compiled_start_1_15, 2, 1 );
  twobit_skip( 1041, compiled_block_1_1041 );
  twobit_label( 1042, compiled_block_1_1042 );
  twobit_reg( 2 );
  twobit_label( 1041, compiled_block_1_1041 );
  twobit_setreg( 1 );
  twobit_store( 1, 2 );
  twobit_reg( 3 );
  twobit_branchf( 1045, compiled_block_1_1045 );
  twobit_movereg( 3, 1 );
  twobit_lambda( compiled_start_1_16, 4, 1 );
  twobit_setreg( 3 );
  twobit_skip( 1044, compiled_block_1_1044 );
  twobit_label( 1045, compiled_block_1_1045 );
  twobit_lexical( 0, 5 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_label( 1044, compiled_block_1_1044 );
  twobit_load( 1, 1 );
  twobit_load( 2, 2 );
  twobit_movereg( 27, 4 );
  twobit_store( 4, 2 );
  twobit_stack( 3 );
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_movereg( 28, 4 );
  twobit_store( 4, 1 );
  twobit_movereg( 29, 4 );
  twobit_store( 4, 4 );
  twobit_movereg( 30, 4 );
  twobit_store( 4, 5 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_movereg( 4, 9 );
  twobit_load( 4, 2 );
  twobit_load( 5, 3 );
  twobit_load( 6, 1 );
  twobit_load( 7, 4 );
  twobit_load( 8, 5 );
  twobit_reg( 9 );
  twobit_pop( 5 );
  twobit_invoke( 8 );
  twobit_label( 1028, compiled_block_1_1028 );
  twobit_save( 3 );
  twobit_store( 0, 0 );
  twobit_store( 1, 2 );
  twobit_store( 4, 1 );
  twobit_global( 5 ); /* ex:undefined */
  twobit_setreg( 31 );
  twobit_reg( 31 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 30 );
  twobit_reg( 31 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 31 );
  twobit_movereg( 31, 4 );
  twobit_movereg( 30, 1 );
  twobit_lambda( compiled_start_1_17, 7, 4 );
  twobit_setreg( 29 );
  twobit_reg( 31 );
  twobit_op2_84( 29 ); /* cell-set! */
  twobit_movereg( 31, 4 );
  twobit_movereg( 30, 1 );
  twobit_lambda( compiled_start_1_18, 9, 4 );
  twobit_setreg( 3 );
  twobit_reg( 30 );
  twobit_op2_84( 3 ); /* cell-set! */
  twobit_stack( 1 );
  twobit_branchf( 1068, compiled_block_1_1068 );
  twobit_stack( 1 );
  twobit_skip( 1067, compiled_block_1_1067 );
  twobit_label( 1068, compiled_block_1_1068 );
  twobit_lexical( 0, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_label( 1067, compiled_block_1_1067 );
  twobit_setreg( 3 );
  twobit_stack( 1 );
  twobit_branchf( 1070, compiled_block_1_1070 );
  twobit_imm_const( TRUE_CONST ); /* #t */
  twobit_skip( 1069, compiled_block_1_1069 );
  twobit_label( 1070, compiled_block_1_1070 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1069, compiled_block_1_1069 );
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_store( 3, 1 );
  twobit_movereg( 30, 1 );
  twobit_lambda( compiled_start_1_19, 11, 1 );
  twobit_setreg( 3 );
  twobit_movereg( 31, 1 );
  twobit_lambda( compiled_start_1_20, 13, 1 );
  twobit_setreg( 4 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 1 );
  twobit_movereg( 1, 9 );
  twobit_load( 1, 2 );
  twobit_load( 5, 1 );
  twobit_imm_const( TRUE_CONST ); /* #t */
  twobit_setreg( 6 );
  twobit_imm_const( TRUE_CONST ); /* #t */
  twobit_setreg( 7 );
  twobit_load( 8, 3 );
  twobit_reg( 9 );
  twobit_pop( 3 );
  twobit_invoke( 8 );
  twobit_label( 1014, compiled_block_1_1014 );
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_store( 2, 1 );
  twobit_movereg( 4, 2 );
  twobit_lambda( compiled_start_1_21, 15, 2 );
  twobit_setreg( 1 );
  twobit_reg( 3 );
  twobit_op2_84( 1 ); /* cell-set! */
  twobit_load( 3, 1 );
  twobit_reg( 4 );
  twobit_op2_84( 3 ); /* cell-set! */
  twobit_pop( 1 );
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_1_15( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_save( 0 );
  twobit_store( 0, 0 );
  twobit_lexical( 0, 1 );
  twobit_setrtn( 1043, compiled_block_1_1043 );
  twobit_invoke( 2 );
  twobit_label( 1043, compiled_block_1_1043 );
  twobit_load( 0, 0 );
  twobit_imm_const_setreg( fixnum(0), 3 ); /* 0 */
  twobit_op2_57( 3, 28, compiled_temp_1_28 ); /* eqv? */
  twobit_pop( 0 );
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_1_16( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_save( 0 );
  twobit_store( 0, 0 );
  twobit_lexical( 0, 1 );
  twobit_setrtn( 1046, compiled_block_1_1046 );
  twobit_invoke( 2 );
  twobit_label( 1046, compiled_block_1_1046 );
  twobit_load( 0, 0 );
  twobit_imm_const_setreg( fixnum(-1), 3 ); /* -1 */
  twobit_op2_57( 3, 27, compiled_temp_1_27 ); /* eqv? */
  twobit_pop( 0 );
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_1_17( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_save( 3 );
  twobit_store( 0, 0 );
  twobit_store( 1, 2 );
  twobit_store( 2, 3 );
  twobit_lexical( 0, 3 );
  twobit_setrtn( 1048, compiled_block_1_1048 );
  twobit_invoke( 2 );
  twobit_label( 1048, compiled_block_1_1048 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_reg( 4 );
  twobit_op2imm_129( TRUE_CONST ); /* eq? */
  twobit_setreg( 3 );
  twobit_reg( 3 );
  twobit_branchf( 1050, compiled_block_1_1050 );
  twobit_reg( 3 );
  twobit_skip( 1049, compiled_block_1_1049 );
  twobit_label( 1050, compiled_block_1_1050 );
  twobit_reg( 4 );
  twobit_op2imm_129( FALSE_CONST ); /* eq? */
  twobit_label( 1049, compiled_block_1_1049 );
  twobit_branchf( 1052, compiled_block_1_1052 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 2 );
  twobit_lexical( 0, 4 );
  twobit_setreg( 3 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 4 );
  twobit_setrtn( 1053, compiled_block_1_1053 );
  twobit_jump( 1, 1014, compiled_block_1_1014 );
  twobit_label( 1053, compiled_block_1_1053 );
  twobit_load( 0, 0 );
  twobit_stack( 1 );
  twobit_branchf( 1055, compiled_block_1_1055 );
  twobit_imm_const( fixnum(-1) ); /* -1 */
  twobit_pop( 3 );
  twobit_return();
  twobit_label( 1055, compiled_block_1_1055 );
  twobit_load( 1, 2 );
  twobit_load( 2, 3 );
  twobit_lexical( 0, 2 );
  twobit_setrtn( 1056, compiled_block_1_1056 );
  twobit_invoke( 2 );
  twobit_label( 1056, compiled_block_1_1056 );
  twobit_load( 0, 0 );
  twobit_branchf( 1058, compiled_block_1_1058 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_pop( 3 );
  twobit_return();
  twobit_label( 1058, compiled_block_1_1058 );
  twobit_imm_const( fixnum(1) ); /* 1 */
  twobit_pop( 3 );
  twobit_return();
  twobit_label( 1052, compiled_block_1_1052 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 3 );
  twobit_lexical( 0, 4 );
  twobit_op2_84( 3 ); /* cell-set! */
  twobit_lambda( compiled_start_1_25, 2, 0 );
  twobit_setreg( 3 );
  twobit_lexical( 0, 1 );
  twobit_op2_84( 3 ); /* cell-set! */
  twobit_reg( 4 );
  twobit_pop( 3 );
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_1_25( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_save( 0 );
  twobit_store( 0, 0 );
  twobit_lexical( 1, 4 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_setrtn( 1059, compiled_block_1_1059 );
  twobit_invoke( 2 );
  twobit_label( 1059, compiled_block_1_1059 );
  twobit_load( 0, 0 );
  twobit_imm_const_setreg( fixnum(-1), 3 ); /* -1 */
  twobit_op2_57( 3, 26, compiled_temp_1_26 ); /* eqv? */
  twobit_pop( 0 );
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_1_18( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_lexical( 0, 3 );
  twobit_setrtn( 1060, compiled_block_1_1060 );
  twobit_invoke( 2 );
  twobit_label( 1060, compiled_block_1_1060 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_reg( 4 );
  twobit_op2imm_129( TRUE_CONST ); /* eq? */
  twobit_setreg( 3 );
  twobit_reg( 3 );
  twobit_branchf( 1062, compiled_block_1_1062 );
  twobit_reg( 3 );
  twobit_skip( 1061, compiled_block_1_1061 );
  twobit_label( 1062, compiled_block_1_1062 );
  twobit_reg( 4 );
  twobit_op2imm_129( FALSE_CONST ); /* eq? */
  twobit_label( 1061, compiled_block_1_1061 );
  twobit_branchf( 1064, compiled_block_1_1064 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 2 );
  twobit_lexical( 0, 4 );
  twobit_setreg( 3 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 4 );
  twobit_setrtn( 1065, compiled_block_1_1065 );
  twobit_jump( 1, 1014, compiled_block_1_1014 );
  twobit_label( 1065, compiled_block_1_1065 );
  twobit_load( 0, 0 );
  twobit_stack( 1 );
  twobit_pop( 1 );
  twobit_return();
  twobit_label( 1064, compiled_block_1_1064 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 3 );
  twobit_lexical( 0, 4 );
  twobit_op2_84( 3 ); /* cell-set! */
  twobit_lambda( compiled_start_1_22, 2, 0 );
  twobit_setreg( 3 );
  twobit_lexical( 0, 1 );
  twobit_op2_84( 3 ); /* cell-set! */
  twobit_imm_const( fixnum(-1) ); /* -1 */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op2_57( 3, 23, compiled_temp_1_23 ); /* eqv? */
  twobit_pop( 1 );
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_1_22( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_save( 0 );
  twobit_store( 0, 0 );
  twobit_lexical( 1, 4 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_setrtn( 1066, compiled_block_1_1066 );
  twobit_invoke( 2 );
  twobit_label( 1066, compiled_block_1_1066 );
  twobit_load( 0, 0 );
  twobit_imm_const_setreg( fixnum(-1), 3 ); /* -1 */
  twobit_op2_57( 3, 24, compiled_temp_1_24 ); /* eqv? */
  twobit_pop( 0 );
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_1_19( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_20( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_21( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_save( 2 );
  twobit_store( 0, 0 );
  twobit_store( 1, 1 );
  twobit_store( 2, 2 );
  twobit_lexical( 0, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_setrtn( 1074, compiled_block_1_1074 );
  twobit_invoke( 2 );
  twobit_label( 1074, compiled_block_1_1074 );
  twobit_load( 0, 0 );
  twobit_branchf( 1076, compiled_block_1_1076 );
  twobit_imm_const( fixnum(-1) ); /* -1 */
  twobit_pop( 2 );
  twobit_return();
  twobit_label( 1076, compiled_block_1_1076 );
  twobit_load( 1, 1 );
  twobit_load( 2, 2 );
  twobit_lexical( 0, 1 );
  twobit_setrtn( 1077, compiled_block_1_1077 );
  twobit_invoke( 2 );
  twobit_label( 1077, compiled_block_1_1077 );
  twobit_load( 0, 0 );
  twobit_branchf( 1079, compiled_block_1_1079 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_pop( 2 );
  twobit_return();
  twobit_label( 1079, compiled_block_1_1079 );
  twobit_imm_const( fixnum(1) ); /* 1 */
  twobit_pop( 2 );
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_1_6( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_imm_const( TRUE_CONST ); /* #t */
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_1_7( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_const( 1 );
  twobit_setreg( 1 );
  twobit_global( 2 ); /* error */
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_8( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_const( 1 );
  twobit_setreg( 1 );
  twobit_global( 2 ); /* error */
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_9( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_const( 1 );
  twobit_setreg( 1 );
  twobit_global( 2 ); /* error */
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_10( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_11( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_12( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 4 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 31 );
  twobit_reg( 31 );
  twobit_invoke( 4 );
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


RTYPE twobit_thunk_14a8632e6fc01fb248a82cac48d7e821_0(CONT_PARAMS) {
  RETURN_RTYPE(compiled_start_1_0(CONT_ACTUALS));
}
codeptr_t CDECL twobit_load_table[] = { 
  twobit_thunk_14a8632e6fc01fb248a82cac48d7e821_0,
  0  /* The table may be empty; some compilers complain */
};
