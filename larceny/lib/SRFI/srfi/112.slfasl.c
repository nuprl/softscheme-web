/* Generated from /home/henchman/larcenytest/larceny-petit-Nightly-2017-08-06/larceny_src/lib/SRFI/srfi/112.slfasl */
#include "petit-instr.h"

static RTYPE compiled_block_1_1076( CONT_PARAMS );
static RTYPE compiled_block_1_1075( CONT_PARAMS );
static RTYPE compiled_start_1_0( CONT_PARAMS );
static RTYPE compiled_block_1_1021( CONT_PARAMS );
static RTYPE compiled_block_1_1074( CONT_PARAMS );
static RTYPE compiled_block_1_1072( CONT_PARAMS );
static RTYPE compiled_block_1_1071( CONT_PARAMS );
static RTYPE compiled_block_1_1006( CONT_PARAMS );
static RTYPE compiled_block_1_1070( CONT_PARAMS );
static RTYPE compiled_block_1_1068( CONT_PARAMS );
static RTYPE compiled_block_1_1067( CONT_PARAMS );
static RTYPE compiled_block_1_1065( CONT_PARAMS );
static RTYPE compiled_block_1_1063( CONT_PARAMS );
static RTYPE compiled_block_1_1064( CONT_PARAMS );
static RTYPE compiled_block_1_1062( CONT_PARAMS );
static RTYPE compiled_block_1_1061( CONT_PARAMS );
static RTYPE compiled_block_1_1005( CONT_PARAMS );
static RTYPE compiled_block_1_1059( CONT_PARAMS );
static RTYPE compiled_block_1_1054( CONT_PARAMS );
static RTYPE compiled_block_1_1056( CONT_PARAMS );
static RTYPE compiled_block_1_1055( CONT_PARAMS );
static RTYPE compiled_block_1_1051( CONT_PARAMS );
static RTYPE compiled_block_1_1052( CONT_PARAMS );
static RTYPE compiled_block_1_1049( CONT_PARAMS );
static RTYPE compiled_block_1_1050( CONT_PARAMS );
static RTYPE compiled_block_1_1048( CONT_PARAMS );
static RTYPE compiled_block_1_1047( CONT_PARAMS );
static RTYPE compiled_block_1_1045( CONT_PARAMS );
static RTYPE compiled_block_1_1046( CONT_PARAMS );
static RTYPE compiled_block_1_1044( CONT_PARAMS );
static RTYPE compiled_block_1_1043( CONT_PARAMS );
static RTYPE compiled_block_1_1004( CONT_PARAMS );
static RTYPE compiled_block_1_1042( CONT_PARAMS );
static RTYPE compiled_block_1_1040( CONT_PARAMS );
static RTYPE compiled_block_1_1038( CONT_PARAMS );
static RTYPE compiled_block_1_1039( CONT_PARAMS );
static RTYPE compiled_block_1_1037( CONT_PARAMS );
static RTYPE compiled_block_1_1036( CONT_PARAMS );
static RTYPE compiled_block_1_1003( CONT_PARAMS );
static RTYPE compiled_block_1_1034( CONT_PARAMS );
static RTYPE compiled_block_1_1029( CONT_PARAMS );
static RTYPE compiled_block_1_1031( CONT_PARAMS );
static RTYPE compiled_block_1_1030( CONT_PARAMS );
static RTYPE compiled_block_1_1026( CONT_PARAMS );
static RTYPE compiled_block_1_1027( CONT_PARAMS );
static RTYPE compiled_block_1_1024( CONT_PARAMS );
static RTYPE compiled_block_1_1025( CONT_PARAMS );
static RTYPE compiled_block_1_1023( CONT_PARAMS );
static RTYPE compiled_block_1_1022( CONT_PARAMS );
static RTYPE compiled_block_1_1019( CONT_PARAMS );
static RTYPE compiled_block_1_1020( CONT_PARAMS );
static RTYPE compiled_block_1_1018( CONT_PARAMS );
static RTYPE compiled_block_1_1017( CONT_PARAMS );
static RTYPE compiled_block_1_1002( CONT_PARAMS );
static RTYPE compiled_block_1_1009( CONT_PARAMS );
static RTYPE compiled_start_1_3( CONT_PARAMS );
static RTYPE compiled_start_1_11( CONT_PARAMS );
static RTYPE compiled_start_1_10( CONT_PARAMS );
static RTYPE compiled_start_1_9( CONT_PARAMS );
static RTYPE compiled_start_1_8( CONT_PARAMS );
static RTYPE compiled_start_1_7( CONT_PARAMS );
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
  twobit_setglbl( 2 ); /*  os-version~1pxGHH~35268 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 3 ); /*  os-type~1pxGHH~35267 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 4 ); /*  os-name~1pxGHH~35266 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 5 ); /*  machine-name~1pxGHH~35265 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 6 ); /*  cpu-architecture~1pxGHH~35264 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 7 ); /*  implementation-version~1pxGHH~35263 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 8 ); /*  implementation-name~1pxGHH~35262 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 9 ); /*  get-feature~1pxGHH~35261 */
  twobit_lambda( compiled_start_1_1, 11, 0 );
  twobit_setreg( 2 );
  twobit_lambda( compiled_start_1_2, 13, 0 );
  twobit_setreg( 4 );
  twobit_lambda( compiled_start_1_3, 15, 0 );
  twobit_setreg( 3 );
  twobit_movereg( 3, 7 );
  twobit_movereg( 4, 6 );
  twobit_const( 16 );
  twobit_setreg( 1 );
  twobit_const( 17 );
  twobit_setreg( 3 );
  twobit_const( 18 );
  twobit_setreg( 4 );
  twobit_const( 19 );
  twobit_setreg( 5 );
  twobit_const( 20 );
  twobit_setreg( 8 );
  twobit_global( 21 ); /* ex:make-library */
  twobit_setrtn( 1075, compiled_block_1_1075 );
  twobit_invoke( 8 );
  twobit_label( 1075, compiled_block_1_1075 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_global( 22 ); /* ex:register-library! */
  twobit_setrtn( 1076, compiled_block_1_1076 );
  twobit_invoke( 1 );
  twobit_label( 1076, compiled_block_1_1076 );
  twobit_load( 0, 0 );
  twobit_global( 23 ); /* values */
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
  twobit_setglbl( 2 ); /*  os-version~1pxGHH~35268 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 3 ); /*  os-type~1pxGHH~35267 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 4 ); /*  os-name~1pxGHH~35266 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 5 ); /*  machine-name~1pxGHH~35265 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 6 ); /*  cpu-architecture~1pxGHH~35264 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 7 ); /*  implementation-version~1pxGHH~35263 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 8 ); /*  implementation-name~1pxGHH~35262 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 9 ); /*  get-feature~1pxGHH~35261 */
  twobit_lambda( compiled_start_1_4, 11, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_op1_4(); /* undefined */
  twobit_op1_4(); /* undefined */
  twobit_op1_4(); /* undefined */
  twobit_op1_4(); /* undefined */
  twobit_op1_4(); /* undefined */
  twobit_op1_4(); /* undefined */
  twobit_op1_4(); /* undefined */
  twobit_op1_4(); /* undefined */
  twobit_global( 12 ); /* values */
  twobit_setrtn( 1009, compiled_block_1_1009 );
  twobit_invoke( 0 );
  twobit_label( 1009, compiled_block_1_1009 );
  twobit_load( 0, 0 );
  twobit_load( 1, 1 );
  twobit_lambda( compiled_start_1_5, 14, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 4 );
  twobit_lambda( compiled_start_1_6, 16, 0 );
  twobit_setreg( 3 );
  twobit_lambda( compiled_start_1_7, 18, 0 );
  twobit_setreg( 2 );
  twobit_lambda( compiled_start_1_8, 20, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_lambda( compiled_start_1_9, 22, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_lambda( compiled_start_1_10, 24, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_lambda( compiled_start_1_11, 26, 0 );
  twobit_imm_const_setreg( NIL_CONST, 4 ); /* () */
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 1 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_reg( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_reg( 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 4 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 2 );
  twobit_global( 27 ); /* apply */
  twobit_pop( 4 );
  twobit_invoke( 2 );
  twobit_label( 1002, compiled_block_1_1002 );
  twobit_save( 2 );
  twobit_store( 0, 0 );
  twobit_global( 28 ); /* system-features */
  twobit_setrtn( 1017, compiled_block_1_1017 );
  twobit_invoke( 0 );
  twobit_label( 1017, compiled_block_1_1017 );
  twobit_load( 0, 0 );
  twobit_setreg( 2 );
  twobit_const( 29 );
  twobit_setreg( 1 );
  twobit_global( 30 ); /* assq */
  twobit_setrtn( 1018, compiled_block_1_1018 );
  twobit_invoke( 2 );
  twobit_label( 1018, compiled_block_1_1018 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 1020, compiled_block_1_1020 );
  twobit_reg_op1_check_652(reg(4),1021,compiled_block_1_1021); /* internal:check-pair? with (4 0 0) */
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_skip( 1019, compiled_block_1_1019 );
  twobit_label( 1020, compiled_block_1_1020 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1019, compiled_block_1_1019 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_global( 28 ); /* system-features */
  twobit_setrtn( 1022, compiled_block_1_1022 );
  twobit_invoke( 0 );
  twobit_label( 1022, compiled_block_1_1022 );
  twobit_load( 0, 0 );
  twobit_setreg( 2 );
  twobit_const( 31 );
  twobit_setreg( 1 );
  twobit_global( 30 ); /* assq */
  twobit_setrtn( 1023, compiled_block_1_1023 );
  twobit_invoke( 2 );
  twobit_label( 1023, compiled_block_1_1023 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 1025, compiled_block_1_1025 );
  twobit_reg_op1_check_652(reg(4),1021,compiled_block_1_1021); /* internal:check-pair? with (4 0 0) */
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_skip( 1024, compiled_block_1_1024 );
  twobit_label( 1025, compiled_block_1_1025 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1024, compiled_block_1_1024 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_18(); /* complex? */
  twobit_setreg( 3 );
  twobit_reg( 3 );
  twobit_branchf( 1027, compiled_block_1_1027 );
  twobit_stack( 1 );
  twobit_op1_18(); /* complex? */
  twobit_skip( 1026, compiled_block_1_1026 );
  twobit_label( 1027, compiled_block_1_1027 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1026, compiled_block_1_1026 );
  twobit_branchf( 1029, compiled_block_1_1029 );
  twobit_movereg( 4, 1 );
  twobit_global( 32 ); /* number->string */
  twobit_setrtn( 1030, compiled_block_1_1030 );
  twobit_invoke( 1 );
  twobit_label( 1030, compiled_block_1_1030 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_load( 1, 1 );
  twobit_global( 32 ); /* number->string */
  twobit_setrtn( 1031, compiled_block_1_1031 );
  twobit_invoke( 1 );
  twobit_label( 1031, compiled_block_1_1031 );
  twobit_load( 0, 0 );
  twobit_setreg( 3 );
  twobit_load( 1, 2 );
  twobit_const( 33 );
  twobit_setreg( 2 );
  twobit_global( 34 ); /* string-append */
  twobit_pop( 2 );
  twobit_invoke( 3 );
  twobit_label( 1029, compiled_block_1_1029 );
  twobit_reg( 3 );
  twobit_branchf( 1034, compiled_block_1_1034 );
  twobit_movereg( 4, 1 );
  twobit_global( 32 ); /* number->string */
  twobit_pop( 2 );
  twobit_invoke( 1 );
  twobit_label( 1034, compiled_block_1_1034 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_pop( 2 );
  twobit_return();
  twobit_label( 1003, compiled_block_1_1003 );
  twobit_save( 0 );
  twobit_store( 0, 0 );
  twobit_global( 28 ); /* system-features */
  twobit_setrtn( 1036, compiled_block_1_1036 );
  twobit_invoke( 0 );
  twobit_label( 1036, compiled_block_1_1036 );
  twobit_load( 0, 0 );
  twobit_setreg( 2 );
  twobit_const( 35 );
  twobit_setreg( 1 );
  twobit_global( 30 ); /* assq */
  twobit_setrtn( 1037, compiled_block_1_1037 );
  twobit_invoke( 2 );
  twobit_label( 1037, compiled_block_1_1037 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 1039, compiled_block_1_1039 );
  twobit_reg_op1_check_652(reg(4),1021,compiled_block_1_1021); /* internal:check-pair? with (4 0 0) */
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 1 );
  twobit_skip( 1038, compiled_block_1_1038 );
  twobit_label( 1039, compiled_block_1_1039 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_setreg( 1 );
  twobit_label( 1038, compiled_block_1_1038 );
  twobit_const( 36 );
  twobit_setreg( 2 );
  twobit_global( 37 ); /* string=? */
  twobit_setrtn( 1040, compiled_block_1_1040 );
  twobit_invoke( 2 );
  twobit_label( 1040, compiled_block_1_1040 );
  twobit_load( 0, 0 );
  twobit_branchf( 1042, compiled_block_1_1042 );
  twobit_const( 38 );
  twobit_pop( 0 );
  twobit_return();
  twobit_label( 1042, compiled_block_1_1042 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_pop( 0 );
  twobit_return();
  twobit_label( 1004, compiled_block_1_1004 );
  twobit_save( 2 );
  twobit_store( 0, 0 );
  twobit_global( 28 ); /* system-features */
  twobit_setrtn( 1043, compiled_block_1_1043 );
  twobit_invoke( 0 );
  twobit_label( 1043, compiled_block_1_1043 );
  twobit_load( 0, 0 );
  twobit_setreg( 2 );
  twobit_const( 39 );
  twobit_setreg( 1 );
  twobit_global( 30 ); /* assq */
  twobit_setrtn( 1044, compiled_block_1_1044 );
  twobit_invoke( 2 );
  twobit_label( 1044, compiled_block_1_1044 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 1046, compiled_block_1_1046 );
  twobit_reg_op1_check_652(reg(4),1021,compiled_block_1_1021); /* internal:check-pair? with (4 0 0) */
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_skip( 1045, compiled_block_1_1045 );
  twobit_label( 1046, compiled_block_1_1046 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1045, compiled_block_1_1045 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_global( 28 ); /* system-features */
  twobit_setrtn( 1047, compiled_block_1_1047 );
  twobit_invoke( 0 );
  twobit_label( 1047, compiled_block_1_1047 );
  twobit_load( 0, 0 );
  twobit_setreg( 2 );
  twobit_const( 40 );
  twobit_setreg( 1 );
  twobit_global( 30 ); /* assq */
  twobit_setrtn( 1048, compiled_block_1_1048 );
  twobit_invoke( 2 );
  twobit_label( 1048, compiled_block_1_1048 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 1050, compiled_block_1_1050 );
  twobit_reg_op1_check_652(reg(4),1021,compiled_block_1_1021); /* internal:check-pair? with (4 0 0) */
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_skip( 1049, compiled_block_1_1049 );
  twobit_label( 1050, compiled_block_1_1050 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1049, compiled_block_1_1049 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_18(); /* complex? */
  twobit_setreg( 3 );
  twobit_reg( 3 );
  twobit_branchf( 1052, compiled_block_1_1052 );
  twobit_stack( 1 );
  twobit_op1_18(); /* complex? */
  twobit_skip( 1051, compiled_block_1_1051 );
  twobit_label( 1052, compiled_block_1_1052 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1051, compiled_block_1_1051 );
  twobit_branchf( 1054, compiled_block_1_1054 );
  twobit_movereg( 4, 1 );
  twobit_global( 32 ); /* number->string */
  twobit_setrtn( 1055, compiled_block_1_1055 );
  twobit_invoke( 1 );
  twobit_label( 1055, compiled_block_1_1055 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_load( 1, 1 );
  twobit_global( 32 ); /* number->string */
  twobit_setrtn( 1056, compiled_block_1_1056 );
  twobit_invoke( 1 );
  twobit_label( 1056, compiled_block_1_1056 );
  twobit_load( 0, 0 );
  twobit_setreg( 3 );
  twobit_load( 1, 2 );
  twobit_const( 33 );
  twobit_setreg( 2 );
  twobit_global( 34 ); /* string-append */
  twobit_pop( 2 );
  twobit_invoke( 3 );
  twobit_label( 1054, compiled_block_1_1054 );
  twobit_reg( 3 );
  twobit_branchf( 1059, compiled_block_1_1059 );
  twobit_movereg( 4, 1 );
  twobit_global( 32 ); /* number->string */
  twobit_pop( 2 );
  twobit_invoke( 1 );
  twobit_label( 1059, compiled_block_1_1059 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_pop( 2 );
  twobit_return();
  twobit_label( 1005, compiled_block_1_1005 );
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_global( 28 ); /* system-features */
  twobit_setrtn( 1061, compiled_block_1_1061 );
  twobit_invoke( 0 );
  twobit_label( 1061, compiled_block_1_1061 );
  twobit_load( 0, 0 );
  twobit_setreg( 2 );
  twobit_const( 35 );
  twobit_setreg( 1 );
  twobit_global( 30 ); /* assq */
  twobit_setrtn( 1062, compiled_block_1_1062 );
  twobit_invoke( 2 );
  twobit_label( 1062, compiled_block_1_1062 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 1064, compiled_block_1_1064 );
  twobit_reg_op1_check_652(reg(4),1021,compiled_block_1_1021); /* internal:check-pair? with (4 0 0) */
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_skip( 1063, compiled_block_1_1063 );
  twobit_label( 1064, compiled_block_1_1064 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1063, compiled_block_1_1063 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_movereg( 4, 1 );
  twobit_const( 36 );
  twobit_setreg( 2 );
  twobit_global( 37 ); /* string=? */
  twobit_setrtn( 1065, compiled_block_1_1065 );
  twobit_invoke( 2 );
  twobit_label( 1065, compiled_block_1_1065 );
  twobit_load( 0, 0 );
  twobit_branchf( 1067, compiled_block_1_1067 );
  twobit_const( 41 );
  twobit_pop( 1 );
  twobit_return();
  twobit_label( 1067, compiled_block_1_1067 );
  twobit_load( 1, 1 );
  twobit_const( 42 );
  twobit_setreg( 2 );
  twobit_global( 37 ); /* string=? */
  twobit_setrtn( 1068, compiled_block_1_1068 );
  twobit_invoke( 2 );
  twobit_label( 1068, compiled_block_1_1068 );
  twobit_load( 0, 0 );
  twobit_branchf( 1070, compiled_block_1_1070 );
  twobit_const( 43 );
  twobit_pop( 1 );
  twobit_return();
  twobit_label( 1070, compiled_block_1_1070 );
  twobit_stack( 1 );
  twobit_pop( 1 );
  twobit_return();
  twobit_label( 1006, compiled_block_1_1006 );
  twobit_save( 0 );
  twobit_store( 0, 0 );
  twobit_global( 28 ); /* system-features */
  twobit_setrtn( 1071, compiled_block_1_1071 );
  twobit_invoke( 0 );
  twobit_label( 1071, compiled_block_1_1071 );
  twobit_load( 0, 0 );
  twobit_setreg( 2 );
  twobit_const( 44 );
  twobit_setreg( 1 );
  twobit_global( 30 ); /* assq */
  twobit_setrtn( 1072, compiled_block_1_1072 );
  twobit_invoke( 2 );
  twobit_label( 1072, compiled_block_1_1072 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 1074, compiled_block_1_1074 );
  twobit_reg_op1_check_652(reg(4),1021,compiled_block_1_1021); /* internal:check-pair? with (4 0 0) */
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_pop( 0 );
  twobit_return();
  twobit_label( 1074, compiled_block_1_1074 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_pop( 0 );
  twobit_return();
  twobit_label( 1021, compiled_block_1_1021 );
  twobit_trap( 4, 0, 0, 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_4( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 7 );
  twobit_reg( 1 );
  twobit_setglbl( 1 ); /*  implementation-name~1pxGHH~35262 */
  twobit_reg( 2 );
  twobit_setglbl( 2 ); /*  implementation-version~1pxGHH~35263 */
  twobit_reg( 3 );
  twobit_setglbl( 3 ); /*  cpu-architecture~1pxGHH~35264 */
  twobit_reg( 4 );
  twobit_setglbl( 4 ); /*  machine-name~1pxGHH~35265 */
  twobit_reg( 5 );
  twobit_setglbl( 5 ); /*  os-name~1pxGHH~35266 */
  twobit_reg( 6 );
  twobit_setglbl( 6 ); /*  os-type~1pxGHH~35267 */
  twobit_reg( 7 );
  twobit_setglbl( 7 ); /*  os-version~1pxGHH~35268 */
  twobit_global( 8 ); /* values */
  twobit_invoke( 0 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_5( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_jump( 1, 1005, compiled_block_1_1005 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_6( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_jump( 1, 1004, compiled_block_1_1004 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_7( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_jump( 1, 1003, compiled_block_1_1003 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_8( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_1_9( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_jump( 1, 1006, compiled_block_1_1006 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_10( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_jump( 1, 1006, compiled_block_1_1006 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_11( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_jump( 1, 1002, compiled_block_1_1002 );
  twobit_epilogue();
}


RTYPE twobit_thunk_a821437b48ed66a8c08d63b55875b1d4_0(CONT_PARAMS) {
  RETURN_RTYPE(compiled_start_1_0(CONT_ACTUALS));
}
codeptr_t CDECL twobit_load_table[] = { 
  twobit_thunk_a821437b48ed66a8c08d63b55875b1d4_0,
  0  /* The table may be empty; some compilers complain */
};
