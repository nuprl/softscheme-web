/* Generated from /home/henchman/larcenytest/larceny-petit-Nightly-2017-08-06/larceny_src/lib/SRFI/srfi/132.slfasl */
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
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 4 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 5 );
  twobit_const( 8 );
  twobit_setreg( 8 );
  twobit_global( 9 ); /* ex:make-library */
  twobit_setrtn( 1005, compiled_block_1_1005 );
  twobit_invoke( 8 );
  twobit_label( 1005, compiled_block_1_1005 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_global( 10 ); /* ex:register-library! */
  twobit_setrtn( 1006, compiled_block_1_1006 );
  twobit_invoke( 1 );
  twobit_label( 1006, compiled_block_1_1006 );
  twobit_load( 0, 0 );
  twobit_global( 11 ); /* values */
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


RTYPE twobit_thunk_fbe26fefd80b1337e9cf7e9eb8bcb308_0(CONT_PARAMS) {
  RETURN_RTYPE(compiled_start_1_0(CONT_ACTUALS));
}
static RTYPE compiled_block_2_1489( CONT_PARAMS );
static RTYPE compiled_block_2_1488( CONT_PARAMS );
static RTYPE compiled_start_2_0( CONT_PARAMS );
static RTYPE compiled_block_2_1376( CONT_PARAMS );
static RTYPE compiled_block_2_1377( CONT_PARAMS );
static RTYPE compiled_block_2_1447( CONT_PARAMS );
static RTYPE compiled_block_2_1477( CONT_PARAMS );
static RTYPE compiled_block_2_1369( CONT_PARAMS );
static RTYPE compiled_block_2_1402( CONT_PARAMS );
static RTYPE compiled_block_2_1426( CONT_PARAMS );
static RTYPE compiled_block_2_1450( CONT_PARAMS );
static RTYPE compiled_block_2_1458( CONT_PARAMS );
static RTYPE compiled_block_2_1381( CONT_PARAMS );
static RTYPE compiled_block_2_1459( CONT_PARAMS );
static RTYPE compiled_block_2_1421( CONT_PARAMS );
static RTYPE compiled_block_2_1451( CONT_PARAMS );
static RTYPE compiled_block_2_1382( CONT_PARAMS );
static RTYPE compiled_block_2_1384( CONT_PARAMS );
static RTYPE compiled_block_2_1448( CONT_PARAMS );
static RTYPE compiled_block_2_1481( CONT_PARAMS );
static RTYPE compiled_block_2_1484( CONT_PARAMS );
static RTYPE compiled_block_2_1486( CONT_PARAMS );
static RTYPE compiled_block_2_1020( CONT_PARAMS );
static RTYPE compiled_block_2_1469( CONT_PARAMS );
static RTYPE compiled_block_2_1471( CONT_PARAMS );
static RTYPE compiled_block_2_1479( CONT_PARAMS );
static RTYPE compiled_block_2_1482( CONT_PARAMS );
static RTYPE compiled_block_2_1480( CONT_PARAMS );
static RTYPE compiled_block_2_1474( CONT_PARAMS );
static RTYPE compiled_block_2_1475( CONT_PARAMS );
static RTYPE compiled_block_2_1478( CONT_PARAMS );
static RTYPE compiled_block_2_1476( CONT_PARAMS );
static RTYPE compiled_block_2_1472( CONT_PARAMS );
static RTYPE compiled_block_2_1019( CONT_PARAMS );
static RTYPE compiled_block_2_1465( CONT_PARAMS );
static RTYPE compiled_temp_2_53( CONT_PARAMS );
static RTYPE compiled_block_2_1457( CONT_PARAMS );
static RTYPE compiled_block_2_1461( CONT_PARAMS );
static RTYPE compiled_temp_2_52( CONT_PARAMS );
static RTYPE compiled_block_2_1455( CONT_PARAMS );
static RTYPE compiled_temp_2_51( CONT_PARAMS );
static RTYPE compiled_block_2_1438( CONT_PARAMS );
static RTYPE compiled_block_2_1453( CONT_PARAMS );
static RTYPE compiled_temp_2_50( CONT_PARAMS );
static RTYPE compiled_block_2_1437( CONT_PARAMS );
static RTYPE compiled_block_2_1445( CONT_PARAMS );
static RTYPE compiled_temp_2_49( CONT_PARAMS );
static RTYPE compiled_block_2_1440( CONT_PARAMS );
static RTYPE compiled_block_2_1442( CONT_PARAMS );
static RTYPE compiled_temp_2_48( CONT_PARAMS );
static RTYPE compiled_temp_2_47( CONT_PARAMS );
static RTYPE compiled_block_2_1018( CONT_PARAMS );
static RTYPE compiled_block_2_1432( CONT_PARAMS );
static RTYPE compiled_block_2_1435( CONT_PARAMS );
static RTYPE compiled_block_2_1433( CONT_PARAMS );
static RTYPE compiled_block_2_1017( CONT_PARAMS );
static RTYPE compiled_block_2_1428( CONT_PARAMS );
static RTYPE compiled_block_2_1429( CONT_PARAMS );
static RTYPE compiled_block_2_1430( CONT_PARAMS );
static RTYPE compiled_block_2_1016( CONT_PARAMS );
static RTYPE compiled_block_2_1425( CONT_PARAMS );
static RTYPE compiled_block_2_1015( CONT_PARAMS );
static RTYPE compiled_temp_2_46( CONT_PARAMS );
static RTYPE compiled_block_2_1014( CONT_PARAMS );
static RTYPE compiled_temp_2_45( CONT_PARAMS );
static RTYPE compiled_block_2_1419( CONT_PARAMS );
static RTYPE compiled_block_2_1413( CONT_PARAMS );
static RTYPE compiled_block_2_1415( CONT_PARAMS );
static RTYPE compiled_temp_2_44( CONT_PARAMS );
static RTYPE compiled_block_2_1013( CONT_PARAMS );
static RTYPE compiled_block_2_1410( CONT_PARAMS );
static RTYPE compiled_block_2_1406( CONT_PARAMS );
static RTYPE compiled_block_2_1012( CONT_PARAMS );
static RTYPE compiled_block_2_1400( CONT_PARAMS );
static RTYPE compiled_block_2_1396( CONT_PARAMS );
static RTYPE compiled_block_2_1392( CONT_PARAMS );
static RTYPE compiled_block_2_1388( CONT_PARAMS );
static RTYPE compiled_block_2_1011( CONT_PARAMS );
static RTYPE compiled_temp_2_31( CONT_PARAMS );
static RTYPE compiled_temp_2_30( CONT_PARAMS );
static RTYPE compiled_block_2_1380( CONT_PARAMS );
static RTYPE compiled_temp_2_29( CONT_PARAMS );
static RTYPE compiled_block_2_1010( CONT_PARAMS );
static RTYPE compiled_temp_2_28( CONT_PARAMS );
static RTYPE compiled_temp_2_27( CONT_PARAMS );
static RTYPE compiled_block_2_1375( CONT_PARAMS );
static RTYPE compiled_temp_2_26( CONT_PARAMS );
static RTYPE compiled_block_2_1009( CONT_PARAMS );
static RTYPE compiled_block_2_1372( CONT_PARAMS );
static RTYPE compiled_block_2_1370( CONT_PARAMS );
static RTYPE compiled_block_2_1368( CONT_PARAMS );
static RTYPE compiled_block_2_1008( CONT_PARAMS );
static RTYPE compiled_block_2_1361( CONT_PARAMS );
static RTYPE compiled_block_2_1364( CONT_PARAMS );
static RTYPE compiled_block_2_1362( CONT_PARAMS );
static RTYPE compiled_block_2_1007( CONT_PARAMS );
static RTYPE compiled_block_2_1354( CONT_PARAMS );
static RTYPE compiled_block_2_1357( CONT_PARAMS );
static RTYPE compiled_block_2_1355( CONT_PARAMS );
static RTYPE compiled_block_2_1006( CONT_PARAMS );
static RTYPE compiled_block_2_1345( CONT_PARAMS );
static RTYPE compiled_block_2_1352( CONT_PARAMS );
static RTYPE compiled_block_2_1350( CONT_PARAMS );
static RTYPE compiled_block_2_1348( CONT_PARAMS );
static RTYPE compiled_block_2_1346( CONT_PARAMS );
static RTYPE compiled_block_2_1005( CONT_PARAMS );
static RTYPE compiled_block_2_1342( CONT_PARAMS );
static RTYPE compiled_block_2_1337( CONT_PARAMS );
static RTYPE compiled_block_2_1339( CONT_PARAMS );
static RTYPE compiled_block_2_1335( CONT_PARAMS );
static RTYPE compiled_block_2_1004( CONT_PARAMS );
static RTYPE compiled_block_2_1333( CONT_PARAMS );
static RTYPE compiled_block_2_1328( CONT_PARAMS );
static RTYPE compiled_block_2_1330( CONT_PARAMS );
static RTYPE compiled_block_2_1326( CONT_PARAMS );
static RTYPE compiled_block_2_1003( CONT_PARAMS );
static RTYPE compiled_block_2_1324( CONT_PARAMS );
static RTYPE compiled_block_2_1325( CONT_PARAMS );
static RTYPE compiled_block_2_1319( CONT_PARAMS );
static RTYPE compiled_block_2_1321( CONT_PARAMS );
static RTYPE compiled_block_2_1322( CONT_PARAMS );
static RTYPE compiled_block_2_1317( CONT_PARAMS );
static RTYPE compiled_block_2_1002( CONT_PARAMS );
static RTYPE compiled_block_2_1310( CONT_PARAMS );
static RTYPE compiled_start_2_3( CONT_PARAMS );
static RTYPE compiled_block_2_1409( CONT_PARAMS );
static RTYPE compiled_start_2_43( CONT_PARAMS );
static RTYPE compiled_start_2_42( CONT_PARAMS );
static RTYPE compiled_block_2_1405( CONT_PARAMS );
static RTYPE compiled_start_2_41( CONT_PARAMS );
static RTYPE compiled_start_2_40( CONT_PARAMS );
static RTYPE compiled_block_2_1399( CONT_PARAMS );
static RTYPE compiled_start_2_39( CONT_PARAMS );
static RTYPE compiled_start_2_38( CONT_PARAMS );
static RTYPE compiled_block_2_1395( CONT_PARAMS );
static RTYPE compiled_start_2_37( CONT_PARAMS );
static RTYPE compiled_start_2_36( CONT_PARAMS );
static RTYPE compiled_block_2_1391( CONT_PARAMS );
static RTYPE compiled_start_2_35( CONT_PARAMS );
static RTYPE compiled_start_2_34( CONT_PARAMS );
static RTYPE compiled_block_2_1387( CONT_PARAMS );
static RTYPE compiled_start_2_33( CONT_PARAMS );
static RTYPE compiled_start_2_32( CONT_PARAMS );
static RTYPE compiled_start_2_25( CONT_PARAMS );
static RTYPE compiled_start_2_24( CONT_PARAMS );
static RTYPE compiled_start_2_23( CONT_PARAMS );
static RTYPE compiled_start_2_22( CONT_PARAMS );
static RTYPE compiled_start_2_21( CONT_PARAMS );
static RTYPE compiled_block_2_1303( CONT_PARAMS );
static RTYPE compiled_block_2_1307( CONT_PARAMS );
static RTYPE compiled_block_2_1306( CONT_PARAMS );
static RTYPE compiled_block_2_1304( CONT_PARAMS );
static RTYPE compiled_block_2_1302( CONT_PARAMS );
static RTYPE compiled_temp_2_54( CONT_PARAMS );
static RTYPE compiled_start_2_20( CONT_PARAMS );
static RTYPE compiled_block_2_1294( CONT_PARAMS );
static RTYPE compiled_block_2_1298( CONT_PARAMS );
static RTYPE compiled_block_2_1297( CONT_PARAMS );
static RTYPE compiled_block_2_1295( CONT_PARAMS );
static RTYPE compiled_block_2_1293( CONT_PARAMS );
static RTYPE compiled_temp_2_55( CONT_PARAMS );
static RTYPE compiled_start_2_19( CONT_PARAMS );
static RTYPE compiled_block_2_1282( CONT_PARAMS );
static RTYPE compiled_temp_2_58( CONT_PARAMS );
static RTYPE compiled_block_2_1289( CONT_PARAMS );
static RTYPE compiled_block_2_1287( CONT_PARAMS );
static RTYPE compiled_block_2_1285( CONT_PARAMS );
static RTYPE compiled_temp_2_57( CONT_PARAMS );
static RTYPE compiled_block_2_1283( CONT_PARAMS );
static RTYPE compiled_block_2_1280( CONT_PARAMS );
static RTYPE compiled_temp_2_56( CONT_PARAMS );
static RTYPE compiled_start_2_18( CONT_PARAMS );
static RTYPE compiled_block_2_1245( CONT_PARAMS );
static RTYPE compiled_block_2_1256( CONT_PARAMS );
static RTYPE compiled_block_2_1260( CONT_PARAMS );
static RTYPE compiled_block_2_1246( CONT_PARAMS );
static RTYPE compiled_block_2_1257( CONT_PARAMS );
static RTYPE compiled_temp_2_63( CONT_PARAMS );
static RTYPE compiled_block_2_1259( CONT_PARAMS );
static RTYPE compiled_block_2_1253( CONT_PARAMS );
static RTYPE compiled_block_2_1255( CONT_PARAMS );
static RTYPE compiled_block_2_1254( CONT_PARAMS );
static RTYPE compiled_temp_2_62( CONT_PARAMS );
static RTYPE compiled_block_2_1244( CONT_PARAMS );
static RTYPE compiled_block_2_1249( CONT_PARAMS );
static RTYPE compiled_block_2_1247( CONT_PARAMS );
static RTYPE compiled_temp_2_61( CONT_PARAMS );
static RTYPE compiled_temp_2_60( CONT_PARAMS );
static RTYPE compiled_temp_2_59( CONT_PARAMS );
static RTYPE compiled_start_2_17( CONT_PARAMS );
static RTYPE compiled_block_2_1276( CONT_PARAMS );
static RTYPE compiled_temp_2_73( CONT_PARAMS );
static RTYPE compiled_temp_2_72( CONT_PARAMS );
static RTYPE compiled_block_2_1271( CONT_PARAMS );
static RTYPE compiled_block_2_1272( CONT_PARAMS );
static RTYPE compiled_block_2_1274( CONT_PARAMS );
static RTYPE compiled_block_2_1273( CONT_PARAMS );
static RTYPE compiled_temp_2_71( CONT_PARAMS );
static RTYPE compiled_temp_2_70( CONT_PARAMS );
static RTYPE compiled_temp_2_69( CONT_PARAMS );
static RTYPE compiled_block_2_1267( CONT_PARAMS );
static RTYPE compiled_block_2_1268( CONT_PARAMS );
static RTYPE compiled_temp_2_68( CONT_PARAMS );
static RTYPE compiled_block_2_1263( CONT_PARAMS );
static RTYPE compiled_block_2_1264( CONT_PARAMS );
static RTYPE compiled_temp_2_67( CONT_PARAMS );
static RTYPE compiled_temp_2_66( CONT_PARAMS );
static RTYPE compiled_start_2_65( CONT_PARAMS );
static RTYPE compiled_start_2_64( CONT_PARAMS );
static RTYPE compiled_block_2_1226( CONT_PARAMS );
static RTYPE compiled_block_2_1231( CONT_PARAMS );
static RTYPE compiled_block_2_1219( CONT_PARAMS );
static RTYPE compiled_block_2_1222( CONT_PARAMS );
static RTYPE compiled_temp_2_82( CONT_PARAMS );
static RTYPE compiled_block_2_1232( CONT_PARAMS );
static RTYPE compiled_block_2_1228( CONT_PARAMS );
static RTYPE compiled_block_2_1230( CONT_PARAMS );
static RTYPE compiled_block_2_1229( CONT_PARAMS );
static RTYPE compiled_temp_2_81( CONT_PARAMS );
static RTYPE compiled_block_2_1221( CONT_PARAMS );
static RTYPE compiled_temp_2_80( CONT_PARAMS );
static RTYPE compiled_temp_2_79( CONT_PARAMS );
static RTYPE compiled_block_2_1225( CONT_PARAMS );
static RTYPE compiled_temp_2_78( CONT_PARAMS );
static RTYPE compiled_block_2_1223( CONT_PARAMS );
static RTYPE compiled_temp_2_77( CONT_PARAMS );
static RTYPE compiled_block_2_1218( CONT_PARAMS );
static RTYPE compiled_temp_2_76( CONT_PARAMS );
static RTYPE compiled_temp_2_75( CONT_PARAMS );
static RTYPE compiled_temp_2_74( CONT_PARAMS );
static RTYPE compiled_start_2_16( CONT_PARAMS );
static RTYPE compiled_block_2_1240( CONT_PARAMS );
static RTYPE compiled_temp_2_89( CONT_PARAMS );
static RTYPE compiled_temp_2_88( CONT_PARAMS );
static RTYPE compiled_block_2_1239( CONT_PARAMS );
static RTYPE compiled_temp_2_87( CONT_PARAMS );
static RTYPE compiled_temp_2_86( CONT_PARAMS );
static RTYPE compiled_block_2_1235( CONT_PARAMS );
static RTYPE compiled_block_2_1236( CONT_PARAMS );
static RTYPE compiled_temp_2_85( CONT_PARAMS );
static RTYPE compiled_start_2_84( CONT_PARAMS );
static RTYPE compiled_start_2_83( CONT_PARAMS );
static RTYPE compiled_block_2_1213( CONT_PARAMS );
static RTYPE compiled_block_2_1215( CONT_PARAMS );
static RTYPE compiled_block_2_1214( CONT_PARAMS );
static RTYPE compiled_block_2_1186( CONT_PARAMS );
static RTYPE compiled_block_2_1187( CONT_PARAMS );
static RTYPE compiled_block_2_1189( CONT_PARAMS );
static RTYPE compiled_block_2_1194( CONT_PARAMS );
static RTYPE compiled_block_2_1199( CONT_PARAMS );
static RTYPE compiled_block_2_1204( CONT_PARAMS );
static RTYPE compiled_block_2_1208( CONT_PARAMS );
static RTYPE compiled_block_2_1212( CONT_PARAMS );
static RTYPE compiled_temp_2_96( CONT_PARAMS );
static RTYPE compiled_block_2_1209( CONT_PARAMS );
static RTYPE compiled_block_2_1210( CONT_PARAMS );
static RTYPE compiled_temp_2_95( CONT_PARAMS );
static RTYPE compiled_temp_2_94( CONT_PARAMS );
static RTYPE compiled_block_2_1205( CONT_PARAMS );
static RTYPE compiled_block_2_1206( CONT_PARAMS );
static RTYPE compiled_temp_2_93( CONT_PARAMS );
static RTYPE compiled_temp_2_92( CONT_PARAMS );
static RTYPE compiled_temp_2_91( CONT_PARAMS );
static RTYPE compiled_temp_2_90( CONT_PARAMS );
static RTYPE compiled_block_2_1200( CONT_PARAMS );
static RTYPE compiled_block_2_1202( CONT_PARAMS );
static RTYPE compiled_block_2_1201( CONT_PARAMS );
static RTYPE compiled_block_2_1195( CONT_PARAMS );
static RTYPE compiled_block_2_1197( CONT_PARAMS );
static RTYPE compiled_block_2_1196( CONT_PARAMS );
static RTYPE compiled_block_2_1190( CONT_PARAMS );
static RTYPE compiled_block_2_1192( CONT_PARAMS );
static RTYPE compiled_block_2_1191( CONT_PARAMS );
static RTYPE compiled_start_2_15( CONT_PARAMS );
static RTYPE compiled_block_2_1182( CONT_PARAMS );
static RTYPE compiled_block_2_1184( CONT_PARAMS );
static RTYPE compiled_block_2_1183( CONT_PARAMS );
static RTYPE compiled_block_2_1155( CONT_PARAMS );
static RTYPE compiled_block_2_1156( CONT_PARAMS );
static RTYPE compiled_block_2_1158( CONT_PARAMS );
static RTYPE compiled_block_2_1163( CONT_PARAMS );
static RTYPE compiled_block_2_1168( CONT_PARAMS );
static RTYPE compiled_block_2_1173( CONT_PARAMS );
static RTYPE compiled_block_2_1177( CONT_PARAMS );
static RTYPE compiled_block_2_1181( CONT_PARAMS );
static RTYPE compiled_temp_2_103( CONT_PARAMS );
static RTYPE compiled_block_2_1178( CONT_PARAMS );
static RTYPE compiled_block_2_1179( CONT_PARAMS );
static RTYPE compiled_temp_2_102( CONT_PARAMS );
static RTYPE compiled_temp_2_101( CONT_PARAMS );
static RTYPE compiled_block_2_1174( CONT_PARAMS );
static RTYPE compiled_block_2_1175( CONT_PARAMS );
static RTYPE compiled_temp_2_100( CONT_PARAMS );
static RTYPE compiled_temp_2_99( CONT_PARAMS );
static RTYPE compiled_temp_2_98( CONT_PARAMS );
static RTYPE compiled_temp_2_97( CONT_PARAMS );
static RTYPE compiled_block_2_1169( CONT_PARAMS );
static RTYPE compiled_block_2_1171( CONT_PARAMS );
static RTYPE compiled_block_2_1170( CONT_PARAMS );
static RTYPE compiled_block_2_1164( CONT_PARAMS );
static RTYPE compiled_block_2_1166( CONT_PARAMS );
static RTYPE compiled_block_2_1165( CONT_PARAMS );
static RTYPE compiled_block_2_1159( CONT_PARAMS );
static RTYPE compiled_block_2_1161( CONT_PARAMS );
static RTYPE compiled_block_2_1160( CONT_PARAMS );
static RTYPE compiled_start_2_14( CONT_PARAMS );
static RTYPE compiled_block_2_1140( CONT_PARAMS );
static RTYPE compiled_block_2_1141( CONT_PARAMS );
static RTYPE compiled_block_2_1135( CONT_PARAMS );
static RTYPE compiled_block_2_1142( CONT_PARAMS );
static RTYPE compiled_block_2_1146( CONT_PARAMS );
static RTYPE compiled_block_2_1147( CONT_PARAMS );
static RTYPE compiled_temp_2_106( CONT_PARAMS );
static RTYPE compiled_block_2_1143( CONT_PARAMS );
static RTYPE compiled_block_2_1144( CONT_PARAMS );
static RTYPE compiled_temp_2_105( CONT_PARAMS );
static RTYPE compiled_temp_2_104( CONT_PARAMS );
static RTYPE compiled_block_2_1138( CONT_PARAMS );
static RTYPE compiled_block_2_1139( CONT_PARAMS );
static RTYPE compiled_block_2_1136( CONT_PARAMS );
static RTYPE compiled_block_2_1137( CONT_PARAMS );
static RTYPE compiled_block_2_1133( CONT_PARAMS );
static RTYPE compiled_block_2_1134( CONT_PARAMS );
static RTYPE compiled_start_2_13( CONT_PARAMS );
static RTYPE compiled_block_2_1152( CONT_PARAMS );
static RTYPE compiled_temp_2_112( CONT_PARAMS );
static RTYPE compiled_block_2_1151( CONT_PARAMS );
static RTYPE compiled_block_2_1150( CONT_PARAMS );
static RTYPE compiled_block_2_1149( CONT_PARAMS );
static RTYPE compiled_temp_2_111( CONT_PARAMS );
static RTYPE compiled_temp_2_110( CONT_PARAMS );
static RTYPE compiled_temp_2_109( CONT_PARAMS );
static RTYPE compiled_start_2_108( CONT_PARAMS );
static RTYPE compiled_start_2_107( CONT_PARAMS );
static RTYPE compiled_block_2_1129( CONT_PARAMS );
static RTYPE compiled_block_2_1130( CONT_PARAMS );
static RTYPE compiled_block_2_1124( CONT_PARAMS );
static RTYPE compiled_block_2_1131( CONT_PARAMS );
static RTYPE compiled_block_2_1127( CONT_PARAMS );
static RTYPE compiled_block_2_1128( CONT_PARAMS );
static RTYPE compiled_block_2_1125( CONT_PARAMS );
static RTYPE compiled_block_2_1126( CONT_PARAMS );
static RTYPE compiled_block_2_1122( CONT_PARAMS );
static RTYPE compiled_block_2_1123( CONT_PARAMS );
static RTYPE compiled_start_2_12( CONT_PARAMS );
static RTYPE compiled_block_2_1117( CONT_PARAMS );
static RTYPE compiled_block_2_1118( CONT_PARAMS );
static RTYPE compiled_block_2_1120( CONT_PARAMS );
static RTYPE compiled_block_2_1119( CONT_PARAMS );
static RTYPE compiled_block_2_1109( CONT_PARAMS );
static RTYPE compiled_block_2_1110( CONT_PARAMS );
static RTYPE compiled_temp_2_117( CONT_PARAMS );
static RTYPE compiled_temp_2_116( CONT_PARAMS );
static RTYPE compiled_block_2_1116( CONT_PARAMS );
static RTYPE compiled_temp_2_115( CONT_PARAMS );
static RTYPE compiled_block_2_1114( CONT_PARAMS );
static RTYPE compiled_block_2_1113( CONT_PARAMS );
static RTYPE compiled_temp_2_114( CONT_PARAMS );
static RTYPE compiled_block_2_1111( CONT_PARAMS );
static RTYPE compiled_block_2_1107( CONT_PARAMS );
static RTYPE compiled_block_2_1108( CONT_PARAMS );
static RTYPE compiled_start_2_11( CONT_PARAMS );
static RTYPE compiled_temp_2_119( CONT_PARAMS );
static RTYPE compiled_temp_2_118( CONT_PARAMS );
static RTYPE compiled_start_2_113( CONT_PARAMS );
static RTYPE compiled_block_2_1096( CONT_PARAMS );
static RTYPE compiled_block_2_1097( CONT_PARAMS );
static RTYPE compiled_block_2_1102( CONT_PARAMS );
static RTYPE compiled_temp_2_122( CONT_PARAMS );
static RTYPE compiled_block_2_1100( CONT_PARAMS );
static RTYPE compiled_block_2_1099( CONT_PARAMS );
static RTYPE compiled_temp_2_121( CONT_PARAMS );
static RTYPE compiled_block_2_1094( CONT_PARAMS );
static RTYPE compiled_block_2_1095( CONT_PARAMS );
static RTYPE compiled_start_2_10( CONT_PARAMS );
static RTYPE compiled_start_2_124( CONT_PARAMS );
static RTYPE compiled_temp_2_126( CONT_PARAMS );
static RTYPE compiled_temp_2_125( CONT_PARAMS );
static RTYPE compiled_start_2_123( CONT_PARAMS );
static RTYPE compiled_temp_2_128( CONT_PARAMS );
static RTYPE compiled_temp_2_127( CONT_PARAMS );
static RTYPE compiled_start_2_120( CONT_PARAMS );
static RTYPE compiled_start_2_9( CONT_PARAMS );
static RTYPE compiled_block_2_1088( CONT_PARAMS );
static RTYPE compiled_block_2_1084( CONT_PARAMS );
static RTYPE compiled_block_2_1091( CONT_PARAMS );
static RTYPE compiled_block_2_1089( CONT_PARAMS );
static RTYPE compiled_block_2_1087( CONT_PARAMS );
static RTYPE compiled_temp_2_133( CONT_PARAMS );
static RTYPE compiled_block_2_1080( CONT_PARAMS );
static RTYPE compiled_temp_2_132( CONT_PARAMS );
static RTYPE compiled_block_2_1083( CONT_PARAMS );
static RTYPE compiled_temp_2_131( CONT_PARAMS );
static RTYPE compiled_start_2_130( CONT_PARAMS );
static RTYPE compiled_start_2_129( CONT_PARAMS );
static RTYPE compiled_start_2_8( CONT_PARAMS );
static RTYPE compiled_block_2_1072( CONT_PARAMS );
static RTYPE compiled_block_2_1062( CONT_PARAMS );
static RTYPE compiled_block_2_1058( CONT_PARAMS );
static RTYPE compiled_block_2_1068( CONT_PARAMS );
static RTYPE compiled_block_2_1063( CONT_PARAMS );
static RTYPE compiled_block_2_1075( CONT_PARAMS );
static RTYPE compiled_block_2_1073( CONT_PARAMS );
static RTYPE compiled_block_2_1071( CONT_PARAMS );
static RTYPE compiled_temp_2_139( CONT_PARAMS );
static RTYPE compiled_block_2_1054( CONT_PARAMS );
static RTYPE compiled_block_2_1066( CONT_PARAMS );
static RTYPE compiled_block_2_1064( CONT_PARAMS );
static RTYPE compiled_temp_2_138( CONT_PARAMS );
static RTYPE compiled_block_2_1061( CONT_PARAMS );
static RTYPE compiled_temp_2_137( CONT_PARAMS );
static RTYPE compiled_block_2_1053( CONT_PARAMS );
static RTYPE compiled_block_2_1057( CONT_PARAMS );
static RTYPE compiled_temp_2_136( CONT_PARAMS );
static RTYPE compiled_start_2_135( CONT_PARAMS );
static RTYPE compiled_start_2_134( CONT_PARAMS );
static RTYPE compiled_start_2_7( CONT_PARAMS );
static RTYPE compiled_block_2_1041( CONT_PARAMS );
static RTYPE compiled_block_2_1050( CONT_PARAMS );
static RTYPE compiled_block_2_1039( CONT_PARAMS );
static RTYPE compiled_block_2_1044( CONT_PARAMS );
static RTYPE compiled_block_2_1043( CONT_PARAMS );
static RTYPE compiled_block_2_1049( CONT_PARAMS );
static RTYPE compiled_temp_2_145( CONT_PARAMS );
static RTYPE compiled_block_2_1047( CONT_PARAMS );
static RTYPE compiled_block_2_1045( CONT_PARAMS );
static RTYPE compiled_temp_2_144( CONT_PARAMS );
static RTYPE compiled_temp_2_143( CONT_PARAMS );
static RTYPE compiled_block_2_1035( CONT_PARAMS );
static RTYPE compiled_block_2_1038( CONT_PARAMS );
static RTYPE compiled_block_2_1040( CONT_PARAMS );
static RTYPE compiled_temp_2_142( CONT_PARAMS );
static RTYPE compiled_start_2_141( CONT_PARAMS );
static RTYPE compiled_start_2_140( CONT_PARAMS );
static RTYPE compiled_start_2_6( CONT_PARAMS );
static RTYPE compiled_block_2_1030( CONT_PARAMS );
static RTYPE compiled_start_2_147( CONT_PARAMS );
static RTYPE compiled_start_2_146( CONT_PARAMS );
static RTYPE compiled_start_2_149( CONT_PARAMS );
static RTYPE compiled_start_2_148( CONT_PARAMS );
static RTYPE compiled_start_2_5( CONT_PARAMS );
static RTYPE compiled_block_2_1024( CONT_PARAMS );
static RTYPE compiled_temp_2_154( CONT_PARAMS );
static RTYPE compiled_temp_2_153( CONT_PARAMS );
static RTYPE compiled_temp_2_152( CONT_PARAMS );
static RTYPE compiled_start_2_151( CONT_PARAMS );
static RTYPE compiled_start_2_150( CONT_PARAMS );
static RTYPE compiled_start_2_4( CONT_PARAMS );
static RTYPE compiled_start_2_2( CONT_PARAMS );
static RTYPE compiled_start_2_1( CONT_PARAMS );

static RTYPE compiled_start_2_0( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_save( 0 );
  twobit_store( 0, 0 );
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 2 ); /*  copy-bigger!~1pxGHH~10610 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 3 ); /*  copy-smaller!~1pxGHH~10609 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 4 ); /*  count-smaller~1pxGHH~10608 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 5 ); /*  %%vector-select2~1pxGHH~10607 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 6 ); /*  %%vector-select~1pxGHH~10606 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 7 ); /*  %vector-select2~1pxGHH~10605 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 8 ); /*  %vector-select~1pxGHH~10604 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 9 ); /*  just-sort-it-threshold~1pxGHH~10603 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 10 ); /*  vector-separate!~1pxGHH~10602 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 11 ); /*  vector-select!~1pxGHH~10601 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 12 ); /*  vector-select~1pxGHH~10600 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 13 ); /*  vector-find-median!~1pxGHH~10599 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 14 ); /*  vector-find-median~1pxGHH~10598 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 15 ); /*  vector-stable-sort!~1pxGHH~10597 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 16 ); /*  vector-stable-sort~1pxGHH~10596 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 17 ); /*  list-stable-sort!~1pxGHH~10595 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 18 ); /*  list-stable-sort~1pxGHH~10594 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 19 ); /*  list-sort!~1pxGHH~10593 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 20 ); /*  vectors-start+end-2~1pxGHH~10592 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 21 ); /*  vector-start+end~1pxGHH~10591 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 22 ); /*  list-ref-or-default~1pxGHH~10590 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 23 ); /*  has-element~1pxGHH~10589 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 24 ); /*  vector-portion-copy!~1pxGHH~10588 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 25 ); /*  vector-copy~1pxGHH~10587 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 26 ); /*  vector-portion-copy~1pxGHH~10586 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 27 ); /*  vector-sorted?~1pxGHH~10585 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 28 ); /*  list-sorted?~1pxGHH~10584 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 29 ); /*  vector-delete-neighbor-dups!~1pxGHH~10583 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 30 ); /*  vector-delete-neighbor-dups~1pxGHH~10582 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 31 ); /*  list-delete-neighbor-dups!~1pxGHH~10581 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 32 ); /*  list-delete-neighbor-dups~1pxGHH~10580 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 33 ); /*  %vector-merge!~1pxGHH~10579 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 34 ); /*  vector-merge!~1pxGHH~10578 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 35 ); /*  vector-merge~1pxGHH~10577 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 36 ); /*  list-merge!~1pxGHH~10576 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 37 ); /*  list-merge~1pxGHH~10575 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 38 ); /*  assert~1pxGHH~10574 */
  twobit_lambda( compiled_start_2_1, 40, 0 );
  twobit_setreg( 2 );
  twobit_lambda( compiled_start_2_2, 42, 0 );
  twobit_setreg( 4 );
  twobit_lambda( compiled_start_2_3, 44, 0 );
  twobit_setreg( 3 );
  twobit_movereg( 3, 7 );
  twobit_movereg( 4, 6 );
  twobit_const( 45 );
  twobit_setreg( 1 );
  twobit_const( 46 );
  twobit_setreg( 3 );
  twobit_const( 47 );
  twobit_setreg( 4 );
  twobit_const( 48 );
  twobit_setreg( 5 );
  twobit_const( 49 );
  twobit_setreg( 8 );
  twobit_global( 50 ); /* ex:make-library */
  twobit_setrtn( 1488, compiled_block_2_1488 );
  twobit_invoke( 8 );
  twobit_label( 1488, compiled_block_2_1488 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_global( 51 ); /* ex:register-library! */
  twobit_setrtn( 1489, compiled_block_2_1489 );
  twobit_invoke( 1 );
  twobit_label( 1489, compiled_block_2_1489 );
  twobit_load( 0, 0 );
  twobit_global( 52 ); /* values */
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
  twobit_save( 17 );
  twobit_store( 0, 0 );
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 2 ); /*  copy-bigger!~1pxGHH~10610 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 3 ); /*  copy-smaller!~1pxGHH~10609 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 4 ); /*  count-smaller~1pxGHH~10608 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 5 ); /*  %%vector-select2~1pxGHH~10607 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 6 ); /*  %%vector-select~1pxGHH~10606 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 7 ); /*  %vector-select2~1pxGHH~10605 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 8 ); /*  %vector-select~1pxGHH~10604 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 9 ); /*  just-sort-it-threshold~1pxGHH~10603 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 10 ); /*  vector-separate!~1pxGHH~10602 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 11 ); /*  vector-select!~1pxGHH~10601 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 12 ); /*  vector-select~1pxGHH~10600 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 13 ); /*  vector-find-median!~1pxGHH~10599 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 14 ); /*  vector-find-median~1pxGHH~10598 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 15 ); /*  vector-stable-sort!~1pxGHH~10597 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 16 ); /*  vector-stable-sort~1pxGHH~10596 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 17 ); /*  list-stable-sort!~1pxGHH~10595 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 18 ); /*  list-stable-sort~1pxGHH~10594 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 19 ); /*  list-sort!~1pxGHH~10593 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 20 ); /*  vectors-start+end-2~1pxGHH~10592 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 21 ); /*  vector-start+end~1pxGHH~10591 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 22 ); /*  list-ref-or-default~1pxGHH~10590 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 23 ); /*  has-element~1pxGHH~10589 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 24 ); /*  vector-portion-copy!~1pxGHH~10588 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 25 ); /*  vector-copy~1pxGHH~10587 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 26 ); /*  vector-portion-copy~1pxGHH~10586 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 27 ); /*  vector-sorted?~1pxGHH~10585 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 28 ); /*  list-sorted?~1pxGHH~10584 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 29 ); /*  vector-delete-neighbor-dups!~1pxGHH~10583 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 30 ); /*  vector-delete-neighbor-dups~1pxGHH~10582 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 31 ); /*  list-delete-neighbor-dups!~1pxGHH~10581 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 32 ); /*  list-delete-neighbor-dups~1pxGHH~10580 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 33 ); /*  %vector-merge!~1pxGHH~10579 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 34 ); /*  vector-merge!~1pxGHH~10578 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 35 ); /*  vector-merge~1pxGHH~10577 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 36 ); /*  list-merge!~1pxGHH~10576 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 37 ); /*  list-merge~1pxGHH~10575 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 38 ); /*  assert~1pxGHH~10574 */
  twobit_lambda( compiled_start_2_4, 40, 0 );
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
  twobit_setreg( 22 );
  twobit_op1_4(); /* undefined */
  twobit_setreg( 21 );
  twobit_op1_4(); /* undefined */
  twobit_setreg( 20 );
  twobit_op1_4(); /* undefined */
  twobit_setreg( 19 );
  twobit_op1_4(); /* undefined */
  twobit_setreg( 18 );
  twobit_op1_4(); /* undefined */
  twobit_setreg( 17 );
  twobit_op1_4(); /* undefined */
  twobit_setreg( 16 );
  twobit_op1_4(); /* undefined */
  twobit_setreg( 15 );
  twobit_op1_4(); /* undefined */
  twobit_setreg( 14 );
  twobit_op1_4(); /* undefined */
  twobit_setreg( 13 );
  twobit_op1_4(); /* undefined */
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 12 );
  twobit_reg( 13 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 13 );
  twobit_reg( 14 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 14 );
  twobit_reg( 15 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 15 );
  twobit_reg( 16 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 16 );
  twobit_reg( 17 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 17 );
  twobit_reg( 18 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 18 );
  twobit_reg( 19 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 19 );
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
  twobit_reg( 23 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 23 );
  twobit_store( 23, 13 );
  twobit_reg( 24 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 24 );
  twobit_store( 24, 12 );
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
  twobit_store( 3, 2 );
  twobit_lambda( compiled_start_2_5, 42, 0 );
  twobit_setreg( 11 );
  twobit_reg( 3 );
  twobit_op2_84( 11 ); /* cell-set! */
  twobit_lambda( compiled_start_2_6, 44, 0 );
  twobit_setreg( 11 );
  twobit_reg( 2 );
  twobit_op2_84( 11 ); /* cell-set! */
  twobit_lambda( compiled_start_2_7, 46, 0 );
  twobit_setreg( 11 );
  twobit_reg( 1 );
  twobit_op2_84( 11 ); /* cell-set! */
  twobit_lambda( compiled_start_2_8, 48, 0 );
  twobit_setreg( 11 );
  twobit_reg( 31 );
  twobit_op2_84( 11 ); /* cell-set! */
  twobit_lambda( compiled_start_2_9, 50, 0 );
  twobit_setreg( 11 );
  twobit_reg( 30 );
  twobit_op2_84( 11 ); /* cell-set! */
  twobit_global( 51 ); /* list-sort */
  twobit_setreg( 11 );
  twobit_reg( 29 );
  twobit_op2_84( 11 ); /* cell-set! */
  twobit_reg( 28 );
  twobit_op2_84( 11 ); /* cell-set! */
  twobit_reg( 27 );
  twobit_op2_84( 11 ); /* cell-set! */
  twobit_global( 52 ); /* vector-sort */
  twobit_setreg( 11 );
  twobit_reg( 26 );
  twobit_op2_84( 11 ); /* cell-set! */
  twobit_global( 53 ); /* vector-sort! */
  twobit_setreg( 11 );
  twobit_reg( 25 );
  twobit_op2_84( 11 ); /* cell-set! */
  twobit_movereg( 18, 2 );
  twobit_movereg( 17, 1 );
  twobit_lambda( compiled_start_2_10, 55, 2 );
  twobit_setreg( 11 );
  twobit_reg( 24 );
  twobit_op2_84( 11 ); /* cell-set! */
  twobit_lambda( compiled_start_2_11, 57, 0 );
  twobit_setreg( 11 );
  twobit_reg( 23 );
  twobit_op2_84( 11 ); /* cell-set! */
  twobit_movereg( 18, 1 );
  twobit_lambda( compiled_start_2_12, 59, 1 );
  twobit_setreg( 11 );
  twobit_reg( 22 );
  twobit_op2_84( 11 ); /* cell-set! */
  twobit_reg( 22 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 11 );
  twobit_reg( 21 );
  twobit_op2_84( 11 ); /* cell-set! */
  twobit_movereg( 13, 4 );
  twobit_movereg( 12, 3 );
  twobit_movereg( 14, 2 );
  twobit_movereg( 22, 1 );
  twobit_lambda( compiled_start_2_13, 61, 4 );
  twobit_setreg( 1 );
  twobit_reg( 20 );
  twobit_op2_84( 1 ); /* cell-set! */
  twobit_imm_const( fixnum(50) ); /* 50 */
  twobit_setreg( 1 );
  twobit_reg( 19 );
  twobit_op2_84( 1 ); /* cell-set! */
  twobit_movereg( 16, 1 );
  twobit_lambda( compiled_start_2_14, 63, 1 );
  twobit_setreg( 22 );
  twobit_reg( 18 );
  twobit_op2_84( 22 ); /* cell-set! */
  twobit_movereg( 15, 1 );
  twobit_lambda( compiled_start_2_15, 65, 1 );
  twobit_setreg( 22 );
  twobit_reg( 17 );
  twobit_op2_84( 22 ); /* cell-set! */
  twobit_movereg( 19, 5 );
  twobit_movereg( 14, 4 );
  twobit_movereg( 16, 3 );
  twobit_movereg( 12, 2 );
  twobit_movereg( 13, 1 );
  twobit_lambda( compiled_start_2_16, 67, 5 );
  twobit_setreg( 22 );
  twobit_reg( 16 );
  twobit_op2_84( 22 ); /* cell-set! */
  twobit_movereg( 19, 6 );
  twobit_movereg( 14, 5 );
  twobit_movereg( 15, 4 );
  twobit_movereg( 12, 3 );
  twobit_movereg( 16, 2 );
  twobit_movereg( 13, 1 );
  twobit_lambda( compiled_start_2_17, 69, 6 );
  twobit_setreg( 2 );
  twobit_reg( 15 );
  twobit_op2_84( 2 ); /* cell-set! */
  twobit_movereg( 14, 1 );
  twobit_lambda( compiled_start_2_18, 71, 1 );
  twobit_setreg( 4 );
  twobit_reg( 14 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_movereg( 13, 1 );
  twobit_lambda( compiled_start_2_19, 73, 1 );
  twobit_setreg( 4 );
  twobit_reg( 13 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_movereg( 12, 1 );
  twobit_lambda( compiled_start_2_20, 75, 1 );
  twobit_setreg( 4 );
  twobit_reg( 12 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_global( 76 ); /* values */
  twobit_setrtn( 1310, compiled_block_2_1310 );
  twobit_invoke( 0 );
  twobit_label( 1310, compiled_block_2_1310 );
  twobit_load( 0, 0 );
  twobit_load( 1, 1 );
  twobit_lambda( compiled_start_2_21, 78, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 17 );
  twobit_lambda( compiled_start_2_22, 80, 0 );
  twobit_setreg( 3 );
  twobit_stack( 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 2 );
  twobit_stack( 3 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_store( 4, 16 );
  twobit_lambda( compiled_start_2_23, 82, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_lambda( compiled_start_2_24, 84, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_stack( 4 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_stack( 5 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_store( 4, 4 );
  twobit_lambda( compiled_start_2_25, 86, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 5 );
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
  twobit_store( 4, 11 );
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
  twobit_stack( 11 );
  twobit_op2_58( 4 ); /* cons */
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
  twobit_stack( 5 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 4 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 1 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 16 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_reg( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_reg( 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 17 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 2 );
  twobit_global( 87 ); /* apply */
  twobit_pop( 17 );
  twobit_invoke( 2 );
  twobit_label( 1002, compiled_block_2_1002 );
  twobit_save( 5 );
  twobit_store( 0, 0 );
  twobit_store( 1, 2 );
  twobit_store( 2, 3 );
  twobit_store( 3, 4 );
  twobit_store( 4, 5 );
  twobit_store( 5, 1 );
  twobit_movereg( 1, 31 );
  twobit_movereg( 4, 1 );
  twobit_reg( 31 );
  twobit_setrtn( 1317, compiled_block_2_1317 );
  twobit_invoke( 2 );
  twobit_label( 1317, compiled_block_2_1317 );
  twobit_load( 0, 0 );
  twobit_branchf( 1319, compiled_block_2_1319 );
  twobit_stack( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1321, compiled_block_2_1321 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 4 );
  twobit_load( 1, 2 );
  twobit_load( 2, 3 );
  twobit_load( 3, 4 );
  twobit_load( 5, 1 );
  twobit_setrtn( 1322, compiled_block_2_1322 );
  twobit_branch( 1002, compiled_block_2_1002 );
  twobit_label( 1322, compiled_block_2_1322 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_stack( 5 );
  twobit_op2_58( 4 ); /* cons */
  twobit_pop( 5 );
  twobit_return();
  twobit_label( 1321, compiled_block_2_1321 );
  twobit_load( 3, 4 );
  twobit_stack( 5 );
  twobit_op2_58( 3 ); /* cons */
  twobit_pop( 5 );
  twobit_return();
  twobit_label( 1319, compiled_block_2_1319 );
  twobit_stack( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1324, compiled_block_2_1324 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_load( 1, 2 );
  twobit_movereg( 4, 3 );
  twobit_load( 4, 5 );
  twobit_load( 5, 1 );
  twobit_setrtn( 1325, compiled_block_2_1325 );
  twobit_branch( 1002, compiled_block_2_1002 );
  twobit_label( 1325, compiled_block_2_1325 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_stack( 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_pop( 5 );
  twobit_return();
  twobit_label( 1324, compiled_block_2_1324 );
  twobit_load( 3, 1 );
  twobit_stack( 3 );
  twobit_op2_58( 3 ); /* cons */
  twobit_pop( 5 );
  twobit_return();
  twobit_label( 1003, compiled_block_2_1003 );
  twobit_save( 6 );
  twobit_store( 0, 0 );
  twobit_store( 1, 2 );
  twobit_store( 2, 5 );
  twobit_store( 3, 3 );
  twobit_store( 4, 4 );
  twobit_store( 5, 1 );
  twobit_store( 6, 6 );
  twobit_movereg( 4, 2 );
  twobit_movereg( 1, 31 );
  twobit_movereg( 6, 1 );
  twobit_reg( 31 );
  twobit_setrtn( 1326, compiled_block_2_1326 );
  twobit_invoke( 2 );
  twobit_label( 1326, compiled_block_2_1326 );
  twobit_load( 0, 0 );
  twobit_branchf( 1328, compiled_block_2_1328 );
  twobit_stack( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1330, compiled_block_2_1330 ); /* internal:branchf-pair? */
  twobit_load( 2, 1 );
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_movereg( 3, 6 );
  twobit_movereg( 4, 5 );
  twobit_load( 1, 2 );
  twobit_load( 3, 3 );
  twobit_load( 4, 4 );
  twobit_pop( 6 );
  twobit_branch( 1003, compiled_block_2_1003 );
  twobit_label( 1330, compiled_block_2_1330 );
  twobit_load( 3, 3 );
  twobit_stack( 1 );
  twobit_op2_60( 3 ); /* set-cdr! */
  twobit_pop( 6 );
  twobit_return();
  twobit_label( 1328, compiled_block_2_1328 );
  twobit_stack( 3 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_store( 4, 4 );
  twobit_load( 3, 3 );
  twobit_stack( 5 );
  twobit_op2_60( 3 ); /* set-cdr! */
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1333, compiled_block_2_1333 ); /* internal:branchf-pair? */
  twobit_movereg( 3, 2 );
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 4 );
  twobit_load( 1, 2 );
  twobit_load( 3, 4 );
  twobit_load( 5, 1 );
  twobit_load( 6, 6 );
  twobit_pop( 6 );
  twobit_branch( 1004, compiled_block_2_1004 );
  twobit_label( 1333, compiled_block_2_1333 );
  twobit_load( 2, 1 );
  twobit_reg( 3 );
  twobit_op2_60( 2 ); /* set-cdr! */
  twobit_pop( 6 );
  twobit_return();
  twobit_label( 1004, compiled_block_2_1004 );
  twobit_save( 6 );
  twobit_store( 0, 0 );
  twobit_store( 1, 3 );
  twobit_store( 2, 2 );
  twobit_store( 3, 4 );
  twobit_store( 4, 5 );
  twobit_store( 5, 1 );
  twobit_store( 6, 6 );
  twobit_movereg( 4, 2 );
  twobit_movereg( 1, 31 );
  twobit_movereg( 6, 1 );
  twobit_reg( 31 );
  twobit_setrtn( 1335, compiled_block_2_1335 );
  twobit_invoke( 2 );
  twobit_label( 1335, compiled_block_2_1335 );
  twobit_load( 0, 0 );
  twobit_branchf( 1337, compiled_block_2_1337 );
  twobit_stack( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_load( 3, 1 );
  twobit_stack( 2 );
  twobit_op2_60( 3 ); /* set-cdr! */
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1339, compiled_block_2_1339 ); /* internal:branchf-pair? */
  twobit_movereg( 3, 2 );
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_movereg( 3, 6 );
  twobit_movereg( 4, 5 );
  twobit_load( 1, 3 );
  twobit_load( 3, 4 );
  twobit_load( 4, 5 );
  twobit_pop( 6 );
  twobit_branch( 1003, compiled_block_2_1003 );
  twobit_label( 1339, compiled_block_2_1339 );
  twobit_load( 2, 4 );
  twobit_reg( 3 );
  twobit_op2_60( 2 ); /* set-cdr! */
  twobit_pop( 6 );
  twobit_return();
  twobit_label( 1337, compiled_block_2_1337 );
  twobit_stack( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_store( 4, 5 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1342, compiled_block_2_1342 ); /* internal:branchf-pair? */
  twobit_load( 2, 4 );
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 4 );
  twobit_load( 1, 3 );
  twobit_load( 3, 5 );
  twobit_load( 5, 1 );
  twobit_load( 6, 6 );
  twobit_pop( 6 );
  twobit_branch( 1004, compiled_block_2_1004 );
  twobit_label( 1342, compiled_block_2_1342 );
  twobit_load( 3, 1 );
  twobit_stack( 4 );
  twobit_op2_60( 3 ); /* set-cdr! */
  twobit_pop( 6 );
  twobit_return();
  twobit_label( 1005, compiled_block_2_1005 );
  twobit_reg( 3 );
  twobit_op1_branchf_611( 1345, compiled_block_2_1345 ); /* internal:branchf-pair? */
  twobit_save( 5 );
  twobit_store( 0, 0 );
  twobit_store( 1, 3 );
  twobit_store( 2, 1 );
  twobit_store( 3, 5 );
  twobit_reg( 3 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_reg( 3 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 31 );
  twobit_store( 31, 4 );
  twobit_movereg( 31, 2 );
  twobit_movereg( 1, 30 );
  twobit_load( 1, 1 );
  twobit_reg( 30 );
  twobit_setrtn( 1346, compiled_block_2_1346 );
  twobit_invoke( 2 );
  twobit_label( 1346, compiled_block_2_1346 );
  twobit_load( 0, 0 );
  twobit_branchf( 1348, compiled_block_2_1348 );
  twobit_load( 3, 2 );
  twobit_load( 1, 3 );
  twobit_load( 2, 1 );
  twobit_pop( 5 );
  twobit_branch( 1005, compiled_block_2_1005 );
  twobit_label( 1348, compiled_block_2_1348 );
  twobit_load( 1, 3 );
  twobit_load( 2, 4 );
  twobit_load( 3, 2 );
  twobit_setrtn( 1350, compiled_block_2_1350 );
  twobit_branch( 1005, compiled_block_2_1005 );
  twobit_label( 1350, compiled_block_2_1350 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_load( 3, 2 );
  twobit_reg( 4 );
  twobit_op2_branchf_624( 3, 1352, compiled_block_2_1352 ); /* internal:branchf-eq? */
  twobit_stack( 5 );
  twobit_pop( 5 );
  twobit_return();
  twobit_label( 1352, compiled_block_2_1352 );
  twobit_stack( 4 );
  twobit_op2_58( 4 ); /* cons */
  twobit_pop( 5 );
  twobit_return();
  twobit_label( 1345, compiled_block_2_1345 );
  twobit_reg( 3 );
  twobit_return();
  twobit_label( 1006, compiled_block_2_1006 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1354, compiled_block_2_1354 ); /* internal:branchf-pair? */
  twobit_save( 6 );
  twobit_store( 0, 0 );
  twobit_store( 1, 2 );
  twobit_store( 2, 3 );
  twobit_store( 3, 4 );
  twobit_store( 4, 5 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 31 );
  twobit_store( 31, 1 );
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 30 );
  twobit_store( 30, 6 );
  twobit_movereg( 30, 2 );
  twobit_movereg( 1, 29 );
  twobit_movereg( 3, 1 );
  twobit_reg( 29 );
  twobit_setrtn( 1355, compiled_block_2_1355 );
  twobit_invoke( 2 );
  twobit_label( 1355, compiled_block_2_1355 );
  twobit_load( 0, 0 );
  twobit_branchf( 1357, compiled_block_2_1357 );
  twobit_load( 4, 1 );
  twobit_load( 1, 2 );
  twobit_load( 2, 3 );
  twobit_load( 3, 4 );
  twobit_pop( 6 );
  twobit_branch( 1006, compiled_block_2_1006 );
  twobit_label( 1357, compiled_block_2_1357 );
  twobit_load( 4, 5 );
  twobit_stack( 3 );
  twobit_op2_60( 4 ); /* set-cdr! */
  twobit_movereg( 4, 2 );
  twobit_load( 1, 2 );
  twobit_load( 3, 6 );
  twobit_load( 4, 1 );
  twobit_pop( 6 );
  twobit_branch( 1007, compiled_block_2_1007 );
  twobit_label( 1354, compiled_block_2_1354 );
  twobit_reg( 2 );
  twobit_op2_60( 4 ); /* set-cdr! */
  twobit_return();
  twobit_label( 1007, compiled_block_2_1007 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1361, compiled_block_2_1361 ); /* internal:branchf-pair? */
  twobit_save( 6 );
  twobit_store( 0, 0 );
  twobit_store( 1, 2 );
  twobit_store( 2, 3 );
  twobit_store( 3, 4 );
  twobit_store( 4, 5 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 31 );
  twobit_store( 31, 1 );
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 30 );
  twobit_store( 30, 6 );
  twobit_movereg( 30, 2 );
  twobit_movereg( 1, 29 );
  twobit_movereg( 3, 1 );
  twobit_reg( 29 );
  twobit_setrtn( 1362, compiled_block_2_1362 );
  twobit_invoke( 2 );
  twobit_label( 1362, compiled_block_2_1362 );
  twobit_load( 0, 0 );
  twobit_branchf( 1364, compiled_block_2_1364 );
  twobit_load( 4, 1 );
  twobit_load( 1, 2 );
  twobit_load( 2, 3 );
  twobit_load( 3, 4 );
  twobit_pop( 6 );
  twobit_branch( 1006, compiled_block_2_1006 );
  twobit_label( 1364, compiled_block_2_1364 );
  twobit_load( 2, 5 );
  twobit_load( 1, 2 );
  twobit_load( 3, 6 );
  twobit_load( 4, 1 );
  twobit_pop( 6 );
  twobit_branch( 1007, compiled_block_2_1007 );
  twobit_label( 1361, compiled_block_2_1361 );
  twobit_op1_3(); /* unspecified */
  twobit_return();
  twobit_label( 1008, compiled_block_2_1008 );
  twobit_reg( 3 );
  twobit_op1_11(); /* pair? */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_9(); /* not */
  twobit_setreg( 31 );
  twobit_reg( 31 );
  twobit_branchf( 1368, compiled_block_2_1368 );
  twobit_reg( 31 );
  twobit_return();
  twobit_label( 1368, compiled_block_2_1368 );
  twobit_save( 3 );
  twobit_store( 0, 0 );
  twobit_store( 1, 2 );
  twobit_store( 3, 1 );
  twobit_reg( 4 );
  twobit_check( 3, 0, 0, 1369, compiled_block_2_1369 );
  twobit_reg( 3 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_movereg( 1, 31 );
  twobit_movereg( 4, 1 );
  twobit_reg( 31 );
  twobit_setrtn( 1370, compiled_block_2_1370 );
  twobit_invoke( 2 );
  twobit_label( 1370, compiled_block_2_1370 );
  twobit_load( 0, 0 );
  twobit_branchf( 1372, compiled_block_2_1372 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_pop( 3 );
  twobit_return();
  twobit_label( 1372, compiled_block_2_1372 );
  twobit_stack( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 3 );
  twobit_load( 1, 2 );
  twobit_load( 2, 3 );
  twobit_pop( 3 );
  twobit_branch( 1008, compiled_block_2_1008 );
  twobit_label( 1009, compiled_block_2_1009 );
  twobit_reg( 4 );
  twobit_op2_branchf_623( 2, 26, compiled_temp_2_26, 1375, compiled_block_2_1375 ); /* internal:branchf-= */
  twobit_reg( 3 );
  twobit_return();
  twobit_label( 1375, compiled_block_2_1375 );
  twobit_reg_op1_check_651(reg(4),1376,compiled_block_2_1376); /* internal:check-fixnum? with (4 1 0) */
  twobit_reg_op2_check_662(reg(1),reg(31),1376,compiled_block_2_1376); /* internal:check-vector?/vector-length:vec with (4 1 0) */
  twobit_reg_op2_check_661(reg(4),reg(31),1376,compiled_block_2_1376); /* internal:check-range with (4 1 0) */
  twobit_reg( 1 );
  twobit_op2_402( 4 ); /* vector-ref:trusted */
  twobit_setreg( 31 );
  twobit_reg_op1_check_651(reg(5),1377,compiled_block_2_1377); /* internal:check-fixnum? with (31 5 3) */
  twobit_reg_op2_check_662(reg(3),reg(30),1377,compiled_block_2_1377); /* internal:check-vector?/vector-length:vec with (31 5 3) */
  twobit_reg_op2_check_661(reg(5),reg(30),1377,compiled_block_2_1377); /* internal:check-range with (31 5 3) */
  twobit_reg( 3 );
  twobit_op3_403( 5, 31 ); /* vector-set!:trusted */
  twobit_reg( 4 );
  twobit_op2imm_130( fixnum(1), 27, compiled_temp_2_27 ); /* + */
  twobit_setreg( 4 );
  twobit_reg( 5 );
  twobit_op2imm_130( fixnum(1), 28, compiled_temp_2_28 ); /* + */
  twobit_setreg( 31 );
  twobit_movereg( 31, 5 );
  twobit_branch( 1009, compiled_block_2_1009 );
  twobit_label( 1010, compiled_block_2_1010 );
  twobit_reg( 3 );
  twobit_op2imm_branchf_635( fixnum(0), 29, compiled_temp_2_29, 1380, compiled_block_2_1380 ); /* internal:branchf-</imm */
  twobit_op1_3(); /* unspecified */
  twobit_return();
  twobit_label( 1380, compiled_block_2_1380 );
  twobit_reg_op1_check_651(reg(4),1381,compiled_block_2_1381); /* internal:check-fixnum? with (4 2 0) */
  twobit_reg_op2_check_662(reg(2),reg(31),1381,compiled_block_2_1381); /* internal:check-vector?/vector-length:vec with (4 2 0) */
  twobit_reg_op2_check_661(reg(4),reg(31),1381,compiled_block_2_1381); /* internal:check-range with (4 2 0) */
  twobit_reg( 2 );
  twobit_op2_402( 4 ); /* vector-ref:trusted */
  twobit_setreg( 31 );
  twobit_reg_op1_check_651(reg(3),1382,compiled_block_2_1382); /* internal:check-fixnum? with (31 3 1) */
  twobit_reg_op2_check_662(reg(1),reg(30),1382,compiled_block_2_1382); /* internal:check-vector?/vector-length:vec with (31 3 1) */
  twobit_reg_op2_check_661(reg(3),reg(30),1382,compiled_block_2_1382); /* internal:check-range with (31 3 1) */
  twobit_reg( 1 );
  twobit_op3_403( 3, 31 ); /* vector-set!:trusted */
  twobit_reg( 3 );
  twobit_op2imm_131( fixnum(1), 30, compiled_temp_2_30 ); /* - */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op2imm_131( fixnum(1), 31, compiled_temp_2_31 ); /* - */
  twobit_setreg( 4 );
  twobit_branch( 1010, compiled_block_2_1010 );
  twobit_label( 1011, compiled_block_2_1011 );
  twobit_save( 4 );
  twobit_store( 0, 0 );
  twobit_store( 1, 3 );
  twobit_store( 3, 2 );
  twobit_reg_op2_check_662(reg(2),reg(4),1384,compiled_block_2_1384); /* internal:check-vector?/vector-length:vec with (2 0 0) */
  twobit_movereg( 3, 1 );
  twobit_lambda( compiled_start_2_32, 89, 1 );
  twobit_setreg( 1 );
  twobit_store( 1, 1 );
  twobit_movereg( 4, 1 );
  twobit_lambda( compiled_start_2_33, 91, 1 );
  twobit_setreg( 2 );
  twobit_load( 1, 1 );
  twobit_global( 92 ); /* call-with-values */
  twobit_setrtn( 1388, compiled_block_2_1388 );
  twobit_invoke( 2 );
  twobit_label( 1388, compiled_block_2_1388 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_load( 1, 2 );
  twobit_lambda( compiled_start_2_34, 94, 1 );
  twobit_setreg( 1 );
  twobit_lambda( compiled_start_2_35, 96, 0 );
  twobit_setreg( 2 );
  twobit_global( 97 ); /* call-with-values */
  twobit_setrtn( 1392, compiled_block_2_1392 );
  twobit_invoke( 2 );
  twobit_label( 1392, compiled_block_2_1392 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 4 );
  twobit_stack( 3 );
  twobit_op1_41(); /* vector? */
  twobit_load( 2, 3 );
  twobit_check( 2, 0, 0, 1384, compiled_block_2_1384 );
  twobit_stack( 3 );
  twobit_op1_401(); /* vector-length:vec */
  twobit_setreg( 3 );
  twobit_load( 1, 2 );
  twobit_lambda( compiled_start_2_36, 99, 1 );
  twobit_setreg( 1 );
  twobit_store( 1, 3 );
  twobit_movereg( 3, 1 );
  twobit_lambda( compiled_start_2_37, 101, 1 );
  twobit_setreg( 2 );
  twobit_load( 1, 3 );
  twobit_global( 102 ); /* call-with-values */
  twobit_setrtn( 1396, compiled_block_2_1396 );
  twobit_invoke( 2 );
  twobit_label( 1396, compiled_block_2_1396 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_load( 1, 2 );
  twobit_lambda( compiled_start_2_38, 104, 1 );
  twobit_setreg( 1 );
  twobit_lambda( compiled_start_2_39, 106, 0 );
  twobit_setreg( 2 );
  twobit_global( 107 ); /* call-with-values */
  twobit_setrtn( 1400, compiled_block_2_1400 );
  twobit_invoke( 2 );
  twobit_label( 1400, compiled_block_2_1400 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_load( 4, 1 );
  twobit_load( 3, 4 );
  twobit_load( 2, 3 );
  twobit_global( 108 ); /* values */
  twobit_pop( 4 );
  twobit_invoke( 4 );
  twobit_label( 1012, compiled_block_2_1012 );
  twobit_save( 2 );
  twobit_store( 0, 0 );
  twobit_store( 2, 2 );
  twobit_reg_op2_check_662(reg(1),reg(4),1402,compiled_block_2_1402); /* internal:check-vector?/vector-length:vec with (1 0 0) */
  twobit_movereg( 2, 1 );
  twobit_lambda( compiled_start_2_40, 110, 1 );
  twobit_setreg( 1 );
  twobit_store( 1, 1 );
  twobit_movereg( 4, 1 );
  twobit_lambda( compiled_start_2_41, 112, 1 );
  twobit_setreg( 2 );
  twobit_load( 1, 1 );
  twobit_global( 113 ); /* call-with-values */
  twobit_setrtn( 1406, compiled_block_2_1406 );
  twobit_invoke( 2 );
  twobit_label( 1406, compiled_block_2_1406 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_load( 1, 2 );
  twobit_lambda( compiled_start_2_42, 115, 1 );
  twobit_setreg( 1 );
  twobit_lambda( compiled_start_2_43, 117, 0 );
  twobit_setreg( 2 );
  twobit_global( 118 ); /* call-with-values */
  twobit_setrtn( 1410, compiled_block_2_1410 );
  twobit_invoke( 2 );
  twobit_label( 1410, compiled_block_2_1410 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_load( 2, 1 );
  twobit_global( 119 ); /* values */
  twobit_pop( 2 );
  twobit_invoke( 2 );
  twobit_label( 1013, compiled_block_2_1013 );
  twobit_reg( 2 );
  twobit_op1_branchf_612( 44, compiled_temp_2_44, 1413, compiled_block_2_1413 ); /* internal:branchf-zero? */
  twobit_reg( 1 );
  twobit_op1_branchf_611( 1415, compiled_block_2_1415 ); /* internal:branchf-pair? */
  twobit_reg( 1 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_imm_const( TRUE_CONST ); /* #t */
  twobit_setreg( 1 );
  twobit_global( 120 ); /* values */
  twobit_invoke( 2 );
  twobit_label( 1415, compiled_block_2_1415 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_setreg( 1 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_setreg( 2 );
  twobit_global( 121 ); /* values */
  twobit_invoke( 2 );
  twobit_label( 1413, compiled_block_2_1413 );
  twobit_reg( 1 );
  twobit_op1_branchf_610( 1419, compiled_block_2_1419 ); /* internal:branchf-null? */
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_setreg( 1 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_setreg( 2 );
  twobit_global( 122 ); /* values */
  twobit_invoke( 2 );
  twobit_label( 1419, compiled_block_2_1419 );
  twobit_reg_op1_check_652(reg(1),1421,compiled_block_2_1421); /* internal:check-pair? with (1 0 0) */
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 1 );
  twobit_reg( 2 );
  twobit_op2imm_131( fixnum(1), 45, compiled_temp_2_45 ); /* - */
  twobit_setreg( 2 );
  twobit_branch( 1013, compiled_block_2_1013 );
  twobit_label( 1014, compiled_block_2_1014 );
  twobit_reg_op1_check_653(reg(1),1402,compiled_block_2_1402); /* internal:check-vector? with (1 0 0) */
  twobit_reg( 2 );
  twobit_op2imm_131( fixnum(0), 46, compiled_temp_2_46 ); /* - */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_80( 3 ); /* make-vector */
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 5 );
  twobit_branch( 1009, compiled_block_2_1009 );
  twobit_label( 1015, compiled_block_2_1015 );
  twobit_reg( 2 );
  twobit_op1_11(); /* pair? */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_9(); /* not */
  twobit_setreg( 3 );
  twobit_reg( 3 );
  twobit_branchf( 1425, compiled_block_2_1425 );
  twobit_reg( 3 );
  twobit_return();
  twobit_label( 1425, compiled_block_2_1425 );
  twobit_reg( 4 );
  twobit_check( 2, 0, 0, 1426, compiled_block_2_1426 );
  twobit_reg( 2 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 3 );
  twobit_reg( 2 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_branch( 1008, compiled_block_2_1008 );
  twobit_label( 1016, compiled_block_2_1016 );
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_store( 2, 1 );
  twobit_reg( 2 );
  twobit_op1_branchf_611( 1429, compiled_block_2_1429 ); /* internal:branchf-pair? */
  twobit_reg( 2 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_reg( 2 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_setrtn( 1430, compiled_block_2_1430 );
  twobit_branch( 1007, compiled_block_2_1007 );
  twobit_label( 1430, compiled_block_2_1430 );
  twobit_load( 0, 0 );
  twobit_skip( 1428, compiled_block_2_1428 );
  twobit_label( 1429, compiled_block_2_1429 );
  twobit_op1_3(); /* unspecified */
  twobit_label( 1428, compiled_block_2_1428 );
  twobit_stack( 1 );
  twobit_pop( 1 );
  twobit_return();
  twobit_label( 1017, compiled_block_2_1017 );
  twobit_reg( 2 );
  twobit_op1_branchf_611( 1432, compiled_block_2_1432 ); /* internal:branchf-pair? */
  twobit_save( 3 );
  twobit_store( 0, 0 );
  twobit_store( 2, 2 );
  twobit_reg( 2 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_reg( 2 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 3 );
  twobit_store( 3, 1 );
  twobit_movereg( 4, 2 );
  twobit_setrtn( 1433, compiled_block_2_1433 );
  twobit_branch( 1005, compiled_block_2_1005 );
  twobit_label( 1433, compiled_block_2_1433 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_load( 3, 1 );
  twobit_reg( 4 );
  twobit_op2_branchf_624( 3, 1435, compiled_block_2_1435 ); /* internal:branchf-eq? */
  twobit_stack( 2 );
  twobit_pop( 3 );
  twobit_return();
  twobit_label( 1435, compiled_block_2_1435 );
  twobit_stack( 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_pop( 3 );
  twobit_return();
  twobit_label( 1432, compiled_block_2_1432 );
  twobit_reg( 2 );
  twobit_return();
  twobit_label( 1018, compiled_block_2_1018 );
  twobit_save( 3 );
  twobit_store( 0, 0 );
  twobit_store( 4, 2 );
  twobit_store( 5, 3 );
  twobit_store( 6, 1 );
  twobit_movereg( 9, 6 );
  twobit_movereg( 7, 5 );
  twobit_lexes( 6 );
  twobit_setreg( 0 );
  twobit_load( 4, 1 );
  twobit_reg( 7 );
  twobit_op2_branchf_622( 4, 47, compiled_temp_2_47, 1440, compiled_block_2_1440 ); /* internal:branchf-<= */
  twobit_reg( 8 );
  twobit_op2_branchf_619( 9, 48, compiled_temp_2_48, 1442, compiled_block_2_1442 ); /* internal:branchf-< */
  twobit_load( 1, 2 );
  twobit_movereg( 9, 2 );
  twobit_movereg( 8, 3 );
  twobit_load( 4, 3 );
  twobit_pop( 3 );
  twobit_branch( 1437, compiled_block_2_1437 );
  twobit_label( 1442, compiled_block_2_1442 );
  twobit_op1_3(); /* unspecified */
  twobit_pop( 3 );
  twobit_return();
  twobit_label( 1440, compiled_block_2_1440 );
  twobit_reg( 9 );
  twobit_op2_branchf_622( 8, 49, compiled_temp_2_49, 1445, compiled_block_2_1445 ); /* internal:branchf-<= */
  twobit_movereg( 3, 1 );
  twobit_movereg( 7, 2 );
  twobit_movereg( 4, 3 );
  twobit_load( 4, 3 );
  twobit_pop( 3 );
  twobit_branch( 1437, compiled_block_2_1437 );
  twobit_label( 1445, compiled_block_2_1445 );
  twobit_load( 1, 3 );
  twobit_movereg( 4, 2 );
  twobit_reg_op1_check_651(reg(4),1447,compiled_block_2_1447); /* internal:check-fixnum? with (4 3 0) */
  twobit_reg_op2_check_662(reg(3),reg(4),1447,compiled_block_2_1447); /* internal:check-vector?/vector-length:vec with (4 3 0) */
  twobit_stack( 1 );
  twobit_op2_407( 4 ); /* <:fix:fix */
  twobit_load( 4, 1 );
  twobit_check( 4, 3, 0, 1447, compiled_block_2_1447 );
  twobit_stack( 1 );
  twobit_reg_op2imm_check_660(RESULT,fixnum(0),1447,compiled_block_2_1447); /* internal:check->=:fix:fix/imm with (4 3 0) */
  twobit_reg( 3 );
  twobit_op2_402( 4 ); /* vector-ref:trusted */
  twobit_setreg( 3 );
  twobit_reg( 8 );
  twobit_op1_23(); /* fixnum? */
  twobit_load( 4, 2 );
  twobit_check( 8, 4, 0, 1448, compiled_block_2_1448 );
  twobit_stack( 2 );
  twobit_reg_op1_check_653(RESULT,1448,compiled_block_2_1448); /* internal:check-vector? with (8 4 0) */
  twobit_stack( 2 );
  twobit_op1_401(); /* vector-length:vec */
  twobit_setreg( 4 );
  twobit_reg( 8 );
  twobit_op2_407( 4 ); /* <:fix:fix */
  twobit_load( 4, 2 );
  twobit_check( 8, 4, 0, 1448, compiled_block_2_1448 );
  twobit_reg_op2imm_check_660(reg(8),fixnum(0),1448,compiled_block_2_1448); /* internal:check->=:fix:fix/imm with (8 4 0) */
  twobit_stack( 2 );
  twobit_op2_402( 8 ); /* vector-ref:trusted */
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_movereg( 8, 4 );
  twobit_load( 5, 2 );
  twobit_pop( 3 );
  twobit_branch( 1438, compiled_block_2_1438 );
  twobit_label( 1437, compiled_block_2_1437 );
  twobit_reg_op1_check_651(reg(3),1450,compiled_block_2_1450); /* internal:check-fixnum? with (3 1 0) */
  twobit_reg_op2_check_662(reg(1),reg(31),1450,compiled_block_2_1450); /* internal:check-vector?/vector-length:vec with (3 1 0) */
  twobit_reg_op2_check_661(reg(3),reg(31),1450,compiled_block_2_1450); /* internal:check-range with (3 1 0) */
  twobit_reg( 1 );
  twobit_op2_402( 3 ); /* vector-ref:trusted */
  twobit_setreg( 31 );
  twobit_reg( 4 );
  twobit_op1_23(); /* fixnum? */
  twobit_setreg( 30 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 29 );
  twobit_reg( 30 );
  twobit_check( 31, 4, 29, 1451, compiled_block_2_1451 );
  twobit_lexical( 0, 2 );
  twobit_op1_41(); /* vector? */
  twobit_setreg( 30 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 29 );
  twobit_reg( 30 );
  twobit_check( 31, 4, 29, 1451, compiled_block_2_1451 );
  twobit_lexical( 0, 2 );
  twobit_op1_401(); /* vector-length:vec */
  twobit_setreg( 30 );
  twobit_reg( 4 );
  twobit_op2_407( 30 ); /* <:fix:fix */
  twobit_setreg( 30 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 29 );
  twobit_reg( 30 );
  twobit_check( 31, 4, 29, 1451, compiled_block_2_1451 );
  twobit_reg( 4 );
  twobit_op2imm_455( fixnum(0) ); /* >=:fix:fix */
  twobit_setreg( 30 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 29 );
  twobit_reg( 30 );
  twobit_check( 31, 4, 29, 1451, compiled_block_2_1451 );
  twobit_lexical( 0, 2 );
  twobit_op3_403( 4, 31 ); /* vector-set!:trusted */
  twobit_reg( 3 );
  twobit_op2imm_520( fixnum(1) ); /* +:idx:idx */
  twobit_setreg( 3 );
  twobit_reg( 3 );
  twobit_op2_branchf_619( 2, 50, compiled_temp_2_50, 1453, compiled_block_2_1453 ); /* internal:branchf-< */
  twobit_reg( 4 );
  twobit_op2imm_520( fixnum(1) ); /* +:idx:idx */
  twobit_setreg( 4 );
  twobit_branch( 1437, compiled_block_2_1437 );
  twobit_label( 1453, compiled_block_2_1453 );
  twobit_op1_3(); /* unspecified */
  twobit_return();
  twobit_label( 1438, compiled_block_2_1438 );
  twobit_save( 6 );
  twobit_store( 0, 0 );
  twobit_store( 1, 2 );
  twobit_store( 2, 5 );
  twobit_store( 3, 6 );
  twobit_store( 4, 1 );
  twobit_store( 5, 3 );
  twobit_movereg( 3, 2 );
  twobit_reg( 1 );
  twobit_op2imm_130( fixnum(1), 51, compiled_temp_2_51 ); /* + */
  twobit_setreg( 31 );
  twobit_store( 31, 4 );
  twobit_movereg( 5, 1 );
  twobit_lexical( 0, 1 );
  twobit_setrtn( 1455, compiled_block_2_1455 );
  twobit_invoke( 2 );
  twobit_label( 1455, compiled_block_2_1455 );
  twobit_load( 0, 0 );
  twobit_branchf( 1457, compiled_block_2_1457 );
  twobit_stack( 1 );
  twobit_op2imm_520( fixnum(1) ); /* +:idx:idx */
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_stack( 2 );
  twobit_op1_23(); /* fixnum? */
  twobit_setreg( 3 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 2 );
  twobit_load( 1, 2 );
  twobit_load( 4, 3 );
  twobit_reg( 3 );
  twobit_check( 4, 1, 2, 1458, compiled_block_2_1458 );
  twobit_lexical( 0, 2 );
  twobit_op1_41(); /* vector? */
  twobit_setreg( 1 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 2 );
  twobit_load( 3, 2 );
  twobit_reg( 1 );
  twobit_check( 4, 3, 2, 1459, compiled_block_2_1459 );
  twobit_lexical( 0, 2 );
  twobit_op1_401(); /* vector-length:vec */
  twobit_setreg( 4 );
  twobit_stack( 2 );
  twobit_op2_407( 4 ); /* <:fix:fix */
  twobit_setreg( 1 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 2 );
  twobit_load( 4, 3 );
  twobit_reg( 1 );
  twobit_check( 4, 3, 2, 1459, compiled_block_2_1459 );
  twobit_stack( 2 );
  twobit_op2imm_455( fixnum(0) ); /* >=:fix:fix */
  twobit_setreg( 1 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 2 );
  twobit_reg( 1 );
  twobit_check( 4, 3, 2, 1459, compiled_block_2_1459 );
  twobit_load( 4, 2 );
  twobit_load( 3, 3 );
  twobit_lexical( 0, 2 );
  twobit_op3_403( 4, 3 ); /* vector-set!:trusted */
  twobit_lexical( 0, 6 );
  twobit_setreg( 4 );
  twobit_stack( 1 );
  twobit_op2_branchf_619( 4, 52, compiled_temp_2_52, 1461, compiled_block_2_1461 ); /* internal:branchf-< */
  twobit_load( 1, 4 );
  twobit_lexical( 0, 4 );
  twobit_op1_41(); /* vector? */
  twobit_setreg( 2 );
  twobit_lexical( 0, 4 );
  twobit_setreg( 3 );
  twobit_load( 4, 1 );
  twobit_reg( 2 );
  twobit_check( 4, 3, 0, 1447, compiled_block_2_1447 );
  twobit_lexical( 0, 4 );
  twobit_op1_401(); /* vector-length:vec */
  twobit_setreg( 4 );
  twobit_stack( 1 );
  twobit_op2_407( 4 ); /* <:fix:fix */
  twobit_setreg( 2 );
  twobit_lexical( 0, 4 );
  twobit_setreg( 3 );
  twobit_load( 4, 1 );
  twobit_reg( 2 );
  twobit_check( 4, 3, 0, 1447, compiled_block_2_1447 );
  twobit_lexical( 0, 4 );
  twobit_op2_402( 4 ); /* vector-ref:trusted */
  twobit_setreg( 3 );
  twobit_movereg( 3, 5 );
  twobit_load( 2, 5 );
  twobit_load( 3, 6 );
  twobit_pop( 6 );
  twobit_branch( 1438, compiled_block_2_1438 );
  twobit_label( 1461, compiled_block_2_1461 );
  twobit_load( 3, 5 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 5 );
  twobit_setreg( 2 );
  twobit_load( 4, 4 );
  twobit_pop( 6 );
  twobit_branch( 1437, compiled_block_2_1437 );
  twobit_label( 1457, compiled_block_2_1457 );
  twobit_stack( 5 );
  twobit_op2imm_520( fixnum(1) ); /* +:idx:idx */
  twobit_setreg( 4 );
  twobit_store( 4, 5 );
  twobit_stack( 2 );
  twobit_op1_23(); /* fixnum? */
  twobit_setreg( 3 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 2 );
  twobit_load( 1, 2 );
  twobit_load( 4, 6 );
  twobit_reg( 3 );
  twobit_check( 4, 1, 2, 1458, compiled_block_2_1458 );
  twobit_lexical( 0, 2 );
  twobit_op1_41(); /* vector? */
  twobit_setreg( 1 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 2 );
  twobit_load( 3, 2 );
  twobit_reg( 1 );
  twobit_check( 4, 3, 2, 1459, compiled_block_2_1459 );
  twobit_lexical( 0, 2 );
  twobit_op1_401(); /* vector-length:vec */
  twobit_setreg( 4 );
  twobit_stack( 2 );
  twobit_op2_407( 4 ); /* <:fix:fix */
  twobit_setreg( 1 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 2 );
  twobit_load( 4, 6 );
  twobit_reg( 1 );
  twobit_check( 4, 3, 2, 1459, compiled_block_2_1459 );
  twobit_stack( 2 );
  twobit_op2imm_455( fixnum(0) ); /* >=:fix:fix */
  twobit_setreg( 1 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 2 );
  twobit_reg( 1 );
  twobit_check( 4, 3, 2, 1459, compiled_block_2_1459 );
  twobit_load( 4, 2 );
  twobit_load( 3, 6 );
  twobit_lexical( 0, 2 );
  twobit_op3_403( 4, 3 ); /* vector-set!:trusted */
  twobit_lexical( 0, 5 );
  twobit_setreg( 4 );
  twobit_stack( 5 );
  twobit_op2_branchf_619( 4, 53, compiled_temp_2_53, 1465, compiled_block_2_1465 ); /* internal:branchf-< */
  twobit_lexical( 0, 3 );
  twobit_op1_41(); /* vector? */
  twobit_setreg( 2 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 3 );
  twobit_load( 4, 5 );
  twobit_reg( 2 );
  twobit_check( 4, 3, 0, 1447, compiled_block_2_1447 );
  twobit_lexical( 0, 3 );
  twobit_op1_401(); /* vector-length:vec */
  twobit_setreg( 4 );
  twobit_stack( 5 );
  twobit_op2_407( 4 ); /* <:fix:fix */
  twobit_setreg( 2 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 3 );
  twobit_load( 4, 5 );
  twobit_reg( 2 );
  twobit_check( 4, 3, 0, 1447, compiled_block_2_1447 );
  twobit_lexical( 0, 3 );
  twobit_op2_402( 4 ); /* vector-ref:trusted */
  twobit_setreg( 3 );
  twobit_load( 1, 4 );
  twobit_movereg( 4, 2 );
  twobit_load( 4, 1 );
  twobit_load( 5, 3 );
  twobit_pop( 6 );
  twobit_branch( 1438, compiled_block_2_1438 );
  twobit_label( 1465, compiled_block_2_1465 );
  twobit_load( 3, 1 );
  twobit_lexical( 0, 4 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 6 );
  twobit_setreg( 2 );
  twobit_load( 4, 4 );
  twobit_pop( 6 );
  twobit_branch( 1437, compiled_block_2_1437 );
  twobit_label( 1019, compiled_block_2_1019 );
  twobit_reg( 2 );
  twobit_op1_branchf_611( 1469, compiled_block_2_1469 ); /* internal:branchf-pair? */
  twobit_reg( 3 );
  twobit_op1_branchf_611( 1471, compiled_block_2_1471 ); /* internal:branchf-pair? */
  twobit_save( 4 );
  twobit_store( 0, 0 );
  twobit_store( 1, 4 );
  twobit_store( 2, 2 );
  twobit_store( 3, 1 );
  twobit_movereg( 1, 4 );
  twobit_reg( 3 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 1 );
  twobit_reg( 2 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_reg( 4 );
  twobit_setrtn( 1472, compiled_block_2_1472 );
  twobit_invoke( 2 );
  twobit_label( 1472, compiled_block_2_1472 );
  twobit_load( 0, 0 );
  twobit_branchf( 1474, compiled_block_2_1474 );
  twobit_stack( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_reg( 4 );
  twobit_op1_branchf_610( 1476, compiled_block_2_1476 ); /* internal:branchf-null? */
  twobit_load( 3, 2 );
  twobit_stack( 1 );
  twobit_op2_60( 3 ); /* set-cdr! */
  twobit_skip( 1475, compiled_block_2_1475 );
  twobit_label( 1476, compiled_block_2_1476 );
  twobit_load( 3, 2 );
  twobit_stack( 2 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 4 );
  twobit_load( 2, 1 );
  twobit_stack( 3 );
  twobit_op1_11(); /* pair? */
  twobit_load( 1, 3 );
  twobit_check( 1, 0, 0, 1477, compiled_block_2_1477 );
  twobit_stack( 3 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 1 );
  twobit_movereg( 1, 6 );
  twobit_load( 1, 4 );
  twobit_load( 5, 3 );
  twobit_setrtn( 1478, compiled_block_2_1478 );
  twobit_branch( 1003, compiled_block_2_1003 );
  twobit_label( 1478, compiled_block_2_1478 );
  twobit_load( 0, 0 );
  twobit_label( 1475, compiled_block_2_1475 );
  twobit_stack( 1 );
  twobit_pop( 4 );
  twobit_return();
  twobit_label( 1474, compiled_block_2_1474 );
  twobit_stack( 2 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_reg( 4 );
  twobit_op1_branchf_610( 1480, compiled_block_2_1480 ); /* internal:branchf-null? */
  twobit_load( 3, 1 );
  twobit_stack( 2 );
  twobit_op2_60( 3 ); /* set-cdr! */
  twobit_skip( 1479, compiled_block_2_1479 );
  twobit_label( 1480, compiled_block_2_1480 );
  twobit_stack( 1 );
  twobit_setreg( 3 );
  twobit_stack( 1 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_reg_op1_check_652(reg(4),1481,compiled_block_2_1481); /* internal:check-pair? with (4 0 0) */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 4 );
  twobit_movereg( 2, 6 );
  twobit_movereg( 3, 5 );
  twobit_load( 1, 4 );
  twobit_load( 2, 2 );
  twobit_load( 3, 3 );
  twobit_setrtn( 1482, compiled_block_2_1482 );
  twobit_branch( 1004, compiled_block_2_1004 );
  twobit_label( 1482, compiled_block_2_1482 );
  twobit_load( 0, 0 );
  twobit_label( 1479, compiled_block_2_1479 );
  twobit_stack( 2 );
  twobit_pop( 4 );
  twobit_return();
  twobit_label( 1471, compiled_block_2_1471 );
  twobit_reg( 2 );
  twobit_return();
  twobit_label( 1469, compiled_block_2_1469 );
  twobit_reg( 3 );
  twobit_return();
  twobit_label( 1020, compiled_block_2_1020 );
  twobit_reg( 2 );
  twobit_op1_branchf_611( 1484, compiled_block_2_1484 ); /* internal:branchf-pair? */
  twobit_reg( 3 );
  twobit_op1_branchf_611( 1486, compiled_block_2_1486 ); /* internal:branchf-pair? */
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_movereg( 3, 4 );
  twobit_store( 4, 1 );
  twobit_reg( 3 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 4 );
  twobit_movereg( 2, 3 );
  twobit_reg( 2 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_load( 5, 1 );
  twobit_pop( 1 );
  twobit_branch( 1002, compiled_block_2_1002 );
  twobit_label( 1486, compiled_block_2_1486 );
  twobit_reg( 2 );
  twobit_return();
  twobit_label( 1484, compiled_block_2_1484 );
  twobit_reg( 3 );
  twobit_return();
  twobit_label( 1481, compiled_block_2_1481 );
  twobit_trap( 4, 0, 0, 0 );
  twobit_label( 1448, compiled_block_2_1448 );
  twobit_trap( 4, 8, 0, 160 );
  twobit_label( 1384, compiled_block_2_1384 );
  twobit_trap( 2, 0, 0, 162 );
  twobit_label( 1382, compiled_block_2_1382 );
  twobit_trap( 1, 3, 31, 161 );
  twobit_label( 1451, compiled_block_2_1451 );
  twobit_trap( 29, 4, 31, 161 );
  twobit_label( 1421, compiled_block_2_1421 );
  twobit_trap( 1, 0, 0, 1 );
  twobit_label( 1459, compiled_block_2_1459 );
  twobit_trap( 2, 3, 4, 161 );
  twobit_label( 1381, compiled_block_2_1381 );
  twobit_trap( 2, 4, 0, 160 );
  twobit_label( 1458, compiled_block_2_1458 );
  twobit_trap( 2, 1, 4, 161 );
  twobit_label( 1450, compiled_block_2_1450 );
  twobit_trap( 1, 3, 0, 160 );
  twobit_label( 1426, compiled_block_2_1426 );
  twobit_trap( 2, 0, 0, 1 );
  twobit_label( 1402, compiled_block_2_1402 );
  twobit_trap( 1, 0, 0, 162 );
  twobit_label( 1369, compiled_block_2_1369 );
  twobit_trap( 3, 0, 0, 0 );
  twobit_label( 1477, compiled_block_2_1477 );
  twobit_trap( 1, 0, 0, 0 );
  twobit_label( 1447, compiled_block_2_1447 );
  twobit_trap( 3, 4, 0, 160 );
  twobit_label( 1377, compiled_block_2_1377 );
  twobit_trap( 3, 5, 31, 161 );
  twobit_label( 1376, compiled_block_2_1376 );
  twobit_trap( 1, 4, 0, 160 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_4( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 19 );
  twobit_reg( 1 );
  twobit_setglbl( 1 ); /*  list-merge~1pxGHH~10575 */
  twobit_reg( 2 );
  twobit_setglbl( 2 ); /*  list-merge!~1pxGHH~10576 */
  twobit_reg( 3 );
  twobit_setglbl( 3 ); /*  vector-merge~1pxGHH~10577 */
  twobit_reg( 4 );
  twobit_setglbl( 4 ); /*  vector-merge!~1pxGHH~10578 */
  twobit_reg( 5 );
  twobit_setglbl( 5 ); /*  list-delete-neighbor-dups~1pxGHH~10580 */
  twobit_reg( 6 );
  twobit_setglbl( 6 ); /*  list-delete-neighbor-dups!~1pxGHH~10581 */
  twobit_reg( 7 );
  twobit_setglbl( 7 ); /*  vector-delete-neighbor-dups~1pxGHH~10582 */
  twobit_reg( 8 );
  twobit_setglbl( 8 ); /*  vector-delete-neighbor-dups!~1pxGHH~10583 */
  twobit_reg( 9 );
  twobit_setglbl( 9 ); /*  list-sorted?~1pxGHH~10584 */
  twobit_reg( 10 );
  twobit_setglbl( 10 ); /*  vector-sorted?~1pxGHH~10585 */
  twobit_reg( 11 );
  twobit_setglbl( 11 ); /*  list-sort!~1pxGHH~10593 */
  twobit_reg( 12 );
  twobit_setglbl( 12 ); /*  list-stable-sort~1pxGHH~10594 */
  twobit_reg( 13 );
  twobit_setglbl( 13 ); /*  list-stable-sort!~1pxGHH~10595 */
  twobit_reg( 14 );
  twobit_setglbl( 14 ); /*  vector-stable-sort~1pxGHH~10596 */
  twobit_reg( 15 );
  twobit_setglbl( 15 ); /*  vector-stable-sort!~1pxGHH~10597 */
  twobit_reg( 16 );
  twobit_setglbl( 16 ); /*  vector-find-median~1pxGHH~10598 */
  twobit_reg( 17 );
  twobit_setglbl( 17 ); /*  vector-find-median!~1pxGHH~10599 */
  twobit_reg( 18 );
  twobit_setglbl( 18 ); /*  vector-select!~1pxGHH~10601 */
  twobit_reg( 19 );
  twobit_setglbl( 19 ); /*  vector-separate!~1pxGHH~10602 */
  twobit_global( 20 ); /* values */
  twobit_invoke( 0 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_5( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argsge( 3 );
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_store( 1, 1 );
  twobit_movereg( 4, 1 );
  twobit_lambda( compiled_start_2_150, 2, 3 );
  twobit_setreg( 4 );
  twobit_load( 1, 1 );
  twobit_lambda( compiled_start_2_151, 4, 3 );
  twobit_setreg( 2 );
  twobit_movereg( 4, 1 );
  twobit_global( 5 ); /* call-with-values */
  twobit_pop( 1 );
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_150( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 2 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 3 );
  twobit_jump( 2, 1011, compiled_block_2_1011 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_151( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 4 );
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_movereg( 1, 31 );
  twobit_movereg( 2, 30 );
  twobit_movereg( 3, 29 );
  twobit_movereg( 4, 28 );
  twobit_reg( 4 );
  twobit_op2_62( 3, 152, compiled_temp_2_152 ); /* - */
  twobit_setreg( 4 );
  twobit_reg( 2 );
  twobit_op2_62( 1, 153, compiled_temp_2_153 ); /* - */
  twobit_op2_61( 4, 154, compiled_temp_2_154 ); /* + */
  twobit_imm_const_setreg( NIL_CONST, 2 ); /* () */
  twobit_op2_80( 2 ); /* make-vector */
  twobit_setreg( 3 );
  twobit_store( 3, 1 );
  twobit_movereg( 3, 2 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 3 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 4 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 5 );
  twobit_movereg( 31, 6 );
  twobit_movereg( 30, 7 );
  twobit_movereg( 29, 8 );
  twobit_movereg( 28, 9 );
  twobit_setrtn( 1024, compiled_block_2_1024 );
  twobit_jump( 2, 1018, compiled_block_2_1018 );
  twobit_label( 1024, compiled_block_2_1024 );
  twobit_load( 0, 0 );
  twobit_stack( 1 );
  twobit_pop( 1 );
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_2_6( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argsge( 4 );
  twobit_lambda( compiled_start_2_146, 2, 4 );
  twobit_setreg( 2 );
  twobit_movereg( 5, 1 );
  twobit_lambda( compiled_start_2_147, 4, 1 );
  twobit_setreg( 1 );
  twobit_global( 5 ); /* call-with-values */
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_146( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_store( 1, 1 );
  twobit_movereg( 2, 1 );
  twobit_lambda( compiled_start_2_148, 2, 1 );
  twobit_setreg( 4 );
  twobit_load( 1, 1 );
  twobit_lambda( compiled_start_2_149, 4, 1 );
  twobit_setreg( 2 );
  twobit_movereg( 4, 1 );
  twobit_global( 5 ); /* call-with-values */
  twobit_pop( 1 );
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_148( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_lexical( 1, 3 );
  twobit_setreg( 1 );
  twobit_lexical( 1, 4 );
  twobit_setreg( 2 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 3 );
  twobit_jump( 3, 1011, compiled_block_2_1011 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_149( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 4 );
  twobit_movereg( 4, 9 );
  twobit_movereg( 3, 8 );
  twobit_movereg( 2, 7 );
  twobit_movereg( 1, 6 );
  twobit_lexical( 1, 1 );
  twobit_setreg( 1 );
  twobit_lexical( 1, 2 );
  twobit_setreg( 2 );
  twobit_lexical( 1, 3 );
  twobit_setreg( 3 );
  twobit_lexical( 1, 4 );
  twobit_setreg( 4 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 5 );
  twobit_jump( 3, 1018, compiled_block_2_1018 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_147( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_lexical( 0, 1 );
  twobit_op1_branchf_611( 1030, compiled_block_2_1030 ); /* internal:branchf-pair? */
  twobit_lexical( 0, 1 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 1 );
  twobit_lexical( 0, 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 2 );
  twobit_global( 1 ); /* values */
  twobit_invoke( 2 );
  twobit_label( 1030, compiled_block_2_1030 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_global( 1 ); /* values */
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_7( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argsge( 2 );
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_store( 1, 1 );
  twobit_movereg( 3, 1 );
  twobit_lambda( compiled_start_2_140, 2, 2 );
  twobit_setreg( 4 );
  twobit_load( 1, 1 );
  twobit_lambda( compiled_start_2_141, 4, 2 );
  twobit_setreg( 2 );
  twobit_movereg( 4, 1 );
  twobit_global( 5 ); /* call-with-values */
  twobit_pop( 1 );
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_140( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 2 );
  twobit_jump( 2, 1012, compiled_block_2_1012 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_141( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_reg( 1 );
  twobit_op2_branchf_619( 2, 142, compiled_temp_2_142, 1038, compiled_block_2_1038 ); /* internal:branchf-< */
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_movereg( 1, 3 );
  twobit_reg( 1 );
  twobit_op1_23(); /* fixnum? */
  twobit_setreg( 4 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 31 );
  twobit_reg( 4 );
  twobit_check( 1, 31, 0, 1039, compiled_block_2_1039 );
  twobit_lexical( 0, 2 );
  twobit_op1_41(); /* vector? */
  twobit_setreg( 4 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 31 );
  twobit_reg( 4 );
  twobit_check( 1, 31, 0, 1039, compiled_block_2_1039 );
  twobit_lexical( 0, 2 );
  twobit_op1_401(); /* vector-length:vec */
  twobit_setreg( 4 );
  twobit_reg( 1 );
  twobit_op2_407( 4 ); /* <:fix:fix */
  twobit_setreg( 4 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 31 );
  twobit_reg( 4 );
  twobit_check( 1, 31, 0, 1039, compiled_block_2_1039 );
  twobit_reg( 1 );
  twobit_op2imm_455( fixnum(0) ); /* >=:fix:fix */
  twobit_setreg( 4 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 31 );
  twobit_reg( 4 );
  twobit_check( 1, 31, 0, 1039, compiled_block_2_1039 );
  twobit_lexical( 0, 2 );
  twobit_op2_402( 1 ); /* vector-ref:trusted */
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_movereg( 2, 1 );
  twobit_movereg( 4, 2 );
  twobit_imm_const( fixnum(1) ); /* 1 */
  twobit_setreg( 4 );
  twobit_setrtn( 1040, compiled_block_2_1040 );
  twobit_branch( 1035, compiled_block_2_1035 );
  twobit_label( 1040, compiled_block_2_1040 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_401(); /* vector-length:vec */
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_op2_407( 3 ); /* <:fix:fix */
  twobit_load( 1, 1 );
  twobit_check( 1, 0, 4, 1041, compiled_block_2_1041 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 3 );
  twobit_load( 2, 1 );
  twobit_reg( 4 );
  twobit_op3_403( 3, 2 ); /* vector-set!:trusted */
  twobit_reg( 4 );
  twobit_pop( 1 );
  twobit_return();
  twobit_label( 1038, compiled_block_2_1038 );
  twobit_const( 1 );
  twobit_return();
  twobit_label( 1035, compiled_block_2_1035 );
  twobit_reg( 3 );
  twobit_op2_branchf_619( 1, 143, compiled_temp_2_143, 1043, compiled_block_2_1043 ); /* internal:branchf-< */
  twobit_save( 5 );
  twobit_store( 0, 0 );
  twobit_store( 1, 2 );
  twobit_store( 2, 3 );
  twobit_store( 4, 4 );
  twobit_movereg( 2, 1 );
  twobit_reg( 3 );
  twobit_op2imm_521( fixnum(1), 144, compiled_temp_2_144 ); /* +:fix:fix */
  twobit_setreg( 31 );
  twobit_store( 31, 1 );
  twobit_lexical( 0, 2 );
  twobit_op1_41(); /* vector? */
  twobit_setreg( 30 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 29 );
  twobit_reg( 30 );
  twobit_check( 3, 29, 0, 1044, compiled_block_2_1044 );
  twobit_lexical( 0, 2 );
  twobit_op1_401(); /* vector-length:vec */
  twobit_setreg( 30 );
  twobit_reg( 3 );
  twobit_op2_407( 30 ); /* <:fix:fix */
  twobit_setreg( 30 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 29 );
  twobit_reg( 30 );
  twobit_check( 3, 29, 0, 1044, compiled_block_2_1044 );
  twobit_lexical( 0, 2 );
  twobit_op2_402( 3 ); /* vector-ref:trusted */
  twobit_setreg( 3 );
  twobit_store( 3, 5 );
  twobit_movereg( 3, 2 );
  twobit_lexical( 0, 1 );
  twobit_setrtn( 1045, compiled_block_2_1045 );
  twobit_invoke( 2 );
  twobit_label( 1045, compiled_block_2_1045 );
  twobit_load( 0, 0 );
  twobit_branchf( 1047, compiled_block_2_1047 );
  twobit_load( 3, 1 );
  twobit_load( 1, 2 );
  twobit_load( 2, 3 );
  twobit_load( 4, 4 );
  twobit_pop( 5 );
  twobit_branch( 1035, compiled_block_2_1035 );
  twobit_label( 1047, compiled_block_2_1047 );
  twobit_stack( 4 );
  twobit_op2imm_130( fixnum(1), 145, compiled_temp_2_145 ); /* + */
  twobit_setreg( 4 );
  twobit_load( 1, 2 );
  twobit_load( 2, 5 );
  twobit_load( 3, 1 );
  twobit_setrtn( 1049, compiled_block_2_1049 );
  twobit_branch( 1035, compiled_block_2_1035 );
  twobit_label( 1049, compiled_block_2_1049 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_stack( 4 );
  twobit_op1_23(); /* fixnum? */
  twobit_load( 3, 4 );
  twobit_load( 2, 5 );
  twobit_check( 2, 3, 4, 1050, compiled_block_2_1050 );
  twobit_reg( 4 );
  twobit_op1_401(); /* vector-length:vec */
  twobit_setreg( 3 );
  twobit_stack( 4 );
  twobit_op2_407( 3 ); /* <:fix:fix */
  twobit_load( 3, 4 );
  twobit_check( 2, 3, 4, 1050, compiled_block_2_1050 );
  twobit_stack( 4 );
  twobit_reg_op2imm_check_660(RESULT,fixnum(0),1050,compiled_block_2_1050); /* internal:check->=:fix:fix/imm with (2 3 4) */
  twobit_reg( 4 );
  twobit_op3_403( 3, 2 ); /* vector-set!:trusted */
  twobit_reg( 4 );
  twobit_pop( 5 );
  twobit_return();
  twobit_label( 1043, compiled_block_2_1043 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 31 );
  twobit_reg( 4 );
  twobit_op2_80( 31 ); /* make-vector */
  twobit_return();
  twobit_label( 1044, compiled_block_2_1044 );
  twobit_trap( 29, 3, 0, 160 );
  twobit_label( 1039, compiled_block_2_1039 );
  twobit_trap( 31, 1, 0, 160 );
  twobit_label( 1050, compiled_block_2_1050 );
  twobit_trap( 4, 3, 2, 161 );
  twobit_label( 1041, compiled_block_2_1041 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 2 );
  twobit_trap( 4, 2, 1, 161 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_8( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argsge( 2 );
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_store( 1, 1 );
  twobit_movereg( 3, 1 );
  twobit_lambda( compiled_start_2_134, 2, 2 );
  twobit_setreg( 4 );
  twobit_load( 1, 1 );
  twobit_lambda( compiled_start_2_135, 4, 2 );
  twobit_setreg( 2 );
  twobit_movereg( 4, 1 );
  twobit_global( 5 ); /* call-with-values */
  twobit_pop( 1 );
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_134( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 2 );
  twobit_jump( 2, 1012, compiled_block_2_1012 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_135( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_reg( 1 );
  twobit_op2_branchf_621( 2, 136, compiled_temp_2_136, 1057, compiled_block_2_1057 ); /* internal:branchf->= */
  twobit_reg( 2 );
  twobit_return();
  twobit_label( 1057, compiled_block_2_1057 );
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_store( 2, 1 );
  twobit_movereg( 1, 2 );
  twobit_reg( 1 );
  twobit_op1_23(); /* fixnum? */
  twobit_setreg( 4 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_check( 1, 3, 0, 1058, compiled_block_2_1058 );
  twobit_lexical( 0, 2 );
  twobit_op1_41(); /* vector? */
  twobit_setreg( 4 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_check( 1, 3, 0, 1058, compiled_block_2_1058 );
  twobit_lexical( 0, 2 );
  twobit_op1_401(); /* vector-length:vec */
  twobit_setreg( 4 );
  twobit_reg( 1 );
  twobit_op2_407( 4 ); /* <:fix:fix */
  twobit_setreg( 4 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_check( 1, 3, 0, 1058, compiled_block_2_1058 );
  twobit_reg( 1 );
  twobit_op2imm_455( fixnum(0) ); /* >=:fix:fix */
  twobit_setreg( 4 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_check( 1, 3, 0, 1058, compiled_block_2_1058 );
  twobit_lexical( 0, 2 );
  twobit_op2_402( 1 ); /* vector-ref:trusted */
  twobit_setreg( 3 );
  twobit_load( 1, 1 );
  twobit_pop( 1 );
  twobit_branch( 1054, compiled_block_2_1054 );
  twobit_label( 1053, compiled_block_2_1053 );
  twobit_reg( 4 );
  twobit_op2_branchf_621( 1, 137, compiled_temp_2_137, 1061, compiled_block_2_1061 ); /* internal:branchf->= */
  twobit_reg( 2 );
  twobit_op2imm_520( fixnum(1) ); /* +:idx:idx */
  twobit_return();
  twobit_label( 1061, compiled_block_2_1061 );
  twobit_save( 6 );
  twobit_store( 0, 0 );
  twobit_store( 1, 2 );
  twobit_store( 2, 3 );
  twobit_store( 3, 4 );
  twobit_movereg( 3, 1 );
  twobit_reg( 4 );
  twobit_op2imm_521( fixnum(1), 138, compiled_temp_2_138 ); /* +:fix:fix */
  twobit_setreg( 31 );
  twobit_store( 31, 1 );
  twobit_lexical( 0, 2 );
  twobit_op1_41(); /* vector? */
  twobit_setreg( 30 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 29 );
  twobit_reg( 30 );
  twobit_check( 4, 29, 0, 1062, compiled_block_2_1062 );
  twobit_lexical( 0, 2 );
  twobit_op1_401(); /* vector-length:vec */
  twobit_setreg( 30 );
  twobit_store( 30, 5 );
  twobit_reg( 4 );
  twobit_op2_407( 30 ); /* <:fix:fix */
  twobit_setreg( 29 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 28 );
  twobit_reg( 29 );
  twobit_check( 4, 28, 0, 1063, compiled_block_2_1063 );
  twobit_lexical( 0, 2 );
  twobit_op2_402( 4 ); /* vector-ref:trusted */
  twobit_setreg( 4 );
  twobit_store( 4, 6 );
  twobit_movereg( 4, 2 );
  twobit_lexical( 0, 1 );
  twobit_setrtn( 1064, compiled_block_2_1064 );
  twobit_invoke( 2 );
  twobit_label( 1064, compiled_block_2_1064 );
  twobit_load( 0, 0 );
  twobit_branchf( 1066, compiled_block_2_1066 );
  twobit_load( 4, 1 );
  twobit_load( 1, 2 );
  twobit_load( 2, 3 );
  twobit_load( 3, 4 );
  twobit_pop( 6 );
  twobit_branch( 1053, compiled_block_2_1053 );
  twobit_label( 1066, compiled_block_2_1066 );
  twobit_stack( 3 );
  twobit_op2imm_520( fixnum(1) ); /* +:idx:idx */
  twobit_setreg( 4 );
  twobit_load( 3, 5 );
  twobit_reg( 4 );
  twobit_op2_407( 3 ); /* <:fix:fix */
  twobit_setreg( 3 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 2 );
  twobit_load( 1, 6 );
  twobit_reg( 3 );
  twobit_check( 1, 4, 2, 1068, compiled_block_2_1068 );
  twobit_load( 3, 6 );
  twobit_lexical( 0, 2 );
  twobit_op3_403( 4, 3 ); /* vector-set!:trusted */
  twobit_load( 1, 2 );
  twobit_movereg( 4, 2 );
  twobit_load( 4, 1 );
  twobit_pop( 6 );
  twobit_branch( 1053, compiled_block_2_1053 );
  twobit_label( 1054, compiled_block_2_1054 );
  twobit_reg( 2 );
  twobit_op2imm_520( fixnum(1) ); /* +:idx:idx */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op2_branchf_621( 1, 139, compiled_temp_2_139, 1071, compiled_block_2_1071 ); /* internal:branchf->= */
  twobit_reg( 1 );
  twobit_return();
  twobit_label( 1071, compiled_block_2_1071 );
  twobit_save( 5 );
  twobit_store( 0, 0 );
  twobit_store( 1, 2 );
  twobit_store( 2, 1 );
  twobit_store( 3, 3 );
  twobit_store( 4, 4 );
  twobit_movereg( 3, 1 );
  twobit_lexical( 0, 2 );
  twobit_op1_41(); /* vector? */
  twobit_setreg( 31 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 30 );
  twobit_reg( 31 );
  twobit_check( 4, 30, 0, 1072, compiled_block_2_1072 );
  twobit_lexical( 0, 2 );
  twobit_op1_401(); /* vector-length:vec */
  twobit_setreg( 31 );
  twobit_reg( 4 );
  twobit_op2_407( 31 ); /* <:fix:fix */
  twobit_setreg( 31 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 30 );
  twobit_reg( 31 );
  twobit_check( 4, 30, 0, 1072, compiled_block_2_1072 );
  twobit_lexical( 0, 2 );
  twobit_op2_402( 4 ); /* vector-ref:trusted */
  twobit_setreg( 31 );
  twobit_store( 31, 5 );
  twobit_movereg( 31, 2 );
  twobit_lexical( 0, 1 );
  twobit_setrtn( 1073, compiled_block_2_1073 );
  twobit_invoke( 2 );
  twobit_label( 1073, compiled_block_2_1073 );
  twobit_load( 0, 0 );
  twobit_branchf( 1075, compiled_block_2_1075 );
  twobit_stack( 1 );
  twobit_op2imm_520( fixnum(2) ); /* +:idx:idx */
  twobit_setreg( 4 );
  twobit_load( 1, 2 );
  twobit_load( 2, 1 );
  twobit_load( 3, 3 );
  twobit_pop( 5 );
  twobit_branch( 1053, compiled_block_2_1053 );
  twobit_label( 1075, compiled_block_2_1075 );
  twobit_load( 1, 2 );
  twobit_load( 2, 4 );
  twobit_load( 3, 5 );
  twobit_pop( 5 );
  twobit_branch( 1054, compiled_block_2_1054 );
  twobit_label( 1063, compiled_block_2_1063 );
  twobit_trap( 28, 4, 0, 160 );
  twobit_label( 1068, compiled_block_2_1068 );
  twobit_trap( 2, 4, 1, 161 );
  twobit_label( 1058, compiled_block_2_1058 );
  twobit_trap( 3, 1, 0, 160 );
  twobit_label( 1062, compiled_block_2_1062 );
  twobit_trap( 29, 4, 0, 160 );
  twobit_label( 1072, compiled_block_2_1072 );
  twobit_trap( 30, 4, 0, 160 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_9( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argsge( 2 );
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_store( 1, 1 );
  twobit_movereg( 3, 1 );
  twobit_lambda( compiled_start_2_129, 2, 2 );
  twobit_setreg( 4 );
  twobit_load( 1, 1 );
  twobit_lambda( compiled_start_2_130, 4, 2 );
  twobit_setreg( 2 );
  twobit_movereg( 4, 1 );
  twobit_global( 5 ); /* call-with-values */
  twobit_pop( 1 );
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_129( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 2 );
  twobit_jump( 2, 1012, compiled_block_2_1012 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_130( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_reg( 1 );
  twobit_op2_70( 2, 131, compiled_temp_2_131 ); /* >= */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 1083, compiled_block_2_1083 );
  twobit_reg( 4 );
  twobit_return();
  twobit_label( 1083, compiled_block_2_1083 );
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_store( 2, 1 );
  twobit_reg( 1 );
  twobit_op2imm_130( fixnum(1), 132, compiled_temp_2_132 ); /* + */
  twobit_setreg( 2 );
  twobit_reg( 1 );
  twobit_op1_23(); /* fixnum? */
  twobit_setreg( 4 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_check( 1, 3, 0, 1084, compiled_block_2_1084 );
  twobit_lexical( 0, 2 );
  twobit_op1_41(); /* vector? */
  twobit_setreg( 4 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_check( 1, 3, 0, 1084, compiled_block_2_1084 );
  twobit_lexical( 0, 2 );
  twobit_op1_401(); /* vector-length:vec */
  twobit_setreg( 4 );
  twobit_reg( 1 );
  twobit_op2_407( 4 ); /* <:fix:fix */
  twobit_setreg( 4 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_check( 1, 3, 0, 1084, compiled_block_2_1084 );
  twobit_reg( 1 );
  twobit_op2imm_455( fixnum(0) ); /* >=:fix:fix */
  twobit_setreg( 4 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_check( 1, 3, 0, 1084, compiled_block_2_1084 );
  twobit_lexical( 0, 2 );
  twobit_op2_402( 1 ); /* vector-ref:trusted */
  twobit_setreg( 3 );
  twobit_load( 1, 1 );
  twobit_pop( 1 );
  twobit_label( 1080, compiled_block_2_1080 );
  twobit_reg( 2 );
  twobit_op2_70( 1, 133, compiled_temp_2_133 ); /* >= */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 1087, compiled_block_2_1087 );
  twobit_reg( 4 );
  twobit_return();
  twobit_label( 1087, compiled_block_2_1087 );
  twobit_save( 3 );
  twobit_store( 0, 0 );
  twobit_store( 1, 2 );
  twobit_store( 2, 1 );
  twobit_lexical( 0, 2 );
  twobit_op1_41(); /* vector? */
  twobit_setreg( 4 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 31 );
  twobit_reg( 4 );
  twobit_check( 2, 31, 0, 1088, compiled_block_2_1088 );
  twobit_lexical( 0, 2 );
  twobit_op1_401(); /* vector-length:vec */
  twobit_setreg( 4 );
  twobit_reg( 2 );
  twobit_op2_407( 4 ); /* <:fix:fix */
  twobit_setreg( 4 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 31 );
  twobit_reg( 4 );
  twobit_check( 2, 31, 0, 1088, compiled_block_2_1088 );
  twobit_lexical( 0, 2 );
  twobit_op2_402( 2 ); /* vector-ref:trusted */
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_movereg( 3, 2 );
  twobit_movereg( 4, 1 );
  twobit_lexical( 0, 1 );
  twobit_setrtn( 1089, compiled_block_2_1089 );
  twobit_invoke( 2 );
  twobit_label( 1089, compiled_block_2_1089 );
  twobit_load( 0, 0 );
  twobit_branchf( 1091, compiled_block_2_1091 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_pop( 3 );
  twobit_return();
  twobit_label( 1091, compiled_block_2_1091 );
  twobit_stack( 1 );
  twobit_op2imm_520( fixnum(1) ); /* +:idx:idx */
  twobit_setreg( 2 );
  twobit_load( 1, 2 );
  twobit_load( 3, 3 );
  twobit_pop( 3 );
  twobit_branch( 1080, compiled_block_2_1080 );
  twobit_label( 1084, compiled_block_2_1084 );
  twobit_trap( 3, 1, 0, 160 );
  twobit_label( 1088, compiled_block_2_1088 );
  twobit_trap( 31, 2, 0, 160 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_10( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argsge( 3 );
  twobit_reg( 4 );
  twobit_op1_branchf_610( 1095, compiled_block_2_1095 ); /* internal:branchf-null? */
  twobit_lambda( compiled_start_2_120, 2, 0 );
  twobit_skip( 1094, compiled_block_2_1094 );
  twobit_label( 1095, compiled_block_2_1095 );
  twobit_reg_op1_check_652(reg(4),1096,compiled_block_2_1096); /* internal:check-pair? with (4 0 0) */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_label( 1094, compiled_block_2_1094 );
  twobit_setreg( 31 );
  twobit_reg_op2_check_662(reg(2),reg(4),1097,compiled_block_2_1097); /* internal:check-vector?/vector-length:vec with (2 0 0) */
  twobit_reg( 4 );
  twobit_op1_branchf_612( 121, compiled_temp_2_121, 1099, compiled_block_2_1099 ); /* internal:branchf-zero? */
  twobit_reg( 3 );
  twobit_return();
  twobit_label( 1099, compiled_block_2_1099 );
  twobit_save( 5 );
  twobit_store( 0, 0 );
  twobit_store( 1, 2 );
  twobit_store( 2, 3 );
  twobit_store( 4, 1 );
  twobit_store( 31, 4 );
  twobit_movereg( 4, 1 );
  twobit_global( 3 ); /* odd? */
  twobit_setrtn( 1100, compiled_block_2_1100 );
  twobit_invoke( 1 );
  twobit_label( 1100, compiled_block_2_1100 );
  twobit_load( 0, 0 );
  twobit_branchf( 1102, compiled_block_2_1102 );
  twobit_imm_const( fixnum(2) ); /* 2 */
  twobit_setreg( 4 );
  twobit_stack( 1 );
  twobit_op2_65( 4, 122, compiled_temp_2_122 ); /* quotient */
  twobit_setreg( 3 );
  twobit_lexical( 0, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_movereg( 4, 6 );
  twobit_load( 1, 2 );
  twobit_load( 2, 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_load( 5, 1 );
  twobit_reg( 6 );
  twobit_pop( 5 );
  twobit_invoke( 5 );
  twobit_label( 1102, compiled_block_2_1102 );
  twobit_load( 3, 1 );
  twobit_load( 2, 3 );
  twobit_load( 1, 2 );
  twobit_lambda( compiled_start_2_123, 5, 3 );
  twobit_setreg( 1 );
  twobit_store( 1, 5 );
  twobit_load( 1, 4 );
  twobit_lambda( compiled_start_2_124, 7, 1 );
  twobit_setreg( 2 );
  twobit_load( 1, 5 );
  twobit_global( 8 ); /* call-with-values */
  twobit_pop( 5 );
  twobit_invoke( 2 );
  twobit_label( 1097, compiled_block_2_1097 );
  twobit_trap( 2, 0, 0, 162 );
  twobit_label( 1096, compiled_block_2_1096 );
  twobit_trap( 4, 0, 0, 0 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_120( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_reg( 1 );
  twobit_op2_61( 2, 127, compiled_temp_2_127 ); /* + */
  twobit_imm_const_setreg( fixnum(2), 3 ); /* 2 */
  twobit_op2_64( 3, 128, compiled_temp_2_128 ); /* / */
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_2_123( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_imm_const( fixnum(2) ); /* 2 */
  twobit_setreg( 4 );
  twobit_lexical( 0, 3 );
  twobit_op2_65( 4, 125, compiled_temp_2_125 ); /* quotient */
  twobit_op2imm_131( fixnum(1), 126, compiled_temp_2_126 ); /* - */
  twobit_setreg( 3 );
  twobit_lexical( 1, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_movereg( 4, 6 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 2 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 5 );
  twobit_reg( 6 );
  twobit_invoke( 5 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_124( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_lexical( 0, 1 );
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_11( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argsge( 3 );
  twobit_save( 4 );
  twobit_store( 0, 0 );
  twobit_store( 2, 3 );
  twobit_store( 3, 2 );
  twobit_reg( 4 );
  twobit_op1_branchf_610( 1108, compiled_block_2_1108 ); /* internal:branchf-null? */
  twobit_lambda( compiled_start_2_113, 2, 0 );
  twobit_skip( 1107, compiled_block_2_1107 );
  twobit_label( 1108, compiled_block_2_1108 );
  twobit_reg_op1_check_652(reg(4),1109,compiled_block_2_1109); /* internal:check-pair? with (4 0 0) */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_label( 1107, compiled_block_2_1107 );
  twobit_setreg( 31 );
  twobit_store( 31, 4 );
  twobit_reg_op2_check_662(reg(2),reg(4),1110,compiled_block_2_1110); /* internal:check-vector?/vector-length:vec with (2 0 0) */
  twobit_store( 4, 1 );
  twobit_global( 3 ); /* vector-sort! */
  twobit_setrtn( 1111, compiled_block_2_1111 );
  twobit_invoke( 2 );
  twobit_label( 1111, compiled_block_2_1111 );
  twobit_load( 0, 0 );
  twobit_stack( 1 );
  twobit_op1_branchf_612( 114, compiled_temp_2_114, 1113, compiled_block_2_1113 ); /* internal:branchf-zero? */
  twobit_stack( 2 );
  twobit_pop( 4 );
  twobit_return();
  twobit_label( 1113, compiled_block_2_1113 );
  twobit_load( 1, 1 );
  twobit_global( 4 ); /* odd? */
  twobit_setrtn( 1114, compiled_block_2_1114 );
  twobit_invoke( 1 );
  twobit_label( 1114, compiled_block_2_1114 );
  twobit_load( 0, 0 );
  twobit_branchf( 1116, compiled_block_2_1116 );
  twobit_imm_const( fixnum(2) ); /* 2 */
  twobit_setreg( 4 );
  twobit_stack( 1 );
  twobit_op2_65( 4, 115, compiled_temp_2_115 ); /* quotient */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_23(); /* fixnum? */
  twobit_load( 1, 3 );
  twobit_check( 4, 1, 0, 1117, compiled_block_2_1117 );
  twobit_load( 3, 1 );
  twobit_reg_op2_check_661(reg(4),reg(3),1117,compiled_block_2_1117); /* internal:check-range with (4 1 0) */
  twobit_stack( 3 );
  twobit_op2_402( 4 ); /* vector-ref:trusted */
  twobit_pop( 4 );
  twobit_return();
  twobit_label( 1116, compiled_block_2_1116 );
  twobit_imm_const( fixnum(2) ); /* 2 */
  twobit_setreg( 4 );
  twobit_stack( 1 );
  twobit_op2_65( 4, 116, compiled_temp_2_116 ); /* quotient */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op2imm_131( fixnum(1), 117, compiled_temp_2_117 ); /* - */
  twobit_setreg( 3 );
  twobit_reg( 3 );
  twobit_op1_23(); /* fixnum? */
  twobit_load( 2, 3 );
  twobit_check( 3, 2, 0, 1118, compiled_block_2_1118 );
  twobit_load( 2, 1 );
  twobit_reg( 3 );
  twobit_op2_407( 2 ); /* <:fix:fix */
  twobit_load( 1, 3 );
  twobit_check( 3, 1, 0, 1119, compiled_block_2_1119 );
  twobit_reg_op2imm_check_660(reg(3),fixnum(0),1119,compiled_block_2_1119); /* internal:check->=:fix:fix/imm with (3 1 0) */
  twobit_stack( 3 );
  twobit_op2_402( 3 ); /* vector-ref:trusted */
  twobit_setreg( 1 );
  twobit_reg( 4 );
  twobit_op1_23(); /* fixnum? */
  twobit_load( 3, 3 );
  twobit_check( 4, 3, 0, 1120, compiled_block_2_1120 );
  twobit_reg_op2_check_661(reg(4),reg(2),1120,compiled_block_2_1120); /* internal:check-range with (4 3 0) */
  twobit_stack( 3 );
  twobit_op2_402( 4 ); /* vector-ref:trusted */
  twobit_setreg( 2 );
  twobit_stack( 4 );
  twobit_pop( 4 );
  twobit_invoke( 2 );
  twobit_label( 1110, compiled_block_2_1110 );
  twobit_trap( 2, 0, 0, 162 );
  twobit_label( 1109, compiled_block_2_1109 );
  twobit_trap( 4, 0, 0, 0 );
  twobit_label( 1119, compiled_block_2_1119 );
  twobit_trap( 1, 3, 0, 160 );
  twobit_label( 1120, compiled_block_2_1120 );
  twobit_trap( 3, 4, 0, 160 );
  twobit_label( 1118, compiled_block_2_1118 );
  twobit_trap( 2, 3, 0, 160 );
  twobit_label( 1117, compiled_block_2_1117 );
  twobit_trap( 1, 4, 0, 160 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_113( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_reg( 1 );
  twobit_op2_61( 2, 118, compiled_temp_2_118 ); /* + */
  twobit_imm_const_setreg( fixnum(2), 3 ); /* 2 */
  twobit_op2_64( 3, 119, compiled_temp_2_119 ); /* / */
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_2_12( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argsge( 3 );
  twobit_reg( 4 );
  twobit_op1_branchf_610( 1123, compiled_block_2_1123 ); /* internal:branchf-null? */
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_skip( 1122, compiled_block_2_1122 );
  twobit_label( 1123, compiled_block_2_1123 );
  twobit_reg_op1_check_652(reg(4),1124,compiled_block_2_1124); /* internal:check-pair? with (4 0 0) */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_label( 1122, compiled_block_2_1122 );
  twobit_setreg( 31 );
  twobit_reg( 4 );
  twobit_op1_11(); /* pair? */
  twobit_setreg( 30 );
  twobit_reg( 30 );
  twobit_branchf( 1126, compiled_block_2_1126 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_op1_11(); /* pair? */
  twobit_skip( 1125, compiled_block_2_1125 );
  twobit_label( 1126, compiled_block_2_1126 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1125, compiled_block_2_1125 );
  twobit_branchf( 1128, compiled_block_2_1128 );
  twobit_reg( 30 );
  twobit_check( 4, 0, 0, 1129, compiled_block_2_1129 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 29 );
  twobit_reg_op1_check_652(reg(29),1130,compiled_block_2_1130); /* internal:check-pair? with (29 0 0) */
  twobit_reg( 29 );
  twobit_op1_404(); /* car:pair */
  twobit_skip( 1127, compiled_block_2_1127 );
  twobit_label( 1128, compiled_block_2_1128 );
  twobit_reg_op1_check_653(reg(2),1131,compiled_block_2_1131); /* internal:check-vector? with (2 0 0) */
  twobit_reg( 2 );
  twobit_op1_401(); /* vector-length:vec */
  twobit_label( 1127, compiled_block_2_1127 );
  twobit_setreg( 29 );
  twobit_movereg( 31, 4 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 31 );
  twobit_movereg( 29, 5 );
  twobit_reg( 31 );
  twobit_invoke( 5 );
  twobit_label( 1131, compiled_block_2_1131 );
  twobit_trap( 2, 0, 0, 162 );
  twobit_label( 1124, compiled_block_2_1124 );
  twobit_trap( 4, 0, 0, 0 );
  twobit_label( 1130, compiled_block_2_1130 );
  twobit_trap( 29, 0, 0, 0 );
  twobit_label( 1129, compiled_block_2_1129 );
  twobit_trap( 4, 0, 0, 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_13( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argsge( 3 );
  twobit_reg( 4 );
  twobit_op1_branchf_610( 1134, compiled_block_2_1134 ); /* internal:branchf-null? */
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_skip( 1133, compiled_block_2_1133 );
  twobit_label( 1134, compiled_block_2_1134 );
  twobit_reg_op1_check_652(reg(4),1135,compiled_block_2_1135); /* internal:check-pair? with (4 0 0) */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_label( 1133, compiled_block_2_1133 );
  twobit_setreg( 31 );
  twobit_reg( 4 );
  twobit_op1_11(); /* pair? */
  twobit_setreg( 30 );
  twobit_reg( 30 );
  twobit_branchf( 1137, compiled_block_2_1137 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_op1_11(); /* pair? */
  twobit_skip( 1136, compiled_block_2_1136 );
  twobit_label( 1137, compiled_block_2_1137 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1136, compiled_block_2_1136 );
  twobit_branchf( 1139, compiled_block_2_1139 );
  twobit_reg( 30 );
  twobit_check( 4, 0, 0, 1140, compiled_block_2_1140 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 29 );
  twobit_reg_op1_check_652(reg(29),1141,compiled_block_2_1141); /* internal:check-pair? with (29 0 0) */
  twobit_reg( 29 );
  twobit_op1_404(); /* car:pair */
  twobit_skip( 1138, compiled_block_2_1138 );
  twobit_label( 1139, compiled_block_2_1139 );
  twobit_reg_op1_check_653(reg(2),1142,compiled_block_2_1142); /* internal:check-vector? with (2 0 0) */
  twobit_reg( 2 );
  twobit_op1_401(); /* vector-length:vec */
  twobit_label( 1138, compiled_block_2_1138 );
  twobit_setreg( 29 );
  twobit_reg( 3 );
  twobit_op2imm_branchf_636( fixnum(0), 104, compiled_temp_2_104, 1144, compiled_block_2_1144 ); /* internal:branchf->/imm */
  twobit_reg( 29 );
  twobit_op2_69( 31, 105, compiled_temp_2_105 ); /* > */
  twobit_skip( 1143, compiled_block_2_1143 );
  twobit_label( 1144, compiled_block_2_1144 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1143, compiled_block_2_1143 );
  twobit_branchf( 1146, compiled_block_2_1146 );
  twobit_save( 5 );
  twobit_store( 0, 0 );
  twobit_store( 1, 4 );
  twobit_store( 2, 3 );
  twobit_store( 29, 1 );
  twobit_store( 31, 2 );
  twobit_reg( 3 );
  twobit_op2imm_131( fixnum(1), 106, compiled_temp_2_106 ); /* - */
  twobit_setreg( 3 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_movereg( 4, 6 );
  twobit_movereg( 31, 4 );
  twobit_movereg( 29, 5 );
  twobit_reg( 6 );
  twobit_setrtn( 1147, compiled_block_2_1147 );
  twobit_invoke( 5 );
  twobit_label( 1147, compiled_block_2_1147 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_load( 5, 1 );
  twobit_load( 3, 2 );
  twobit_load( 2, 3 );
  twobit_load( 1, 4 );
  twobit_lambda( compiled_start_2_107, 2, 5 );
  twobit_setreg( 3 );
  twobit_store( 3, 5 );
  twobit_load( 3, 2 );
  twobit_lambda( compiled_start_2_108, 4, 5 );
  twobit_setreg( 2 );
  twobit_load( 1, 5 );
  twobit_global( 5 ); /* call-with-values */
  twobit_pop( 5 );
  twobit_invoke( 2 );
  twobit_label( 1146, compiled_block_2_1146 );
  twobit_op1_3(); /* unspecified */
  twobit_return();
  twobit_label( 1142, compiled_block_2_1142 );
  twobit_trap( 2, 0, 0, 162 );
  twobit_label( 1135, compiled_block_2_1135 );
  twobit_trap( 4, 0, 0, 0 );
  twobit_label( 1141, compiled_block_2_1141 );
  twobit_trap( 29, 0, 0, 0 );
  twobit_label( 1140, compiled_block_2_1140 );
  twobit_trap( 4, 0, 0, 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_107( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_lexical( 1, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_movereg( 4, 8 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 4 );
  twobit_setreg( 2 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 3 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 4 );
  twobit_lexical( 0, 5 );
  twobit_setreg( 5 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 6 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 7 );
  twobit_reg( 8 );
  twobit_invoke( 7 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_108( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_save( 4 );
  twobit_store( 0, 0 );
  twobit_store( 1, 3 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 4 );
  twobit_reg( 1 );
  twobit_op2_80( 4 ); /* make-vector */
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_movereg( 4, 3 );
  twobit_reg( 1 );
  twobit_op2_61( 2, 109, compiled_temp_2_109 ); /* + */
  twobit_setreg( 2 );
  twobit_lexical( 0, 3 );
  twobit_op2_61( 2, 110, compiled_temp_2_110 ); /* + */
  twobit_setreg( 2 );
  twobit_store( 2, 4 );
  twobit_lexical( 0, 5 );
  twobit_op2_62( 2, 111, compiled_temp_2_111 ); /* - */
  twobit_imm_const_setreg( NIL_CONST, 31 ); /* () */
  twobit_op2_80( 31 ); /* make-vector */
  twobit_setreg( 31 );
  twobit_store( 31, 1 );
  twobit_lexical( 1, 4 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 30 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 4 );
  twobit_setreg( 2 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 5 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 6 );
  twobit_lexical( 0, 5 );
  twobit_setreg( 7 );
  twobit_reg( 30 );
  twobit_setrtn( 1149, compiled_block_2_1149 );
  twobit_invoke( 7 );
  twobit_label( 1149, compiled_block_2_1149 );
  twobit_load( 0, 0 );
  twobit_load( 3, 1 );
  twobit_lexical( 1, 3 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_movereg( 4, 8 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 4 );
  twobit_setreg( 2 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 5 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 6 );
  twobit_lexical( 0, 5 );
  twobit_setreg( 7 );
  twobit_reg( 8 );
  twobit_setrtn( 1150, compiled_block_2_1150 );
  twobit_invoke( 7 );
  twobit_label( 1150, compiled_block_2_1150 );
  twobit_load( 0, 0 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 2 );
  twobit_load( 3, 2 );
  twobit_global( 1 ); /* vector-copy! */
  twobit_setrtn( 1151, compiled_block_2_1151 );
  twobit_invoke( 3 );
  twobit_label( 1151, compiled_block_2_1151 );
  twobit_load( 0, 0 );
  twobit_load( 4, 3 );
  twobit_lexical( 0, 3 );
  twobit_op2_61( 4, 112, compiled_temp_2_112 ); /* + */
  twobit_setreg( 3 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 4 );
  twobit_setreg( 2 );
  twobit_load( 4, 4 );
  twobit_global( 2 ); /* vector-fill! */
  twobit_setrtn( 1152, compiled_block_2_1152 );
  twobit_invoke( 4 );
  twobit_label( 1152, compiled_block_2_1152 );
  twobit_load( 0, 0 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 1 );
  twobit_load( 2, 4 );
  twobit_load( 3, 1 );
  twobit_global( 1 ); /* vector-copy! */
  twobit_pop( 4 );
  twobit_invoke( 3 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_14( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 5 );
  twobit_save( 5 );
  twobit_store( 0, 0 );
  twobit_store( 1, 5 );
  twobit_store( 2, 4 );
  twobit_store( 3, 3 );
  twobit_store( 4, 1 );
  twobit_store( 5, 2 );
  twobit_reg( 1 );
  twobit_op1_47(); /* procedure? */
  twobit_branchf( 1156, compiled_block_2_1156 );
  twobit_reg( 2 );
  twobit_op1_41(); /* vector? */
  twobit_branchf( 1158, compiled_block_2_1158 );
  twobit_reg( 3 );
  twobit_op1_23(); /* fixnum? */
  twobit_setreg( 31 );
  twobit_reg( 31 );
  twobit_branchf( 1160, compiled_block_2_1160 );
  twobit_reg( 31 );
  twobit_skip( 1159, compiled_block_2_1159 );
  twobit_label( 1160, compiled_block_2_1160 );
  twobit_movereg( 3, 1 );
  twobit_global( 1 ); /* bignum? */
  twobit_setrtn( 1161, compiled_block_2_1161 );
  twobit_invoke( 1 );
  twobit_label( 1161, compiled_block_2_1161 );
  twobit_load( 0, 0 );
  twobit_label( 1159, compiled_block_2_1159 );
  twobit_branchf( 1163, compiled_block_2_1163 );
  twobit_stack( 1 );
  twobit_op1_23(); /* fixnum? */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 1165, compiled_block_2_1165 );
  twobit_reg( 4 );
  twobit_skip( 1164, compiled_block_2_1164 );
  twobit_label( 1165, compiled_block_2_1165 );
  twobit_load( 1, 1 );
  twobit_global( 1 ); /* bignum? */
  twobit_setrtn( 1166, compiled_block_2_1166 );
  twobit_invoke( 1 );
  twobit_label( 1166, compiled_block_2_1166 );
  twobit_load( 0, 0 );
  twobit_label( 1164, compiled_block_2_1164 );
  twobit_branchf( 1168, compiled_block_2_1168 );
  twobit_stack( 2 );
  twobit_op1_23(); /* fixnum? */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 1170, compiled_block_2_1170 );
  twobit_reg( 4 );
  twobit_skip( 1169, compiled_block_2_1169 );
  twobit_label( 1170, compiled_block_2_1170 );
  twobit_load( 1, 2 );
  twobit_global( 1 ); /* bignum? */
  twobit_setrtn( 1171, compiled_block_2_1171 );
  twobit_invoke( 1 );
  twobit_label( 1171, compiled_block_2_1171 );
  twobit_load( 0, 0 );
  twobit_label( 1169, compiled_block_2_1169 );
  twobit_branchf( 1173, compiled_block_2_1173 );
  twobit_stack( 1 );
  twobit_op2imm_130( fixnum(1), 97, compiled_temp_2_97 ); /* + */
  twobit_setreg( 4 );
  twobit_stack( 2 );
  twobit_op2_62( 4, 98, compiled_temp_2_98 ); /* - */
  twobit_setreg( 4 );
  twobit_stack( 3 );
  twobit_op2_67( 4, 99, compiled_temp_2_99 ); /* <= */
  twobit_setreg( 4 );
  twobit_load( 3, 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_op2_branchf_622( 3, 100, compiled_temp_2_100, 1175, compiled_block_2_1175 ); /* internal:branchf-<= */
  twobit_reg( 4 );
  twobit_skip( 1174, compiled_block_2_1174 );
  twobit_label( 1175, compiled_block_2_1175 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1174, compiled_block_2_1174 );
  twobit_branchf( 1177, compiled_block_2_1177 );
  twobit_stack( 4 );
  twobit_op1_401(); /* vector-length:vec */
  twobit_setreg( 4 );
  twobit_stack( 2 );
  twobit_op2_67( 4, 101, compiled_temp_2_101 ); /* <= */
  twobit_setreg( 4 );
  twobit_load( 2, 2 );
  twobit_stack( 1 );
  twobit_op2_branchf_622( 2, 102, compiled_temp_2_102, 1179, compiled_block_2_1179 ); /* internal:branchf-<= */
  twobit_reg( 4 );
  twobit_skip( 1178, compiled_block_2_1178 );
  twobit_label( 1179, compiled_block_2_1179 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1178, compiled_block_2_1178 );
  twobit_setreg( 1 );
  twobit_load( 3, 1 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_op2_branchf_622( 3, 103, compiled_temp_2_103, 1181, compiled_block_2_1181 ); /* internal:branchf-<= */
  twobit_reg( 1 );
  twobit_skip( 1155, compiled_block_2_1155 );
  twobit_label( 1181, compiled_block_2_1181 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 1155, compiled_block_2_1155 );
  twobit_label( 1177, compiled_block_2_1177 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 1155, compiled_block_2_1155 );
  twobit_label( 1173, compiled_block_2_1173 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 1155, compiled_block_2_1155 );
  twobit_label( 1168, compiled_block_2_1168 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 1155, compiled_block_2_1155 );
  twobit_label( 1163, compiled_block_2_1163 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 1155, compiled_block_2_1155 );
  twobit_label( 1158, compiled_block_2_1158 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 1155, compiled_block_2_1155 );
  twobit_label( 1156, compiled_block_2_1156 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1155, compiled_block_2_1155 );
  twobit_branchf( 1183, compiled_block_2_1183 );
  twobit_op1_3(); /* unspecified */
  twobit_skip( 1182, compiled_block_2_1182 );
  twobit_label( 1183, compiled_block_2_1183 );
  twobit_const( 2 );
  twobit_setreg( 1 );
  twobit_global( 3 ); /* error */
  twobit_setrtn( 1184, compiled_block_2_1184 );
  twobit_invoke( 1 );
  twobit_label( 1184, compiled_block_2_1184 );
  twobit_load( 0, 0 );
  twobit_label( 1182, compiled_block_2_1182 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_movereg( 4, 6 );
  twobit_load( 1, 5 );
  twobit_load( 2, 4 );
  twobit_load( 3, 3 );
  twobit_load( 4, 1 );
  twobit_load( 5, 2 );
  twobit_reg( 6 );
  twobit_pop( 5 );
  twobit_invoke( 5 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_15( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 5 );
  twobit_save( 5 );
  twobit_store( 0, 0 );
  twobit_store( 1, 5 );
  twobit_store( 2, 4 );
  twobit_store( 3, 3 );
  twobit_store( 4, 1 );
  twobit_store( 5, 2 );
  twobit_reg( 1 );
  twobit_op1_47(); /* procedure? */
  twobit_branchf( 1187, compiled_block_2_1187 );
  twobit_reg( 2 );
  twobit_op1_41(); /* vector? */
  twobit_branchf( 1189, compiled_block_2_1189 );
  twobit_reg( 3 );
  twobit_op1_23(); /* fixnum? */
  twobit_setreg( 31 );
  twobit_reg( 31 );
  twobit_branchf( 1191, compiled_block_2_1191 );
  twobit_reg( 31 );
  twobit_skip( 1190, compiled_block_2_1190 );
  twobit_label( 1191, compiled_block_2_1191 );
  twobit_movereg( 3, 1 );
  twobit_global( 1 ); /* bignum? */
  twobit_setrtn( 1192, compiled_block_2_1192 );
  twobit_invoke( 1 );
  twobit_label( 1192, compiled_block_2_1192 );
  twobit_load( 0, 0 );
  twobit_label( 1190, compiled_block_2_1190 );
  twobit_branchf( 1194, compiled_block_2_1194 );
  twobit_stack( 1 );
  twobit_op1_23(); /* fixnum? */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 1196, compiled_block_2_1196 );
  twobit_reg( 4 );
  twobit_skip( 1195, compiled_block_2_1195 );
  twobit_label( 1196, compiled_block_2_1196 );
  twobit_load( 1, 1 );
  twobit_global( 1 ); /* bignum? */
  twobit_setrtn( 1197, compiled_block_2_1197 );
  twobit_invoke( 1 );
  twobit_label( 1197, compiled_block_2_1197 );
  twobit_load( 0, 0 );
  twobit_label( 1195, compiled_block_2_1195 );
  twobit_branchf( 1199, compiled_block_2_1199 );
  twobit_stack( 2 );
  twobit_op1_23(); /* fixnum? */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 1201, compiled_block_2_1201 );
  twobit_reg( 4 );
  twobit_skip( 1200, compiled_block_2_1200 );
  twobit_label( 1201, compiled_block_2_1201 );
  twobit_load( 1, 2 );
  twobit_global( 1 ); /* bignum? */
  twobit_setrtn( 1202, compiled_block_2_1202 );
  twobit_invoke( 1 );
  twobit_label( 1202, compiled_block_2_1202 );
  twobit_load( 0, 0 );
  twobit_label( 1200, compiled_block_2_1200 );
  twobit_branchf( 1204, compiled_block_2_1204 );
  twobit_stack( 1 );
  twobit_op2imm_130( fixnum(2), 90, compiled_temp_2_90 ); /* + */
  twobit_setreg( 4 );
  twobit_stack( 2 );
  twobit_op2_62( 4, 91, compiled_temp_2_91 ); /* - */
  twobit_setreg( 4 );
  twobit_stack( 3 );
  twobit_op2_67( 4, 92, compiled_temp_2_92 ); /* <= */
  twobit_setreg( 4 );
  twobit_load( 3, 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_op2_branchf_622( 3, 93, compiled_temp_2_93, 1206, compiled_block_2_1206 ); /* internal:branchf-<= */
  twobit_reg( 4 );
  twobit_skip( 1205, compiled_block_2_1205 );
  twobit_label( 1206, compiled_block_2_1206 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1205, compiled_block_2_1205 );
  twobit_branchf( 1208, compiled_block_2_1208 );
  twobit_stack( 4 );
  twobit_op1_401(); /* vector-length:vec */
  twobit_setreg( 4 );
  twobit_stack( 2 );
  twobit_op2_67( 4, 94, compiled_temp_2_94 ); /* <= */
  twobit_setreg( 4 );
  twobit_load( 2, 2 );
  twobit_stack( 1 );
  twobit_op2_branchf_622( 2, 95, compiled_temp_2_95, 1210, compiled_block_2_1210 ); /* internal:branchf-<= */
  twobit_reg( 4 );
  twobit_skip( 1209, compiled_block_2_1209 );
  twobit_label( 1210, compiled_block_2_1210 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1209, compiled_block_2_1209 );
  twobit_setreg( 1 );
  twobit_load( 3, 1 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_op2_branchf_622( 3, 96, compiled_temp_2_96, 1212, compiled_block_2_1212 ); /* internal:branchf-<= */
  twobit_reg( 1 );
  twobit_skip( 1186, compiled_block_2_1186 );
  twobit_label( 1212, compiled_block_2_1212 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 1186, compiled_block_2_1186 );
  twobit_label( 1208, compiled_block_2_1208 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 1186, compiled_block_2_1186 );
  twobit_label( 1204, compiled_block_2_1204 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 1186, compiled_block_2_1186 );
  twobit_label( 1199, compiled_block_2_1199 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 1186, compiled_block_2_1186 );
  twobit_label( 1194, compiled_block_2_1194 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 1186, compiled_block_2_1186 );
  twobit_label( 1189, compiled_block_2_1189 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 1186, compiled_block_2_1186 );
  twobit_label( 1187, compiled_block_2_1187 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1186, compiled_block_2_1186 );
  twobit_branchf( 1214, compiled_block_2_1214 );
  twobit_op1_3(); /* unspecified */
  twobit_skip( 1213, compiled_block_2_1213 );
  twobit_label( 1214, compiled_block_2_1214 );
  twobit_const( 2 );
  twobit_setreg( 1 );
  twobit_global( 3 ); /* error */
  twobit_setrtn( 1215, compiled_block_2_1215 );
  twobit_invoke( 1 );
  twobit_label( 1215, compiled_block_2_1215 );
  twobit_load( 0, 0 );
  twobit_label( 1213, compiled_block_2_1213 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_movereg( 4, 6 );
  twobit_load( 1, 5 );
  twobit_load( 2, 4 );
  twobit_load( 3, 3 );
  twobit_load( 4, 1 );
  twobit_load( 5, 2 );
  twobit_reg( 6 );
  twobit_pop( 5 );
  twobit_invoke( 5 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_16( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 5 );
  twobit_reg( 5 );
  twobit_op2_62( 4, 74, compiled_temp_2_74 ); /* - */
  twobit_setreg( 31 );
  twobit_imm_const( fixnum(1) ); /* 1 */
  twobit_op2_branchf_623( 31, 75, compiled_temp_2_75, 1218, compiled_block_2_1218 ); /* internal:branchf-= */
  twobit_reg( 3 );
  twobit_op2_61( 4, 76, compiled_temp_2_76 ); /* + */
  twobit_setreg( 4 );
  twobit_reg_op1_check_651(reg(4),1219,compiled_block_2_1219); /* internal:check-fixnum? with (4 2 0) */
  twobit_reg_op2_check_662(reg(2),reg(3),1219,compiled_block_2_1219); /* internal:check-vector?/vector-length:vec with (4 2 0) */
  twobit_reg_op2_check_661(reg(4),reg(3),1219,compiled_block_2_1219); /* internal:check-range with (4 2 0) */
  twobit_reg( 2 );
  twobit_op2_402( 4 ); /* vector-ref:trusted */
  twobit_return();
  twobit_label( 1218, compiled_block_2_1218 );
  twobit_imm_const( fixnum(2) ); /* 2 */
  twobit_op2_branchf_623( 31, 77, compiled_temp_2_77, 1221, compiled_block_2_1221 ); /* internal:branchf-= */
  twobit_save( 5 );
  twobit_store( 0, 0 );
  twobit_store( 2, 4 );
  twobit_store( 3, 3 );
  twobit_store( 4, 2 );
  twobit_store( 1, 1 );
  twobit_reg_op1_check_651(reg(4),1219,compiled_block_2_1219); /* internal:check-fixnum? with (4 2 0) */
  twobit_reg_op2_check_662(reg(2),reg(31),1219,compiled_block_2_1219); /* internal:check-vector?/vector-length:vec with (4 2 0) */
  twobit_store( 31, 5 );
  twobit_reg_op2_check_661(reg(4),reg(31),1219,compiled_block_2_1219); /* internal:check-range with (4 2 0) */
  twobit_reg( 2 );
  twobit_op2_402( 4 ); /* vector-ref:trusted */
  twobit_setreg( 1 );
  twobit_reg( 4 );
  twobit_op2imm_520( fixnum(1) ); /* +:idx:idx */
  twobit_setreg( 30 );
  twobit_reg_op2_check_655(reg(30),reg(31),1222,compiled_block_2_1222); /* internal:check-<:fix:fix with (30 2 0) */
  twobit_reg( 2 );
  twobit_op2_402( 30 ); /* vector-ref:trusted */
  twobit_setreg( 2 );
  twobit_stack( 1 );
  twobit_setrtn( 1223, compiled_block_2_1223 );
  twobit_invoke( 2 );
  twobit_label( 1223, compiled_block_2_1223 );
  twobit_load( 0, 0 );
  twobit_branchf( 1225, compiled_block_2_1225 );
  twobit_load( 4, 2 );
  twobit_stack( 3 );
  twobit_op2_61( 4, 78, compiled_temp_2_78 ); /* + */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_23(); /* fixnum? */
  twobit_load( 1, 4 );
  twobit_check( 4, 1, 0, 1226, compiled_block_2_1226 );
  twobit_load( 3, 5 );
  twobit_reg_op2_check_661(reg(4),reg(3),1226,compiled_block_2_1226); /* internal:check-range with (4 1 0) */
  twobit_stack( 4 );
  twobit_op2_402( 4 ); /* vector-ref:trusted */
  twobit_pop( 5 );
  twobit_return();
  twobit_label( 1225, compiled_block_2_1225 );
  twobit_load( 4, 3 );
  twobit_imm_const( fixnum(1) ); /* 1 */
  twobit_op2_62( 4, 79, compiled_temp_2_79 ); /* - */
  twobit_load( 3, 2 );
  twobit_op2_61( 3, 80, compiled_temp_2_80 ); /* + */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_23(); /* fixnum? */
  twobit_load( 1, 4 );
  twobit_check( 4, 1, 0, 1226, compiled_block_2_1226 );
  twobit_load( 3, 5 );
  twobit_reg_op2_check_661(reg(4),reg(3),1226,compiled_block_2_1226); /* internal:check-range with (4 1 0) */
  twobit_stack( 4 );
  twobit_op2_402( 4 ); /* vector-ref:trusted */
  twobit_pop( 5 );
  twobit_return();
  twobit_label( 1221, compiled_block_2_1221 );
  twobit_lexical( 0, 5 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 30 );
  twobit_reg( 31 );
  twobit_op2_branchf_619( 30, 81, compiled_temp_2_81, 1228, compiled_block_2_1228 ); /* internal:branchf-< */
  twobit_save( 2 );
  twobit_store( 0, 0 );
  twobit_store( 1, 1 );
  twobit_store( 3, 2 );
  twobit_movereg( 2, 1 );
  twobit_movereg( 4, 2 );
  twobit_movereg( 5, 3 );
  twobit_global( 1 ); /* vector-copy */
  twobit_setrtn( 1229, compiled_block_2_1229 );
  twobit_invoke( 3 );
  twobit_label( 1229, compiled_block_2_1229 );
  twobit_load( 0, 0 );
  twobit_setreg( 2 );
  twobit_load( 1, 1 );
  twobit_global( 2 ); /* vector-sort */
  twobit_setrtn( 1230, compiled_block_2_1230 );
  twobit_invoke( 2 );
  twobit_label( 1230, compiled_block_2_1230 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_stack( 2 );
  twobit_op1_23(); /* fixnum? */
  twobit_load( 1, 2 );
  twobit_check( 1, 4, 0, 1231, compiled_block_2_1231 );
  twobit_reg_op2_check_662(reg(4),reg(3),1231,compiled_block_2_1231); /* internal:check-vector?/vector-length:vec with (1 4 0) */
  twobit_stack( 2 );
  twobit_reg_op2_check_655(RESULT,reg(3),1231,compiled_block_2_1231); /* internal:check-<:fix:fix with (1 4 0) */
  twobit_stack( 2 );
  twobit_reg_op2imm_check_660(RESULT,fixnum(0),1231,compiled_block_2_1231); /* internal:check->=:fix:fix/imm with (1 4 0) */
  twobit_load( 3, 2 );
  twobit_reg( 4 );
  twobit_op2_402( 3 ); /* vector-ref:trusted */
  twobit_pop( 2 );
  twobit_return();
  twobit_label( 1228, compiled_block_2_1228 );
  twobit_save( 7 );
  twobit_store( 0, 0 );
  twobit_store( 1, 4 );
  twobit_store( 2, 2 );
  twobit_store( 3, 6 );
  twobit_store( 4, 1 );
  twobit_store( 5, 3 );
  twobit_store( 31, 5 );
  twobit_movereg( 31, 1 );
  twobit_global( 3 ); /*  random-integer~1pxGHH~7327 */
  twobit_setrtn( 1232, compiled_block_2_1232 );
  twobit_invoke( 1 );
  twobit_label( 1232, compiled_block_2_1232 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_stack( 1 );
  twobit_op2_61( 4, 82, compiled_temp_2_82 ); /* + */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_23(); /* fixnum? */
  twobit_load( 1, 2 );
  twobit_check( 4, 1, 0, 1226, compiled_block_2_1226 );
  twobit_stack( 2 );
  twobit_reg_op1_check_653(RESULT,1226,compiled_block_2_1226); /* internal:check-vector? with (4 1 0) */
  twobit_stack( 2 );
  twobit_op1_401(); /* vector-length:vec */
  twobit_setreg( 3 );
  twobit_reg_op2_check_661(reg(4),reg(3),1226,compiled_block_2_1226); /* internal:check-range with (4 1 0) */
  twobit_stack( 2 );
  twobit_op2_402( 4 ); /* vector-ref:trusted */
  twobit_setreg( 4 );
  twobit_load( 5, 3 );
  twobit_load( 3, 1 );
  twobit_load( 2, 2 );
  twobit_load( 1, 4 );
  twobit_lambda( compiled_start_2_83, 5, 5 );
  twobit_setreg( 3 );
  twobit_store( 3, 7 );
  twobit_load( 7, 5 );
  twobit_load( 6, 6 );
  twobit_load( 3, 1 );
  twobit_lambda( compiled_start_2_84, 7, 7 );
  twobit_setreg( 2 );
  twobit_load( 1, 7 );
  twobit_global( 8 ); /* call-with-values */
  twobit_pop( 7 );
  twobit_invoke( 2 );
  twobit_label( 1222, compiled_block_2_1222 );
  twobit_trap( 2, 30, 0, 160 );
  twobit_label( 1219, compiled_block_2_1219 );
  twobit_trap( 2, 4, 0, 160 );
  twobit_label( 1231, compiled_block_2_1231 );
  twobit_trap( 4, 1, 0, 160 );
  twobit_label( 1226, compiled_block_2_1226 );
  twobit_trap( 1, 4, 0, 160 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_83( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_lexical( 1, 4 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_movereg( 4, 8 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 4 );
  twobit_setreg( 2 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 3 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 4 );
  twobit_lexical( 0, 5 );
  twobit_setreg( 5 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 6 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 7 );
  twobit_reg( 8 );
  twobit_invoke( 7 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_84( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_lexical( 0, 6 );
  twobit_op2_branchf_619( 1, 85, compiled_temp_2_85, 1235, compiled_block_2_1235 ); /* internal:branchf-< */
  twobit_save( 2 );
  twobit_store( 0, 0 );
  twobit_store( 1, 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 4 );
  twobit_reg( 1 );
  twobit_op2_80( 4 ); /* make-vector */
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_movereg( 4, 3 );
  twobit_lexical( 1, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 2 );
  twobit_movereg( 2, 8 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 4 );
  twobit_setreg( 2 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 5 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 6 );
  twobit_lexical( 0, 5 );
  twobit_setreg( 7 );
  twobit_reg( 8 );
  twobit_setrtn( 1236, compiled_block_2_1236 );
  twobit_invoke( 7 );
  twobit_label( 1236, compiled_block_2_1236 );
  twobit_load( 0, 0 );
  twobit_stack( 1 );
  twobit_setreg( 4 );
  twobit_lexical( 1, 3 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_movereg( 3, 6 );
  twobit_movereg( 4, 5 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_load( 2, 2 );
  twobit_lexical( 0, 6 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_reg( 6 );
  twobit_pop( 2 );
  twobit_invoke( 5 );
  twobit_label( 1235, compiled_block_2_1235 );
  twobit_reg( 1 );
  twobit_op2_61( 2, 86, compiled_temp_2_86 ); /* + */
  twobit_setreg( 4 );
  twobit_lexical( 0, 6 );
  twobit_op2_branchf_619( 4, 87, compiled_temp_2_87, 1239, compiled_block_2_1239 ); /* internal:branchf-< */
  twobit_lexical( 0, 4 );
  twobit_return();
  twobit_label( 1239, compiled_block_2_1239 );
  twobit_save( 3 );
  twobit_store( 0, 0 );
  twobit_lexical( 0, 7 );
  twobit_op2_62( 4, 88, compiled_temp_2_88 ); /* - */
  twobit_setreg( 3 );
  twobit_store( 3, 3 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_reg( 3 );
  twobit_op2_80( 2 ); /* make-vector */
  twobit_setreg( 2 );
  twobit_store( 2, 2 );
  twobit_movereg( 2, 3 );
  twobit_lexical( 0, 6 );
  twobit_op2_62( 4, 89, compiled_temp_2_89 ); /* - */
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_lexical( 1, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 1 );
  twobit_movereg( 1, 8 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 4 );
  twobit_setreg( 2 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 5 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 6 );
  twobit_lexical( 0, 5 );
  twobit_setreg( 7 );
  twobit_reg( 8 );
  twobit_setrtn( 1240, compiled_block_2_1240 );
  twobit_invoke( 7 );
  twobit_label( 1240, compiled_block_2_1240 );
  twobit_load( 0, 0 );
  twobit_load( 3, 1 );
  twobit_lexical( 1, 3 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_movereg( 4, 6 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_load( 2, 2 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_load( 5, 3 );
  twobit_reg( 6 );
  twobit_pop( 3 );
  twobit_invoke( 5 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_17( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 5 );
  twobit_reg( 5 );
  twobit_op2_62( 4, 59, compiled_temp_2_59 ); /* - */
  twobit_setreg( 31 );
  twobit_imm_const( fixnum(2) ); /* 2 */
  twobit_op2_branchf_623( 31, 60, compiled_temp_2_60, 1244, compiled_block_2_1244 ); /* internal:branchf-= */
  twobit_save( 3 );
  twobit_store( 0, 0 );
  twobit_reg( 4 );
  twobit_op2imm_130( fixnum(1), 61, compiled_temp_2_61 ); /* + */
  twobit_setreg( 3 );
  twobit_reg_op1_check_651(reg(3),1245,compiled_block_2_1245); /* internal:check-fixnum? with (3 2 0) */
  twobit_reg_op2_check_662(reg(2),reg(31),1245,compiled_block_2_1245); /* internal:check-vector?/vector-length:vec with (3 2 0) */
  twobit_reg_op2_check_661(reg(3),reg(31),1245,compiled_block_2_1245); /* internal:check-range with (3 2 0) */
  twobit_reg( 2 );
  twobit_op2_402( 3 ); /* vector-ref:trusted */
  twobit_setreg( 3 );
  twobit_store( 3, 3 );
  twobit_reg_op1_check_651(reg(4),1246,compiled_block_2_1246); /* internal:check-fixnum? with (4 2 0) */
  twobit_reg_op2_check_661(reg(4),reg(31),1246,compiled_block_2_1246); /* internal:check-range with (4 2 0) */
  twobit_reg( 2 );
  twobit_op2_402( 4 ); /* vector-ref:trusted */
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_movereg( 3, 2 );
  twobit_store( 1, 1 );
  twobit_movereg( 4, 1 );
  twobit_stack( 1 );
  twobit_setrtn( 1247, compiled_block_2_1247 );
  twobit_invoke( 2 );
  twobit_label( 1247, compiled_block_2_1247 );
  twobit_load( 0, 0 );
  twobit_branchf( 1249, compiled_block_2_1249 );
  twobit_load( 1, 2 );
  twobit_load( 2, 3 );
  twobit_global( 1 ); /* values */
  twobit_pop( 3 );
  twobit_invoke( 2 );
  twobit_label( 1249, compiled_block_2_1249 );
  twobit_load( 1, 3 );
  twobit_load( 2, 2 );
  twobit_global( 1 ); /* values */
  twobit_pop( 3 );
  twobit_invoke( 2 );
  twobit_label( 1244, compiled_block_2_1244 );
  twobit_lexical( 0, 6 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 30 );
  twobit_reg( 31 );
  twobit_op2_branchf_619( 30, 62, compiled_temp_2_62, 1253, compiled_block_2_1253 ); /* internal:branchf-< */
  twobit_save( 2 );
  twobit_store( 0, 0 );
  twobit_store( 1, 1 );
  twobit_store( 3, 2 );
  twobit_movereg( 2, 1 );
  twobit_movereg( 4, 2 );
  twobit_movereg( 5, 3 );
  twobit_global( 2 ); /* vector-copy */
  twobit_setrtn( 1254, compiled_block_2_1254 );
  twobit_invoke( 3 );
  twobit_label( 1254, compiled_block_2_1254 );
  twobit_load( 0, 0 );
  twobit_setreg( 2 );
  twobit_load( 1, 1 );
  twobit_global( 3 ); /* vector-sort */
  twobit_setrtn( 1255, compiled_block_2_1255 );
  twobit_invoke( 2 );
  twobit_label( 1255, compiled_block_2_1255 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_stack( 2 );
  twobit_op1_23(); /* fixnum? */
  twobit_load( 1, 2 );
  twobit_check( 1, 4, 0, 1256, compiled_block_2_1256 );
  twobit_reg_op2_check_662(reg(4),reg(3),1256,compiled_block_2_1256); /* internal:check-vector?/vector-length:vec with (1 4 0) */
  twobit_stack( 2 );
  twobit_op2_407( 3 ); /* <:fix:fix */
  twobit_load( 2, 2 );
  twobit_check( 2, 4, 0, 1257, compiled_block_2_1257 );
  twobit_stack( 2 );
  twobit_reg_op2imm_check_660(RESULT,fixnum(0),1257,compiled_block_2_1257); /* internal:check->=:fix:fix/imm with (2 4 0) */
  twobit_reg( 4 );
  twobit_op2_402( 2 ); /* vector-ref:trusted */
  twobit_setreg( 1 );
  twobit_reg( 2 );
  twobit_op2imm_520( fixnum(1) ); /* +:idx:idx */
  twobit_setreg( 2 );
  twobit_reg_op2_check_655(reg(2),reg(3),1257,compiled_block_2_1257); /* internal:check-<:fix:fix with (2 4 0) */
  twobit_reg( 4 );
  twobit_op2_402( 2 ); /* vector-ref:trusted */
  twobit_setreg( 2 );
  twobit_global( 1 ); /* values */
  twobit_pop( 2 );
  twobit_invoke( 2 );
  twobit_label( 1253, compiled_block_2_1253 );
  twobit_save( 7 );
  twobit_store( 0, 0 );
  twobit_store( 1, 4 );
  twobit_store( 2, 2 );
  twobit_store( 3, 6 );
  twobit_store( 4, 1 );
  twobit_store( 5, 3 );
  twobit_store( 31, 5 );
  twobit_movereg( 31, 1 );
  twobit_global( 4 ); /*  random-integer~1pxGHH~7327 */
  twobit_setrtn( 1259, compiled_block_2_1259 );
  twobit_invoke( 1 );
  twobit_label( 1259, compiled_block_2_1259 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_stack( 1 );
  twobit_op2_61( 4, 63, compiled_temp_2_63 ); /* + */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_23(); /* fixnum? */
  twobit_load( 1, 2 );
  twobit_check( 4, 1, 0, 1260, compiled_block_2_1260 );
  twobit_stack( 2 );
  twobit_reg_op1_check_653(RESULT,1260,compiled_block_2_1260); /* internal:check-vector? with (4 1 0) */
  twobit_stack( 2 );
  twobit_op1_401(); /* vector-length:vec */
  twobit_setreg( 3 );
  twobit_reg_op2_check_661(reg(4),reg(3),1260,compiled_block_2_1260); /* internal:check-range with (4 1 0) */
  twobit_stack( 2 );
  twobit_op2_402( 4 ); /* vector-ref:trusted */
  twobit_setreg( 4 );
  twobit_load( 5, 3 );
  twobit_load( 3, 1 );
  twobit_load( 2, 2 );
  twobit_load( 1, 4 );
  twobit_lambda( compiled_start_2_64, 6, 5 );
  twobit_setreg( 3 );
  twobit_store( 3, 7 );
  twobit_load( 7, 5 );
  twobit_load( 6, 6 );
  twobit_load( 3, 1 );
  twobit_lambda( compiled_start_2_65, 8, 7 );
  twobit_setreg( 2 );
  twobit_load( 1, 7 );
  twobit_global( 9 ); /* call-with-values */
  twobit_pop( 7 );
  twobit_invoke( 2 );
  twobit_label( 1257, compiled_block_2_1257 );
  twobit_trap( 4, 2, 0, 160 );
  twobit_label( 1246, compiled_block_2_1246 );
  twobit_trap( 2, 4, 0, 160 );
  twobit_label( 1260, compiled_block_2_1260 );
  twobit_trap( 1, 4, 0, 160 );
  twobit_label( 1256, compiled_block_2_1256 );
  twobit_trap( 4, 1, 0, 160 );
  twobit_label( 1245, compiled_block_2_1245 );
  twobit_trap( 2, 3, 0, 160 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_64( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_lexical( 1, 5 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_movereg( 4, 8 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 4 );
  twobit_setreg( 2 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 3 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 4 );
  twobit_lexical( 0, 5 );
  twobit_setreg( 5 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 6 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 7 );
  twobit_reg( 8 );
  twobit_invoke( 7 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_65( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_lexical( 0, 6 );
  twobit_op2imm_130( fixnum(1), 66, compiled_temp_2_66 ); /* + */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op2_branchf_623( 1, 67, compiled_temp_2_67, 1263, compiled_block_2_1263 ); /* internal:branchf-= */
  twobit_save( 0 );
  twobit_store( 0, 0 );
  twobit_lexical( 1, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_movereg( 4, 6 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 2 );
  twobit_lexical( 0, 6 );
  twobit_setreg( 3 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 4 );
  twobit_lexical( 0, 5 );
  twobit_setreg( 5 );
  twobit_reg( 6 );
  twobit_setrtn( 1264, compiled_block_2_1264 );
  twobit_invoke( 5 );
  twobit_label( 1264, compiled_block_2_1264 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 4 );
  twobit_setreg( 2 );
  twobit_global( 1 ); /* values */
  twobit_pop( 0 );
  twobit_invoke( 2 );
  twobit_label( 1263, compiled_block_2_1263 );
  twobit_lexical( 0, 6 );
  twobit_op2_branchf_619( 1, 68, compiled_temp_2_68, 1267, compiled_block_2_1267 ); /* internal:branchf-< */
  twobit_save( 2 );
  twobit_store( 0, 0 );
  twobit_store( 1, 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_reg( 1 );
  twobit_op2_80( 3 ); /* make-vector */
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_movereg( 4, 3 );
  twobit_lexical( 1, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 2 );
  twobit_movereg( 2, 8 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 4 );
  twobit_setreg( 2 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 5 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 6 );
  twobit_lexical( 0, 5 );
  twobit_setreg( 7 );
  twobit_reg( 8 );
  twobit_setrtn( 1268, compiled_block_2_1268 );
  twobit_invoke( 7 );
  twobit_label( 1268, compiled_block_2_1268 );
  twobit_load( 0, 0 );
  twobit_stack( 1 );
  twobit_setreg( 4 );
  twobit_lexical( 1, 4 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_movereg( 3, 6 );
  twobit_movereg( 4, 5 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_load( 2, 2 );
  twobit_lexical( 0, 6 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_reg( 6 );
  twobit_pop( 2 );
  twobit_invoke( 5 );
  twobit_label( 1267, compiled_block_2_1267 );
  twobit_reg( 1 );
  twobit_op2_61( 2, 69, compiled_temp_2_69 ); /* + */
  twobit_setreg( 3 );
  twobit_lexical( 0, 6 );
  twobit_op2_branchf_619( 3, 70, compiled_temp_2_70, 1271, compiled_block_2_1271 ); /* internal:branchf-< */
  twobit_save( 0 );
  twobit_store( 0, 0 );
  twobit_reg( 4 );
  twobit_op2_branchf_619( 3, 71, compiled_temp_2_71, 1273, compiled_block_2_1273 ); /* internal:branchf-< */
  twobit_lexical( 0, 4 );
  twobit_skip( 1272, compiled_block_2_1272 );
  twobit_label( 1273, compiled_block_2_1273 );
  twobit_lexical( 1, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_movereg( 3, 6 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 2 );
  twobit_movereg( 4, 3 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 4 );
  twobit_lexical( 0, 5 );
  twobit_setreg( 5 );
  twobit_reg( 6 );
  twobit_setrtn( 1274, compiled_block_2_1274 );
  twobit_invoke( 5 );
  twobit_label( 1274, compiled_block_2_1274 );
  twobit_load( 0, 0 );
  twobit_label( 1272, compiled_block_2_1272 );
  twobit_setreg( 2 );
  twobit_lexical( 0, 4 );
  twobit_setreg( 1 );
  twobit_global( 1 ); /* values */
  twobit_pop( 0 );
  twobit_invoke( 2 );
  twobit_label( 1271, compiled_block_2_1271 );
  twobit_save( 3 );
  twobit_store( 0, 0 );
  twobit_store( 3, 1 );
  twobit_lexical( 0, 7 );
  twobit_op2_62( 3, 72, compiled_temp_2_72 ); /* - */
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_reg( 4 );
  twobit_op2_80( 2 ); /* make-vector */
  twobit_setreg( 2 );
  twobit_store( 2, 2 );
  twobit_movereg( 2, 3 );
  twobit_load( 1, 1 );
  twobit_lexical( 0, 6 );
  twobit_op2_62( 1, 73, compiled_temp_2_73 ); /* - */
  twobit_setreg( 1 );
  twobit_store( 1, 1 );
  twobit_lexical( 1, 3 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_movereg( 4, 8 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 4 );
  twobit_setreg( 2 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 5 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 6 );
  twobit_lexical( 0, 5 );
  twobit_setreg( 7 );
  twobit_reg( 8 );
  twobit_setrtn( 1276, compiled_block_2_1276 );
  twobit_invoke( 7 );
  twobit_label( 1276, compiled_block_2_1276 );
  twobit_load( 0, 0 );
  twobit_load( 3, 1 );
  twobit_lexical( 1, 4 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_movereg( 4, 6 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_load( 2, 2 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_load( 5, 3 );
  twobit_reg( 6 );
  twobit_pop( 3 );
  twobit_invoke( 5 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_18( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 7 );
  twobit_reg( 4 );
  twobit_op2_branchf_623( 5, 56, compiled_temp_2_56, 1280, compiled_block_2_1280 ); /* internal:branchf-= */
  twobit_movereg( 6, 1 );
  twobit_movereg( 7, 2 );
  twobit_global( 1 ); /* values */
  twobit_invoke( 2 );
  twobit_label( 1280, compiled_block_2_1280 );
  twobit_save( 7 );
  twobit_store( 0, 0 );
  twobit_store( 1, 3 );
  twobit_store( 2, 4 );
  twobit_store( 3, 5 );
  twobit_store( 4, 1 );
  twobit_store( 5, 6 );
  twobit_store( 6, 2 );
  twobit_store( 7, 7 );
  twobit_movereg( 1, 31 );
  twobit_reg_op1_check_651(reg(4),1282,compiled_block_2_1282); /* internal:check-fixnum? with (4 3 0) */
  twobit_reg_op2_check_662(reg(3),reg(30),1282,compiled_block_2_1282); /* internal:check-vector?/vector-length:vec with (4 3 0) */
  twobit_reg_op2_check_661(reg(4),reg(30),1282,compiled_block_2_1282); /* internal:check-range with (4 3 0) */
  twobit_reg( 3 );
  twobit_op2_402( 4 ); /* vector-ref:trusted */
  twobit_setreg( 1 );
  twobit_reg( 31 );
  twobit_setrtn( 1283, compiled_block_2_1283 );
  twobit_invoke( 2 );
  twobit_label( 1283, compiled_block_2_1283 );
  twobit_load( 0, 0 );
  twobit_branchf( 1285, compiled_block_2_1285 );
  twobit_stack( 1 );
  twobit_op2imm_520( fixnum(1) ); /* +:idx:idx */
  twobit_setreg( 4 );
  twobit_stack( 2 );
  twobit_op2imm_130( fixnum(1), 57, compiled_temp_2_57 ); /* + */
  twobit_setreg( 3 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 2 );
  twobit_movereg( 3, 6 );
  twobit_movereg( 2, 8 );
  twobit_load( 1, 3 );
  twobit_load( 2, 4 );
  twobit_load( 3, 5 );
  twobit_load( 5, 6 );
  twobit_load( 7, 7 );
  twobit_reg( 8 );
  twobit_pop( 7 );
  twobit_invoke( 7 );
  twobit_label( 1285, compiled_block_2_1285 );
  twobit_stack( 3 );
  twobit_setreg( 4 );
  twobit_load( 1, 4 );
  twobit_load( 3, 1 );
  twobit_stack( 5 );
  twobit_op2_402( 3 ); /* vector-ref:trusted */
  twobit_setreg( 2 );
  twobit_reg( 4 );
  twobit_setrtn( 1287, compiled_block_2_1287 );
  twobit_invoke( 2 );
  twobit_label( 1287, compiled_block_2_1287 );
  twobit_load( 0, 0 );
  twobit_branchf( 1289, compiled_block_2_1289 );
  twobit_stack( 1 );
  twobit_op2imm_520( fixnum(1) ); /* +:idx:idx */
  twobit_setreg( 4 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_movereg( 3, 8 );
  twobit_load( 1, 3 );
  twobit_load( 2, 4 );
  twobit_load( 3, 5 );
  twobit_load( 5, 6 );
  twobit_load( 6, 2 );
  twobit_load( 7, 7 );
  twobit_reg( 8 );
  twobit_pop( 7 );
  twobit_invoke( 7 );
  twobit_label( 1289, compiled_block_2_1289 );
  twobit_stack( 1 );
  twobit_op2imm_520( fixnum(1) ); /* +:idx:idx */
  twobit_setreg( 4 );
  twobit_stack( 7 );
  twobit_op2imm_130( fixnum(1), 58, compiled_temp_2_58 ); /* + */
  twobit_setreg( 3 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 2 );
  twobit_movereg( 2, 8 );
  twobit_movereg( 3, 7 );
  twobit_load( 1, 3 );
  twobit_load( 2, 4 );
  twobit_load( 3, 5 );
  twobit_load( 5, 6 );
  twobit_load( 6, 2 );
  twobit_reg( 8 );
  twobit_pop( 7 );
  twobit_invoke( 7 );
  twobit_label( 1282, compiled_block_2_1282 );
  twobit_trap( 3, 4, 0, 160 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_19( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 7 );
  twobit_reg( 6 );
  twobit_op2_branchf_623( 7, 55, compiled_temp_2_55, 1293, compiled_block_2_1293 ); /* internal:branchf-= */
  twobit_reg( 3 );
  twobit_return();
  twobit_label( 1293, compiled_block_2_1293 );
  twobit_save( 7 );
  twobit_store( 0, 0 );
  twobit_store( 1, 5 );
  twobit_store( 2, 6 );
  twobit_store( 3, 4 );
  twobit_store( 4, 3 );
  twobit_store( 5, 2 );
  twobit_store( 6, 1 );
  twobit_store( 7, 7 );
  twobit_movereg( 1, 31 );
  twobit_reg_op1_check_651(reg(6),1294,compiled_block_2_1294); /* internal:check-fixnum? with (6 5 0) */
  twobit_reg_op2_check_662(reg(5),reg(30),1294,compiled_block_2_1294); /* internal:check-vector?/vector-length:vec with (6 5 0) */
  twobit_reg_op2_check_661(reg(6),reg(30),1294,compiled_block_2_1294); /* internal:check-range with (6 5 0) */
  twobit_reg( 5 );
  twobit_op2_402( 6 ); /* vector-ref:trusted */
  twobit_setreg( 1 );
  twobit_reg( 31 );
  twobit_setrtn( 1295, compiled_block_2_1295 );
  twobit_invoke( 2 );
  twobit_label( 1295, compiled_block_2_1295 );
  twobit_load( 0, 0 );
  twobit_branchf( 1297, compiled_block_2_1297 );
  twobit_load( 4, 1 );
  twobit_stack( 2 );
  twobit_op2_402( 4 ); /* vector-ref:trusted */
  twobit_setreg( 3 );
  twobit_stack( 3 );
  twobit_op1_23(); /* fixnum? */
  twobit_load( 2, 4 );
  twobit_load( 1, 3 );
  twobit_check( 3, 1, 2, 1298, compiled_block_2_1298 );
  twobit_stack( 4 );
  twobit_reg_op1_check_653(RESULT,1298,compiled_block_2_1298); /* internal:check-vector? with (3 1 2) */
  twobit_stack( 4 );
  twobit_op1_401(); /* vector-length:vec */
  twobit_setreg( 2 );
  twobit_stack( 3 );
  twobit_op2_407( 2 ); /* <:fix:fix */
  twobit_load( 2, 4 );
  twobit_check( 3, 1, 2, 1298, compiled_block_2_1298 );
  twobit_stack( 3 );
  twobit_reg_op2imm_check_660(RESULT,fixnum(0),1298,compiled_block_2_1298); /* internal:check->=:fix:fix/imm with (3 1 2) */
  twobit_load( 2, 3 );
  twobit_stack( 4 );
  twobit_op3_403( 2, 3 ); /* vector-set!:trusted */
  twobit_reg( 2 );
  twobit_op2imm_520( fixnum(1) ); /* +:idx:idx */
  twobit_setreg( 4 );
  twobit_stack( 1 );
  twobit_op2imm_520( fixnum(1) ); /* +:idx:idx */
  twobit_setreg( 3 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 2 );
  twobit_movereg( 3, 6 );
  twobit_movereg( 2, 8 );
  twobit_load( 1, 5 );
  twobit_load( 2, 6 );
  twobit_load( 3, 4 );
  twobit_load( 5, 2 );
  twobit_load( 7, 7 );
  twobit_reg( 8 );
  twobit_pop( 7 );
  twobit_invoke( 7 );
  twobit_label( 1297, compiled_block_2_1297 );
  twobit_stack( 1 );
  twobit_op2imm_520( fixnum(1) ); /* +:idx:idx */
  twobit_setreg( 4 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_movereg( 4, 6 );
  twobit_movereg( 3, 8 );
  twobit_load( 1, 5 );
  twobit_load( 2, 6 );
  twobit_load( 3, 4 );
  twobit_load( 4, 3 );
  twobit_load( 5, 2 );
  twobit_load( 7, 7 );
  twobit_reg( 8 );
  twobit_pop( 7 );
  twobit_invoke( 7 );
  twobit_label( 1298, compiled_block_2_1298 );
  twobit_trap( 2, 1, 3, 161 );
  twobit_label( 1294, compiled_block_2_1294 );
  twobit_trap( 5, 6, 0, 160 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_20( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 7 );
  twobit_reg( 6 );
  twobit_op2_branchf_623( 7, 54, compiled_temp_2_54, 1302, compiled_block_2_1302 ); /* internal:branchf-= */
  twobit_reg( 3 );
  twobit_return();
  twobit_label( 1302, compiled_block_2_1302 );
  twobit_save( 7 );
  twobit_store( 0, 0 );
  twobit_store( 1, 5 );
  twobit_store( 2, 6 );
  twobit_store( 3, 4 );
  twobit_store( 4, 3 );
  twobit_store( 5, 2 );
  twobit_store( 6, 1 );
  twobit_store( 7, 7 );
  twobit_movereg( 1, 31 );
  twobit_movereg( 2, 1 );
  twobit_reg_op1_check_651(reg(6),1303,compiled_block_2_1303); /* internal:check-fixnum? with (6 5 0) */
  twobit_reg_op2_check_662(reg(5),reg(30),1303,compiled_block_2_1303); /* internal:check-vector?/vector-length:vec with (6 5 0) */
  twobit_reg_op2_check_661(reg(6),reg(30),1303,compiled_block_2_1303); /* internal:check-range with (6 5 0) */
  twobit_reg( 5 );
  twobit_op2_402( 6 ); /* vector-ref:trusted */
  twobit_setreg( 2 );
  twobit_reg( 31 );
  twobit_setrtn( 1304, compiled_block_2_1304 );
  twobit_invoke( 2 );
  twobit_label( 1304, compiled_block_2_1304 );
  twobit_load( 0, 0 );
  twobit_branchf( 1306, compiled_block_2_1306 );
  twobit_load( 4, 1 );
  twobit_stack( 2 );
  twobit_op2_402( 4 ); /* vector-ref:trusted */
  twobit_setreg( 3 );
  twobit_stack( 3 );
  twobit_op1_23(); /* fixnum? */
  twobit_load( 2, 4 );
  twobit_load( 1, 3 );
  twobit_check( 3, 1, 2, 1307, compiled_block_2_1307 );
  twobit_stack( 4 );
  twobit_reg_op1_check_653(RESULT,1307,compiled_block_2_1307); /* internal:check-vector? with (3 1 2) */
  twobit_stack( 4 );
  twobit_op1_401(); /* vector-length:vec */
  twobit_setreg( 2 );
  twobit_stack( 3 );
  twobit_op2_407( 2 ); /* <:fix:fix */
  twobit_load( 2, 4 );
  twobit_check( 3, 1, 2, 1307, compiled_block_2_1307 );
  twobit_stack( 3 );
  twobit_reg_op2imm_check_660(RESULT,fixnum(0),1307,compiled_block_2_1307); /* internal:check->=:fix:fix/imm with (3 1 2) */
  twobit_load( 2, 3 );
  twobit_stack( 4 );
  twobit_op3_403( 2, 3 ); /* vector-set!:trusted */
  twobit_reg( 2 );
  twobit_op2imm_520( fixnum(1) ); /* +:idx:idx */
  twobit_setreg( 4 );
  twobit_stack( 1 );
  twobit_op2imm_520( fixnum(1) ); /* +:idx:idx */
  twobit_setreg( 3 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 2 );
  twobit_movereg( 3, 6 );
  twobit_movereg( 2, 8 );
  twobit_load( 1, 5 );
  twobit_load( 2, 6 );
  twobit_load( 3, 4 );
  twobit_load( 5, 2 );
  twobit_load( 7, 7 );
  twobit_reg( 8 );
  twobit_pop( 7 );
  twobit_invoke( 7 );
  twobit_label( 1306, compiled_block_2_1306 );
  twobit_stack( 1 );
  twobit_op2imm_520( fixnum(1) ); /* +:idx:idx */
  twobit_setreg( 4 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_movereg( 4, 6 );
  twobit_movereg( 3, 8 );
  twobit_load( 1, 5 );
  twobit_load( 2, 6 );
  twobit_load( 3, 4 );
  twobit_load( 4, 3 );
  twobit_load( 5, 2 );
  twobit_load( 7, 7 );
  twobit_reg( 8 );
  twobit_pop( 7 );
  twobit_invoke( 7 );
  twobit_label( 1307, compiled_block_2_1307 );
  twobit_trap( 2, 1, 3, 161 );
  twobit_label( 1303, compiled_block_2_1303 );
  twobit_trap( 5, 6, 0, 160 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_21( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 3 );
  twobit_jump( 1, 1020, compiled_block_2_1020 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_22( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 3 );
  twobit_jump( 1, 1019, compiled_block_2_1019 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_23( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_jump( 1, 1017, compiled_block_2_1017 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_24( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_jump( 1, 1016, compiled_block_2_1016 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_25( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_jump( 1, 1015, compiled_block_2_1015 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_32( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_imm_const( fixnum(3) ); /* 3 */
  twobit_setreg( 2 );
  twobit_jump( 1, 1013, compiled_block_2_1013 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_33( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_reg( 1 );
  twobit_branchf( 1387, compiled_block_2_1387 );
  twobit_reg( 2 );
  twobit_return();
  twobit_label( 1387, compiled_block_2_1387 );
  twobit_lexical( 0, 1 );
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_2_34( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_imm_const( fixnum(2) ); /* 2 */
  twobit_setreg( 2 );
  twobit_jump( 1, 1013, compiled_block_2_1013 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_35( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_reg( 1 );
  twobit_branchf( 1391, compiled_block_2_1391 );
  twobit_reg( 2 );
  twobit_return();
  twobit_label( 1391, compiled_block_2_1391 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_2_36( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_imm_const( fixnum(1) ); /* 1 */
  twobit_setreg( 2 );
  twobit_jump( 1, 1013, compiled_block_2_1013 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_37( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_reg( 1 );
  twobit_branchf( 1395, compiled_block_2_1395 );
  twobit_reg( 2 );
  twobit_return();
  twobit_label( 1395, compiled_block_2_1395 );
  twobit_lexical( 0, 1 );
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_2_38( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 2 );
  twobit_jump( 1, 1013, compiled_block_2_1013 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_39( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_reg( 1 );
  twobit_branchf( 1399, compiled_block_2_1399 );
  twobit_reg( 2 );
  twobit_return();
  twobit_label( 1399, compiled_block_2_1399 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_2_40( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_imm_const( fixnum(1) ); /* 1 */
  twobit_setreg( 2 );
  twobit_jump( 1, 1013, compiled_block_2_1013 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_41( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_reg( 1 );
  twobit_branchf( 1405, compiled_block_2_1405 );
  twobit_reg( 2 );
  twobit_return();
  twobit_label( 1405, compiled_block_2_1405 );
  twobit_lexical( 0, 1 );
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_2_42( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 2 );
  twobit_jump( 1, 1013, compiled_block_2_1013 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_43( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_reg( 1 );
  twobit_branchf( 1409, compiled_block_2_1409 );
  twobit_reg( 2 );
  twobit_return();
  twobit_label( 1409, compiled_block_2_1409 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_return();
  twobit_epilogue();
}


RTYPE twobit_thunk_fbe26fefd80b1337e9cf7e9eb8bcb308_1(CONT_PARAMS) {
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


RTYPE twobit_thunk_fbe26fefd80b1337e9cf7e9eb8bcb308_2(CONT_PARAMS) {
  RETURN_RTYPE(compiled_start_3_0(CONT_ACTUALS));
}
codeptr_t CDECL twobit_load_table[] = { 
  twobit_thunk_fbe26fefd80b1337e9cf7e9eb8bcb308_0,
  twobit_thunk_fbe26fefd80b1337e9cf7e9eb8bcb308_1,
  twobit_thunk_fbe26fefd80b1337e9cf7e9eb8bcb308_2,
  0  /* The table may be empty; some compilers complain */
};
