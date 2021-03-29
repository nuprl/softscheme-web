/* Generated from /home/henchman/larcenytest/larceny-petit-Nightly-2017-08-06/larceny_src/lib/SRFI/srfi/%3a69.slfasl */
#include "petit-instr.h"

static RTYPE compiled_block_1_1006( CONT_PARAMS );
static RTYPE compiled_block_1_1005( CONT_PARAMS );
static RTYPE compiled_start_1_0( CONT_PARAMS );
static RTYPE compiled_block_1_1003( CONT_PARAMS );
static RTYPE compiled_start_1_3( CONT_PARAMS );
static RTYPE compiled_start_1_4( CONT_PARAMS );
static RTYPE compiled_start_1_2( CONT_PARAMS );
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
  twobit_setrtn( 1005, compiled_block_1_1005 );
  twobit_invoke( 8 );
  twobit_label( 1005, compiled_block_1_1005 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_global( 13 ); /* ex:register-library! */
  twobit_setrtn( 1006, compiled_block_1_1006 );
  twobit_invoke( 1 );
  twobit_label( 1006, compiled_block_1_1006 );
  twobit_load( 0, 0 );
  twobit_global( 14 ); /* values */
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
  twobit_lambda( compiled_start_1_4, 2, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_global( 3 ); /* values */
  twobit_setrtn( 1003, compiled_block_1_1003 );
  twobit_invoke( 0 );
  twobit_label( 1003, compiled_block_1_1003 );
  twobit_load( 0, 0 );
  twobit_load( 1, 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_global( 4 ); /* apply */
  twobit_pop( 1 );
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_4( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_global( 1 ); /* values */
  twobit_invoke( 0 );
  twobit_epilogue();
}


RTYPE twobit_thunk_cfe337940a5d88a84e59fb01e85ce839_0(CONT_PARAMS) {
  RETURN_RTYPE(compiled_start_1_0(CONT_ACTUALS));
}
static RTYPE compiled_block_2_1231( CONT_PARAMS );
static RTYPE compiled_block_2_1230( CONT_PARAMS );
static RTYPE compiled_start_2_0( CONT_PARAMS );
static RTYPE compiled_block_2_1218( CONT_PARAMS );
static RTYPE compiled_block_2_1095( CONT_PARAMS );
static RTYPE compiled_block_2_1094( CONT_PARAMS );
static RTYPE compiled_start_2_3( CONT_PARAMS );
static RTYPE compiled_start_2_34( CONT_PARAMS );
static RTYPE compiled_start_2_33( CONT_PARAMS );
static RTYPE compiled_start_2_32( CONT_PARAMS );
static RTYPE compiled_start_2_31( CONT_PARAMS );
static RTYPE compiled_start_2_30( CONT_PARAMS );
static RTYPE compiled_start_2_29( CONT_PARAMS );
static RTYPE compiled_start_2_28( CONT_PARAMS );
static RTYPE compiled_start_2_27( CONT_PARAMS );
static RTYPE compiled_start_2_26( CONT_PARAMS );
static RTYPE compiled_start_2_25( CONT_PARAMS );
static RTYPE compiled_block_2_1210( CONT_PARAMS );
static RTYPE compiled_block_2_1216( CONT_PARAMS );
static RTYPE compiled_temp_2_35( CONT_PARAMS );
static RTYPE compiled_block_2_1211( CONT_PARAMS );
static RTYPE compiled_block_2_1212( CONT_PARAMS );
static RTYPE compiled_block_2_1214( CONT_PARAMS );
static RTYPE compiled_block_2_1209( CONT_PARAMS );
static RTYPE compiled_block_2_1207( CONT_PARAMS );
static RTYPE compiled_start_2_24( CONT_PARAMS );
static RTYPE compiled_block_2_1198( CONT_PARAMS );
static RTYPE compiled_block_2_1204( CONT_PARAMS );
static RTYPE compiled_temp_2_36( CONT_PARAMS );
static RTYPE compiled_block_2_1199( CONT_PARAMS );
static RTYPE compiled_block_2_1200( CONT_PARAMS );
static RTYPE compiled_block_2_1202( CONT_PARAMS );
static RTYPE compiled_block_2_1197( CONT_PARAMS );
static RTYPE compiled_block_2_1195( CONT_PARAMS );
static RTYPE compiled_start_2_23( CONT_PARAMS );
static RTYPE compiled_block_2_1186( CONT_PARAMS );
static RTYPE compiled_block_2_1192( CONT_PARAMS );
static RTYPE compiled_temp_2_37( CONT_PARAMS );
static RTYPE compiled_block_2_1187( CONT_PARAMS );
static RTYPE compiled_block_2_1188( CONT_PARAMS );
static RTYPE compiled_block_2_1190( CONT_PARAMS );
static RTYPE compiled_block_2_1185( CONT_PARAMS );
static RTYPE compiled_block_2_1183( CONT_PARAMS );
static RTYPE compiled_start_2_22( CONT_PARAMS );
static RTYPE compiled_block_2_1174( CONT_PARAMS );
static RTYPE compiled_block_2_1180( CONT_PARAMS );
static RTYPE compiled_temp_2_40( CONT_PARAMS );
static RTYPE compiled_block_2_1175( CONT_PARAMS );
static RTYPE compiled_block_2_1176( CONT_PARAMS );
static RTYPE compiled_block_2_1178( CONT_PARAMS );
static RTYPE compiled_block_2_1173( CONT_PARAMS );
static RTYPE compiled_block_2_1140( CONT_PARAMS );
static RTYPE compiled_block_2_1171( CONT_PARAMS );
static RTYPE compiled_block_2_1159( CONT_PARAMS );
static RTYPE compiled_block_2_1170( CONT_PARAMS );
static RTYPE compiled_block_2_1167( CONT_PARAMS );
static RTYPE compiled_block_2_1169( CONT_PARAMS );
static RTYPE compiled_block_2_1168( CONT_PARAMS );
static RTYPE compiled_temp_2_39( CONT_PARAMS );
static RTYPE compiled_block_2_1163( CONT_PARAMS );
static RTYPE compiled_block_2_1164( CONT_PARAMS );
static RTYPE compiled_block_2_1166( CONT_PARAMS );
static RTYPE compiled_temp_2_38( CONT_PARAMS );
static RTYPE compiled_block_2_1162( CONT_PARAMS );
static RTYPE compiled_block_2_1160( CONT_PARAMS );
static RTYPE compiled_block_2_1156( CONT_PARAMS );
static RTYPE compiled_block_2_1153( CONT_PARAMS );
static RTYPE compiled_block_2_1150( CONT_PARAMS );
static RTYPE compiled_block_2_1151( CONT_PARAMS );
static RTYPE compiled_block_2_1148( CONT_PARAMS );
static RTYPE compiled_block_2_1145( CONT_PARAMS );
static RTYPE compiled_block_2_1142( CONT_PARAMS );
static RTYPE compiled_start_2_21( CONT_PARAMS );
static RTYPE compiled_block_2_1131( CONT_PARAMS );
static RTYPE compiled_block_2_1137( CONT_PARAMS );
static RTYPE compiled_temp_2_43( CONT_PARAMS );
static RTYPE compiled_block_2_1132( CONT_PARAMS );
static RTYPE compiled_block_2_1133( CONT_PARAMS );
static RTYPE compiled_block_2_1135( CONT_PARAMS );
static RTYPE compiled_block_2_1130( CONT_PARAMS );
static RTYPE compiled_block_2_1097( CONT_PARAMS );
static RTYPE compiled_block_2_1128( CONT_PARAMS );
static RTYPE compiled_block_2_1116( CONT_PARAMS );
static RTYPE compiled_block_2_1127( CONT_PARAMS );
static RTYPE compiled_block_2_1124( CONT_PARAMS );
static RTYPE compiled_block_2_1126( CONT_PARAMS );
static RTYPE compiled_block_2_1125( CONT_PARAMS );
static RTYPE compiled_temp_2_42( CONT_PARAMS );
static RTYPE compiled_block_2_1120( CONT_PARAMS );
static RTYPE compiled_block_2_1121( CONT_PARAMS );
static RTYPE compiled_block_2_1123( CONT_PARAMS );
static RTYPE compiled_temp_2_41( CONT_PARAMS );
static RTYPE compiled_block_2_1119( CONT_PARAMS );
static RTYPE compiled_block_2_1117( CONT_PARAMS );
static RTYPE compiled_block_2_1113( CONT_PARAMS );
static RTYPE compiled_block_2_1110( CONT_PARAMS );
static RTYPE compiled_block_2_1107( CONT_PARAMS );
static RTYPE compiled_block_2_1108( CONT_PARAMS );
static RTYPE compiled_block_2_1105( CONT_PARAMS );
static RTYPE compiled_block_2_1102( CONT_PARAMS );
static RTYPE compiled_block_2_1099( CONT_PARAMS );
static RTYPE compiled_start_2_20( CONT_PARAMS );
static RTYPE compiled_start_2_19( CONT_PARAMS );
static RTYPE compiled_block_2_1092( CONT_PARAMS );
static RTYPE compiled_start_2_18( CONT_PARAMS );
static RTYPE compiled_start_2_44( CONT_PARAMS );
static RTYPE compiled_start_2_17( CONT_PARAMS );
static RTYPE compiled_start_2_16( CONT_PARAMS );
static RTYPE compiled_block_2_1087( CONT_PARAMS );
static RTYPE compiled_start_2_46( CONT_PARAMS );
static RTYPE compiled_start_2_45( CONT_PARAMS );
static RTYPE compiled_start_2_15( CONT_PARAMS );
static RTYPE compiled_block_2_1081( CONT_PARAMS );
static RTYPE compiled_block_2_1077( CONT_PARAMS );
static RTYPE compiled_block_2_1082( CONT_PARAMS );
static RTYPE compiled_block_2_1083( CONT_PARAMS );
static RTYPE compiled_temp_2_49( CONT_PARAMS );
static RTYPE compiled_block_2_1080( CONT_PARAMS );
static RTYPE compiled_block_2_1075( CONT_PARAMS );
static RTYPE compiled_start_2_48( CONT_PARAMS );
static RTYPE compiled_start_2_47( CONT_PARAMS );
static RTYPE compiled_start_2_14( CONT_PARAMS );
static RTYPE compiled_start_2_51( CONT_PARAMS );
static RTYPE compiled_start_2_50( CONT_PARAMS );
static RTYPE compiled_start_2_13( CONT_PARAMS );
static RTYPE compiled_start_2_53( CONT_PARAMS );
static RTYPE compiled_start_2_52( CONT_PARAMS );
static RTYPE compiled_block_2_1066( CONT_PARAMS );
static RTYPE compiled_start_2_12( CONT_PARAMS );
static RTYPE compiled_block_2_1064( CONT_PARAMS );
static RTYPE compiled_block_2_1063( CONT_PARAMS );
static RTYPE compiled_start_2_11( CONT_PARAMS );
static RTYPE compiled_block_2_1061( CONT_PARAMS );
static RTYPE compiled_block_2_1060( CONT_PARAMS );
static RTYPE compiled_start_2_10( CONT_PARAMS );
static RTYPE compiled_block_2_1058( CONT_PARAMS );
static RTYPE compiled_block_2_1054( CONT_PARAMS );
static RTYPE compiled_block_2_1056( CONT_PARAMS );
static RTYPE compiled_block_2_1052( CONT_PARAMS );
static RTYPE compiled_start_2_9( CONT_PARAMS );
static RTYPE compiled_block_2_1051( CONT_PARAMS );
static RTYPE compiled_block_2_1049( CONT_PARAMS );
static RTYPE compiled_block_2_1048( CONT_PARAMS );
static RTYPE compiled_block_2_1046( CONT_PARAMS );
static RTYPE compiled_start_2_8( CONT_PARAMS );
static RTYPE compiled_start_2_7( CONT_PARAMS );
static RTYPE compiled_block_2_1044( CONT_PARAMS );
static RTYPE compiled_block_2_1041( CONT_PARAMS );
static RTYPE compiled_block_2_1040( CONT_PARAMS );
static RTYPE compiled_start_2_6( CONT_PARAMS );
static RTYPE compiled_block_2_1042( CONT_PARAMS );
static RTYPE compiled_start_2_54( CONT_PARAMS );
static RTYPE compiled_block_2_1025( CONT_PARAMS );
static RTYPE compiled_block_2_1006( CONT_PARAMS );
static RTYPE compiled_block_2_1027( CONT_PARAMS );
static RTYPE compiled_block_2_1036( CONT_PARAMS );
static RTYPE compiled_block_2_1033( CONT_PARAMS );
static RTYPE compiled_block_2_1034( CONT_PARAMS );
static RTYPE compiled_block_2_1031( CONT_PARAMS );
static RTYPE compiled_block_2_1028( CONT_PARAMS );
static RTYPE compiled_block_2_1029( CONT_PARAMS );
static RTYPE compiled_block_2_1008( CONT_PARAMS );
static RTYPE compiled_block_2_1022( CONT_PARAMS );
static RTYPE compiled_block_2_1019( CONT_PARAMS );
static RTYPE compiled_block_2_1016( CONT_PARAMS );
static RTYPE compiled_block_2_1013( CONT_PARAMS );
static RTYPE compiled_block_2_1010( CONT_PARAMS );
static RTYPE compiled_block_2_1004( CONT_PARAMS );
static RTYPE compiled_start_2_5( CONT_PARAMS );
static RTYPE compiled_start_2_4( CONT_PARAMS );
static RTYPE compiled_start_2_2( CONT_PARAMS );
static RTYPE compiled_start_2_1( CONT_PARAMS );

static RTYPE compiled_start_2_0( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_save( 0 );
  twobit_store( 0, 0 );
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 2 ); /*  hash-by-identity~1pxGHH~12548 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 3 ); /*  string-ci-hash~1pxGHH~12547 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 4 ); /*  string-hash~1pxGHH~12546 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 5 ); /*  hash~1pxGHH~12545 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 6 ); /*  %srfi69:hash-on-eqv~1pxGHH~12544 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 7 ); /*  %srfi69:hash-on-eq~1pxGHH~12543 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 8 ); /*  %srfi69:eqv-table~1pxGHH~12542 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 9 ); /*  %srfi69:eq-table~1pxGHH~12541 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 10 ); /*  %srfi69:modulus~1pxGHH~12540 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 11 ); /*  %srfi69:increment~1pxGHH~12539 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 12 ); /*  %srfi69:counter~1pxGHH~12538 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 13 ); /*  %srfi69:missing~1pxGHH~12537 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 14 ); /*  %srfi69:error:missing~1pxGHH~12536 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 15 ); /*  %srfi69:error~1pxGHH~12535 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 16 ); /*  hash-table-merge!~1pxGHH~12534 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 17 ); /*  hash-table-copy~1pxGHH~12533 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 18 ); /*  hash-table->alist~1pxGHH~12532 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 19 ); /*  hash-table-fold~1pxGHH~12531 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 20 ); /*  hash-table-walk~1pxGHH~12530 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 21 ); /*  hash-table-values~1pxGHH~12529 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 22 ); /*  hash-table-keys~1pxGHH~12528 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 23 ); /*  hash-table-size~1pxGHH~12527 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 24 ); /*  hash-table-update!/default~1pxGHH~12526 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 25 ); /*  hash-table-update!~1pxGHH~12525 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 26 ); /*  hash-table-exists?~1pxGHH~12524 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 27 ); /*  hash-table-delete!~1pxGHH~12523 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 28 ); /*  hash-table-set!~1pxGHH~12522 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 29 ); /*  hash-table-ref/default~1pxGHH~12521 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 30 ); /*  hash-table-ref~1pxGHH~12520 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 31 ); /*  hash-table-hash-function~1pxGHH~12519 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 32 ); /*  hash-table-equivalence-function~1pxGHH~12518 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 33 ); /*  alist->hash-table~1pxGHH~12517 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 34 ); /*  hash-table?~1pxGHH~12516 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 35 ); /*  make-hash-table~1pxGHH~12515 */
  twobit_lambda( compiled_start_2_1, 37, 0 );
  twobit_setreg( 2 );
  twobit_lambda( compiled_start_2_2, 39, 0 );
  twobit_setreg( 4 );
  twobit_lambda( compiled_start_2_3, 41, 0 );
  twobit_setreg( 3 );
  twobit_movereg( 3, 7 );
  twobit_movereg( 4, 6 );
  twobit_const( 42 );
  twobit_setreg( 1 );
  twobit_const( 43 );
  twobit_setreg( 3 );
  twobit_const( 44 );
  twobit_setreg( 4 );
  twobit_const( 45 );
  twobit_setreg( 5 );
  twobit_const( 46 );
  twobit_setreg( 8 );
  twobit_global( 47 ); /* ex:make-library */
  twobit_setrtn( 1230, compiled_block_2_1230 );
  twobit_invoke( 8 );
  twobit_label( 1230, compiled_block_2_1230 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_global( 48 ); /* ex:register-library! */
  twobit_setrtn( 1231, compiled_block_2_1231 );
  twobit_invoke( 1 );
  twobit_label( 1231, compiled_block_2_1231 );
  twobit_load( 0, 0 );
  twobit_global( 49 ); /* values */
  twobit_pop( 0 );
  twobit_invoke( 0 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_1( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_2_2( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_global( 1 ); /* values */
  twobit_invoke( 0 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_3( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_save( 32 );
  twobit_store( 0, 0 );
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 2 ); /*  hash-by-identity~1pxGHH~12548 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 3 ); /*  string-ci-hash~1pxGHH~12547 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 4 ); /*  string-hash~1pxGHH~12546 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 5 ); /*  hash~1pxGHH~12545 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 6 ); /*  %srfi69:hash-on-eqv~1pxGHH~12544 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 7 ); /*  %srfi69:hash-on-eq~1pxGHH~12543 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 8 ); /*  %srfi69:eqv-table~1pxGHH~12542 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 9 ); /*  %srfi69:eq-table~1pxGHH~12541 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 10 ); /*  %srfi69:modulus~1pxGHH~12540 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 11 ); /*  %srfi69:increment~1pxGHH~12539 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 12 ); /*  %srfi69:counter~1pxGHH~12538 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 13 ); /*  %srfi69:missing~1pxGHH~12537 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 14 ); /*  %srfi69:error:missing~1pxGHH~12536 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 15 ); /*  %srfi69:error~1pxGHH~12535 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 16 ); /*  hash-table-merge!~1pxGHH~12534 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 17 ); /*  hash-table-copy~1pxGHH~12533 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 18 ); /*  hash-table->alist~1pxGHH~12532 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 19 ); /*  hash-table-fold~1pxGHH~12531 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 20 ); /*  hash-table-walk~1pxGHH~12530 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 21 ); /*  hash-table-values~1pxGHH~12529 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 22 ); /*  hash-table-keys~1pxGHH~12528 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 23 ); /*  hash-table-size~1pxGHH~12527 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 24 ); /*  hash-table-update!/default~1pxGHH~12526 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 25 ); /*  hash-table-update!~1pxGHH~12525 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 26 ); /*  hash-table-exists?~1pxGHH~12524 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 27 ); /*  hash-table-delete!~1pxGHH~12523 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 28 ); /*  hash-table-set!~1pxGHH~12522 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 29 ); /*  hash-table-ref/default~1pxGHH~12521 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 30 ); /*  hash-table-ref~1pxGHH~12520 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 31 ); /*  hash-table-hash-function~1pxGHH~12519 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 32 ); /*  hash-table-equivalence-function~1pxGHH~12518 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 33 ); /*  alist->hash-table~1pxGHH~12517 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 34 ); /*  hash-table?~1pxGHH~12516 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 35 ); /*  make-hash-table~1pxGHH~12515 */
  twobit_lambda( compiled_start_2_4, 37, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 16 );
  twobit_op1_4(); /* undefined */
  twobit_op1_4(); /* undefined */
  twobit_op1_4(); /* undefined */
  twobit_op1_4(); /* undefined */
  twobit_op1_4(); /* undefined */
  twobit_op1_4(); /* undefined */
  twobit_op1_4(); /* undefined */
  twobit_op1_4(); /* undefined */
  twobit_op1_4(); /* undefined */
  twobit_op1_4(); /* undefined */
  twobit_op1_4(); /* undefined */
  twobit_op1_4(); /* undefined */
  twobit_op1_4(); /* undefined */
  twobit_op1_4(); /* undefined */
  twobit_op1_4(); /* undefined */
  twobit_op1_4(); /* undefined */
  twobit_op1_4(); /* undefined */
  twobit_op1_4(); /* undefined */
  twobit_op1_4(); /* undefined */
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
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 22 );
  twobit_store( 22, 15 );
  twobit_reg( 23 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 23 );
  twobit_store( 23, 14 );
  twobit_reg( 24 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 24 );
  twobit_store( 24, 13 );
  twobit_reg( 25 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 25 );
  twobit_store( 25, 12 );
  twobit_reg( 26 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 26 );
  twobit_store( 26, 11 );
  twobit_reg( 27 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 27 );
  twobit_store( 27, 10 );
  twobit_reg( 28 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 28 );
  twobit_store( 28, 7 );
  twobit_reg( 29 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 29 );
  twobit_store( 29, 6 );
  twobit_reg( 30 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 30 );
  twobit_store( 30, 8 );
  twobit_reg( 31 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 31 );
  twobit_store( 31, 9 );
  twobit_reg( 1 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 1 );
  twobit_store( 1, 5 );
  twobit_reg( 2 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 2 );
  twobit_store( 2, 1 );
  twobit_reg( 3 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 3 );
  twobit_store( 3, 2 );
  twobit_movereg( 23, 5 );
  twobit_movereg( 24, 4 );
  twobit_movereg( 25, 3 );
  twobit_movereg( 26, 2 );
  twobit_movereg( 27, 1 );
  twobit_lambda( compiled_start_2_5, 39, 5 );
  twobit_setreg( 21 );
  twobit_store( 21, 32 );
  twobit_global( 40 ); /* hashtable? */
  twobit_setreg( 20 );
  twobit_store( 20, 31 );
  twobit_movereg( 21, 1 );
  twobit_lambda( compiled_start_2_6, 42, 1 );
  twobit_setreg( 19 );
  twobit_store( 19, 30 );
  twobit_lambda( compiled_start_2_7, 44, 0 );
  twobit_setreg( 18 );
  twobit_store( 18, 17 );
  twobit_movereg( 27, 2 );
  twobit_movereg( 26, 1 );
  twobit_lambda( compiled_start_2_8, 46, 2 );
  twobit_setreg( 17 );
  twobit_store( 17, 18 );
  twobit_load( 2, 1 );
  twobit_load( 1, 2 );
  twobit_lambda( compiled_start_2_9, 48, 2 );
  twobit_setreg( 2 );
  twobit_store( 2, 29 );
  twobit_global( 49 ); /* hashtable-ref */
  twobit_setreg( 1 );
  twobit_store( 1, 4 );
  twobit_global( 50 ); /* hashtable-set! */
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_global( 51 ); /* hashtable-delete! */
  twobit_setreg( 4 );
  twobit_store( 4, 28 );
  twobit_global( 52 ); /* hashtable-contains? */
  twobit_setreg( 4 );
  twobit_store( 4, 27 );
  twobit_load( 1, 3 );
  twobit_lambda( compiled_start_2_10, 54, 2 );
  twobit_setreg( 1 );
  twobit_store( 1, 26 );
  twobit_load( 2, 4 );
  twobit_load( 1, 3 );
  twobit_lambda( compiled_start_2_11, 56, 2 );
  twobit_setreg( 2 );
  twobit_store( 2, 19 );
  twobit_global( 57 ); /* hashtable-size */
  twobit_setreg( 1 );
  twobit_store( 1, 25 );
  twobit_lambda( compiled_start_2_12, 59, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 20 );
  twobit_lambda( compiled_start_2_13, 61, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 21 );
  twobit_lambda( compiled_start_2_14, 63, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 4 );
  twobit_lambda( compiled_start_2_15, 65, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 22 );
  twobit_lambda( compiled_start_2_16, 67, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 23 );
  twobit_lambda( compiled_start_2_17, 69, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 24 );
  twobit_load( 2, 3 );
  twobit_load( 1, 4 );
  twobit_lambda( compiled_start_2_18, 71, 2 );
  twobit_setreg( 2 );
  twobit_store( 2, 3 );
  twobit_lambda( compiled_start_2_19, 73, 0 );
  twobit_setreg( 1 );
  twobit_stack( 2 );
  twobit_op2_84( 1 ); /* cell-set! */
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 1 );
  twobit_const( 74 );
  twobit_op2_58( 1 ); /* cons */
  twobit_setreg( 1 );
  twobit_stack( 1 );
  twobit_op2_84( 1 ); /* cell-set! */
  twobit_imm_const( fixnum(14151210) ); /* 14151210 */
  twobit_setreg( 1 );
  twobit_stack( 5 );
  twobit_op2_84( 1 ); /* cell-set! */
  twobit_imm_const( fixnum(268421) ); /* 268421 */
  twobit_setreg( 1 );
  twobit_reg( 31 );
  twobit_op2_84( 1 ); /* cell-set! */
  twobit_imm_const( fixnum(300489088) ); /* 300489088 */
  twobit_setreg( 1 );
  twobit_reg( 30 );
  twobit_op2_84( 1 ); /* cell-set! */
  twobit_global( 75 ); /* make-eq-hashtable */
  twobit_setrtn( 1094, compiled_block_2_1094 );
  twobit_invoke( 0 );
  twobit_label( 1094, compiled_block_2_1094 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_stack( 6 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_global( 76 ); /* make-eqv-hashtable */
  twobit_setrtn( 1095, compiled_block_2_1095 );
  twobit_invoke( 0 );
  twobit_label( 1095, compiled_block_2_1095 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_stack( 7 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_load( 5, 6 );
  twobit_load( 4, 8 );
  twobit_load( 3, 9 );
  twobit_load( 2, 5 );
  twobit_load( 1, 10 );
  twobit_lambda( compiled_start_2_20, 78, 5 );
  twobit_setreg( 4 );
  twobit_reg( 1 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_load( 5, 7 );
  twobit_load( 4, 8 );
  twobit_load( 1, 11 );
  twobit_lambda( compiled_start_2_21, 80, 5 );
  twobit_setreg( 4 );
  twobit_reg( 1 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_lambda( compiled_start_2_22, 82, 0 );
  twobit_setreg( 4 );
  twobit_stack( 12 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_lambda( compiled_start_2_23, 84, 0 );
  twobit_setreg( 4 );
  twobit_stack( 13 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_lambda( compiled_start_2_24, 86, 0 );
  twobit_setreg( 4 );
  twobit_stack( 14 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_stack( 10 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_stack( 15 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_global( 87 ); /* values */
  twobit_setrtn( 1218, compiled_block_2_1218 );
  twobit_invoke( 0 );
  twobit_label( 1218, compiled_block_2_1218 );
  twobit_load( 0, 0 );
  twobit_load( 1, 16 );
  twobit_store( 1, 10 );
  twobit_load( 1, 17 );
  twobit_lambda( compiled_start_2_25, 89, 1 );
  twobit_setreg( 4 );
  twobit_store( 4, 17 );
  twobit_load( 1, 18 );
  twobit_lambda( compiled_start_2_26, 91, 1 );
  twobit_setreg( 3 );
  twobit_load( 1, 19 );
  twobit_lambda( compiled_start_2_27, 93, 1 );
  twobit_setreg( 2 );
  twobit_load( 1, 20 );
  twobit_lambda( compiled_start_2_28, 95, 1 );
  twobit_setreg( 1 );
  twobit_store( 1, 20 );
  twobit_load( 1, 21 );
  twobit_lambda( compiled_start_2_29, 97, 1 );
  twobit_setreg( 1 );
  twobit_store( 1, 21 );
  twobit_load( 1, 4 );
  twobit_lambda( compiled_start_2_30, 99, 1 );
  twobit_setreg( 1 );
  twobit_store( 1, 4 );
  twobit_load( 1, 22 );
  twobit_lambda( compiled_start_2_31, 101, 1 );
  twobit_setreg( 1 );
  twobit_store( 1, 22 );
  twobit_load( 1, 23 );
  twobit_lambda( compiled_start_2_32, 103, 1 );
  twobit_setreg( 1 );
  twobit_store( 1, 23 );
  twobit_load( 1, 24 );
  twobit_lambda( compiled_start_2_33, 105, 1 );
  twobit_setreg( 1 );
  twobit_store( 1, 24 );
  twobit_load( 1, 3 );
  twobit_lambda( compiled_start_2_34, 107, 1 );
  twobit_setreg( 1 );
  twobit_stack( 12 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_store( 4, 12 );
  twobit_stack( 13 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_store( 4, 13 );
  twobit_stack( 14 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_store( 4, 14 );
  twobit_stack( 15 );
  twobit_op1_54(); /* cell-ref */
  twobit_imm_const_setreg( NIL_CONST, 4 ); /* () */
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 14 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 13 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 12 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_reg( 1 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 24 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 23 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 22 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 4 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 21 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 20 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 25 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_reg( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 26 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 27 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 28 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_global( 108 ); /* hashtable-set! */
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_global( 49 ); /* hashtable-ref */
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 29 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_reg( 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 17 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 30 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 31 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 32 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 2 );
  twobit_load( 1, 10 );
  twobit_global( 109 ); /* apply */
  twobit_pop( 32 );
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_4( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 24 );
  twobit_reg( 1 );
  twobit_setglbl( 1 ); /*  make-hash-table~1pxGHH~12515 */
  twobit_reg( 2 );
  twobit_setglbl( 2 ); /*  hash-table?~1pxGHH~12516 */
  twobit_reg( 3 );
  twobit_setglbl( 3 ); /*  alist->hash-table~1pxGHH~12517 */
  twobit_reg( 4 );
  twobit_setglbl( 4 ); /*  hash-table-equivalence-function~1pxGHH~12518 */
  twobit_reg( 5 );
  twobit_setglbl( 5 ); /*  hash-table-hash-function~1pxGHH~12519 */
  twobit_reg( 6 );
  twobit_setglbl( 6 ); /*  hash-table-ref~1pxGHH~12520 */
  twobit_reg( 7 );
  twobit_setglbl( 7 ); /*  hash-table-ref/default~1pxGHH~12521 */
  twobit_reg( 8 );
  twobit_setglbl( 8 ); /*  hash-table-set!~1pxGHH~12522 */
  twobit_reg( 9 );
  twobit_setglbl( 9 ); /*  hash-table-delete!~1pxGHH~12523 */
  twobit_reg( 10 );
  twobit_setglbl( 10 ); /*  hash-table-exists?~1pxGHH~12524 */
  twobit_reg( 11 );
  twobit_setglbl( 11 ); /*  hash-table-update!~1pxGHH~12525 */
  twobit_reg( 12 );
  twobit_setglbl( 12 ); /*  hash-table-update!/default~1pxGHH~12526 */
  twobit_reg( 13 );
  twobit_setglbl( 13 ); /*  hash-table-size~1pxGHH~12527 */
  twobit_reg( 14 );
  twobit_setglbl( 14 ); /*  hash-table-keys~1pxGHH~12528 */
  twobit_reg( 15 );
  twobit_setglbl( 15 ); /*  hash-table-values~1pxGHH~12529 */
  twobit_reg( 16 );
  twobit_setglbl( 16 ); /*  hash-table-walk~1pxGHH~12530 */
  twobit_reg( 17 );
  twobit_setglbl( 17 ); /*  hash-table-fold~1pxGHH~12531 */
  twobit_reg( 18 );
  twobit_setglbl( 18 ); /*  hash-table->alist~1pxGHH~12532 */
  twobit_reg( 19 );
  twobit_setglbl( 19 ); /*  hash-table-copy~1pxGHH~12533 */
  twobit_reg( 20 );
  twobit_setglbl( 20 ); /*  hash-table-merge!~1pxGHH~12534 */
  twobit_reg( 21 );
  twobit_setglbl( 21 ); /*  hash~1pxGHH~12545 */
  twobit_reg( 22 );
  twobit_setglbl( 22 ); /*  string-hash~1pxGHH~12546 */
  twobit_reg( 23 );
  twobit_setglbl( 23 ); /*  string-ci-hash~1pxGHH~12547 */
  twobit_reg( 24 );
  twobit_setglbl( 24 ); /*  hash-by-identity~1pxGHH~12548 */
  twobit_global( 25 ); /* values */
  twobit_invoke( 0 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_5( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argsge( 0 );
  twobit_reg( 1 );
  twobit_op1_branchf_610( 1004, compiled_block_2_1004 ); /* internal:branchf-null? */
  twobit_lexical( 0, 3 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 1 );
  twobit_global( 1 ); /* equal? */
  twobit_setreg( 2 );
  twobit_global( 2 ); /*  make-hashtable~1pxGHH~7276 */
  twobit_invoke( 2 );
  twobit_label( 1004, compiled_block_2_1004 );
  twobit_reg_op1_check_652(reg(1),1006,compiled_block_2_1006); /* internal:check-pair? with (1 0 0) */
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_610( 1008, compiled_block_2_1008 ); /* internal:branchf-null? */
  twobit_reg( 1 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 4 );
  twobit_global( 3 ); /* eq? */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op2_branchf_624( 3, 1010, compiled_block_2_1010 ); /* internal:branchf-eq? */
  twobit_global( 4 ); /* make-eq-hashtable */
  twobit_invoke( 0 );
  twobit_label( 1010, compiled_block_2_1010 );
  twobit_global( 5 ); /* eqv? */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op2_branchf_624( 3, 1013, compiled_block_2_1013 ); /* internal:branchf-eq? */
  twobit_global( 6 ); /* make-eqv-hashtable */
  twobit_invoke( 0 );
  twobit_label( 1013, compiled_block_2_1013 );
  twobit_global( 1 ); /* equal? */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op2_branchf_624( 3, 1016, compiled_block_2_1016 ); /* internal:branchf-eq? */
  twobit_lexical( 0, 3 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 1 );
  twobit_movereg( 3, 2 );
  twobit_global( 2 ); /*  make-hashtable~1pxGHH~7276 */
  twobit_invoke( 2 );
  twobit_label( 1016, compiled_block_2_1016 );
  twobit_global( 7 ); /* string=? */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op2_branchf_624( 3, 1019, compiled_block_2_1019 ); /* internal:branchf-eq? */
  twobit_lexical( 0, 4 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 1 );
  twobit_movereg( 3, 2 );
  twobit_global( 2 ); /*  make-hashtable~1pxGHH~7276 */
  twobit_invoke( 2 );
  twobit_label( 1019, compiled_block_2_1019 );
  twobit_global( 8 ); /* string-ci=? */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op2_branchf_624( 3, 1022, compiled_block_2_1022 ); /* internal:branchf-eq? */
  twobit_lexical( 0, 5 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 1 );
  twobit_movereg( 3, 2 );
  twobit_global( 2 ); /*  make-hashtable~1pxGHH~7276 */
  twobit_invoke( 2 );
  twobit_label( 1022, compiled_block_2_1022 );
  twobit_movereg( 1, 3 );
  twobit_const( 9 );
  twobit_setreg( 1 );
  twobit_const( 10 );
  twobit_setreg( 2 );
  twobit_global( 11 ); /* assertion-violation */
  twobit_invoke( 3 );
  twobit_label( 1008, compiled_block_2_1008 );
  twobit_reg_op1_check_652(reg(4),1025,compiled_block_2_1025); /* internal:check-pair? with (4 0 0) */
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_op1_branchf_610( 1027, compiled_block_2_1027 ); /* internal:branchf-null? */
  twobit_reg( 1 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 4 );
  twobit_global( 3 ); /* eq? */
  twobit_setreg( 2 );
  twobit_reg( 3 );
  twobit_op2_branchf_624( 2, 1029, compiled_block_2_1029 ); /* internal:branchf-eq? */
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 2 );
  twobit_reg( 4 );
  twobit_op2_56( 2 ); /* eq? */
  twobit_skip( 1028, compiled_block_2_1028 );
  twobit_label( 1029, compiled_block_2_1029 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1028, compiled_block_2_1028 );
  twobit_branchf( 1031, compiled_block_2_1031 );
  twobit_global( 4 ); /* make-eq-hashtable */
  twobit_invoke( 0 );
  twobit_label( 1031, compiled_block_2_1031 );
  twobit_global( 5 ); /* eqv? */
  twobit_setreg( 2 );
  twobit_reg( 3 );
  twobit_op2_branchf_624( 2, 1034, compiled_block_2_1034 ); /* internal:branchf-eq? */
  twobit_lexical( 0, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 2 );
  twobit_reg( 4 );
  twobit_op2_56( 2 ); /* eq? */
  twobit_skip( 1033, compiled_block_2_1033 );
  twobit_label( 1034, compiled_block_2_1034 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1033, compiled_block_2_1033 );
  twobit_branchf( 1036, compiled_block_2_1036 );
  twobit_global( 6 ); /* make-eqv-hashtable */
  twobit_invoke( 0 );
  twobit_label( 1036, compiled_block_2_1036 );
  twobit_movereg( 4, 1 );
  twobit_movereg( 3, 2 );
  twobit_global( 2 ); /*  make-hashtable~1pxGHH~7276 */
  twobit_invoke( 2 );
  twobit_label( 1027, compiled_block_2_1027 );
  twobit_movereg( 1, 3 );
  twobit_const( 9 );
  twobit_setreg( 1 );
  twobit_const( 12 );
  twobit_setreg( 2 );
  twobit_global( 11 ); /* assertion-violation */
  twobit_invoke( 3 );
  twobit_label( 1006, compiled_block_2_1006 );
  twobit_trap( 1, 0, 0, 1 );
  twobit_label( 1025, compiled_block_2_1025 );
  twobit_trap( 4, 0, 0, 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_6( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argsge( 1 );
  twobit_save( 2 );
  twobit_store( 0, 0 );
  twobit_store( 2, 1 );
  twobit_global( 1 ); /* reverse */
  twobit_setrtn( 1040, compiled_block_2_1040 );
  twobit_invoke( 1 );
  twobit_label( 1040, compiled_block_2_1040 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_load( 2, 1 );
  twobit_global( 2 ); /* apply */
  twobit_setrtn( 1041, compiled_block_2_1041 );
  twobit_invoke( 2 );
  twobit_label( 1041, compiled_block_2_1041 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_load( 2, 2 );
  twobit_movereg( 4, 1 );
  twobit_lambda( compiled_start_2_54, 4, 1 );
  twobit_setreg( 1 );
  twobit_global( 5 ); /*  for-each~1pxGHH~1464 */
  twobit_setrtn( 1044, compiled_block_2_1044 );
  twobit_invoke( 2 );
  twobit_label( 1044, compiled_block_2_1044 );
  twobit_load( 0, 0 );
  twobit_stack( 1 );
  twobit_pop( 2 );
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_2_54( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_reg_op1_check_652(reg(1),1042,compiled_block_2_1042); /* internal:check-pair? with (1 0 0) */
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 3 );
  twobit_reg( 1 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_global( 1 ); /* hashtable-set! */
  twobit_invoke( 3 );
  twobit_label( 1042, compiled_block_2_1042 );
  twobit_trap( 1, 0, 0, 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_7( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_global( 1 ); /* hashtable-equivalence-function */
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_8( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_store( 1, 1 );
  twobit_global( 1 ); /* hashtable-hash-function */
  twobit_setrtn( 1046, compiled_block_2_1046 );
  twobit_invoke( 1 );
  twobit_label( 1046, compiled_block_2_1046 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 1048, compiled_block_2_1048 );
  twobit_reg( 4 );
  twobit_pop( 1 );
  twobit_return();
  twobit_label( 1048, compiled_block_2_1048 );
  twobit_load( 1, 1 );
  twobit_global( 2 ); /* hashtable-equivalence-function */
  twobit_setrtn( 1049, compiled_block_2_1049 );
  twobit_invoke( 1 );
  twobit_label( 1049, compiled_block_2_1049 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_global( 3 ); /* eq? */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op2_branchf_624( 3, 1051, compiled_block_2_1051 ); /* internal:branchf-eq? */
  twobit_lexical( 0, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_pop( 1 );
  twobit_return();
  twobit_label( 1051, compiled_block_2_1051 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_pop( 1 );
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_2_9( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argsge( 2 );
  twobit_save( 3 );
  twobit_store( 0, 0 );
  twobit_store( 1, 3 );
  twobit_store( 2, 2 );
  twobit_store( 3, 1 );
  twobit_lexical( 0, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_global( 1 ); /* hashtable-ref */
  twobit_setrtn( 1052, compiled_block_2_1052 );
  twobit_invoke( 3 );
  twobit_label( 1052, compiled_block_2_1052 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_lexical( 0, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op2_branchf_624( 3, 1054, compiled_block_2_1054 ); /* internal:branchf-eq? */
  twobit_stack( 1 );
  twobit_op1_branchf_610( 1056, compiled_block_2_1056 ); /* internal:branchf-null? */
  twobit_load( 3, 2 );
  twobit_load( 2, 3 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_const( 2 );
  twobit_setreg( 1 );
  twobit_reg( 4 );
  twobit_pop( 3 );
  twobit_invoke( 3 );
  twobit_label( 1056, compiled_block_2_1056 );
  twobit_stack( 1 );
  twobit_op1_11(); /* pair? */
  twobit_load( 3, 1 );
  twobit_check( 3, 0, 0, 1058, compiled_block_2_1058 );
  twobit_stack( 1 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_pop( 3 );
  twobit_invoke( 0 );
  twobit_label( 1054, compiled_block_2_1054 );
  twobit_reg( 4 );
  twobit_pop( 3 );
  twobit_return();
  twobit_label( 1058, compiled_block_2_1058 );
  twobit_trap( 3, 0, 0, 0 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_10( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argsge( 3 );
  twobit_save( 3 );
  twobit_store( 0, 0 );
  twobit_store( 1, 3 );
  twobit_store( 2, 1 );
  twobit_store( 3, 2 );
  twobit_movereg( 1, 2 );
  twobit_load( 3, 1 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 1 );
  twobit_global( 1 ); /* apply */
  twobit_setrtn( 1060, compiled_block_2_1060 );
  twobit_invoke( 4 );
  twobit_label( 1060, compiled_block_2_1060 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_stack( 2 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_setrtn( 1061, compiled_block_2_1061 );
  twobit_invoke( 1 );
  twobit_label( 1061, compiled_block_2_1061 );
  twobit_load( 0, 0 );
  twobit_setreg( 3 );
  twobit_load( 1, 3 );
  twobit_load( 2, 1 );
  twobit_lexical( 0, 1 );
  twobit_pop( 3 );
  twobit_invoke( 3 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_11( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 4 );
  twobit_save( 3 );
  twobit_store( 0, 0 );
  twobit_store( 1, 2 );
  twobit_store( 2, 3 );
  twobit_store( 3, 1 );
  twobit_movereg( 4, 3 );
  twobit_lexical( 0, 2 );
  twobit_setrtn( 1063, compiled_block_2_1063 );
  twobit_invoke( 3 );
  twobit_label( 1063, compiled_block_2_1063 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_stack( 1 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_setrtn( 1064, compiled_block_2_1064 );
  twobit_invoke( 1 );
  twobit_label( 1064, compiled_block_2_1064 );
  twobit_load( 0, 0 );
  twobit_setreg( 3 );
  twobit_load( 1, 2 );
  twobit_load( 2, 3 );
  twobit_lexical( 0, 1 );
  twobit_pop( 3 );
  twobit_invoke( 3 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_12( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_save( 0 );
  twobit_store( 0, 0 );
  twobit_global( 1 ); /* hashtable-keys */
  twobit_setrtn( 1066, compiled_block_2_1066 );
  twobit_invoke( 1 );
  twobit_label( 1066, compiled_block_2_1066 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_global( 2 ); /* vector->list */
  twobit_pop( 0 );
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_13( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_lambda( compiled_start_2_52, 2, 1 );
  twobit_setreg( 1 );
  twobit_lambda( compiled_start_2_53, 4, 0 );
  twobit_setreg( 2 );
  twobit_global( 5 ); /* call-with-values */
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_52( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_global( 1 ); /* hashtable-entries */
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_53( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_movereg( 2, 1 );
  twobit_global( 1 ); /* vector->list */
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_14( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_lambda( compiled_start_2_50, 2, 1 );
  twobit_setreg( 1 );
  twobit_store( 1, 1 );
  twobit_movereg( 2, 1 );
  twobit_lambda( compiled_start_2_51, 4, 1 );
  twobit_setreg( 2 );
  twobit_load( 1, 1 );
  twobit_global( 5 ); /* call-with-values */
  twobit_pop( 1 );
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_50( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_global( 1 ); /* hashtable-entries */
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_51( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_store( 2, 1 );
  twobit_movereg( 1, 2 );
  twobit_load( 3, 1 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_global( 1 ); /* vector-for-each */
  twobit_pop( 1 );
  twobit_invoke( 3 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_15( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 3 );
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_lambda( compiled_start_2_47, 2, 1 );
  twobit_setreg( 1 );
  twobit_store( 1, 1 );
  twobit_movereg( 3, 1 );
  twobit_lambda( compiled_start_2_48, 4, 2 );
  twobit_setreg( 2 );
  twobit_load( 1, 1 );
  twobit_global( 5 ); /* call-with-values */
  twobit_pop( 1 );
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_47( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_global( 1 ); /* hashtable-entries */
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_48( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_reg_op2_check_662(reg(1),reg(3),1077,compiled_block_2_1077); /* internal:check-vector?/vector-length:vec with (1 0 0) */
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 5 );
  twobit_label( 1075, compiled_block_2_1075 );
  twobit_reg( 4 );
  twobit_op2_406( 3 ); /* =:fix:fix */
  twobit_branchf( 1080, compiled_block_2_1080 );
  twobit_reg( 5 );
  twobit_return();
  twobit_label( 1080, compiled_block_2_1080 );
  twobit_save( 5 );
  twobit_store( 0, 0 );
  twobit_store( 1, 2 );
  twobit_store( 2, 3 );
  twobit_store( 3, 4 );
  twobit_movereg( 5, 3 );
  twobit_reg( 4 );
  twobit_op2imm_521( fixnum(1), 49, compiled_temp_2_49 ); /* +:fix:fix */
  twobit_setreg( 31 );
  twobit_store( 31, 1 );
  twobit_reg( 1 );
  twobit_op1_401(); /* vector-length:vec */
  twobit_setreg( 30 );
  twobit_reg_op2_check_655(reg(4),reg(30),1081,compiled_block_2_1081); /* internal:check-<:fix:fix with (4 1 0) */
  twobit_reg( 1 );
  twobit_op2_402( 4 ); /* vector-ref:trusted */
  twobit_setreg( 1 );
  twobit_reg_op2_check_662(reg(2),reg(30),1082,compiled_block_2_1082); /* internal:check-vector?/vector-length:vec with (4 2 0) */
  twobit_reg_op2_check_655(reg(4),reg(30),1082,compiled_block_2_1082); /* internal:check-<:fix:fix with (4 2 0) */
  twobit_reg( 2 );
  twobit_op2_402( 4 ); /* vector-ref:trusted */
  twobit_setreg( 2 );
  twobit_lexical( 0, 2 );
  twobit_setrtn( 1083, compiled_block_2_1083 );
  twobit_invoke( 3 );
  twobit_label( 1083, compiled_block_2_1083 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 5 );
  twobit_load( 4, 1 );
  twobit_load( 1, 2 );
  twobit_load( 2, 3 );
  twobit_load( 3, 4 );
  twobit_load( 5, 5 );
  twobit_pop( 5 );
  twobit_branch( 1075, compiled_block_2_1075 );
  twobit_label( 1082, compiled_block_2_1082 );
  twobit_trap( 2, 4, 0, 160 );
  twobit_label( 1077, compiled_block_2_1077 );
  twobit_trap( 1, 0, 0, 162 );
  twobit_label( 1081, compiled_block_2_1081 );
  twobit_trap( 1, 4, 0, 160 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_16( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_lambda( compiled_start_2_45, 2, 1 );
  twobit_setreg( 1 );
  twobit_lambda( compiled_start_2_46, 4, 0 );
  twobit_setreg( 2 );
  twobit_global( 5 ); /* call-with-values */
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_45( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_global( 1 ); /* hashtable-entries */
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_46( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_save( 0 );
  twobit_store( 0, 0 );
  twobit_movereg( 2, 3 );
  twobit_movereg( 1, 2 );
  twobit_global( 1 ); /* cons */
  twobit_setreg( 1 );
  twobit_global( 2 ); /* vector-map */
  twobit_setrtn( 1087, compiled_block_2_1087 );
  twobit_invoke( 3 );
  twobit_label( 1087, compiled_block_2_1087 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_global( 3 ); /* vector->list */
  twobit_pop( 0 );
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_17( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_imm_const( TRUE_CONST ); /* #t */
  twobit_setreg( 2 );
  twobit_global( 1 ); /* hashtable-copy */
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_18( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_save( 2 );
  twobit_store( 0, 0 );
  twobit_store( 1, 2 );
  twobit_store( 2, 1 );
  twobit_lambda( compiled_start_2_44, 2, 1 );
  twobit_setreg( 2 );
  twobit_load( 1, 1 );
  twobit_lexical( 0, 1 );
  twobit_setrtn( 1092, compiled_block_2_1092 );
  twobit_invoke( 2 );
  twobit_label( 1092, compiled_block_2_1092 );
  twobit_load( 0, 0 );
  twobit_stack( 2 );
  twobit_pop( 2 );
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_2_44( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_store( 2, 1 );
  twobit_movereg( 1, 2 );
  twobit_load( 3, 1 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_lexical( 1, 2 );
  twobit_pop( 1 );
  twobit_invoke( 3 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_19( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 3 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 4 );
  twobit_reg( 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_reg( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 3 );
  twobit_const( 1 );
  twobit_setreg( 2 );
  twobit_global( 2 ); /* error */
  twobit_invoke( 3 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_20( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argsge( 1 );
  twobit_reg( 2 );
  twobit_op1_branchf_610( 1097, compiled_block_2_1097 ); /* internal:branchf-null? */
  twobit_reg( 1 );
  twobit_op1_17(); /* symbol? */
  twobit_branchf( 1099, compiled_block_2_1099 );
  twobit_global( 1 ); /* symbol-hash */
  twobit_invoke( 1 );
  twobit_label( 1099, compiled_block_2_1099 );
  twobit_reg( 1 );
  twobit_op1_branchf_614( 1102, compiled_block_2_1102 ); /* internal:branchf-fixnum? */
  twobit_global( 2 ); /* equal-hash */
  twobit_invoke( 1 );
  twobit_label( 1102, compiled_block_2_1102 );
  twobit_reg( 1 );
  twobit_op1_branchf_615( 1105, compiled_block_2_1105 ); /* internal:branchf-char? */
  twobit_global( 2 ); /* equal-hash */
  twobit_invoke( 1 );
  twobit_label( 1105, compiled_block_2_1105 );
  twobit_reg( 1 );
  twobit_op2imm_129( TRUE_CONST ); /* eq? */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 1108, compiled_block_2_1108 );
  twobit_reg( 4 );
  twobit_skip( 1107, compiled_block_2_1107 );
  twobit_label( 1108, compiled_block_2_1108 );
  twobit_reg( 1 );
  twobit_op2imm_129( FALSE_CONST ); /* eq? */
  twobit_label( 1107, compiled_block_2_1107 );
  twobit_branchf( 1110, compiled_block_2_1110 );
  twobit_global( 2 ); /* equal-hash */
  twobit_invoke( 1 );
  twobit_label( 1110, compiled_block_2_1110 );
  twobit_reg( 1 );
  twobit_op1_branchf_610( 1113, compiled_block_2_1113 ); /* internal:branchf-null? */
  twobit_global( 2 ); /* equal-hash */
  twobit_invoke( 1 );
  twobit_label( 1113, compiled_block_2_1113 );
  twobit_lexical( 0, 5 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 1116, compiled_block_2_1116 );
  twobit_save( 2 );
  twobit_store( 0, 0 );
  twobit_store( 1, 1 );
  twobit_movereg( 1, 2 );
  twobit_movereg( 4, 1 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_setreg( 3 );
  twobit_global( 3 ); /* hashtable-ref */
  twobit_setrtn( 1117, compiled_block_2_1117 );
  twobit_invoke( 3 );
  twobit_label( 1117, compiled_block_2_1117 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 1119, compiled_block_2_1119 );
  twobit_reg( 4 );
  twobit_pop( 2 );
  twobit_return();
  twobit_label( 1119, compiled_block_2_1119 );
  twobit_lexical( 0, 4 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_lexical( 0, 3 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_lexical( 0, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_op2_61( 3, 41, compiled_temp_2_41 ); /* + */
  twobit_setreg( 2 );
  twobit_reg( 2 );
  twobit_op1_branchf_614( 1121, compiled_block_2_1121 ); /* internal:branchf-fixnum? */
  twobit_reg( 4 );
  twobit_op1_branchf_614( 1123, compiled_block_2_1123 ); /* internal:branchf-fixnum? */
  twobit_reg( 2 );
  twobit_op2imm_455( fixnum(0) ); /* >=:fix:fix */
  twobit_skip( 1120, compiled_block_2_1120 );
  twobit_label( 1123, compiled_block_2_1123 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 1120, compiled_block_2_1120 );
  twobit_label( 1121, compiled_block_2_1121 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1120, compiled_block_2_1120 );
  twobit_branchf( 1125, compiled_block_2_1125 );
  twobit_reg( 2 );
  twobit_op2_103( 4, 42, compiled_temp_2_42 ); /* remainder */
  twobit_skip( 1124, compiled_block_2_1124 );
  twobit_label( 1125, compiled_block_2_1125 );
  twobit_global( 4 ); /* mod */
  twobit_setreg( 1 );
  twobit_movereg( 4, 3 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 4 );
  twobit_global( 5 ); /* apply */
  twobit_setrtn( 1126, compiled_block_2_1126 );
  twobit_invoke( 4 );
  twobit_label( 1126, compiled_block_2_1126 );
  twobit_load( 0, 0 );
  twobit_label( 1124, compiled_block_2_1124 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_load( 2, 1 );
  twobit_lexical( 0, 2 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_lexical( 0, 5 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 1 );
  twobit_movereg( 4, 3 );
  twobit_global( 6 ); /* hashtable-set! */
  twobit_setrtn( 1127, compiled_block_2_1127 );
  twobit_invoke( 3 );
  twobit_label( 1127, compiled_block_2_1127 );
  twobit_load( 0, 0 );
  twobit_stack( 2 );
  twobit_pop( 2 );
  twobit_return();
  twobit_label( 1116, compiled_block_2_1116 );
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_store( 1, 1 );
  twobit_global( 7 ); /* make-eq-hashtable */
  twobit_setrtn( 1128, compiled_block_2_1128 );
  twobit_invoke( 0 );
  twobit_label( 1128, compiled_block_2_1128 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_lexical( 0, 5 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_load( 1, 1 );
  twobit_reg( 4 );
  twobit_pop( 1 );
  twobit_invoke( 1 );
  twobit_label( 1097, compiled_block_2_1097 );
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_store( 2, 1 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_setrtn( 1130, compiled_block_2_1130 );
  twobit_invoke( 1 );
  twobit_label( 1130, compiled_block_2_1130 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_stack( 1 );
  twobit_op1_11(); /* pair? */
  twobit_load( 2, 1 );
  twobit_check( 2, 0, 0, 1131, compiled_block_2_1131 );
  twobit_stack( 1 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op1_branchf_614( 1133, compiled_block_2_1133 ); /* internal:branchf-fixnum? */
  twobit_reg( 3 );
  twobit_op1_branchf_614( 1135, compiled_block_2_1135 ); /* internal:branchf-fixnum? */
  twobit_reg( 4 );
  twobit_op2imm_455( fixnum(0) ); /* >=:fix:fix */
  twobit_skip( 1132, compiled_block_2_1132 );
  twobit_label( 1135, compiled_block_2_1135 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 1132, compiled_block_2_1132 );
  twobit_label( 1133, compiled_block_2_1133 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1132, compiled_block_2_1132 );
  twobit_branchf( 1137, compiled_block_2_1137 );
  twobit_reg( 4 );
  twobit_op2_103( 3, 43, compiled_temp_2_43 ); /* remainder */
  twobit_pop( 1 );
  twobit_return();
  twobit_label( 1137, compiled_block_2_1137 );
  twobit_global( 4 ); /* mod */
  twobit_setreg( 1 );
  twobit_movereg( 4, 2 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 4 );
  twobit_global( 5 ); /* apply */
  twobit_pop( 1 );
  twobit_invoke( 4 );
  twobit_label( 1131, compiled_block_2_1131 );
  twobit_trap( 2, 0, 0, 0 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_21( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argsge( 1 );
  twobit_reg( 2 );
  twobit_op1_branchf_610( 1140, compiled_block_2_1140 ); /* internal:branchf-null? */
  twobit_reg( 1 );
  twobit_op1_17(); /* symbol? */
  twobit_branchf( 1142, compiled_block_2_1142 );
  twobit_global( 1 ); /* symbol-hash */
  twobit_invoke( 1 );
  twobit_label( 1142, compiled_block_2_1142 );
  twobit_reg( 1 );
  twobit_op1_18(); /* complex? */
  twobit_branchf( 1145, compiled_block_2_1145 );
  twobit_global( 2 ); /* equal-hash */
  twobit_invoke( 1 );
  twobit_label( 1145, compiled_block_2_1145 );
  twobit_reg( 1 );
  twobit_op1_branchf_615( 1148, compiled_block_2_1148 ); /* internal:branchf-char? */
  twobit_global( 2 ); /* equal-hash */
  twobit_invoke( 1 );
  twobit_label( 1148, compiled_block_2_1148 );
  twobit_reg( 1 );
  twobit_op2imm_129( TRUE_CONST ); /* eq? */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 1151, compiled_block_2_1151 );
  twobit_reg( 4 );
  twobit_skip( 1150, compiled_block_2_1150 );
  twobit_label( 1151, compiled_block_2_1151 );
  twobit_reg( 1 );
  twobit_op2imm_129( FALSE_CONST ); /* eq? */
  twobit_label( 1150, compiled_block_2_1150 );
  twobit_branchf( 1153, compiled_block_2_1153 );
  twobit_global( 2 ); /* equal-hash */
  twobit_invoke( 1 );
  twobit_label( 1153, compiled_block_2_1153 );
  twobit_reg( 1 );
  twobit_op1_branchf_610( 1156, compiled_block_2_1156 ); /* internal:branchf-null? */
  twobit_global( 2 ); /* equal-hash */
  twobit_invoke( 1 );
  twobit_label( 1156, compiled_block_2_1156 );
  twobit_lexical( 0, 5 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 1159, compiled_block_2_1159 );
  twobit_save( 2 );
  twobit_store( 0, 0 );
  twobit_store( 1, 1 );
  twobit_movereg( 1, 2 );
  twobit_movereg( 4, 1 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_setreg( 3 );
  twobit_global( 3 ); /* hashtable-ref */
  twobit_setrtn( 1160, compiled_block_2_1160 );
  twobit_invoke( 3 );
  twobit_label( 1160, compiled_block_2_1160 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 1162, compiled_block_2_1162 );
  twobit_reg( 4 );
  twobit_pop( 2 );
  twobit_return();
  twobit_label( 1162, compiled_block_2_1162 );
  twobit_lexical( 0, 4 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_lexical( 0, 3 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_lexical( 0, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_op2_61( 3, 38, compiled_temp_2_38 ); /* + */
  twobit_setreg( 2 );
  twobit_reg( 2 );
  twobit_op1_branchf_614( 1164, compiled_block_2_1164 ); /* internal:branchf-fixnum? */
  twobit_reg( 4 );
  twobit_op1_branchf_614( 1166, compiled_block_2_1166 ); /* internal:branchf-fixnum? */
  twobit_reg( 2 );
  twobit_op2imm_455( fixnum(0) ); /* >=:fix:fix */
  twobit_skip( 1163, compiled_block_2_1163 );
  twobit_label( 1166, compiled_block_2_1166 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 1163, compiled_block_2_1163 );
  twobit_label( 1164, compiled_block_2_1164 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1163, compiled_block_2_1163 );
  twobit_branchf( 1168, compiled_block_2_1168 );
  twobit_reg( 2 );
  twobit_op2_103( 4, 39, compiled_temp_2_39 ); /* remainder */
  twobit_skip( 1167, compiled_block_2_1167 );
  twobit_label( 1168, compiled_block_2_1168 );
  twobit_global( 4 ); /* mod */
  twobit_setreg( 1 );
  twobit_movereg( 4, 3 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 4 );
  twobit_global( 5 ); /* apply */
  twobit_setrtn( 1169, compiled_block_2_1169 );
  twobit_invoke( 4 );
  twobit_label( 1169, compiled_block_2_1169 );
  twobit_load( 0, 0 );
  twobit_label( 1167, compiled_block_2_1167 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_load( 2, 1 );
  twobit_lexical( 0, 2 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_lexical( 0, 5 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 1 );
  twobit_movereg( 4, 3 );
  twobit_global( 6 ); /* hashtable-set! */
  twobit_setrtn( 1170, compiled_block_2_1170 );
  twobit_invoke( 3 );
  twobit_label( 1170, compiled_block_2_1170 );
  twobit_load( 0, 0 );
  twobit_stack( 2 );
  twobit_pop( 2 );
  twobit_return();
  twobit_label( 1159, compiled_block_2_1159 );
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_store( 1, 1 );
  twobit_global( 7 ); /* make-eqv-hashtable */
  twobit_setrtn( 1171, compiled_block_2_1171 );
  twobit_invoke( 0 );
  twobit_label( 1171, compiled_block_2_1171 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_lexical( 0, 5 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_load( 1, 1 );
  twobit_reg( 4 );
  twobit_pop( 1 );
  twobit_invoke( 1 );
  twobit_label( 1140, compiled_block_2_1140 );
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_store( 2, 1 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_setrtn( 1173, compiled_block_2_1173 );
  twobit_invoke( 1 );
  twobit_label( 1173, compiled_block_2_1173 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_stack( 1 );
  twobit_op1_11(); /* pair? */
  twobit_load( 2, 1 );
  twobit_check( 2, 0, 0, 1174, compiled_block_2_1174 );
  twobit_stack( 1 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op1_branchf_614( 1176, compiled_block_2_1176 ); /* internal:branchf-fixnum? */
  twobit_reg( 3 );
  twobit_op1_branchf_614( 1178, compiled_block_2_1178 ); /* internal:branchf-fixnum? */
  twobit_reg( 4 );
  twobit_op2imm_455( fixnum(0) ); /* >=:fix:fix */
  twobit_skip( 1175, compiled_block_2_1175 );
  twobit_label( 1178, compiled_block_2_1178 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 1175, compiled_block_2_1175 );
  twobit_label( 1176, compiled_block_2_1176 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1175, compiled_block_2_1175 );
  twobit_branchf( 1180, compiled_block_2_1180 );
  twobit_reg( 4 );
  twobit_op2_103( 3, 40, compiled_temp_2_40 ); /* remainder */
  twobit_pop( 1 );
  twobit_return();
  twobit_label( 1180, compiled_block_2_1180 );
  twobit_global( 4 ); /* mod */
  twobit_setreg( 1 );
  twobit_movereg( 4, 2 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 4 );
  twobit_global( 5 ); /* apply */
  twobit_pop( 1 );
  twobit_invoke( 4 );
  twobit_label( 1174, compiled_block_2_1174 );
  twobit_trap( 2, 0, 0, 0 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_22( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argsge( 1 );
  twobit_reg( 2 );
  twobit_op1_branchf_610( 1183, compiled_block_2_1183 ); /* internal:branchf-null? */
  twobit_global( 1 ); /* equal-hash */
  twobit_invoke( 1 );
  twobit_label( 1183, compiled_block_2_1183 );
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_store( 2, 1 );
  twobit_global( 1 ); /* equal-hash */
  twobit_setrtn( 1185, compiled_block_2_1185 );
  twobit_invoke( 1 );
  twobit_label( 1185, compiled_block_2_1185 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_stack( 1 );
  twobit_op1_11(); /* pair? */
  twobit_load( 2, 1 );
  twobit_check( 2, 0, 0, 1186, compiled_block_2_1186 );
  twobit_stack( 1 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op1_branchf_614( 1188, compiled_block_2_1188 ); /* internal:branchf-fixnum? */
  twobit_reg( 3 );
  twobit_op1_branchf_614( 1190, compiled_block_2_1190 ); /* internal:branchf-fixnum? */
  twobit_reg( 4 );
  twobit_op2imm_455( fixnum(0) ); /* >=:fix:fix */
  twobit_skip( 1187, compiled_block_2_1187 );
  twobit_label( 1190, compiled_block_2_1190 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 1187, compiled_block_2_1187 );
  twobit_label( 1188, compiled_block_2_1188 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1187, compiled_block_2_1187 );
  twobit_branchf( 1192, compiled_block_2_1192 );
  twobit_reg( 4 );
  twobit_op2_103( 3, 37, compiled_temp_2_37 ); /* remainder */
  twobit_pop( 1 );
  twobit_return();
  twobit_label( 1192, compiled_block_2_1192 );
  twobit_global( 2 ); /* mod */
  twobit_setreg( 1 );
  twobit_movereg( 4, 2 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 4 );
  twobit_global( 3 ); /* apply */
  twobit_pop( 1 );
  twobit_invoke( 4 );
  twobit_label( 1186, compiled_block_2_1186 );
  twobit_trap( 2, 0, 0, 0 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_23( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argsge( 1 );
  twobit_reg( 2 );
  twobit_op1_branchf_610( 1195, compiled_block_2_1195 ); /* internal:branchf-null? */
  twobit_global( 1 ); /* string-hash */
  twobit_invoke( 1 );
  twobit_label( 1195, compiled_block_2_1195 );
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_store( 2, 1 );
  twobit_global( 1 ); /* string-hash */
  twobit_setrtn( 1197, compiled_block_2_1197 );
  twobit_invoke( 1 );
  twobit_label( 1197, compiled_block_2_1197 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_stack( 1 );
  twobit_op1_11(); /* pair? */
  twobit_load( 2, 1 );
  twobit_check( 2, 0, 0, 1198, compiled_block_2_1198 );
  twobit_stack( 1 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op1_branchf_614( 1200, compiled_block_2_1200 ); /* internal:branchf-fixnum? */
  twobit_reg( 3 );
  twobit_op1_branchf_614( 1202, compiled_block_2_1202 ); /* internal:branchf-fixnum? */
  twobit_reg( 4 );
  twobit_op2imm_455( fixnum(0) ); /* >=:fix:fix */
  twobit_skip( 1199, compiled_block_2_1199 );
  twobit_label( 1202, compiled_block_2_1202 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 1199, compiled_block_2_1199 );
  twobit_label( 1200, compiled_block_2_1200 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1199, compiled_block_2_1199 );
  twobit_branchf( 1204, compiled_block_2_1204 );
  twobit_reg( 4 );
  twobit_op2_103( 3, 36, compiled_temp_2_36 ); /* remainder */
  twobit_pop( 1 );
  twobit_return();
  twobit_label( 1204, compiled_block_2_1204 );
  twobit_global( 2 ); /* mod */
  twobit_setreg( 1 );
  twobit_movereg( 4, 2 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 4 );
  twobit_global( 3 ); /* apply */
  twobit_pop( 1 );
  twobit_invoke( 4 );
  twobit_label( 1198, compiled_block_2_1198 );
  twobit_trap( 2, 0, 0, 0 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_24( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argsge( 1 );
  twobit_reg( 2 );
  twobit_op1_branchf_610( 1207, compiled_block_2_1207 ); /* internal:branchf-null? */
  twobit_global( 1 ); /* string-ci-hash */
  twobit_invoke( 1 );
  twobit_label( 1207, compiled_block_2_1207 );
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_store( 2, 1 );
  twobit_global( 1 ); /* string-ci-hash */
  twobit_setrtn( 1209, compiled_block_2_1209 );
  twobit_invoke( 1 );
  twobit_label( 1209, compiled_block_2_1209 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_stack( 1 );
  twobit_op1_11(); /* pair? */
  twobit_load( 2, 1 );
  twobit_check( 2, 0, 0, 1210, compiled_block_2_1210 );
  twobit_stack( 1 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op1_branchf_614( 1212, compiled_block_2_1212 ); /* internal:branchf-fixnum? */
  twobit_reg( 3 );
  twobit_op1_branchf_614( 1214, compiled_block_2_1214 ); /* internal:branchf-fixnum? */
  twobit_reg( 4 );
  twobit_op2imm_455( fixnum(0) ); /* >=:fix:fix */
  twobit_skip( 1211, compiled_block_2_1211 );
  twobit_label( 1214, compiled_block_2_1214 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 1211, compiled_block_2_1211 );
  twobit_label( 1212, compiled_block_2_1212 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1211, compiled_block_2_1211 );
  twobit_branchf( 1216, compiled_block_2_1216 );
  twobit_reg( 4 );
  twobit_op2_103( 3, 35, compiled_temp_2_35 ); /* remainder */
  twobit_pop( 1 );
  twobit_return();
  twobit_label( 1216, compiled_block_2_1216 );
  twobit_global( 2 ); /* mod */
  twobit_setreg( 1 );
  twobit_movereg( 4, 2 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 4 );
  twobit_global( 3 ); /* apply */
  twobit_pop( 1 );
  twobit_invoke( 4 );
  twobit_label( 1210, compiled_block_2_1210 );
  twobit_trap( 2, 0, 0, 0 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_25( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_lexical( 0, 1 );
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_26( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_lexical( 0, 1 );
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_27( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 4 );
  twobit_lexical( 0, 1 );
  twobit_invoke( 4 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_28( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_lexical( 0, 1 );
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_29( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_lexical( 0, 1 );
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_30( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_lexical( 0, 1 );
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_31( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 3 );
  twobit_lexical( 0, 1 );
  twobit_invoke( 3 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_32( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_lexical( 0, 1 );
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_33( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_lexical( 0, 1 );
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_34( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_lexical( 0, 1 );
  twobit_invoke( 2 );
  twobit_epilogue();
}


RTYPE twobit_thunk_cfe337940a5d88a84e59fb01e85ce839_1(CONT_PARAMS) {
  RETURN_RTYPE(compiled_start_2_0(CONT_ACTUALS));
}
static RTYPE compiled_block_3_1006( CONT_PARAMS );
static RTYPE compiled_block_3_1005( CONT_PARAMS );
static RTYPE compiled_start_3_0( CONT_PARAMS );
static RTYPE compiled_block_3_1003( CONT_PARAMS );
static RTYPE compiled_start_3_3( CONT_PARAMS );
static RTYPE compiled_start_3_4( CONT_PARAMS );
static RTYPE compiled_start_3_2( CONT_PARAMS );
static RTYPE compiled_start_3_1( CONT_PARAMS );

static RTYPE compiled_start_3_0( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_save( 0 );
  twobit_store( 0, 0 );
  twobit_lambda( compiled_start_3_1, 2, 0 );
  twobit_setreg( 2 );
  twobit_lambda( compiled_start_3_2, 4, 0 );
  twobit_setreg( 4 );
  twobit_lambda( compiled_start_3_3, 6, 0 );
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
  twobit_setrtn( 1005, compiled_block_3_1005 );
  twobit_invoke( 8 );
  twobit_label( 1005, compiled_block_3_1005 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_global( 13 ); /* ex:register-library! */
  twobit_setrtn( 1006, compiled_block_3_1006 );
  twobit_invoke( 1 );
  twobit_label( 1006, compiled_block_3_1006 );
  twobit_load( 0, 0 );
  twobit_global( 14 ); /* values */
  twobit_pop( 0 );
  twobit_invoke( 0 );
  twobit_epilogue();
}


static RTYPE compiled_start_3_1( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_3_2( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_global( 1 ); /* values */
  twobit_invoke( 0 );
  twobit_epilogue();
}


static RTYPE compiled_start_3_3( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_lambda( compiled_start_3_4, 2, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_global( 3 ); /* values */
  twobit_setrtn( 1003, compiled_block_3_1003 );
  twobit_invoke( 0 );
  twobit_label( 1003, compiled_block_3_1003 );
  twobit_load( 0, 0 );
  twobit_load( 1, 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_global( 4 ); /* apply */
  twobit_pop( 1 );
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_3_4( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_global( 1 ); /* values */
  twobit_invoke( 0 );
  twobit_epilogue();
}


RTYPE twobit_thunk_cfe337940a5d88a84e59fb01e85ce839_2(CONT_PARAMS) {
  RETURN_RTYPE(compiled_start_3_0(CONT_ACTUALS));
}
codeptr_t CDECL twobit_load_table[] = { 
  twobit_thunk_cfe337940a5d88a84e59fb01e85ce839_0,
  twobit_thunk_cfe337940a5d88a84e59fb01e85ce839_1,
  twobit_thunk_cfe337940a5d88a84e59fb01e85ce839_2,
  0  /* The table may be empty; some compilers complain */
};
