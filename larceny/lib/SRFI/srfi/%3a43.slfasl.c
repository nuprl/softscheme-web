/* Generated from /home/henchman/larcenytest/larceny-petit-Nightly-2017-08-06/larceny_src/lib/SRFI/srfi/%3a43.slfasl */
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


RTYPE twobit_thunk_1a14957f3f7a01b9fddcee8a24187c9b_0(CONT_PARAMS) {
  RETURN_RTYPE(compiled_start_1_0(CONT_ACTUALS));
}
static RTYPE compiled_block_2_2005( CONT_PARAMS );
static RTYPE compiled_block_2_2004( CONT_PARAMS );
static RTYPE compiled_start_2_0( CONT_PARAMS );
static RTYPE compiled_block_2_1956( CONT_PARAMS );
static RTYPE compiled_block_2_1948( CONT_PARAMS );
static RTYPE compiled_block_2_1952( CONT_PARAMS );
static RTYPE compiled_block_2_1992( CONT_PARAMS );
static RTYPE compiled_block_2_1258( CONT_PARAMS );
static RTYPE compiled_block_2_2000( CONT_PARAMS );
static RTYPE compiled_block_2_1999( CONT_PARAMS );
static RTYPE compiled_block_2_1997( CONT_PARAMS );
static RTYPE compiled_block_2_1257( CONT_PARAMS );
static RTYPE compiled_block_2_1994( CONT_PARAMS );
static RTYPE compiled_block_2_1995( CONT_PARAMS );
static RTYPE compiled_temp_2_59( CONT_PARAMS );
static RTYPE compiled_block_2_1989( CONT_PARAMS );
static RTYPE compiled_block_2_1990( CONT_PARAMS );
static RTYPE compiled_temp_2_58( CONT_PARAMS );
static RTYPE compiled_block_2_1987( CONT_PARAMS );
static RTYPE compiled_block_2_1256( CONT_PARAMS );
static RTYPE compiled_block_2_1985( CONT_PARAMS );
static RTYPE compiled_block_2_1962( CONT_PARAMS );
static RTYPE compiled_block_2_1980( CONT_PARAMS );
static RTYPE compiled_block_2_1982( CONT_PARAMS );
static RTYPE compiled_block_2_1981( CONT_PARAMS );
static RTYPE compiled_temp_2_57( CONT_PARAMS );
static RTYPE compiled_block_2_1975( CONT_PARAMS );
static RTYPE compiled_block_2_1977( CONT_PARAMS );
static RTYPE compiled_block_2_1976( CONT_PARAMS );
static RTYPE compiled_temp_2_56( CONT_PARAMS );
static RTYPE compiled_block_2_1971( CONT_PARAMS );
static RTYPE compiled_block_2_1972( CONT_PARAMS );
static RTYPE compiled_temp_2_55( CONT_PARAMS );
static RTYPE compiled_block_2_1966( CONT_PARAMS );
static RTYPE compiled_temp_2_52( CONT_PARAMS );
static RTYPE compiled_block_2_1964( CONT_PARAMS );
static RTYPE compiled_block_2_1963( CONT_PARAMS );
static RTYPE compiled_block_2_1255( CONT_PARAMS );
static RTYPE compiled_block_2_1958( CONT_PARAMS );
static RTYPE compiled_block_2_1954( CONT_PARAMS );
static RTYPE compiled_block_2_1950( CONT_PARAMS );
static RTYPE compiled_block_2_1254( CONT_PARAMS );
static RTYPE compiled_block_2_1943( CONT_PARAMS );
static RTYPE compiled_block_2_1746( CONT_PARAMS );
static RTYPE compiled_block_2_1713( CONT_PARAMS );
static RTYPE compiled_block_2_1658( CONT_PARAMS );
static RTYPE compiled_block_2_1629( CONT_PARAMS );
static RTYPE compiled_block_2_1585( CONT_PARAMS );
static RTYPE compiled_block_2_1545( CONT_PARAMS );
static RTYPE compiled_block_2_1471( CONT_PARAMS );
static RTYPE compiled_block_2_1407( CONT_PARAMS );
static RTYPE compiled_block_2_1376( CONT_PARAMS );
static RTYPE compiled_block_2_1345( CONT_PARAMS );
static RTYPE compiled_block_2_1336( CONT_PARAMS );
static RTYPE compiled_block_2_1327( CONT_PARAMS );
static RTYPE compiled_block_2_1319( CONT_PARAMS );
static RTYPE compiled_block_2_1311( CONT_PARAMS );
static RTYPE compiled_block_2_1303( CONT_PARAMS );
static RTYPE compiled_block_2_1295( CONT_PARAMS );
static RTYPE compiled_start_2_3( CONT_PARAMS );
static RTYPE compiled_block_2_2002( CONT_PARAMS );
static RTYPE compiled_start_2_60( CONT_PARAMS );
static RTYPE compiled_start_2_54( CONT_PARAMS );
static RTYPE compiled_start_2_53( CONT_PARAMS );
static RTYPE compiled_start_2_51( CONT_PARAMS );
static RTYPE compiled_start_2_50( CONT_PARAMS );
static RTYPE compiled_start_2_49( CONT_PARAMS );
static RTYPE compiled_block_2_1912( CONT_PARAMS );
static RTYPE compiled_block_2_1927( CONT_PARAMS );
static RTYPE compiled_block_2_1941( CONT_PARAMS );
static RTYPE compiled_block_2_1929( CONT_PARAMS );
static RTYPE compiled_block_2_1939( CONT_PARAMS );
static RTYPE compiled_temp_2_66( CONT_PARAMS );
static RTYPE compiled_block_2_1931( CONT_PARAMS );
static RTYPE compiled_block_2_1930( CONT_PARAMS );
static RTYPE compiled_block_2_1914( CONT_PARAMS );
static RTYPE compiled_block_2_1925( CONT_PARAMS );
static RTYPE compiled_temp_2_64( CONT_PARAMS );
static RTYPE compiled_block_2_1917( CONT_PARAMS );
static RTYPE compiled_block_2_1916( CONT_PARAMS );
static RTYPE compiled_block_2_1915( CONT_PARAMS );
static RTYPE compiled_block_2_1899( CONT_PARAMS );
static RTYPE compiled_block_2_1910( CONT_PARAMS );
static RTYPE compiled_temp_2_62( CONT_PARAMS );
static RTYPE compiled_block_2_1902( CONT_PARAMS );
static RTYPE compiled_block_2_1901( CONT_PARAMS );
static RTYPE compiled_block_2_1900( CONT_PARAMS );
static RTYPE compiled_start_2_48( CONT_PARAMS );
static RTYPE compiled_block_2_1936( CONT_PARAMS );
static RTYPE compiled_block_2_1933( CONT_PARAMS );
static RTYPE compiled_start_2_65( CONT_PARAMS );
static RTYPE compiled_block_2_1922( CONT_PARAMS );
static RTYPE compiled_block_2_1919( CONT_PARAMS );
static RTYPE compiled_start_2_63( CONT_PARAMS );
static RTYPE compiled_block_2_1907( CONT_PARAMS );
static RTYPE compiled_block_2_1904( CONT_PARAMS );
static RTYPE compiled_start_2_61( CONT_PARAMS );
static RTYPE compiled_block_2_1867( CONT_PARAMS );
static RTYPE compiled_block_2_1882( CONT_PARAMS );
static RTYPE compiled_block_2_1896( CONT_PARAMS );
static RTYPE compiled_block_2_1884( CONT_PARAMS );
static RTYPE compiled_block_2_1894( CONT_PARAMS );
static RTYPE compiled_temp_2_70( CONT_PARAMS );
static RTYPE compiled_block_2_1886( CONT_PARAMS );
static RTYPE compiled_block_2_1885( CONT_PARAMS );
static RTYPE compiled_block_2_1869( CONT_PARAMS );
static RTYPE compiled_block_2_1880( CONT_PARAMS );
static RTYPE compiled_temp_2_68( CONT_PARAMS );
static RTYPE compiled_block_2_1872( CONT_PARAMS );
static RTYPE compiled_block_2_1871( CONT_PARAMS );
static RTYPE compiled_block_2_1870( CONT_PARAMS );
static RTYPE compiled_block_2_1865( CONT_PARAMS );
static RTYPE compiled_start_2_47( CONT_PARAMS );
static RTYPE compiled_block_2_1891( CONT_PARAMS );
static RTYPE compiled_block_2_1888( CONT_PARAMS );
static RTYPE compiled_start_2_69( CONT_PARAMS );
static RTYPE compiled_block_2_1877( CONT_PARAMS );
static RTYPE compiled_block_2_1874( CONT_PARAMS );
static RTYPE compiled_start_2_67( CONT_PARAMS );
static RTYPE compiled_block_2_1854( CONT_PARAMS );
static RTYPE compiled_start_2_46( CONT_PARAMS );
static RTYPE compiled_block_2_1861( CONT_PARAMS );
static RTYPE compiled_block_2_1860( CONT_PARAMS );
static RTYPE compiled_temp_2_73( CONT_PARAMS );
static RTYPE compiled_block_2_1856( CONT_PARAMS );
static RTYPE compiled_start_2_72( CONT_PARAMS );
static RTYPE compiled_start_2_71( CONT_PARAMS );
static RTYPE compiled_block_2_1844( CONT_PARAMS );
static RTYPE compiled_block_2_1842( CONT_PARAMS );
static RTYPE compiled_start_2_45( CONT_PARAMS );
static RTYPE compiled_block_2_1851( CONT_PARAMS );
static RTYPE compiled_block_2_1850( CONT_PARAMS );
static RTYPE compiled_temp_2_77( CONT_PARAMS );
static RTYPE compiled_block_2_1846( CONT_PARAMS );
static RTYPE compiled_temp_2_76( CONT_PARAMS );
static RTYPE compiled_start_2_75( CONT_PARAMS );
static RTYPE compiled_start_2_74( CONT_PARAMS );
static RTYPE compiled_block_2_1837( CONT_PARAMS );
static RTYPE compiled_start_2_44( CONT_PARAMS );
static RTYPE compiled_start_2_79( CONT_PARAMS );
static RTYPE compiled_start_2_78( CONT_PARAMS );
static RTYPE compiled_block_2_1831( CONT_PARAMS );
static RTYPE compiled_block_2_1798( CONT_PARAMS );
static RTYPE compiled_block_2_1802( CONT_PARAMS );
static RTYPE compiled_block_2_1806( CONT_PARAMS );
static RTYPE compiled_block_2_1835( CONT_PARAMS );
static RTYPE compiled_block_2_1833( CONT_PARAMS );
static RTYPE compiled_block_2_1829( CONT_PARAMS );
static RTYPE compiled_block_2_1830( CONT_PARAMS );
static RTYPE compiled_temp_2_91( CONT_PARAMS );
static RTYPE compiled_temp_2_90( CONT_PARAMS );
static RTYPE compiled_temp_2_89( CONT_PARAMS );
static RTYPE compiled_block_2_1827( CONT_PARAMS );
static RTYPE compiled_block_2_1828( CONT_PARAMS );
static RTYPE compiled_temp_2_88( CONT_PARAMS );
static RTYPE compiled_block_2_1825( CONT_PARAMS );
static RTYPE compiled_block_2_1826( CONT_PARAMS );
static RTYPE compiled_temp_2_87( CONT_PARAMS );
static RTYPE compiled_temp_2_86( CONT_PARAMS );
static RTYPE compiled_block_2_1823( CONT_PARAMS );
static RTYPE compiled_block_2_1814( CONT_PARAMS );
static RTYPE compiled_block_2_1815( CONT_PARAMS );
static RTYPE compiled_block_2_1821( CONT_PARAMS );
static RTYPE compiled_temp_2_85( CONT_PARAMS );
static RTYPE compiled_temp_2_84( CONT_PARAMS );
static RTYPE compiled_temp_2_83( CONT_PARAMS );
static RTYPE compiled_temp_2_82( CONT_PARAMS );
static RTYPE compiled_block_2_1819( CONT_PARAMS );
static RTYPE compiled_block_2_1816( CONT_PARAMS );
static RTYPE compiled_block_2_1817( CONT_PARAMS );
static RTYPE compiled_temp_2_81( CONT_PARAMS );
static RTYPE compiled_temp_2_80( CONT_PARAMS );
static RTYPE compiled_block_2_1813( CONT_PARAMS );
static RTYPE compiled_block_2_1812( CONT_PARAMS );
static RTYPE compiled_block_2_1811( CONT_PARAMS );
static RTYPE compiled_block_2_1796( CONT_PARAMS );
static RTYPE compiled_block_2_1808( CONT_PARAMS );
static RTYPE compiled_block_2_1804( CONT_PARAMS );
static RTYPE compiled_block_2_1800( CONT_PARAMS );
static RTYPE compiled_start_2_43( CONT_PARAMS );
static RTYPE compiled_block_2_1794( CONT_PARAMS );
static RTYPE compiled_block_2_1768( CONT_PARAMS );
static RTYPE compiled_block_2_1772( CONT_PARAMS );
static RTYPE compiled_block_2_1776( CONT_PARAMS );
static RTYPE compiled_block_2_1790( CONT_PARAMS );
static RTYPE compiled_block_2_1792( CONT_PARAMS );
static RTYPE compiled_block_2_1788( CONT_PARAMS );
static RTYPE compiled_block_2_1789( CONT_PARAMS );
static RTYPE compiled_temp_2_97( CONT_PARAMS );
static RTYPE compiled_temp_2_96( CONT_PARAMS );
static RTYPE compiled_temp_2_95( CONT_PARAMS );
static RTYPE compiled_block_2_1786( CONT_PARAMS );
static RTYPE compiled_block_2_1787( CONT_PARAMS );
static RTYPE compiled_temp_2_94( CONT_PARAMS );
static RTYPE compiled_block_2_1784( CONT_PARAMS );
static RTYPE compiled_block_2_1785( CONT_PARAMS );
static RTYPE compiled_temp_2_93( CONT_PARAMS );
static RTYPE compiled_temp_2_92( CONT_PARAMS );
static RTYPE compiled_block_2_1783( CONT_PARAMS );
static RTYPE compiled_block_2_1782( CONT_PARAMS );
static RTYPE compiled_block_2_1781( CONT_PARAMS );
static RTYPE compiled_block_2_1766( CONT_PARAMS );
static RTYPE compiled_block_2_1778( CONT_PARAMS );
static RTYPE compiled_block_2_1774( CONT_PARAMS );
static RTYPE compiled_block_2_1770( CONT_PARAMS );
static RTYPE compiled_start_2_42( CONT_PARAMS );
static RTYPE compiled_block_2_1756( CONT_PARAMS );
static RTYPE compiled_block_2_1754( CONT_PARAMS );
static RTYPE compiled_start_2_41( CONT_PARAMS );
static RTYPE compiled_block_2_1763( CONT_PARAMS );
static RTYPE compiled_block_2_1762( CONT_PARAMS );
static RTYPE compiled_temp_2_100( CONT_PARAMS );
static RTYPE compiled_block_2_1758( CONT_PARAMS );
static RTYPE compiled_start_2_99( CONT_PARAMS );
static RTYPE compiled_start_2_98( CONT_PARAMS );
static RTYPE compiled_block_2_1750( CONT_PARAMS );
static RTYPE compiled_block_2_1752( CONT_PARAMS );
static RTYPE compiled_block_2_1751( CONT_PARAMS );
static RTYPE compiled_block_2_1749( CONT_PARAMS );
static RTYPE compiled_block_2_1748( CONT_PARAMS );
static RTYPE compiled_block_2_1747( CONT_PARAMS );
static RTYPE compiled_start_2_40( CONT_PARAMS );
static RTYPE compiled_start_2_39( CONT_PARAMS );
static RTYPE compiled_block_2_1740( CONT_PARAMS );
static RTYPE compiled_block_2_1720( CONT_PARAMS );
static RTYPE compiled_block_2_1722( CONT_PARAMS );
static RTYPE compiled_block_2_1744( CONT_PARAMS );
static RTYPE compiled_block_2_1742( CONT_PARAMS );
static RTYPE compiled_block_2_1739( CONT_PARAMS );
static RTYPE compiled_block_2_1737( CONT_PARAMS );
static RTYPE compiled_block_2_1715( CONT_PARAMS );
static RTYPE compiled_block_2_1734( CONT_PARAMS );
static RTYPE compiled_temp_2_105( CONT_PARAMS );
static RTYPE compiled_block_2_1732( CONT_PARAMS );
static RTYPE compiled_block_2_1731( CONT_PARAMS );
static RTYPE compiled_block_2_1728( CONT_PARAMS );
static RTYPE compiled_block_2_1729( CONT_PARAMS );
static RTYPE compiled_temp_2_104( CONT_PARAMS );
static RTYPE compiled_block_2_1726( CONT_PARAMS );
static RTYPE compiled_temp_2_103( CONT_PARAMS );
static RTYPE compiled_block_2_1714( CONT_PARAMS );
static RTYPE compiled_temp_2_102( CONT_PARAMS );
static RTYPE compiled_block_2_1723( CONT_PARAMS );
static RTYPE compiled_block_2_1719( CONT_PARAMS );
static RTYPE compiled_block_2_1717( CONT_PARAMS );
static RTYPE compiled_block_2_1716( CONT_PARAMS );
static RTYPE compiled_start_2_101( CONT_PARAMS );
static RTYPE compiled_start_2_38( CONT_PARAMS );
static RTYPE compiled_block_2_1707( CONT_PARAMS );
static RTYPE compiled_block_2_1687( CONT_PARAMS );
static RTYPE compiled_block_2_1689( CONT_PARAMS );
static RTYPE compiled_block_2_1711( CONT_PARAMS );
static RTYPE compiled_block_2_1709( CONT_PARAMS );
static RTYPE compiled_block_2_1706( CONT_PARAMS );
static RTYPE compiled_block_2_1704( CONT_PARAMS );
static RTYPE compiled_block_2_1682( CONT_PARAMS );
static RTYPE compiled_temp_2_110( CONT_PARAMS );
static RTYPE compiled_block_2_1701( CONT_PARAMS );
static RTYPE compiled_block_2_1699( CONT_PARAMS );
static RTYPE compiled_block_2_1698( CONT_PARAMS );
static RTYPE compiled_block_2_1695( CONT_PARAMS );
static RTYPE compiled_block_2_1696( CONT_PARAMS );
static RTYPE compiled_temp_2_109( CONT_PARAMS );
static RTYPE compiled_block_2_1693( CONT_PARAMS );
static RTYPE compiled_temp_2_108( CONT_PARAMS );
static RTYPE compiled_block_2_1681( CONT_PARAMS );
static RTYPE compiled_temp_2_107( CONT_PARAMS );
static RTYPE compiled_block_2_1690( CONT_PARAMS );
static RTYPE compiled_block_2_1686( CONT_PARAMS );
static RTYPE compiled_block_2_1684( CONT_PARAMS );
static RTYPE compiled_block_2_1683( CONT_PARAMS );
static RTYPE compiled_start_2_106( CONT_PARAMS );
static RTYPE compiled_block_2_1660( CONT_PARAMS );
static RTYPE compiled_block_2_1659( CONT_PARAMS );
static RTYPE compiled_start_2_37( CONT_PARAMS );
static RTYPE compiled_block_2_1671( CONT_PARAMS );
static RTYPE compiled_block_2_1677( CONT_PARAMS );
static RTYPE compiled_temp_2_118( CONT_PARAMS );
static RTYPE compiled_block_2_1675( CONT_PARAMS );
static RTYPE compiled_temp_2_117( CONT_PARAMS );
static RTYPE compiled_block_2_1673( CONT_PARAMS );
static RTYPE compiled_block_2_1672( CONT_PARAMS );
static RTYPE compiled_block_2_1670( CONT_PARAMS );
static RTYPE compiled_block_2_1665( CONT_PARAMS );
static RTYPE compiled_block_2_1668( CONT_PARAMS );
static RTYPE compiled_temp_2_116( CONT_PARAMS );
static RTYPE compiled_block_2_1666( CONT_PARAMS );
static RTYPE compiled_temp_2_115( CONT_PARAMS );
static RTYPE compiled_temp_2_114( CONT_PARAMS );
static RTYPE compiled_temp_2_113( CONT_PARAMS );
static RTYPE compiled_block_2_1662( CONT_PARAMS );
static RTYPE compiled_start_2_112( CONT_PARAMS );
static RTYPE compiled_start_2_111( CONT_PARAMS );
static RTYPE compiled_start_2_36( CONT_PARAMS );
static RTYPE compiled_block_2_1653( CONT_PARAMS );
static RTYPE compiled_block_2_1639( CONT_PARAMS );
static RTYPE compiled_block_2_1641( CONT_PARAMS );
static RTYPE compiled_block_2_1656( CONT_PARAMS );
static RTYPE compiled_block_2_1654( CONT_PARAMS );
static RTYPE compiled_block_2_1652( CONT_PARAMS );
static RTYPE compiled_block_2_1634( CONT_PARAMS );
static RTYPE compiled_temp_2_122( CONT_PARAMS );
static RTYPE compiled_block_2_1649( CONT_PARAMS );
static RTYPE compiled_block_2_1647( CONT_PARAMS );
static RTYPE compiled_block_2_1646( CONT_PARAMS );
static RTYPE compiled_block_2_1645( CONT_PARAMS );
static RTYPE compiled_temp_2_121( CONT_PARAMS );
static RTYPE compiled_block_2_1633( CONT_PARAMS );
static RTYPE compiled_temp_2_120( CONT_PARAMS );
static RTYPE compiled_block_2_1642( CONT_PARAMS );
static RTYPE compiled_block_2_1638( CONT_PARAMS );
static RTYPE compiled_block_2_1636( CONT_PARAMS );
static RTYPE compiled_block_2_1635( CONT_PARAMS );
static RTYPE compiled_start_2_119( CONT_PARAMS );
static RTYPE compiled_start_2_35( CONT_PARAMS );
static RTYPE compiled_block_2_1631( CONT_PARAMS );
static RTYPE compiled_start_2_123( CONT_PARAMS );
static RTYPE compiled_start_2_34( CONT_PARAMS );
static RTYPE compiled_start_2_33( CONT_PARAMS );
static RTYPE compiled_block_2_1610( CONT_PARAMS );
static RTYPE compiled_block_2_1624( CONT_PARAMS );
static RTYPE compiled_block_2_1612( CONT_PARAMS );
static RTYPE compiled_block_2_1627( CONT_PARAMS );
static RTYPE compiled_block_2_1625( CONT_PARAMS );
static RTYPE compiled_block_2_1623( CONT_PARAMS );
static RTYPE compiled_block_2_1605( CONT_PARAMS );
static RTYPE compiled_temp_2_126( CONT_PARAMS );
static RTYPE compiled_block_2_1620( CONT_PARAMS );
static RTYPE compiled_block_2_1618( CONT_PARAMS );
static RTYPE compiled_block_2_1617( CONT_PARAMS );
static RTYPE compiled_block_2_1616( CONT_PARAMS );
static RTYPE compiled_temp_2_125( CONT_PARAMS );
static RTYPE compiled_block_2_1604( CONT_PARAMS );
static RTYPE compiled_block_2_1613( CONT_PARAMS );
static RTYPE compiled_block_2_1609( CONT_PARAMS );
static RTYPE compiled_block_2_1607( CONT_PARAMS );
static RTYPE compiled_block_2_1606( CONT_PARAMS );
static RTYPE compiled_start_2_124( CONT_PARAMS );
static RTYPE compiled_start_2_32( CONT_PARAMS );
static RTYPE compiled_block_2_1602( CONT_PARAMS );
static RTYPE compiled_start_2_127( CONT_PARAMS );
static RTYPE compiled_start_2_31( CONT_PARAMS );
static RTYPE compiled_block_2_1598( CONT_PARAMS );
static RTYPE compiled_block_2_1593( CONT_PARAMS );
static RTYPE compiled_block_2_1599( CONT_PARAMS );
static RTYPE compiled_block_2_1589( CONT_PARAMS );
static RTYPE compiled_block_2_1587( CONT_PARAMS );
static RTYPE compiled_block_2_1586( CONT_PARAMS );
static RTYPE compiled_start_2_30( CONT_PARAMS );
static RTYPE compiled_block_2_1597( CONT_PARAMS );
static RTYPE compiled_temp_2_130( CONT_PARAMS );
static RTYPE compiled_block_2_1595( CONT_PARAMS );
static RTYPE compiled_start_2_129( CONT_PARAMS );
static RTYPE compiled_block_2_1592( CONT_PARAMS );
static RTYPE compiled_temp_2_131( CONT_PARAMS );
static RTYPE compiled_block_2_1590( CONT_PARAMS );
static RTYPE compiled_start_2_128( CONT_PARAMS );
static RTYPE compiled_start_2_29( CONT_PARAMS );
static RTYPE compiled_block_2_1582( CONT_PARAMS );
static RTYPE compiled_block_2_1570( CONT_PARAMS );
static RTYPE compiled_block_2_1572( CONT_PARAMS );
static RTYPE compiled_block_2_1581( CONT_PARAMS );
static RTYPE compiled_block_2_1583( CONT_PARAMS );
static RTYPE compiled_block_2_1565( CONT_PARAMS );
static RTYPE compiled_block_2_1576( CONT_PARAMS );
static RTYPE compiled_temp_2_134( CONT_PARAMS );
static RTYPE compiled_block_2_1578( CONT_PARAMS );
static RTYPE compiled_block_2_1577( CONT_PARAMS );
static RTYPE compiled_temp_2_133( CONT_PARAMS );
static RTYPE compiled_block_2_1564( CONT_PARAMS );
static RTYPE compiled_block_2_1573( CONT_PARAMS );
static RTYPE compiled_block_2_1569( CONT_PARAMS );
static RTYPE compiled_block_2_1567( CONT_PARAMS );
static RTYPE compiled_block_2_1566( CONT_PARAMS );
static RTYPE compiled_start_2_132( CONT_PARAMS );
static RTYPE compiled_block_2_1561( CONT_PARAMS );
static RTYPE compiled_block_2_1559( CONT_PARAMS );
static RTYPE compiled_block_2_1557( CONT_PARAMS );
static RTYPE compiled_block_2_1563( CONT_PARAMS );
static RTYPE compiled_block_2_1562( CONT_PARAMS );
static RTYPE compiled_block_2_1558( CONT_PARAMS );
static RTYPE compiled_block_2_1560( CONT_PARAMS );
static RTYPE compiled_block_2_1556( CONT_PARAMS );
static RTYPE compiled_block_2_1555( CONT_PARAMS );
static RTYPE compiled_start_2_28( CONT_PARAMS );
static RTYPE compiled_block_2_1550( CONT_PARAMS );
static RTYPE compiled_block_2_1552( CONT_PARAMS );
static RTYPE compiled_block_2_1553( CONT_PARAMS );
static RTYPE compiled_block_2_1549( CONT_PARAMS );
static RTYPE compiled_block_2_1547( CONT_PARAMS );
static RTYPE compiled_block_2_1546( CONT_PARAMS );
static RTYPE compiled_start_2_27( CONT_PARAMS );
static RTYPE compiled_start_2_26( CONT_PARAMS );
static RTYPE compiled_block_2_1542( CONT_PARAMS );
static RTYPE compiled_block_2_1530( CONT_PARAMS );
static RTYPE compiled_block_2_1532( CONT_PARAMS );
static RTYPE compiled_block_2_1543( CONT_PARAMS );
static RTYPE compiled_temp_2_139( CONT_PARAMS );
static RTYPE compiled_block_2_1541( CONT_PARAMS );
static RTYPE compiled_block_2_1525( CONT_PARAMS );
static RTYPE compiled_block_2_1538( CONT_PARAMS );
static RTYPE compiled_block_2_1537( CONT_PARAMS );
static RTYPE compiled_temp_2_138( CONT_PARAMS );
static RTYPE compiled_block_2_1536( CONT_PARAMS );
static RTYPE compiled_temp_2_137( CONT_PARAMS );
static RTYPE compiled_block_2_1524( CONT_PARAMS );
static RTYPE compiled_temp_2_136( CONT_PARAMS );
static RTYPE compiled_block_2_1533( CONT_PARAMS );
static RTYPE compiled_block_2_1529( CONT_PARAMS );
static RTYPE compiled_block_2_1527( CONT_PARAMS );
static RTYPE compiled_block_2_1526( CONT_PARAMS );
static RTYPE compiled_start_2_135( CONT_PARAMS );
static RTYPE compiled_block_2_1519( CONT_PARAMS );
static RTYPE compiled_block_2_1521( CONT_PARAMS );
static RTYPE compiled_block_2_1522( CONT_PARAMS );
static RTYPE compiled_block_2_1518( CONT_PARAMS );
static RTYPE compiled_block_2_1516( CONT_PARAMS );
static RTYPE compiled_block_2_1515( CONT_PARAMS );
static RTYPE compiled_start_2_25( CONT_PARAMS );
static RTYPE compiled_block_2_1512( CONT_PARAMS );
static RTYPE compiled_block_2_1497( CONT_PARAMS );
static RTYPE compiled_block_2_1513( CONT_PARAMS );
static RTYPE compiled_block_2_1498( CONT_PARAMS );
static RTYPE compiled_block_2_1511( CONT_PARAMS );
static RTYPE compiled_block_2_1509( CONT_PARAMS );
static RTYPE compiled_block_2_1493( CONT_PARAMS );
static RTYPE compiled_block_2_1506( CONT_PARAMS );
static RTYPE compiled_block_2_1502( CONT_PARAMS );
static RTYPE compiled_block_2_1504( CONT_PARAMS );
static RTYPE compiled_block_2_1503( CONT_PARAMS );
static RTYPE compiled_block_2_1492( CONT_PARAMS );
static RTYPE compiled_block_2_1500( CONT_PARAMS );
static RTYPE compiled_block_2_1496( CONT_PARAMS );
static RTYPE compiled_start_2_24( CONT_PARAMS );
static RTYPE compiled_block_2_1479( CONT_PARAMS );
static RTYPE compiled_block_2_1487( CONT_PARAMS );
static RTYPE compiled_block_2_1490( CONT_PARAMS );
static RTYPE compiled_block_2_1488( CONT_PARAMS );
static RTYPE compiled_block_2_1486( CONT_PARAMS );
static RTYPE compiled_block_2_1484( CONT_PARAMS );
static RTYPE compiled_block_2_1474( CONT_PARAMS );
static RTYPE compiled_block_2_1481( CONT_PARAMS );
static RTYPE compiled_block_2_1482( CONT_PARAMS );
static RTYPE compiled_block_2_1478( CONT_PARAMS );
static RTYPE compiled_block_2_1476( CONT_PARAMS );
static RTYPE compiled_start_2_23( CONT_PARAMS );
static RTYPE compiled_block_2_1473( CONT_PARAMS );
static RTYPE compiled_temp_2_140( CONT_PARAMS );
static RTYPE compiled_block_2_1472( CONT_PARAMS );
static RTYPE compiled_start_2_22( CONT_PARAMS );
static RTYPE compiled_start_2_21( CONT_PARAMS );
static RTYPE compiled_block_2_1458( CONT_PARAMS );
static RTYPE compiled_block_2_1464( CONT_PARAMS );
static RTYPE compiled_block_2_1454( CONT_PARAMS );
static RTYPE compiled_temp_2_143( CONT_PARAMS );
static RTYPE compiled_block_2_1469( CONT_PARAMS );
static RTYPE compiled_block_2_1468( CONT_PARAMS );
static RTYPE compiled_block_2_1451( CONT_PARAMS );
static RTYPE compiled_temp_2_142( CONT_PARAMS );
static RTYPE compiled_block_2_1465( CONT_PARAMS );
static RTYPE compiled_block_2_1463( CONT_PARAMS );
static RTYPE compiled_block_2_1450( CONT_PARAMS );
static RTYPE compiled_block_2_1461( CONT_PARAMS );
static RTYPE compiled_block_2_1460( CONT_PARAMS );
static RTYPE compiled_block_2_1456( CONT_PARAMS );
static RTYPE compiled_block_2_1459( CONT_PARAMS );
static RTYPE compiled_block_2_1457( CONT_PARAMS );
static RTYPE compiled_block_2_1453( CONT_PARAMS );
static RTYPE compiled_start_2_141( CONT_PARAMS );
static RTYPE compiled_start_2_20( CONT_PARAMS );
static RTYPE compiled_start_2_19( CONT_PARAMS );
static RTYPE compiled_block_2_1444( CONT_PARAMS );
static RTYPE compiled_start_2_18( CONT_PARAMS );
static RTYPE compiled_block_2_1446( CONT_PARAMS );
static RTYPE compiled_temp_2_146( CONT_PARAMS );
static RTYPE compiled_start_2_145( CONT_PARAMS );
static RTYPE compiled_start_2_144( CONT_PARAMS );
static RTYPE compiled_block_2_1429( CONT_PARAMS );
static RTYPE compiled_block_2_1417( CONT_PARAMS );
static RTYPE compiled_block_2_1421( CONT_PARAMS );
static RTYPE compiled_block_2_1425( CONT_PARAMS );
static RTYPE compiled_block_2_1441( CONT_PARAMS );
static RTYPE compiled_block_2_1438( CONT_PARAMS );
static RTYPE compiled_block_2_1439( CONT_PARAMS );
static RTYPE compiled_temp_2_149( CONT_PARAMS );
static RTYPE compiled_block_2_1436( CONT_PARAMS );
static RTYPE compiled_block_2_1437( CONT_PARAMS );
static RTYPE compiled_temp_2_148( CONT_PARAMS );
static RTYPE compiled_temp_2_147( CONT_PARAMS );
static RTYPE compiled_block_2_1435( CONT_PARAMS );
static RTYPE compiled_block_2_1434( CONT_PARAMS );
static RTYPE compiled_block_2_1415( CONT_PARAMS );
static RTYPE compiled_block_2_1431( CONT_PARAMS );
static RTYPE compiled_block_2_1427( CONT_PARAMS );
static RTYPE compiled_block_2_1423( CONT_PARAMS );
static RTYPE compiled_block_2_1419( CONT_PARAMS );
static RTYPE compiled_start_2_17( CONT_PARAMS );
static RTYPE compiled_block_2_1408( CONT_PARAMS );
static RTYPE compiled_start_2_16( CONT_PARAMS );
static RTYPE compiled_block_2_1410( CONT_PARAMS );
static RTYPE compiled_block_2_1413( CONT_PARAMS );
static RTYPE compiled_block_2_1411( CONT_PARAMS );
static RTYPE compiled_block_2_1412( CONT_PARAMS );
static RTYPE compiled_temp_2_153( CONT_PARAMS );
static RTYPE compiled_temp_2_152( CONT_PARAMS );
static RTYPE compiled_start_2_151( CONT_PARAMS );
static RTYPE compiled_start_2_150( CONT_PARAMS );
static RTYPE compiled_start_2_15( CONT_PARAMS );
static RTYPE compiled_block_2_1405( CONT_PARAMS );
static RTYPE compiled_block_2_1385( CONT_PARAMS );
static RTYPE compiled_block_2_1403( CONT_PARAMS );
static RTYPE compiled_block_2_1404( CONT_PARAMS );
static RTYPE compiled_temp_2_162( CONT_PARAMS );
static RTYPE compiled_block_2_1379( CONT_PARAMS );
static RTYPE compiled_block_2_1397( CONT_PARAMS );
static RTYPE compiled_temp_2_159( CONT_PARAMS );
static RTYPE compiled_block_2_1378( CONT_PARAMS );
static RTYPE compiled_block_2_1391( CONT_PARAMS );
static RTYPE compiled_temp_2_156( CONT_PARAMS );
static RTYPE compiled_block_2_1377( CONT_PARAMS );
static RTYPE compiled_block_2_1382( CONT_PARAMS );
static RTYPE compiled_block_2_1389( CONT_PARAMS );
static RTYPE compiled_block_2_1387( CONT_PARAMS );
static RTYPE compiled_block_2_1388( CONT_PARAMS );
static RTYPE compiled_block_2_1383( CONT_PARAMS );
static RTYPE compiled_block_2_1384( CONT_PARAMS );
static RTYPE compiled_temp_2_155( CONT_PARAMS );
static RTYPE compiled_block_2_1381( CONT_PARAMS );
static RTYPE compiled_block_2_1380( CONT_PARAMS );
static RTYPE compiled_start_2_154( CONT_PARAMS );
static RTYPE compiled_start_2_161( CONT_PARAMS );
static RTYPE compiled_block_2_1398( CONT_PARAMS );
static RTYPE compiled_start_2_160( CONT_PARAMS );
static RTYPE compiled_start_2_158( CONT_PARAMS );
static RTYPE compiled_block_2_1392( CONT_PARAMS );
static RTYPE compiled_start_2_157( CONT_PARAMS );
static RTYPE compiled_start_2_14( CONT_PARAMS );
static RTYPE compiled_block_2_1374( CONT_PARAMS );
static RTYPE compiled_block_2_1354( CONT_PARAMS );
static RTYPE compiled_block_2_1372( CONT_PARAMS );
static RTYPE compiled_block_2_1373( CONT_PARAMS );
static RTYPE compiled_temp_2_170( CONT_PARAMS );
static RTYPE compiled_block_2_1348( CONT_PARAMS );
static RTYPE compiled_block_2_1366( CONT_PARAMS );
static RTYPE compiled_temp_2_167( CONT_PARAMS );
static RTYPE compiled_block_2_1347( CONT_PARAMS );
static RTYPE compiled_block_2_1360( CONT_PARAMS );
static RTYPE compiled_temp_2_164( CONT_PARAMS );
static RTYPE compiled_block_2_1346( CONT_PARAMS );
static RTYPE compiled_block_2_1351( CONT_PARAMS );
static RTYPE compiled_block_2_1358( CONT_PARAMS );
static RTYPE compiled_block_2_1356( CONT_PARAMS );
static RTYPE compiled_block_2_1357( CONT_PARAMS );
static RTYPE compiled_block_2_1352( CONT_PARAMS );
static RTYPE compiled_block_2_1353( CONT_PARAMS );
static RTYPE compiled_block_2_1350( CONT_PARAMS );
static RTYPE compiled_block_2_1349( CONT_PARAMS );
static RTYPE compiled_start_2_163( CONT_PARAMS );
static RTYPE compiled_start_2_169( CONT_PARAMS );
static RTYPE compiled_block_2_1367( CONT_PARAMS );
static RTYPE compiled_start_2_168( CONT_PARAMS );
static RTYPE compiled_start_2_166( CONT_PARAMS );
static RTYPE compiled_block_2_1361( CONT_PARAMS );
static RTYPE compiled_start_2_165( CONT_PARAMS );
static RTYPE compiled_start_2_13( CONT_PARAMS );
static RTYPE compiled_block_2_1343( CONT_PARAMS );
static RTYPE compiled_block_2_1342( CONT_PARAMS );
static RTYPE compiled_block_2_1341( CONT_PARAMS );
static RTYPE compiled_temp_2_173( CONT_PARAMS );
static RTYPE compiled_block_2_1340( CONT_PARAMS );
static RTYPE compiled_temp_2_172( CONT_PARAMS );
static RTYPE compiled_block_2_1337( CONT_PARAMS );
static RTYPE compiled_start_2_171( CONT_PARAMS );
static RTYPE compiled_start_2_12( CONT_PARAMS );
static RTYPE compiled_block_2_1332( CONT_PARAMS );
static RTYPE compiled_block_2_1334( CONT_PARAMS );
static RTYPE compiled_block_2_1333( CONT_PARAMS );
static RTYPE compiled_temp_2_176( CONT_PARAMS );
static RTYPE compiled_block_2_1331( CONT_PARAMS );
static RTYPE compiled_temp_2_175( CONT_PARAMS );
static RTYPE compiled_block_2_1328( CONT_PARAMS );
static RTYPE compiled_start_2_174( CONT_PARAMS );
static RTYPE compiled_start_2_11( CONT_PARAMS );
static RTYPE compiled_block_2_1325( CONT_PARAMS );
static RTYPE compiled_block_2_1324( CONT_PARAMS );
static RTYPE compiled_temp_2_179( CONT_PARAMS );
static RTYPE compiled_block_2_1323( CONT_PARAMS );
static RTYPE compiled_temp_2_178( CONT_PARAMS );
static RTYPE compiled_block_2_1320( CONT_PARAMS );
static RTYPE compiled_start_2_177( CONT_PARAMS );
static RTYPE compiled_start_2_10( CONT_PARAMS );
static RTYPE compiled_block_2_1316( CONT_PARAMS );
static RTYPE compiled_block_2_1317( CONT_PARAMS );
static RTYPE compiled_temp_2_182( CONT_PARAMS );
static RTYPE compiled_block_2_1315( CONT_PARAMS );
static RTYPE compiled_temp_2_181( CONT_PARAMS );
static RTYPE compiled_block_2_1312( CONT_PARAMS );
static RTYPE compiled_start_2_180( CONT_PARAMS );
static RTYPE compiled_start_2_9( CONT_PARAMS );
static RTYPE compiled_block_2_1309( CONT_PARAMS );
static RTYPE compiled_block_2_1308( CONT_PARAMS );
static RTYPE compiled_block_2_1307( CONT_PARAMS );
static RTYPE compiled_temp_2_185( CONT_PARAMS );
static RTYPE compiled_block_2_1304( CONT_PARAMS );
static RTYPE compiled_temp_2_184( CONT_PARAMS );
static RTYPE compiled_start_2_183( CONT_PARAMS );
static RTYPE compiled_start_2_8( CONT_PARAMS );
static RTYPE compiled_block_2_1301( CONT_PARAMS );
static RTYPE compiled_block_2_1300( CONT_PARAMS );
static RTYPE compiled_block_2_1299( CONT_PARAMS );
static RTYPE compiled_temp_2_188( CONT_PARAMS );
static RTYPE compiled_block_2_1296( CONT_PARAMS );
static RTYPE compiled_temp_2_187( CONT_PARAMS );
static RTYPE compiled_start_2_186( CONT_PARAMS );
static RTYPE compiled_start_2_7( CONT_PARAMS );
static RTYPE compiled_block_2_1290( CONT_PARAMS );
static RTYPE compiled_block_2_1289( CONT_PARAMS );
static RTYPE compiled_block_2_1293( CONT_PARAMS );
static RTYPE compiled_temp_2_197( CONT_PARAMS );
static RTYPE compiled_block_2_1282( CONT_PARAMS );
static RTYPE compiled_block_2_1288( CONT_PARAMS );
static RTYPE compiled_temp_2_196( CONT_PARAMS );
static RTYPE compiled_block_2_1281( CONT_PARAMS );
static RTYPE compiled_temp_2_195( CONT_PARAMS );
static RTYPE compiled_temp_2_194( CONT_PARAMS );
static RTYPE compiled_temp_2_193( CONT_PARAMS );
static RTYPE compiled_temp_2_192( CONT_PARAMS );
static RTYPE compiled_temp_2_191( CONT_PARAMS );
static RTYPE compiled_block_2_1284( CONT_PARAMS );
static RTYPE compiled_temp_2_190( CONT_PARAMS );
static RTYPE compiled_start_2_189( CONT_PARAMS );
static RTYPE compiled_block_2_1267( CONT_PARAMS );
static RTYPE compiled_block_2_1265( CONT_PARAMS );
static RTYPE compiled_block_2_1274( CONT_PARAMS );
static RTYPE compiled_block_2_1277( CONT_PARAMS );
static RTYPE compiled_temp_2_200( CONT_PARAMS );
static RTYPE compiled_block_2_1279( CONT_PARAMS );
static RTYPE compiled_block_2_1275( CONT_PARAMS );
static RTYPE compiled_block_2_1270( CONT_PARAMS );
static RTYPE compiled_block_2_1273( CONT_PARAMS );
static RTYPE compiled_temp_2_199( CONT_PARAMS );
static RTYPE compiled_block_2_1271( CONT_PARAMS );
static RTYPE compiled_block_2_1268( CONT_PARAMS );
static RTYPE compiled_block_2_1269( CONT_PARAMS );
static RTYPE compiled_temp_2_198( CONT_PARAMS );
static RTYPE compiled_block_2_1266( CONT_PARAMS );
static RTYPE compiled_block_2_1264( CONT_PARAMS );
static RTYPE compiled_start_2_6( CONT_PARAMS );
static RTYPE compiled_block_2_1262( CONT_PARAMS );
static RTYPE compiled_temp_2_201( CONT_PARAMS );
static RTYPE compiled_start_2_5( CONT_PARAMS );
static RTYPE compiled_start_2_4( CONT_PARAMS );
static RTYPE compiled_block_2_1252( CONT_PARAMS );
static RTYPE compiled_block_2_1213( CONT_PARAMS );
static RTYPE compiled_block_2_1139( CONT_PARAMS );
static RTYPE compiled_block_2_1021( CONT_PARAMS );
static RTYPE compiled_start_2_2( CONT_PARAMS );
static RTYPE compiled_block_2_1215( CONT_PARAMS );
static RTYPE compiled_block_2_1217( CONT_PARAMS );
static RTYPE compiled_block_2_1219( CONT_PARAMS );
static RTYPE compiled_block_2_1221( CONT_PARAMS );
static RTYPE compiled_block_2_1223( CONT_PARAMS );
static RTYPE compiled_block_2_1225( CONT_PARAMS );
static RTYPE compiled_block_2_1227( CONT_PARAMS );
static RTYPE compiled_block_2_1229( CONT_PARAMS );
static RTYPE compiled_block_2_1231( CONT_PARAMS );
static RTYPE compiled_block_2_1234( CONT_PARAMS );
static RTYPE compiled_block_2_1241( CONT_PARAMS );
static RTYPE compiled_block_2_1240( CONT_PARAMS );
static RTYPE compiled_block_2_1239( CONT_PARAMS );
static RTYPE compiled_block_2_1238( CONT_PARAMS );
static RTYPE compiled_block_2_1237( CONT_PARAMS );
static RTYPE compiled_block_2_1236( CONT_PARAMS );
static RTYPE compiled_block_2_1235( CONT_PARAMS );
static RTYPE compiled_block_2_1232( CONT_PARAMS );
static RTYPE compiled_start_2_205( CONT_PARAMS );
static RTYPE compiled_block_2_1170( CONT_PARAMS );
static RTYPE compiled_block_2_1172( CONT_PARAMS );
static RTYPE compiled_block_2_1174( CONT_PARAMS );
static RTYPE compiled_block_2_1176( CONT_PARAMS );
static RTYPE compiled_block_2_1178( CONT_PARAMS );
static RTYPE compiled_block_2_1180( CONT_PARAMS );
static RTYPE compiled_block_2_1182( CONT_PARAMS );
static RTYPE compiled_block_2_1184( CONT_PARAMS );
static RTYPE compiled_block_2_1187( CONT_PARAMS );
static RTYPE compiled_block_2_1189( CONT_PARAMS );
static RTYPE compiled_block_2_1192( CONT_PARAMS );
static RTYPE compiled_block_2_1201( CONT_PARAMS );
static RTYPE compiled_block_2_1200( CONT_PARAMS );
static RTYPE compiled_block_2_1199( CONT_PARAMS );
static RTYPE compiled_block_2_1198( CONT_PARAMS );
static RTYPE compiled_block_2_1197( CONT_PARAMS );
static RTYPE compiled_block_2_1196( CONT_PARAMS );
static RTYPE compiled_block_2_1195( CONT_PARAMS );
static RTYPE compiled_block_2_1194( CONT_PARAMS );
static RTYPE compiled_block_2_1193( CONT_PARAMS );
static RTYPE compiled_block_2_1190( CONT_PARAMS );
static RTYPE compiled_block_2_1185( CONT_PARAMS );
static RTYPE compiled_block_2_1140( CONT_PARAMS );
static RTYPE compiled_block_2_1143( CONT_PARAMS );
static RTYPE compiled_block_2_1145( CONT_PARAMS );
static RTYPE compiled_block_2_1147( CONT_PARAMS );
static RTYPE compiled_block_2_1149( CONT_PARAMS );
static RTYPE compiled_block_2_1151( CONT_PARAMS );
static RTYPE compiled_block_2_1153( CONT_PARAMS );
static RTYPE compiled_block_2_1156( CONT_PARAMS );
static RTYPE compiled_block_2_1161( CONT_PARAMS );
static RTYPE compiled_block_2_1160( CONT_PARAMS );
static RTYPE compiled_block_2_1159( CONT_PARAMS );
static RTYPE compiled_block_2_1158( CONT_PARAMS );
static RTYPE compiled_block_2_1157( CONT_PARAMS );
static RTYPE compiled_block_2_1154( CONT_PARAMS );
static RTYPE compiled_start_2_204( CONT_PARAMS );
static RTYPE compiled_block_2_1086( CONT_PARAMS );
static RTYPE compiled_block_2_1088( CONT_PARAMS );
static RTYPE compiled_block_2_1090( CONT_PARAMS );
static RTYPE compiled_block_2_1022( CONT_PARAMS );
static RTYPE compiled_block_2_1025( CONT_PARAMS );
static RTYPE compiled_block_2_1027( CONT_PARAMS );
static RTYPE compiled_block_2_1030( CONT_PARAMS );
static RTYPE compiled_block_2_1032( CONT_PARAMS );
static RTYPE compiled_block_2_1028( CONT_PARAMS );
static RTYPE compiled_start_2_203( CONT_PARAMS );
static RTYPE compiled_block_2_1130( CONT_PARAMS );
static RTYPE compiled_block_2_1132( CONT_PARAMS );
static RTYPE compiled_block_2_1134( CONT_PARAMS );
static RTYPE compiled_start_2_209( CONT_PARAMS );
static RTYPE compiled_block_2_1092( CONT_PARAMS );
static RTYPE compiled_block_2_1124( CONT_PARAMS );
static RTYPE compiled_block_2_1126( CONT_PARAMS );
static RTYPE compiled_block_2_1125( CONT_PARAMS );
static RTYPE compiled_start_2_208( CONT_PARAMS );
static RTYPE compiled_block_2_1122( CONT_PARAMS );
static RTYPE compiled_block_2_1121( CONT_PARAMS );
static RTYPE compiled_block_2_1112( CONT_PARAMS );
static RTYPE compiled_block_2_1115( CONT_PARAMS );
static RTYPE compiled_block_2_1119( CONT_PARAMS );
static RTYPE compiled_block_2_1118( CONT_PARAMS );
static RTYPE compiled_block_2_1117( CONT_PARAMS );
static RTYPE compiled_block_2_1116( CONT_PARAMS );
static RTYPE compiled_block_2_1113( CONT_PARAMS );
static RTYPE compiled_block_2_1114( CONT_PARAMS );
static RTYPE compiled_block_2_1109( CONT_PARAMS );
static RTYPE compiled_block_2_1110( CONT_PARAMS );
static RTYPE compiled_block_2_1093( CONT_PARAMS );
static RTYPE compiled_block_2_1096( CONT_PARAMS );
static RTYPE compiled_block_2_1099( CONT_PARAMS );
static RTYPE compiled_block_2_1103( CONT_PARAMS );
static RTYPE compiled_block_2_1106( CONT_PARAMS );
static RTYPE compiled_block_2_1104( CONT_PARAMS );
static RTYPE compiled_block_2_1105( CONT_PARAMS );
static RTYPE compiled_temp_2_211( CONT_PARAMS );
static RTYPE compiled_block_2_1102( CONT_PARAMS );
static RTYPE compiled_block_2_1101( CONT_PARAMS );
static RTYPE compiled_block_2_1100( CONT_PARAMS );
static RTYPE compiled_block_2_1097( CONT_PARAMS );
static RTYPE compiled_start_2_210( CONT_PARAMS );
static RTYPE compiled_start_2_212( CONT_PARAMS );
static RTYPE compiled_block_2_1040( CONT_PARAMS );
static RTYPE compiled_block_2_1075( CONT_PARAMS );
static RTYPE compiled_block_2_1077( CONT_PARAMS );
static RTYPE compiled_block_2_1076( CONT_PARAMS );
static RTYPE compiled_start_2_207( CONT_PARAMS );
static RTYPE compiled_block_2_1073( CONT_PARAMS );
static RTYPE compiled_block_2_1072( CONT_PARAMS );
static RTYPE compiled_block_2_1063( CONT_PARAMS );
static RTYPE compiled_block_2_1066( CONT_PARAMS );
static RTYPE compiled_block_2_1070( CONT_PARAMS );
static RTYPE compiled_block_2_1069( CONT_PARAMS );
static RTYPE compiled_block_2_1068( CONT_PARAMS );
static RTYPE compiled_block_2_1067( CONT_PARAMS );
static RTYPE compiled_block_2_1064( CONT_PARAMS );
static RTYPE compiled_block_2_1065( CONT_PARAMS );
static RTYPE compiled_block_2_1060( CONT_PARAMS );
static RTYPE compiled_block_2_1061( CONT_PARAMS );
static RTYPE compiled_block_2_1041( CONT_PARAMS );
static RTYPE compiled_block_2_1044( CONT_PARAMS );
static RTYPE compiled_block_2_1047( CONT_PARAMS );
static RTYPE compiled_block_2_1054( CONT_PARAMS );
static RTYPE compiled_block_2_1057( CONT_PARAMS );
static RTYPE compiled_block_2_1055( CONT_PARAMS );
static RTYPE compiled_block_2_1056( CONT_PARAMS );
static RTYPE compiled_temp_2_214( CONT_PARAMS );
static RTYPE compiled_block_2_1053( CONT_PARAMS );
static RTYPE compiled_block_2_1052( CONT_PARAMS );
static RTYPE compiled_block_2_1051( CONT_PARAMS );
static RTYPE compiled_block_2_1050( CONT_PARAMS );
static RTYPE compiled_block_2_1049( CONT_PARAMS );
static RTYPE compiled_block_2_1048( CONT_PARAMS );
static RTYPE compiled_block_2_1045( CONT_PARAMS );
static RTYPE compiled_start_2_213( CONT_PARAMS );
static RTYPE compiled_start_2_215( CONT_PARAMS );
static RTYPE compiled_block_2_1034( CONT_PARAMS );
static RTYPE compiled_block_2_1036( CONT_PARAMS );
static RTYPE compiled_block_2_1038( CONT_PARAMS );
static RTYPE compiled_start_2_206( CONT_PARAMS );
static RTYPE compiled_block_2_1003( CONT_PARAMS );
static RTYPE compiled_block_2_1005( CONT_PARAMS );
static RTYPE compiled_block_2_1007( CONT_PARAMS );
static RTYPE compiled_block_2_1009( CONT_PARAMS );
static RTYPE compiled_block_2_1012( CONT_PARAMS );
static RTYPE compiled_block_2_1015( CONT_PARAMS );
static RTYPE compiled_block_2_1014( CONT_PARAMS );
static RTYPE compiled_block_2_1013( CONT_PARAMS );
static RTYPE compiled_block_2_1010( CONT_PARAMS );
static RTYPE compiled_start_2_202( CONT_PARAMS );
static RTYPE compiled_start_2_1( CONT_PARAMS );

static RTYPE compiled_start_2_0( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_save( 0 );
  twobit_store( 0, 0 );
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 2 ); /*  reverse-list->vector~1pxGHH~65058 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 3 ); /*  list->vector~1pxGHH~65057 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 4 ); /*  reverse-vector->list~1pxGHH~65056 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 5 ); /*  vector->list~1pxGHH~65055 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 6 ); /*  vector-reverse!~1pxGHH~65054 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 7 ); /*  vector-reverse-copy!~1pxGHH~65053 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 8 ); /*  vector-copy!~1pxGHH~65052 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 9 ); /*  vector-fill!~1pxGHH~65051 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 10 ); /*  vector-swap!~1pxGHH~65050 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 11 ); /*  vector-every~1pxGHH~65049 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 12 ); /*  vector-any~1pxGHH~65048 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 13 ); /*  vector-binary-search~1pxGHH~65047 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 14 ); /*  vector-index/skip-right~1pxGHH~65046 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 15 ); /*  vector-skip-right~1pxGHH~65045 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 16 ); /*  vector-index-right~1pxGHH~65044 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 17 ); /*  vector-index/skip~1pxGHH~65043 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 18 ); /*  vector-skip~1pxGHH~65042 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 19 ); /*  vector-index~1pxGHH~65041 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 20 ); /*  vector-count~1pxGHH~65040 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 21 ); /*  vector-for-each~1pxGHH~65039 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 22 ); /*  vector-map!~1pxGHH~65038 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 23 ); /*  vector-map~1pxGHH~65037 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 24 ); /*  vector-fold-right~1pxGHH~65036 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 25 ); /*  vector-fold~1pxGHH~65035 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 26 ); /*  binary-vector=~1pxGHH~65034 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 27 ); /*  vector=~1pxGHH~65033 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 28 ); /*  vector-empty?~1pxGHH~65032 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 29 ); /*  vector-concatenate:aux~1pxGHH~65031 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 30 ); /*  vector-concatenate~1pxGHH~65030 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 31 ); /*  vector-append~1pxGHH~65029 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 32 ); /*  vector-reverse-copy~1pxGHH~65028 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 33 ); /*  vector-copy:parse-args~1pxGHH~65027 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 34 ); /*  vector-copy~1pxGHH~65026 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 35 ); /*  vector-unfold-right~1pxGHH~65025 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 36 ); /*  vector-unfold~1pxGHH~65024 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 37 ); /*  %vector-map2+!~1pxGHH~65023 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 38 ); /*  %vector-map1!~1pxGHH~65022 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 39 ); /*  %vector-fold2+~1pxGHH~65021 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 40 ); /*  %vector-fold1~1pxGHH~65020 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 41 ); /*  %vector-reverse!~1pxGHH~65019 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 42 ); /*  %vector-reverse-copy!~1pxGHH~65018 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 43 ); /*  %vector-copy!~1pxGHH~65017 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 44 ); /*  %smallest-length~1pxGHH~65016 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 45 ); /*  vector-parse-start+end~1pxGHH~64982 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 46 ); /*  check-indices~1pxGHH~64981 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 47 ); /*  check-index~1pxGHH~64980 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 48 ); /*  check-type~1pxGHH~64979 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 49 ); /*  vectors-ref~1pxGHH~64978 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 50 ); /*  unspecified-value~1pxGHH~64977 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 51 ); /*  between?~1pxGHH~64976 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 52 ); /*  nonneg-int?~1pxGHH~64975 */
  twobit_lambda( compiled_start_2_1, 54, 0 );
  twobit_setreg( 2 );
  twobit_lambda( compiled_start_2_2, 56, 0 );
  twobit_setreg( 4 );
  twobit_lambda( compiled_start_2_3, 58, 0 );
  twobit_setreg( 3 );
  twobit_movereg( 3, 7 );
  twobit_movereg( 4, 6 );
  twobit_const( 59 );
  twobit_setreg( 1 );
  twobit_const( 60 );
  twobit_setreg( 3 );
  twobit_const( 61 );
  twobit_setreg( 4 );
  twobit_const( 62 );
  twobit_setreg( 5 );
  twobit_const( 63 );
  twobit_setreg( 8 );
  twobit_global( 64 ); /* ex:make-library */
  twobit_setrtn( 2004, compiled_block_2_2004 );
  twobit_invoke( 8 );
  twobit_label( 2004, compiled_block_2_2004 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_global( 65 ); /* ex:register-library! */
  twobit_setrtn( 2005, compiled_block_2_2005 );
  twobit_invoke( 1 );
  twobit_label( 2005, compiled_block_2_2005 );
  twobit_load( 0, 0 );
  twobit_global( 66 ); /* values */
  twobit_pop( 0 );
  twobit_invoke( 0 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_1( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_const( 1 );
  twobit_setreg( 1 );
  twobit_global( 2 ); /* ex:uncompress */
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_2( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_save( 0 );
  twobit_store( 0, 0 );
  twobit_lambda( compiled_start_2_202, 2, 0 );
  twobit_setreg( 2 );
  twobit_const( 3 );
  twobit_setreg( 1 );
  twobit_global( 4 ); /* ex:register-macro! */
  twobit_setrtn( 1021, compiled_block_2_1021 );
  twobit_invoke( 2 );
  twobit_label( 1021, compiled_block_2_1021 );
  twobit_load( 0, 0 );
  twobit_lambda( compiled_start_2_203, 6, 0 );
  twobit_setreg( 2 );
  twobit_const( 7 );
  twobit_setreg( 1 );
  twobit_global( 4 ); /* ex:register-macro! */
  twobit_setrtn( 1139, compiled_block_2_1139 );
  twobit_invoke( 2 );
  twobit_label( 1139, compiled_block_2_1139 );
  twobit_load( 0, 0 );
  twobit_lambda( compiled_start_2_204, 9, 0 );
  twobit_setreg( 2 );
  twobit_const( 10 );
  twobit_setreg( 1 );
  twobit_global( 4 ); /* ex:register-macro! */
  twobit_setrtn( 1213, compiled_block_2_1213 );
  twobit_invoke( 2 );
  twobit_label( 1213, compiled_block_2_1213 );
  twobit_load( 0, 0 );
  twobit_lambda( compiled_start_2_205, 12, 0 );
  twobit_setreg( 2 );
  twobit_const( 13 );
  twobit_setreg( 1 );
  twobit_global( 4 ); /* ex:register-macro! */
  twobit_setrtn( 1252, compiled_block_2_1252 );
  twobit_invoke( 2 );
  twobit_label( 1252, compiled_block_2_1252 );
  twobit_load( 0, 0 );
  twobit_global( 14 ); /* values */
  twobit_pop( 0 );
  twobit_invoke( 0 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_202( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_reg( 1 );
  twobit_op1_branchf_611( 1003, compiled_block_2_1003 ); /* internal:branchf-pair? */
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1005, compiled_block_2_1005 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1007, compiled_block_2_1007 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1009, compiled_block_2_1009 ); /* internal:branchf-pair? */
  twobit_save( 7 );
  twobit_store( 0, 0 );
  twobit_store( 1, 7 );
  twobit_store( 2, 1 );
  twobit_store( 3, 4 );
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 31 );
  twobit_store( 31, 3 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_movereg( 4, 1 );
  twobit_global( 1 ); /* list? */
  twobit_setrtn( 1010, compiled_block_2_1010 );
  twobit_invoke( 1 );
  twobit_label( 1010, compiled_block_2_1010 );
  twobit_load( 0, 0 );
  twobit_branchf( 1012, compiled_block_2_1012 );
  twobit_const( 2 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 3 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1013, compiled_block_2_1013 );
  twobit_invoke( 5 );
  twobit_label( 1013, compiled_block_2_1013 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 6 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_stack( 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 1 );
  twobit_const( 6 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 3 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1014, compiled_block_2_1014 );
  twobit_invoke( 5 );
  twobit_label( 1014, compiled_block_2_1014 );
  twobit_load( 0, 0 );
  twobit_load( 3, 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 5 );
  twobit_load( 3, 2 );
  twobit_stack( 3 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_stack( 4 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 4 );
  twobit_const( 6 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 3 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1015, compiled_block_2_1015 );
  twobit_invoke( 5 );
  twobit_label( 1015, compiled_block_2_1015 );
  twobit_load( 0, 0 );
  twobit_load( 3, 4 );
  twobit_op2_58( 3 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 5 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 6 );
  twobit_op2_58( 4 ); /* cons */
  twobit_pop( 7 );
  twobit_return();
  twobit_label( 1012, compiled_block_2_1012 );
  twobit_load( 1, 7 );
  twobit_global( 7 ); /* ex:invalid-form */
  twobit_pop( 7 );
  twobit_invoke( 1 );
  twobit_label( 1009, compiled_block_2_1009 );
  twobit_global( 7 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1007, compiled_block_2_1007 );
  twobit_global( 7 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1005, compiled_block_2_1005 );
  twobit_global( 7 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1003, compiled_block_2_1003 );
  twobit_global( 7 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_203( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_reg( 1 );
  twobit_op1_branchf_611( 1025, compiled_block_2_1025 ); /* internal:branchf-pair? */
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1027, compiled_block_2_1027 ); /* internal:branchf-pair? */
  twobit_save( 4 );
  twobit_store( 0, 0 );
  twobit_store( 1, 3 );
  twobit_store( 4, 1 );
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_store( 3, 2 );
  twobit_movereg( 3, 1 );
  twobit_global( 1 ); /* list? */
  twobit_setrtn( 1028, compiled_block_2_1028 );
  twobit_invoke( 1 );
  twobit_label( 1028, compiled_block_2_1028 );
  twobit_load( 0, 0 );
  twobit_branchf( 1030, compiled_block_2_1030 );
  twobit_stack( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1032, compiled_block_2_1032 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_store( 2, 4 );
  twobit_lambda( compiled_start_2_206, 3, 0 );
  twobit_setreg( 3 );
  twobit_store( 3, 1 );
  twobit_movereg( 4, 3 );
  twobit_load( 2, 2 );
  twobit_load( 1, 3 );
  twobit_lambda( compiled_start_2_207, 5, 3 );
  twobit_setreg( 3 );
  twobit_load( 1, 1 );
  twobit_load( 2, 4 );
  twobit_global( 6 ); /* ex:map-while */
  twobit_pop( 4 );
  twobit_invoke( 3 );
  twobit_label( 1032, compiled_block_2_1032 );
  twobit_load( 1, 3 );
  twobit_pop( 4 );
  twobit_branch( 1022, compiled_block_2_1022 );
  twobit_label( 1030, compiled_block_2_1030 );
  twobit_load( 1, 3 );
  twobit_pop( 4 );
  twobit_branch( 1022, compiled_block_2_1022 );
  twobit_label( 1027, compiled_block_2_1027 );
  twobit_branch( 1022, compiled_block_2_1022 );
  twobit_label( 1025, compiled_block_2_1025 );
  twobit_label( 1022, compiled_block_2_1022 );
  twobit_reg( 1 );
  twobit_op1_branchf_611( 1086, compiled_block_2_1086 ); /* internal:branchf-pair? */
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1088, compiled_block_2_1088 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1090, compiled_block_2_1090 ); /* internal:branchf-pair? */
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_store( 2, 1 );
  twobit_movereg( 4, 2 );
  twobit_lambda( compiled_start_2_208, 8, 3 );
  twobit_setreg( 3 );
  twobit_lambda( compiled_start_2_209, 10, 0 );
  twobit_setreg( 1 );
  twobit_load( 2, 1 );
  twobit_global( 6 ); /* ex:map-while */
  twobit_pop( 1 );
  twobit_invoke( 3 );
  twobit_label( 1090, compiled_block_2_1090 );
  twobit_global( 11 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1088, compiled_block_2_1088 );
  twobit_global( 11 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1086, compiled_block_2_1086 );
  twobit_global( 11 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_206( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_reg( 1 );
  twobit_op1_branchf_611( 1034, compiled_block_2_1034 ); /* internal:branchf-pair? */
  twobit_reg( 1 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 4 );
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 3 );
  twobit_reg( 3 );
  twobit_op1_branchf_611( 1036, compiled_block_2_1036 ); /* internal:branchf-pair? */
  twobit_reg( 3 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_reg( 3 );
  twobit_op1_405(); /* cdr:pair */
  twobit_op1_branchf_610( 1038, compiled_block_2_1038 ); /* internal:branchf-null? */
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_reg( 2 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op2_58( 3 ); /* cons */
  twobit_return();
  twobit_label( 1038, compiled_block_2_1038 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_return();
  twobit_label( 1036, compiled_block_2_1036 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_return();
  twobit_label( 1034, compiled_block_2_1034 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_2_207( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_reg( 2 );
  twobit_op1_branchf_610( 1040, compiled_block_2_1040 ); /* internal:branchf-null? */
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_lambda( compiled_start_2_213, 2, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_reg( 1 );
  twobit_op1_branchf_610( 1076, compiled_block_2_1076 ); /* internal:branchf-null? */
  twobit_const( 3 );
  twobit_skip( 1075, compiled_block_2_1075 );
  twobit_label( 1076, compiled_block_2_1076 );
  twobit_movereg( 1, 3 );
  twobit_global( 4 ); /* map */
  twobit_setreg( 1 );
  twobit_global( 5 ); /* list */
  twobit_setreg( 2 );
  twobit_global( 6 ); /* apply */
  twobit_setrtn( 1077, compiled_block_2_1077 );
  twobit_invoke( 3 );
  twobit_label( 1077, compiled_block_2_1077 );
  twobit_load( 0, 0 );
  twobit_label( 1075, compiled_block_2_1075 );
  twobit_setreg( 2 );
  twobit_load( 1, 1 );
  twobit_global( 6 ); /* apply */
  twobit_pop( 1 );
  twobit_invoke( 2 );
  twobit_label( 1040, compiled_block_2_1040 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_jump( 1, 1022, compiled_block_2_1022 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_213( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_lexical( 1, 3 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1044, compiled_block_2_1044 ); /* internal:branchf-pair? */
  twobit_save( 8 );
  twobit_store( 0, 0 );
  twobit_store( 1, 4 );
  twobit_store( 2, 5 );
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_store( 3, 3 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_movereg( 4, 1 );
  twobit_global( 1 ); /* list? */
  twobit_setrtn( 1045, compiled_block_2_1045 );
  twobit_invoke( 1 );
  twobit_label( 1045, compiled_block_2_1045 );
  twobit_load( 0, 0 );
  twobit_branchf( 1047, compiled_block_2_1047 );
  twobit_const( 2 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 3 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1048, compiled_block_2_1048 );
  twobit_invoke( 5 );
  twobit_label( 1048, compiled_block_2_1048 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 8 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_lexical( 1, 2 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 1 );
  twobit_const( 6 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 3 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1049, compiled_block_2_1049 );
  twobit_invoke( 5 );
  twobit_label( 1049, compiled_block_2_1049 );
  twobit_load( 0, 0 );
  twobit_load( 3, 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 7 );
  twobit_const( 7 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 3 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1050, compiled_block_2_1050 );
  twobit_invoke( 5 );
  twobit_label( 1050, compiled_block_2_1050 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 6 );
  twobit_const( 6 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 3 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1051, compiled_block_2_1051 );
  twobit_invoke( 5 );
  twobit_label( 1051, compiled_block_2_1051 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_load( 3, 2 );
  twobit_stack( 3 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 3 );
  twobit_load( 1, 4 );
  twobit_global( 8 ); /* length */
  twobit_setrtn( 1052, compiled_block_2_1052 );
  twobit_invoke( 1 );
  twobit_label( 1052, compiled_block_2_1052 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_load( 1, 5 );
  twobit_global( 8 ); /* length */
  twobit_setrtn( 1053, compiled_block_2_1053 );
  twobit_invoke( 1 );
  twobit_label( 1053, compiled_block_2_1053 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_stack( 2 );
  twobit_op2_branchf_623( 4, 214, compiled_temp_2_214, 1055, compiled_block_2_1055 ); /* internal:branchf-= */
  twobit_load( 1, 4 );
  twobit_load( 2, 5 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_setrtn( 1056, compiled_block_2_1056 );
  twobit_branch( 1041, compiled_block_2_1041 );
  twobit_label( 1056, compiled_block_2_1056 );
  twobit_load( 0, 0 );
  twobit_skip( 1054, compiled_block_2_1054 );
  twobit_label( 1055, compiled_block_2_1055 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 4 );
  twobit_stack( 5 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 4 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 9 );
  twobit_setreg( 1 );
  twobit_const( 10 );
  twobit_setreg( 2 );
  twobit_const( 11 );
  twobit_setreg( 3 );
  twobit_global( 12 ); /* ex:syntax-violation */
  twobit_setrtn( 1057, compiled_block_2_1057 );
  twobit_invoke( 4 );
  twobit_label( 1057, compiled_block_2_1057 );
  twobit_load( 0, 0 );
  twobit_label( 1054, compiled_block_2_1054 );
  twobit_load( 3, 3 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 1 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 6 );
  twobit_op2_58( 4 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 7 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 8 );
  twobit_op2_58( 4 ); /* cons */
  twobit_pop( 8 );
  twobit_return();
  twobit_label( 1047, compiled_block_2_1047 );
  twobit_lexical( 1, 1 );
  twobit_setreg( 1 );
  twobit_pop( 8 );
  twobit_jump( 2, 1022, compiled_block_2_1022 );
  twobit_label( 1044, compiled_block_2_1044 );
  twobit_lexical( 1, 1 );
  twobit_setreg( 1 );
  twobit_jump( 2, 1022, compiled_block_2_1022 );
  twobit_label( 1041, compiled_block_2_1041 );
  twobit_reg( 1 );
  twobit_op1_10(); /* null? */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 1061, compiled_block_2_1061 );
  twobit_imm_const( TRUE_CONST ); /* #t */
  twobit_skip( 1060, compiled_block_2_1060 );
  twobit_label( 1061, compiled_block_2_1061 );
  twobit_reg( 2 );
  twobit_op1_10(); /* null? */
  twobit_label( 1060, compiled_block_2_1060 );
  twobit_branchf( 1063, compiled_block_2_1063 );
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_store( 3, 1 );
  twobit_reg( 4 );
  twobit_branchf( 1065, compiled_block_2_1065 );
  twobit_reg( 2 );
  twobit_op1_10(); /* null? */
  twobit_skip( 1064, compiled_block_2_1064 );
  twobit_label( 1065, compiled_block_2_1065 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1064, compiled_block_2_1064 );
  twobit_branchf( 1067, compiled_block_2_1067 );
  twobit_reg( 3 );
  twobit_skip( 1066, compiled_block_2_1066 );
  twobit_label( 1067, compiled_block_2_1067 );
  twobit_movereg( 2, 3 );
  twobit_movereg( 1, 2 );
  twobit_lambda( compiled_start_2_215, 14, 0 );
  twobit_setreg( 1 );
  twobit_global( 15 ); /* larceny:map */
  twobit_setrtn( 1068, compiled_block_2_1068 );
  twobit_invoke( 3 );
  twobit_label( 1068, compiled_block_2_1068 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_global( 16 ); /* reverse */
  twobit_setrtn( 1069, compiled_block_2_1069 );
  twobit_invoke( 1 );
  twobit_label( 1069, compiled_block_2_1069 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_load( 2, 1 );
  twobit_global( 17 ); /* append */
  twobit_setrtn( 1070, compiled_block_2_1070 );
  twobit_invoke( 2 );
  twobit_label( 1070, compiled_block_2_1070 );
  twobit_load( 0, 0 );
  twobit_label( 1066, compiled_block_2_1066 );
  twobit_setreg( 1 );
  twobit_global( 16 ); /* reverse */
  twobit_pop( 1 );
  twobit_invoke( 1 );
  twobit_label( 1063, compiled_block_2_1063 );
  twobit_reg_op1_check_652(reg(2),1072,compiled_block_2_1072); /* internal:check-pair? with (2 0 0) */
  twobit_reg( 2 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 4 );
  twobit_reg_op1_check_652(reg(1),1073,compiled_block_2_1073); /* internal:check-pair? with (1 0 0) */
  twobit_reg( 1 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 31 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 30 );
  twobit_reg( 4 );
  twobit_op2_58( 30 ); /* cons */
  twobit_setreg( 4 );
  twobit_reg( 31 );
  twobit_op2_58( 4 ); /* cons */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 1 );
  twobit_reg( 2 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 2 );
  twobit_branch( 1041, compiled_block_2_1041 );
  twobit_label( 1072, compiled_block_2_1072 );
  twobit_trap( 2, 0, 0, 0 );
  twobit_label( 1073, compiled_block_2_1073 );
  twobit_trap( 1, 0, 0, 0 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_215( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 4 );
  twobit_reg( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_reg( 1 );
  twobit_op2_58( 4 ); /* cons */
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_2_208( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_reg( 2 );
  twobit_op1_branchf_610( 1092, compiled_block_2_1092 ); /* internal:branchf-null? */
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_lambda( compiled_start_2_210, 2, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_reg( 1 );
  twobit_op1_branchf_610( 1125, compiled_block_2_1125 ); /* internal:branchf-null? */
  twobit_const( 3 );
  twobit_skip( 1124, compiled_block_2_1124 );
  twobit_label( 1125, compiled_block_2_1125 );
  twobit_movereg( 1, 3 );
  twobit_global( 4 ); /* map */
  twobit_setreg( 1 );
  twobit_global( 5 ); /* list */
  twobit_setreg( 2 );
  twobit_global( 6 ); /* apply */
  twobit_setrtn( 1126, compiled_block_2_1126 );
  twobit_invoke( 3 );
  twobit_label( 1126, compiled_block_2_1126 );
  twobit_load( 0, 0 );
  twobit_label( 1124, compiled_block_2_1124 );
  twobit_setreg( 2 );
  twobit_load( 1, 1 );
  twobit_global( 6 ); /* apply */
  twobit_pop( 1 );
  twobit_invoke( 2 );
  twobit_label( 1092, compiled_block_2_1092 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_global( 7 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_210( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_lexical( 1, 2 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1096, compiled_block_2_1096 ); /* internal:branchf-pair? */
  twobit_save( 5 );
  twobit_store( 0, 0 );
  twobit_store( 1, 3 );
  twobit_store( 2, 4 );
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_store( 3, 2 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_movereg( 4, 1 );
  twobit_global( 1 ); /* list? */
  twobit_setrtn( 1097, compiled_block_2_1097 );
  twobit_invoke( 1 );
  twobit_label( 1097, compiled_block_2_1097 );
  twobit_load( 0, 0 );
  twobit_branchf( 1099, compiled_block_2_1099 );
  twobit_const( 2 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 3 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1100, compiled_block_2_1100 );
  twobit_invoke( 5 );
  twobit_label( 1100, compiled_block_2_1100 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 5 );
  twobit_load( 3, 1 );
  twobit_stack( 2 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 2 );
  twobit_load( 1, 3 );
  twobit_global( 6 ); /* length */
  twobit_setrtn( 1101, compiled_block_2_1101 );
  twobit_invoke( 1 );
  twobit_label( 1101, compiled_block_2_1101 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_load( 1, 4 );
  twobit_global( 6 ); /* length */
  twobit_setrtn( 1102, compiled_block_2_1102 );
  twobit_invoke( 1 );
  twobit_label( 1102, compiled_block_2_1102 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_stack( 1 );
  twobit_op2_branchf_623( 4, 211, compiled_temp_2_211, 1104, compiled_block_2_1104 ); /* internal:branchf-= */
  twobit_load( 1, 3 );
  twobit_load( 2, 4 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_setrtn( 1105, compiled_block_2_1105 );
  twobit_branch( 1093, compiled_block_2_1093 );
  twobit_label( 1105, compiled_block_2_1105 );
  twobit_load( 0, 0 );
  twobit_skip( 1103, compiled_block_2_1103 );
  twobit_label( 1104, compiled_block_2_1104 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 4 );
  twobit_stack( 4 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 7 );
  twobit_setreg( 1 );
  twobit_const( 8 );
  twobit_setreg( 2 );
  twobit_const( 9 );
  twobit_setreg( 3 );
  twobit_global( 10 ); /* ex:syntax-violation */
  twobit_setrtn( 1106, compiled_block_2_1106 );
  twobit_invoke( 4 );
  twobit_label( 1106, compiled_block_2_1106 );
  twobit_load( 0, 0 );
  twobit_label( 1103, compiled_block_2_1103 );
  twobit_load( 3, 2 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_lexical( 1, 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_lexical( 1, 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 5 );
  twobit_op2_58( 4 ); /* cons */
  twobit_pop( 5 );
  twobit_return();
  twobit_label( 1099, compiled_block_2_1099 );
  twobit_lexical( 1, 1 );
  twobit_setreg( 1 );
  twobit_global( 11 ); /* ex:invalid-form */
  twobit_pop( 5 );
  twobit_invoke( 1 );
  twobit_label( 1096, compiled_block_2_1096 );
  twobit_lexical( 1, 1 );
  twobit_setreg( 1 );
  twobit_global( 11 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1093, compiled_block_2_1093 );
  twobit_reg( 1 );
  twobit_op1_10(); /* null? */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 1110, compiled_block_2_1110 );
  twobit_imm_const( TRUE_CONST ); /* #t */
  twobit_skip( 1109, compiled_block_2_1109 );
  twobit_label( 1110, compiled_block_2_1110 );
  twobit_reg( 2 );
  twobit_op1_10(); /* null? */
  twobit_label( 1109, compiled_block_2_1109 );
  twobit_branchf( 1112, compiled_block_2_1112 );
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_store( 3, 1 );
  twobit_reg( 4 );
  twobit_branchf( 1114, compiled_block_2_1114 );
  twobit_reg( 2 );
  twobit_op1_10(); /* null? */
  twobit_skip( 1113, compiled_block_2_1113 );
  twobit_label( 1114, compiled_block_2_1114 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1113, compiled_block_2_1113 );
  twobit_branchf( 1116, compiled_block_2_1116 );
  twobit_reg( 3 );
  twobit_skip( 1115, compiled_block_2_1115 );
  twobit_label( 1116, compiled_block_2_1116 );
  twobit_movereg( 2, 3 );
  twobit_movereg( 1, 2 );
  twobit_lambda( compiled_start_2_212, 13, 0 );
  twobit_setreg( 1 );
  twobit_global( 14 ); /* larceny:map */
  twobit_setrtn( 1117, compiled_block_2_1117 );
  twobit_invoke( 3 );
  twobit_label( 1117, compiled_block_2_1117 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_global( 15 ); /* reverse */
  twobit_setrtn( 1118, compiled_block_2_1118 );
  twobit_invoke( 1 );
  twobit_label( 1118, compiled_block_2_1118 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_load( 2, 1 );
  twobit_global( 16 ); /* append */
  twobit_setrtn( 1119, compiled_block_2_1119 );
  twobit_invoke( 2 );
  twobit_label( 1119, compiled_block_2_1119 );
  twobit_load( 0, 0 );
  twobit_label( 1115, compiled_block_2_1115 );
  twobit_setreg( 1 );
  twobit_global( 15 ); /* reverse */
  twobit_pop( 1 );
  twobit_invoke( 1 );
  twobit_label( 1112, compiled_block_2_1112 );
  twobit_reg_op1_check_652(reg(2),1121,compiled_block_2_1121); /* internal:check-pair? with (2 0 0) */
  twobit_reg( 2 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 4 );
  twobit_reg_op1_check_652(reg(1),1122,compiled_block_2_1122); /* internal:check-pair? with (1 0 0) */
  twobit_reg( 1 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 31 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 30 );
  twobit_reg( 4 );
  twobit_op2_58( 30 ); /* cons */
  twobit_setreg( 4 );
  twobit_reg( 31 );
  twobit_op2_58( 4 ); /* cons */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 1 );
  twobit_reg( 2 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 2 );
  twobit_branch( 1093, compiled_block_2_1093 );
  twobit_label( 1121, compiled_block_2_1121 );
  twobit_trap( 2, 0, 0, 0 );
  twobit_label( 1122, compiled_block_2_1122 );
  twobit_trap( 1, 0, 0, 0 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_212( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 4 );
  twobit_reg( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_reg( 1 );
  twobit_op2_58( 4 ); /* cons */
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_2_209( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_reg( 1 );
  twobit_op1_branchf_611( 1130, compiled_block_2_1130 ); /* internal:branchf-pair? */
  twobit_reg( 1 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 4 );
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 3 );
  twobit_reg( 3 );
  twobit_op1_branchf_611( 1132, compiled_block_2_1132 ); /* internal:branchf-pair? */
  twobit_reg( 3 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_reg( 3 );
  twobit_op1_405(); /* cdr:pair */
  twobit_op1_branchf_610( 1134, compiled_block_2_1134 ); /* internal:branchf-null? */
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_reg( 2 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op2_58( 3 ); /* cons */
  twobit_return();
  twobit_label( 1134, compiled_block_2_1134 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_return();
  twobit_label( 1132, compiled_block_2_1132 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_return();
  twobit_label( 1130, compiled_block_2_1130 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_2_204( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_reg( 1 );
  twobit_op1_branchf_611( 1143, compiled_block_2_1143 ); /* internal:branchf-pair? */
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1145, compiled_block_2_1145 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1147, compiled_block_2_1147 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1149, compiled_block_2_1149 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_op1_branchf_610( 1151, compiled_block_2_1151 ); /* internal:branchf-null? */
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1153, compiled_block_2_1153 ); /* internal:branchf-pair? */
  twobit_save( 7 );
  twobit_store( 0, 0 );
  twobit_store( 1, 7 );
  twobit_store( 2, 1 );
  twobit_store( 3, 4 );
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 31 );
  twobit_store( 31, 3 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_movereg( 4, 1 );
  twobit_global( 1 ); /* list? */
  twobit_setrtn( 1154, compiled_block_2_1154 );
  twobit_invoke( 1 );
  twobit_label( 1154, compiled_block_2_1154 );
  twobit_load( 0, 0 );
  twobit_branchf( 1156, compiled_block_2_1156 );
  twobit_const( 2 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 3 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1157, compiled_block_2_1157 );
  twobit_invoke( 5 );
  twobit_label( 1157, compiled_block_2_1157 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 6 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_stack( 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 1 );
  twobit_const( 6 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 3 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1158, compiled_block_2_1158 );
  twobit_invoke( 5 );
  twobit_label( 1158, compiled_block_2_1158 );
  twobit_load( 0, 0 );
  twobit_load( 3, 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 5 );
  twobit_load( 3, 2 );
  twobit_stack( 3 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 1 );
  twobit_const( 7 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 3 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1159, compiled_block_2_1159 );
  twobit_invoke( 5 );
  twobit_label( 1159, compiled_block_2_1159 );
  twobit_load( 0, 0 );
  twobit_load( 3, 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_const( 8 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 3 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1160, compiled_block_2_1160 );
  twobit_invoke( 5 );
  twobit_label( 1160, compiled_block_2_1160 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_stack( 4 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_stack( 4 );
  twobit_op2_58( 2 ); /* cons */
  twobit_setreg( 2 );
  twobit_store( 2, 4 );
  twobit_const( 9 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 3 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1161, compiled_block_2_1161 );
  twobit_invoke( 5 );
  twobit_label( 1161, compiled_block_2_1161 );
  twobit_load( 0, 0 );
  twobit_load( 3, 4 );
  twobit_op2_58( 3 ); /* cons */
  twobit_load( 3, 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 10 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 5 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 6 );
  twobit_op2_58( 4 ); /* cons */
  twobit_pop( 7 );
  twobit_return();
  twobit_label( 1156, compiled_block_2_1156 );
  twobit_load( 1, 7 );
  twobit_pop( 7 );
  twobit_branch( 1140, compiled_block_2_1140 );
  twobit_label( 1153, compiled_block_2_1153 );
  twobit_branch( 1140, compiled_block_2_1140 );
  twobit_label( 1151, compiled_block_2_1151 );
  twobit_branch( 1140, compiled_block_2_1140 );
  twobit_label( 1149, compiled_block_2_1149 );
  twobit_branch( 1140, compiled_block_2_1140 );
  twobit_label( 1147, compiled_block_2_1147 );
  twobit_branch( 1140, compiled_block_2_1140 );
  twobit_label( 1145, compiled_block_2_1145 );
  twobit_branch( 1140, compiled_block_2_1140 );
  twobit_label( 1143, compiled_block_2_1143 );
  twobit_label( 1140, compiled_block_2_1140 );
  twobit_reg( 1 );
  twobit_op1_branchf_611( 1170, compiled_block_2_1170 ); /* internal:branchf-pair? */
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1172, compiled_block_2_1172 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1174, compiled_block_2_1174 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1176, compiled_block_2_1176 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 31 );
  twobit_reg( 31 );
  twobit_op1_branchf_611( 1178, compiled_block_2_1178 ); /* internal:branchf-pair? */
  twobit_reg( 31 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 30 );
  twobit_reg( 30 );
  twobit_op1_branchf_611( 1180, compiled_block_2_1180 ); /* internal:branchf-pair? */
  twobit_reg( 30 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 29 );
  twobit_reg( 30 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 30 );
  twobit_reg( 30 );
  twobit_op1_branchf_611( 1182, compiled_block_2_1182 ); /* internal:branchf-pair? */
  twobit_reg( 30 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 28 );
  twobit_reg( 30 );
  twobit_op1_405(); /* cdr:pair */
  twobit_op1_branchf_610( 1184, compiled_block_2_1184 ); /* internal:branchf-null? */
  twobit_save( 12 );
  twobit_store( 0, 0 );
  twobit_store( 1, 12 );
  twobit_store( 2, 2 );
  twobit_store( 3, 8 );
  twobit_store( 4, 1 );
  twobit_store( 28, 5 );
  twobit_store( 29, 6 );
  twobit_reg( 31 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 31 );
  twobit_store( 31, 7 );
  twobit_movereg( 31, 1 );
  twobit_global( 1 ); /* list? */
  twobit_setrtn( 1185, compiled_block_2_1185 );
  twobit_invoke( 1 );
  twobit_label( 1185, compiled_block_2_1185 );
  twobit_load( 0, 0 );
  twobit_branchf( 1187, compiled_block_2_1187 );
  twobit_stack( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1189, compiled_block_2_1189 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_store( 3, 4 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_movereg( 4, 1 );
  twobit_global( 1 ); /* list? */
  twobit_setrtn( 1190, compiled_block_2_1190 );
  twobit_invoke( 1 );
  twobit_label( 1190, compiled_block_2_1190 );
  twobit_load( 0, 0 );
  twobit_branchf( 1192, compiled_block_2_1192 );
  twobit_const( 2 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 11 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1193, compiled_block_2_1193 );
  twobit_invoke( 5 );
  twobit_label( 1193, compiled_block_2_1193 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 11 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_stack( 2 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 1 );
  twobit_const( 6 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 11 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1194, compiled_block_2_1194 );
  twobit_invoke( 5 );
  twobit_label( 1194, compiled_block_2_1194 );
  twobit_load( 0, 0 );
  twobit_load( 3, 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 10 );
  twobit_load( 3, 3 );
  twobit_stack( 4 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 2 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 1 );
  twobit_stack( 5 );
  twobit_op2_58( 1 ); /* cons */
  twobit_setreg( 1 );
  twobit_stack( 6 );
  twobit_op2_58( 1 ); /* cons */
  twobit_load( 3, 7 );
  twobit_op2_58( 3 ); /* cons */
  twobit_op2_58( 2 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 5 );
  twobit_const( 12 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 11 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1195, compiled_block_2_1195 );
  twobit_invoke( 5 );
  twobit_label( 1195, compiled_block_2_1195 );
  twobit_load( 0, 0 );
  twobit_load( 3, 5 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 9 );
  twobit_const( 7 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 11 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1196, compiled_block_2_1196 );
  twobit_invoke( 5 );
  twobit_label( 1196, compiled_block_2_1196 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_stack( 2 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 5 );
  twobit_const( 13 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 11 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1197, compiled_block_2_1197 );
  twobit_invoke( 5 );
  twobit_label( 1197, compiled_block_2_1197 );
  twobit_load( 0, 0 );
  twobit_load( 3, 5 );
  twobit_op2_58( 3 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 6 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 6 );
  twobit_const( 14 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 11 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1198, compiled_block_2_1198 );
  twobit_invoke( 5 );
  twobit_label( 1198, compiled_block_2_1198 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 5 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_stack( 2 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 2 );
  twobit_const( 15 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 11 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1199, compiled_block_2_1199 );
  twobit_invoke( 5 );
  twobit_label( 1199, compiled_block_2_1199 );
  twobit_load( 0, 0 );
  twobit_load( 3, 2 );
  twobit_op2_58( 3 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 5 );
  twobit_op2_58( 4 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 6 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_const( 16 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 11 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1200, compiled_block_2_1200 );
  twobit_invoke( 5 );
  twobit_label( 1200, compiled_block_2_1200 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 6 );
  twobit_load( 3, 3 );
  twobit_stack( 4 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_stack( 7 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 7 );
  twobit_const( 14 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 11 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1201, compiled_block_2_1201 );
  twobit_invoke( 5 );
  twobit_label( 1201, compiled_block_2_1201 );
  twobit_load( 0, 0 );
  twobit_load( 3, 7 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 8 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 6 );
  twobit_op2_58( 4 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 1 );
  twobit_op2_58( 4 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 9 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 10 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 11 );
  twobit_op2_58( 4 ); /* cons */
  twobit_pop( 12 );
  twobit_return();
  twobit_label( 1192, compiled_block_2_1192 );
  twobit_load( 1, 12 );
  twobit_global( 17 ); /* ex:invalid-form */
  twobit_pop( 12 );
  twobit_invoke( 1 );
  twobit_label( 1189, compiled_block_2_1189 );
  twobit_load( 1, 12 );
  twobit_global( 17 ); /* ex:invalid-form */
  twobit_pop( 12 );
  twobit_invoke( 1 );
  twobit_label( 1187, compiled_block_2_1187 );
  twobit_load( 1, 12 );
  twobit_global( 17 ); /* ex:invalid-form */
  twobit_pop( 12 );
  twobit_invoke( 1 );
  twobit_label( 1184, compiled_block_2_1184 );
  twobit_global( 17 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1182, compiled_block_2_1182 );
  twobit_global( 17 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1180, compiled_block_2_1180 );
  twobit_global( 17 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1178, compiled_block_2_1178 );
  twobit_global( 17 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1176, compiled_block_2_1176 );
  twobit_global( 17 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1174, compiled_block_2_1174 );
  twobit_global( 17 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1172, compiled_block_2_1172 );
  twobit_global( 17 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1170, compiled_block_2_1170 );
  twobit_global( 17 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_205( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_reg( 1 );
  twobit_op1_branchf_611( 1215, compiled_block_2_1215 ); /* internal:branchf-pair? */
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1217, compiled_block_2_1217 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1219, compiled_block_2_1219 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1221, compiled_block_2_1221 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 31 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1223, compiled_block_2_1223 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 30 );
  twobit_reg( 30 );
  twobit_op1_branchf_611( 1225, compiled_block_2_1225 ); /* internal:branchf-pair? */
  twobit_reg( 30 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 29 );
  twobit_reg( 30 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 30 );
  twobit_reg( 30 );
  twobit_op1_branchf_611( 1227, compiled_block_2_1227 ); /* internal:branchf-pair? */
  twobit_reg( 30 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 28 );
  twobit_reg( 30 );
  twobit_op1_405(); /* cdr:pair */
  twobit_op1_branchf_610( 1229, compiled_block_2_1229 ); /* internal:branchf-null? */
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1231, compiled_block_2_1231 ); /* internal:branchf-pair? */
  twobit_save( 13 );
  twobit_store( 0, 0 );
  twobit_store( 1, 13 );
  twobit_store( 2, 2 );
  twobit_store( 3, 1 );
  twobit_store( 28, 5 );
  twobit_store( 29, 6 );
  twobit_store( 31, 9 );
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 30 );
  twobit_store( 30, 8 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_store( 4, 7 );
  twobit_movereg( 4, 1 );
  twobit_global( 1 ); /* list? */
  twobit_setrtn( 1232, compiled_block_2_1232 );
  twobit_invoke( 1 );
  twobit_label( 1232, compiled_block_2_1232 );
  twobit_load( 0, 0 );
  twobit_branchf( 1234, compiled_block_2_1234 );
  twobit_const( 2 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 3 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1235, compiled_block_2_1235 );
  twobit_invoke( 5 );
  twobit_label( 1235, compiled_block_2_1235 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 12 );
  twobit_const( 6 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 3 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1236, compiled_block_2_1236 );
  twobit_invoke( 5 );
  twobit_label( 1236, compiled_block_2_1236 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 4 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_stack( 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_stack( 2 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 3 );
  twobit_const( 7 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 3 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1237, compiled_block_2_1237 );
  twobit_invoke( 5 );
  twobit_label( 1237, compiled_block_2_1237 );
  twobit_load( 0, 0 );
  twobit_load( 3, 3 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 4 );
  twobit_op2_58( 4 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 11 );
  twobit_const( 8 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 3 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1238, compiled_block_2_1238 );
  twobit_invoke( 5 );
  twobit_label( 1238, compiled_block_2_1238 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 10 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_stack( 5 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_stack( 6 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 4 );
  twobit_load( 2, 7 );
  twobit_stack( 8 );
  twobit_op2_58( 2 ); /* cons */
  twobit_setreg( 2 );
  twobit_store( 2, 3 );
  twobit_const( 9 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 3 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1239, compiled_block_2_1239 );
  twobit_invoke( 5 );
  twobit_label( 1239, compiled_block_2_1239 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 8 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_stack( 6 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 6 );
  twobit_const( 10 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 3 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1240, compiled_block_2_1240 );
  twobit_invoke( 5 );
  twobit_label( 1240, compiled_block_2_1240 );
  twobit_load( 0, 0 );
  twobit_load( 3, 6 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 7 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_stack( 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 6 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_stack( 5 );
  twobit_op2_58( 2 ); /* cons */
  twobit_setreg( 2 );
  twobit_store( 2, 5 );
  twobit_const( 10 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 3 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1241, compiled_block_2_1241 );
  twobit_invoke( 5 );
  twobit_label( 1241, compiled_block_2_1241 );
  twobit_load( 0, 0 );
  twobit_load( 3, 5 );
  twobit_op2_58( 3 ); /* cons */
  twobit_load( 3, 6 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 7 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 9 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 8 );
  twobit_op2_58( 4 ); /* cons */
  twobit_load( 3, 3 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 4 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 10 );
  twobit_op2_58( 4 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 11 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 12 );
  twobit_op2_58( 4 ); /* cons */
  twobit_pop( 13 );
  twobit_return();
  twobit_label( 1234, compiled_block_2_1234 );
  twobit_load( 1, 13 );
  twobit_global( 11 ); /* ex:invalid-form */
  twobit_pop( 13 );
  twobit_invoke( 1 );
  twobit_label( 1231, compiled_block_2_1231 );
  twobit_global( 11 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1229, compiled_block_2_1229 );
  twobit_global( 11 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1227, compiled_block_2_1227 );
  twobit_global( 11 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1225, compiled_block_2_1225 );
  twobit_global( 11 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1223, compiled_block_2_1223 );
  twobit_global( 11 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1221, compiled_block_2_1221 );
  twobit_global( 11 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1219, compiled_block_2_1219 );
  twobit_global( 11 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1217, compiled_block_2_1217 );
  twobit_global( 11 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1215, compiled_block_2_1215 );
  twobit_global( 11 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_3( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_save( 45 );
  twobit_store( 0, 0 );
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 2 ); /*  reverse-list->vector~1pxGHH~65058 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 3 ); /*  list->vector~1pxGHH~65057 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 4 ); /*  reverse-vector->list~1pxGHH~65056 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 5 ); /*  vector->list~1pxGHH~65055 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 6 ); /*  vector-reverse!~1pxGHH~65054 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 7 ); /*  vector-reverse-copy!~1pxGHH~65053 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 8 ); /*  vector-copy!~1pxGHH~65052 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 9 ); /*  vector-fill!~1pxGHH~65051 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 10 ); /*  vector-swap!~1pxGHH~65050 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 11 ); /*  vector-every~1pxGHH~65049 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 12 ); /*  vector-any~1pxGHH~65048 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 13 ); /*  vector-binary-search~1pxGHH~65047 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 14 ); /*  vector-index/skip-right~1pxGHH~65046 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 15 ); /*  vector-skip-right~1pxGHH~65045 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 16 ); /*  vector-index-right~1pxGHH~65044 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 17 ); /*  vector-index/skip~1pxGHH~65043 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 18 ); /*  vector-skip~1pxGHH~65042 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 19 ); /*  vector-index~1pxGHH~65041 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 20 ); /*  vector-count~1pxGHH~65040 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 21 ); /*  vector-for-each~1pxGHH~65039 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 22 ); /*  vector-map!~1pxGHH~65038 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 23 ); /*  vector-map~1pxGHH~65037 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 24 ); /*  vector-fold-right~1pxGHH~65036 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 25 ); /*  vector-fold~1pxGHH~65035 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 26 ); /*  binary-vector=~1pxGHH~65034 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 27 ); /*  vector=~1pxGHH~65033 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 28 ); /*  vector-empty?~1pxGHH~65032 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 29 ); /*  vector-concatenate:aux~1pxGHH~65031 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 30 ); /*  vector-concatenate~1pxGHH~65030 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 31 ); /*  vector-append~1pxGHH~65029 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 32 ); /*  vector-reverse-copy~1pxGHH~65028 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 33 ); /*  vector-copy:parse-args~1pxGHH~65027 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 34 ); /*  vector-copy~1pxGHH~65026 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 35 ); /*  vector-unfold-right~1pxGHH~65025 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 36 ); /*  vector-unfold~1pxGHH~65024 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 37 ); /*  %vector-map2+!~1pxGHH~65023 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 38 ); /*  %vector-map1!~1pxGHH~65022 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 39 ); /*  %vector-fold2+~1pxGHH~65021 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 40 ); /*  %vector-fold1~1pxGHH~65020 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 41 ); /*  %vector-reverse!~1pxGHH~65019 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 42 ); /*  %vector-reverse-copy!~1pxGHH~65018 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 43 ); /*  %vector-copy!~1pxGHH~65017 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 44 ); /*  %smallest-length~1pxGHH~65016 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 45 ); /*  vector-parse-start+end~1pxGHH~64982 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 46 ); /*  check-indices~1pxGHH~64981 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 47 ); /*  check-index~1pxGHH~64980 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 48 ); /*  check-type~1pxGHH~64979 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 49 ); /*  vectors-ref~1pxGHH~64978 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 50 ); /*  unspecified-value~1pxGHH~64977 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 51 ); /*  between?~1pxGHH~64976 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 52 ); /*  nonneg-int?~1pxGHH~64975 */
  twobit_lambda( compiled_start_2_4, 54, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 45 );
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
  twobit_setreg( 12 );
  twobit_op1_4(); /* undefined */
  twobit_setreg( 11 );
  twobit_op1_4(); /* undefined */
  twobit_setreg( 10 );
  twobit_op1_4(); /* undefined */
  twobit_setreg( 9 );
  twobit_op1_4(); /* undefined */
  twobit_setreg( 8 );
  twobit_op1_4(); /* undefined */
  twobit_setreg( 7 );
  twobit_op1_4(); /* undefined */
  twobit_setreg( 6 );
  twobit_op1_4(); /* undefined */
  twobit_setreg( 5 );
  twobit_op1_4(); /* undefined */
  twobit_setreg( 4 );
  twobit_store( 4, 12 );
  twobit_op1_4(); /* undefined */
  twobit_setreg( 4 );
  twobit_store( 4, 11 );
  twobit_op1_4(); /* undefined */
  twobit_setreg( 4 );
  twobit_store( 4, 10 );
  twobit_op1_4(); /* undefined */
  twobit_setreg( 4 );
  twobit_store( 4, 9 );
  twobit_op1_4(); /* undefined */
  twobit_setreg( 4 );
  twobit_store( 4, 8 );
  twobit_op1_4(); /* undefined */
  twobit_setreg( 4 );
  twobit_store( 4, 7 );
  twobit_op1_4(); /* undefined */
  twobit_setreg( 4 );
  twobit_store( 4, 6 );
  twobit_op1_4(); /* undefined */
  twobit_setreg( 4 );
  twobit_store( 4, 5 );
  twobit_op1_4(); /* undefined */
  twobit_setreg( 4 );
  twobit_store( 4, 4 );
  twobit_op1_4(); /* undefined */
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_op1_4(); /* undefined */
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_op1_4(); /* undefined */
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_op1_4(); /* undefined */
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 4 );
  twobit_store( 4, 44 );
  twobit_stack( 1 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 4 );
  twobit_store( 4, 43 );
  twobit_stack( 2 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 4 );
  twobit_store( 4, 42 );
  twobit_stack( 3 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 4 );
  twobit_store( 4, 41 );
  twobit_stack( 4 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 4 );
  twobit_store( 4, 40 );
  twobit_stack( 5 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 4 );
  twobit_store( 4, 39 );
  twobit_stack( 6 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 4 );
  twobit_store( 4, 38 );
  twobit_stack( 7 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 4 );
  twobit_store( 4, 37 );
  twobit_stack( 8 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 4 );
  twobit_store( 4, 36 );
  twobit_stack( 9 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 4 );
  twobit_store( 4, 35 );
  twobit_stack( 10 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 4 );
  twobit_store( 4, 34 );
  twobit_stack( 11 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 4 );
  twobit_store( 4, 33 );
  twobit_stack( 12 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 4 );
  twobit_store( 4, 31 );
  twobit_reg( 5 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 4 );
  twobit_store( 4, 32 );
  twobit_reg( 6 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 4 );
  twobit_store( 4, 30 );
  twobit_reg( 7 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 4 );
  twobit_store( 4, 28 );
  twobit_reg( 8 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 4 );
  twobit_store( 4, 29 );
  twobit_reg( 9 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 4 );
  twobit_store( 4, 27 );
  twobit_reg( 10 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 4 );
  twobit_store( 4, 26 );
  twobit_reg( 11 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 4 );
  twobit_store( 4, 25 );
  twobit_reg( 12 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 4 );
  twobit_store( 4, 24 );
  twobit_reg( 13 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 4 );
  twobit_store( 4, 23 );
  twobit_reg( 14 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 4 );
  twobit_store( 4, 22 );
  twobit_reg( 15 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 4 );
  twobit_store( 4, 20 );
  twobit_reg( 16 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 4 );
  twobit_store( 4, 18 );
  twobit_reg( 17 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 4 );
  twobit_store( 4, 19 );
  twobit_reg( 18 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 4 );
  twobit_store( 4, 17 );
  twobit_reg( 19 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 4 );
  twobit_store( 4, 15 );
  twobit_reg( 20 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 4 );
  twobit_store( 4, 16 );
  twobit_reg( 21 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 4 );
  twobit_store( 4, 14 );
  twobit_reg( 22 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 4 );
  twobit_store( 4, 13 );
  twobit_reg( 23 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_reg( 24 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_reg( 25 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_reg( 26 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 4 );
  twobit_store( 4, 4 );
  twobit_reg( 27 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 4 );
  twobit_store( 4, 6 );
  twobit_reg( 28 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 4 );
  twobit_store( 4, 7 );
  twobit_reg( 29 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 4 );
  twobit_store( 4, 8 );
  twobit_reg( 30 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 4 );
  twobit_store( 4, 9 );
  twobit_reg( 31 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 4 );
  twobit_store( 4, 10 );
  twobit_reg( 1 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 1 );
  twobit_store( 1, 11 );
  twobit_reg( 2 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 2 );
  twobit_store( 2, 12 );
  twobit_reg( 3 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 3 );
  twobit_store( 3, 21 );
  twobit_lambda( compiled_start_2_5, 56, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 5 );
  twobit_global( 1 ); /* ex:undefined */
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 4 );
  twobit_movereg( 4, 1 );
  twobit_lambda( compiled_start_2_6, 58, 1 );
  twobit_setreg( 4 );
  twobit_reg( 1 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_reg( 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_reg( 3 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_lambda( compiled_start_2_7, 60, 0 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_setrtn( 1295, compiled_block_2_1295 );
  twobit_invoke( 0 );
  twobit_label( 1295, compiled_block_2_1295 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_stack( 12 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_lambda( compiled_start_2_8, 62, 0 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_setrtn( 1303, compiled_block_2_1303 );
  twobit_invoke( 0 );
  twobit_label( 1303, compiled_block_2_1303 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_stack( 11 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_lambda( compiled_start_2_9, 64, 0 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_setrtn( 1311, compiled_block_2_1311 );
  twobit_invoke( 0 );
  twobit_label( 1311, compiled_block_2_1311 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_stack( 10 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_lambda( compiled_start_2_10, 66, 0 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_setrtn( 1319, compiled_block_2_1319 );
  twobit_invoke( 0 );
  twobit_label( 1319, compiled_block_2_1319 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_stack( 9 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_lambda( compiled_start_2_11, 68, 0 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_setrtn( 1327, compiled_block_2_1327 );
  twobit_invoke( 0 );
  twobit_label( 1327, compiled_block_2_1327 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_stack( 8 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_lambda( compiled_start_2_12, 70, 0 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_setrtn( 1336, compiled_block_2_1336 );
  twobit_invoke( 0 );
  twobit_label( 1336, compiled_block_2_1336 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_stack( 7 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_lambda( compiled_start_2_13, 72, 0 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_setrtn( 1345, compiled_block_2_1345 );
  twobit_invoke( 0 );
  twobit_label( 1345, compiled_block_2_1345 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_stack( 6 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_load( 2, 5 );
  twobit_load( 1, 4 );
  twobit_lambda( compiled_start_2_14, 74, 2 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_setrtn( 1376, compiled_block_2_1376 );
  twobit_invoke( 0 );
  twobit_label( 1376, compiled_block_2_1376 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_stack( 4 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_load( 2, 5 );
  twobit_load( 1, 3 );
  twobit_lambda( compiled_start_2_15, 76, 2 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_setrtn( 1407, compiled_block_2_1407 );
  twobit_invoke( 0 );
  twobit_label( 1407, compiled_block_2_1407 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_stack( 3 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_load( 3, 2 );
  twobit_load( 2, 1 );
  twobit_load( 1, 12 );
  twobit_lambda( compiled_start_2_16, 78, 3 );
  twobit_setreg( 4 );
  twobit_reg( 3 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_load( 2, 5 );
  twobit_movereg( 3, 1 );
  twobit_lambda( compiled_start_2_17, 80, 2 );
  twobit_setreg( 4 );
  twobit_stack( 1 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_load( 2, 13 );
  twobit_load( 1, 11 );
  twobit_lambda( compiled_start_2_18, 82, 2 );
  twobit_setreg( 4 );
  twobit_reg( 2 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_load( 2, 14 );
  twobit_load( 1, 15 );
  twobit_lambda( compiled_start_2_19, 84, 2 );
  twobit_setreg( 4 );
  twobit_reg( 2 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_load( 2, 16 );
  twobit_lambda( compiled_start_2_20, 86, 2 );
  twobit_setreg( 4 );
  twobit_reg( 2 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_load( 1, 12 );
  twobit_lambda( compiled_start_2_21, 88, 1 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_setrtn( 1471, compiled_block_2_1471 );
  twobit_invoke( 0 );
  twobit_label( 1471, compiled_block_2_1471 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_stack( 15 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_load( 1, 17 );
  twobit_lambda( compiled_start_2_22, 90, 1 );
  twobit_setreg( 4 );
  twobit_reg( 1 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_load( 2, 18 );
  twobit_load( 1, 19 );
  twobit_lambda( compiled_start_2_23, 92, 2 );
  twobit_setreg( 4 );
  twobit_reg( 1 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_lambda( compiled_start_2_24, 94, 0 );
  twobit_setreg( 4 );
  twobit_reg( 2 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_load( 4, 9 );
  twobit_load( 3, 20 );
  twobit_load( 2, 21 );
  twobit_load( 1, 8 );
  twobit_lambda( compiled_start_2_25, 96, 4 );
  twobit_setreg( 4 );
  twobit_reg( 3 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_load( 1, 22 );
  twobit_lambda( compiled_start_2_26, 98, 2 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_setrtn( 1545, compiled_block_2_1545 );
  twobit_invoke( 0 );
  twobit_label( 1545, compiled_block_2_1545 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_stack( 22 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_load( 4, 7 );
  twobit_load( 3, 23 );
  twobit_load( 2, 21 );
  twobit_load( 1, 6 );
  twobit_lambda( compiled_start_2_27, 100, 4 );
  twobit_setreg( 4 );
  twobit_reg( 3 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_load( 4, 24 );
  twobit_load( 3, 7 );
  twobit_lambda( compiled_start_2_28, 102, 4 );
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op2_84( 3 ); /* cell-set! */
  twobit_load( 1, 25 );
  twobit_lambda( compiled_start_2_29, 104, 2 );
  twobit_setreg( 3 );
  twobit_reg( 3 );
  twobit_setrtn( 1585, compiled_block_2_1585 );
  twobit_invoke( 0 );
  twobit_label( 1585, compiled_block_2_1585 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_stack( 25 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_load( 4, 9 );
  twobit_load( 3, 26 );
  twobit_load( 2, 21 );
  twobit_load( 1, 8 );
  twobit_lambda( compiled_start_2_30, 106, 4 );
  twobit_setreg( 4 );
  twobit_reg( 3 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_load( 2, 27 );
  twobit_load( 1, 28 );
  twobit_lambda( compiled_start_2_31, 108, 2 );
  twobit_setreg( 4 );
  twobit_reg( 2 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_load( 2, 29 );
  twobit_lambda( compiled_start_2_32, 110, 2 );
  twobit_setreg( 4 );
  twobit_reg( 2 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_load( 1, 21 );
  twobit_lambda( compiled_start_2_33, 112, 1 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_setrtn( 1629, compiled_block_2_1629 );
  twobit_invoke( 0 );
  twobit_label( 1629, compiled_block_2_1629 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_stack( 28 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_load( 2, 30 );
  twobit_load( 1, 31 );
  twobit_lambda( compiled_start_2_34, 114, 2 );
  twobit_setreg( 4 );
  twobit_reg( 2 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_lambda( compiled_start_2_35, 116, 2 );
  twobit_setreg( 4 );
  twobit_stack( 32 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_load( 1, 21 );
  twobit_lambda( compiled_start_2_36, 118, 1 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_setrtn( 1658, compiled_block_2_1658 );
  twobit_invoke( 0 );
  twobit_label( 1658, compiled_block_2_1658 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_stack( 31 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_load( 1, 33 );
  twobit_lambda( compiled_start_2_37, 120, 1 );
  twobit_setreg( 4 );
  twobit_reg( 1 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_load( 2, 34 );
  twobit_load( 1, 21 );
  twobit_lambda( compiled_start_2_38, 122, 2 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_setrtn( 1713, compiled_block_2_1713 );
  twobit_invoke( 0 );
  twobit_label( 1713, compiled_block_2_1713 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_stack( 34 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_load( 2, 35 );
  twobit_load( 1, 21 );
  twobit_lambda( compiled_start_2_39, 124, 2 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_setrtn( 1746, compiled_block_2_1746 );
  twobit_invoke( 0 );
  twobit_label( 1746, compiled_block_2_1746 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_stack( 35 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_load( 1, 36 );
  twobit_lambda( compiled_start_2_40, 126, 1 );
  twobit_setreg( 4 );
  twobit_reg( 1 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_load( 1, 37 );
  twobit_lambda( compiled_start_2_41, 128, 1 );
  twobit_setreg( 4 );
  twobit_reg( 1 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_load( 3, 5 );
  twobit_load( 2, 12 );
  twobit_load( 1, 38 );
  twobit_lambda( compiled_start_2_42, 130, 3 );
  twobit_setreg( 4 );
  twobit_reg( 1 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_load( 2, 11 );
  twobit_load( 1, 39 );
  twobit_lambda( compiled_start_2_43, 132, 3 );
  twobit_setreg( 4 );
  twobit_reg( 1 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_load( 2, 40 );
  twobit_load( 1, 10 );
  twobit_lambda( compiled_start_2_44, 134, 2 );
  twobit_setreg( 4 );
  twobit_reg( 2 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_load( 1, 41 );
  twobit_lambda( compiled_start_2_45, 136, 1 );
  twobit_setreg( 4 );
  twobit_reg( 1 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_load( 1, 42 );
  twobit_lambda( compiled_start_2_46, 138, 1 );
  twobit_setreg( 4 );
  twobit_reg( 1 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_load( 2, 4 );
  twobit_load( 1, 43 );
  twobit_lambda( compiled_start_2_47, 140, 3 );
  twobit_setreg( 4 );
  twobit_reg( 1 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_load( 2, 3 );
  twobit_load( 1, 44 );
  twobit_lambda( compiled_start_2_48, 142, 3 );
  twobit_setreg( 4 );
  twobit_reg( 1 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_global( 143 ); /* values */
  twobit_setrtn( 1943, compiled_block_2_1943 );
  twobit_invoke( 0 );
  twobit_label( 1943, compiled_block_2_1943 );
  twobit_load( 0, 0 );
  twobit_load( 1, 45 );
  twobit_store( 1, 5 );
  twobit_stack( 4 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_store( 4, 4 );
  twobit_stack( 3 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_stack( 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 2 );
  twobit_stack( 13 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_store( 4, 13 );
  twobit_stack( 14 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_store( 4, 14 );
  twobit_load( 1, 16 );
  twobit_lambda( compiled_start_2_49, 145, 1 );
  twobit_setreg( 1 );
  twobit_store( 1, 16 );
  twobit_load( 1, 17 );
  twobit_lambda( compiled_start_2_50, 147, 1 );
  twobit_setreg( 1 );
  twobit_store( 1, 17 );
  twobit_stack( 19 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_store( 4, 19 );
  twobit_stack( 20 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_store( 4, 20 );
  twobit_stack( 22 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_store( 4, 22 );
  twobit_stack( 23 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_store( 4, 23 );
  twobit_stack( 24 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_store( 4, 24 );
  twobit_stack( 25 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_store( 4, 25 );
  twobit_stack( 26 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_store( 4, 26 );
  twobit_stack( 27 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_store( 4, 27 );
  twobit_stack( 29 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_store( 4, 29 );
  twobit_stack( 30 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_store( 4, 30 );
  twobit_stack( 32 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_store( 4, 32 );
  twobit_stack( 33 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_store( 4, 33 );
  twobit_stack( 34 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_store( 4, 34 );
  twobit_stack( 35 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_store( 4, 35 );
  twobit_load( 1, 36 );
  twobit_lambda( compiled_start_2_51, 149, 1 );
  twobit_setreg( 1 );
  twobit_stack( 37 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_store( 4, 37 );
  twobit_stack( 38 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_store( 4, 38 );
  twobit_stack( 39 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_store( 4, 39 );
  twobit_stack( 40 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_store( 4, 40 );
  twobit_stack( 41 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_store( 4, 41 );
  twobit_stack( 42 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_store( 4, 42 );
  twobit_stack( 43 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_store( 4, 43 );
  twobit_stack( 44 );
  twobit_op1_54(); /* cell-ref */
  twobit_imm_const_setreg( NIL_CONST, 4 ); /* () */
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 43 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 42 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 41 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 40 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 39 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 38 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 37 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_reg( 1 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 35 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 34 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 33 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 32 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 30 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 29 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 27 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 26 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 25 );
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
  twobit_stack( 20 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 19 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 17 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 16 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 14 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 13 );
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
  twobit_load( 1, 5 );
  twobit_global( 150 ); /* apply */
  twobit_pop( 45 );
  twobit_invoke( 2 );
  twobit_label( 1254, compiled_block_2_1254 );
  twobit_reg_op2_check_662(reg(1),reg(4),1948,compiled_block_2_1948); /* internal:check-vector?/vector-length:vec with (1 0 0) */
  twobit_reg( 2 );
  twobit_op1_branchf_610( 1950, compiled_block_2_1950 ); /* internal:branchf-null? */
  twobit_movereg( 4, 2 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 1 );
  twobit_global( 151 ); /* values */
  twobit_invoke( 2 );
  twobit_label( 1950, compiled_block_2_1950 );
  twobit_reg_op1_check_652(reg(2),1952,compiled_block_2_1952); /* internal:check-pair? with (2 0 0) */
  twobit_reg( 2 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 31 );
  twobit_reg( 31 );
  twobit_op1_branchf_610( 1954, compiled_block_2_1954 ); /* internal:branchf-null? */
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_store( 4, 1 );
  twobit_movereg( 3, 4 );
  twobit_reg( 2 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_load( 3, 1 );
  twobit_pop( 1 );
  twobit_branch( 1255, compiled_block_2_1255 );
  twobit_label( 1954, compiled_block_2_1954 );
  twobit_reg_op1_check_652(reg(31),1956,compiled_block_2_1956); /* internal:check-pair? with (31 0 0) */
  twobit_reg( 31 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_610( 1958, compiled_block_2_1958 ); /* internal:branchf-null? */
  twobit_movereg( 3, 4 );
  twobit_reg( 31 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_reg( 2 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_branch( 1255, compiled_block_2_1255 );
  twobit_label( 1958, compiled_block_2_1958 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 30 );
  twobit_reg( 4 );
  twobit_op2_58( 30 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 152 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 153 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 154 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 2 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 4 );
  twobit_reg( 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 155 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 156 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 3 );
  twobit_const( 157 );
  twobit_setreg( 1 );
  twobit_global( 158 ); /*  error~1pxGHH~53790 */
  twobit_invoke( 3 );
  twobit_label( 1255, compiled_block_2_1255 );
  twobit_save( 5 );
  twobit_store( 0, 0 );
  twobit_store( 1, 5 );
  twobit_store( 2, 4 );
  twobit_store( 3, 1 );
  twobit_store( 4, 3 );
  twobit_lexes( 4 );
  twobit_setreg( 0 );
  twobit_store( 0, 2 );
  twobit_movereg( 4, 3 );
  twobit_load( 2, 1 );
  twobit_global( 159 ); /* integer? */
  twobit_setreg( 1 );
  twobit_setrtn( 1963, compiled_block_2_1963 );
  twobit_jump( 1, 1257, compiled_block_2_1257 );
  twobit_label( 1963, compiled_block_2_1963 );
  twobit_load( 0, 2 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_load( 3, 3 );
  twobit_global( 160 ); /* integer? */
  twobit_setreg( 1 );
  twobit_load( 2, 4 );
  twobit_setrtn( 1964, compiled_block_2_1964 );
  twobit_jump( 1, 1257, compiled_block_2_1257 );
  twobit_label( 1964, compiled_block_2_1964 );
  twobit_load( 0, 2 );
  twobit_setreg( 4 );
  twobit_store( 4, 4 );
  twobit_load( 3, 1 );
  twobit_reg( 4 );
  twobit_op2_branchf_620( 3, 52, compiled_temp_2_52, 1966, compiled_block_2_1966 ); /* internal:branchf-> */
  twobit_load( 2, 3 );
  twobit_load( 1, 5 );
  twobit_lambda( compiled_start_2_53, 162, 2 );
  twobit_setreg( 2 );
  twobit_lambda( compiled_start_2_54, 164, 0 );
  twobit_setreg( 1 );
  twobit_global( 165 ); /* call-with-values */
  twobit_pop( 5 );
  twobit_invoke( 2 );
  twobit_label( 1966, compiled_block_2_1966 );
  twobit_reg( 4 );
  twobit_op2imm_branchf_635( fixnum(0), 55, compiled_temp_2_55, 1971, compiled_block_2_1971 ); /* internal:branchf-</imm */
  twobit_const( 166 );
  twobit_setreg( 2 );
  twobit_const( 167 );
  twobit_op2_58( 2 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 2 ); /* () */
  twobit_op2_58( 2 ); /* cons */
  twobit_setreg( 1 );
  twobit_setrtn( 1972, compiled_block_2_1972 );
  twobit_branch( 1962, compiled_block_2_1962 );
  twobit_label( 1972, compiled_block_2_1972 );
  twobit_load( 0, 2 );
  twobit_setreg( 2 );
  twobit_load( 1, 5 );
  twobit_load( 3, 1 );
  twobit_load( 4, 3 );
  twobit_pop( 5 );
  twobit_jump( 1, 1255, compiled_block_2_1255 );
  twobit_label( 1971, compiled_block_2_1971 );
  twobit_stack( 5 );
  twobit_op1_401(); /* vector-length:vec */
  twobit_setreg( 2 );
  twobit_reg( 4 );
  twobit_op2_branchf_621( 2, 56, compiled_temp_2_56, 1975, compiled_block_2_1975 ); /* internal:branchf->= */
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 1 );
  twobit_reg( 2 );
  twobit_op2_58( 1 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 168 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 169 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 2 );
  twobit_const( 170 );
  twobit_setreg( 4 );
  twobit_const( 171 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 1 );
  twobit_global( 172 ); /* .list */
  twobit_setrtn( 1976, compiled_block_2_1976 );
  twobit_invoke( 2 );
  twobit_label( 1976, compiled_block_2_1976 );
  twobit_load( 0, 2 );
  twobit_setreg( 1 );
  twobit_setrtn( 1977, compiled_block_2_1977 );
  twobit_branch( 1962, compiled_block_2_1962 );
  twobit_label( 1977, compiled_block_2_1977 );
  twobit_load( 0, 2 );
  twobit_setreg( 2 );
  twobit_load( 1, 5 );
  twobit_load( 3, 1 );
  twobit_load( 4, 3 );
  twobit_pop( 5 );
  twobit_jump( 1, 1255, compiled_block_2_1255 );
  twobit_label( 1975, compiled_block_2_1975 );
  twobit_reg( 3 );
  twobit_op2_branchf_620( 2, 57, compiled_temp_2_57, 1980, compiled_block_2_1980 ); /* internal:branchf-> */
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 1 );
  twobit_reg( 2 );
  twobit_op2_58( 1 ); /* cons */
  twobit_setreg( 3 );
  twobit_const( 173 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_const( 174 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 2 );
  twobit_const( 175 );
  twobit_setreg( 3 );
  twobit_const( 176 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 1 );
  twobit_global( 177 ); /* .list */
  twobit_setrtn( 1981, compiled_block_2_1981 );
  twobit_invoke( 2 );
  twobit_label( 1981, compiled_block_2_1981 );
  twobit_load( 0, 2 );
  twobit_setreg( 1 );
  twobit_setrtn( 1982, compiled_block_2_1982 );
  twobit_branch( 1962, compiled_block_2_1962 );
  twobit_label( 1982, compiled_block_2_1982 );
  twobit_load( 0, 2 );
  twobit_setreg( 3 );
  twobit_load( 1, 5 );
  twobit_load( 2, 4 );
  twobit_load( 4, 3 );
  twobit_pop( 5 );
  twobit_jump( 1, 1255, compiled_block_2_1255 );
  twobit_label( 1980, compiled_block_2_1980 );
  twobit_movereg( 4, 1 );
  twobit_movereg( 3, 2 );
  twobit_global( 178 ); /* values */
  twobit_pop( 5 );
  twobit_invoke( 2 );
  twobit_label( 1962, compiled_block_2_1962 );
  twobit_save( 0 );
  twobit_store( 0, 0 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 4 );
  twobit_lexical( 0, 1 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 179 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 180 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 2 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 4 );
  twobit_lexical( 0, 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 181 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 182 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 3 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 4 );
  twobit_lexical( 0, 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 183 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 184 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 31 );
  twobit_lexical( 0, 4 );
  twobit_op2_58( 31 ); /* cons */
  twobit_setreg( 31 );
  twobit_const( 185 );
  twobit_op2_58( 31 ); /* cons */
  twobit_setreg( 31 );
  twobit_const( 186 );
  twobit_op2_58( 31 ); /* cons */
  twobit_setreg( 31 );
  twobit_movereg( 31, 5 );
  twobit_global( 187 ); /* append */
  twobit_setrtn( 1985, compiled_block_2_1985 );
  twobit_invoke( 5 );
  twobit_label( 1985, compiled_block_2_1985 );
  twobit_load( 0, 0 );
  twobit_setreg( 3 );
  twobit_global( 188 ); /*  error~1pxGHH~53790 */
  twobit_setreg( 1 );
  twobit_const( 189 );
  twobit_setreg( 2 );
  twobit_global( 190 ); /* apply */
  twobit_pop( 0 );
  twobit_invoke( 3 );
  twobit_label( 1256, compiled_block_2_1256 );
  twobit_save( 3 );
  twobit_store( 0, 0 );
  twobit_store( 1, 2 );
  twobit_store( 3, 1 );
  twobit_global( 191 ); /* integer? */
  twobit_setreg( 1 );
  twobit_setrtn( 1987, compiled_block_2_1987 );
  twobit_branch( 1257, compiled_block_2_1257 );
  twobit_label( 1987, compiled_block_2_1987 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_reg( 4 );
  twobit_op2imm_branchf_635( fixnum(0), 58, compiled_temp_2_58, 1989, compiled_block_2_1989 ); /* internal:branchf-</imm */
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_stack( 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_const( 192 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_const( 193 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_stack( 2 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_const( 194 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_const( 195 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_const( 196 );
  twobit_setreg( 1 );
  twobit_load( 2, 3 );
  twobit_global( 197 ); /*  error~1pxGHH~53790 */
  twobit_setrtn( 1990, compiled_block_2_1990 );
  twobit_invoke( 4 );
  twobit_label( 1990, compiled_block_2_1990 );
  twobit_load( 0, 0 );
  twobit_setreg( 2 );
  twobit_load( 1, 2 );
  twobit_load( 3, 1 );
  twobit_pop( 3 );
  twobit_branch( 1256, compiled_block_2_1256 );
  twobit_label( 1989, compiled_block_2_1989 );
  twobit_stack( 2 );
  twobit_op1_41(); /* vector? */
  twobit_load( 2, 2 );
  twobit_check( 2, 0, 0, 1992, compiled_block_2_1992 );
  twobit_stack( 2 );
  twobit_op1_401(); /* vector-length:vec */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op2_branchf_621( 3, 59, compiled_temp_2_59, 1994, compiled_block_2_1994 ); /* internal:branchf->= */
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_stack( 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_const( 198 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_const( 199 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_stack( 2 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_const( 200 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_const( 201 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_const( 202 );
  twobit_setreg( 1 );
  twobit_load( 2, 3 );
  twobit_global( 203 ); /*  error~1pxGHH~53790 */
  twobit_setrtn( 1995, compiled_block_2_1995 );
  twobit_invoke( 4 );
  twobit_label( 1995, compiled_block_2_1995 );
  twobit_load( 0, 0 );
  twobit_setreg( 2 );
  twobit_load( 1, 2 );
  twobit_load( 3, 1 );
  twobit_pop( 3 );
  twobit_branch( 1256, compiled_block_2_1256 );
  twobit_label( 1994, compiled_block_2_1994 );
  twobit_reg( 4 );
  twobit_pop( 3 );
  twobit_return();
  twobit_label( 1257, compiled_block_2_1257 );
  twobit_save( 3 );
  twobit_store( 0, 0 );
  twobit_store( 1, 2 );
  twobit_store( 2, 1 );
  twobit_store( 3, 3 );
  twobit_movereg( 1, 4 );
  twobit_movereg( 2, 1 );
  twobit_reg( 4 );
  twobit_setrtn( 1997, compiled_block_2_1997 );
  twobit_invoke( 1 );
  twobit_label( 1997, compiled_block_2_1997 );
  twobit_load( 0, 0 );
  twobit_branchf( 1999, compiled_block_2_1999 );
  twobit_stack( 1 );
  twobit_pop( 3 );
  twobit_return();
  twobit_label( 1999, compiled_block_2_1999 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 4 );
  twobit_stack( 1 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 2 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 4 );
  twobit_stack( 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 204 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 205 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 3 );
  twobit_const( 206 );
  twobit_setreg( 1 );
  twobit_global( 207 ); /*  error~1pxGHH~53790 */
  twobit_setrtn( 2000, compiled_block_2_2000 );
  twobit_invoke( 3 );
  twobit_label( 2000, compiled_block_2_2000 );
  twobit_load( 0, 0 );
  twobit_setreg( 2 );
  twobit_load( 1, 2 );
  twobit_load( 3, 3 );
  twobit_pop( 3 );
  twobit_branch( 1257, compiled_block_2_1257 );
  twobit_label( 1258, compiled_block_2_1258 );
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_store( 1, 1 );
  twobit_movereg( 2, 1 );
  twobit_lambda( compiled_start_2_60, 209, 1 );
  twobit_setreg( 1 );
  twobit_load( 2, 1 );
  twobit_global( 210 ); /*  map~1pxGHH~1463 */
  twobit_pop( 1 );
  twobit_invoke( 2 );
  twobit_label( 1992, compiled_block_2_1992 );
  twobit_trap( 2, 0, 0, 162 );
  twobit_label( 1952, compiled_block_2_1952 );
  twobit_trap( 2, 0, 0, 1 );
  twobit_label( 1948, compiled_block_2_1948 );
  twobit_trap( 1, 0, 0, 162 );
  twobit_label( 1956, compiled_block_2_1956 );
  twobit_trap( 31, 0, 0, 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_4( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 30 );
  twobit_reg( 1 );
  twobit_setglbl( 1 ); /*  vector-unfold~1pxGHH~65024 */
  twobit_reg( 2 );
  twobit_setglbl( 2 ); /*  vector-unfold-right~1pxGHH~65025 */
  twobit_reg( 3 );
  twobit_setglbl( 3 ); /*  vector-copy~1pxGHH~65026 */
  twobit_reg( 4 );
  twobit_setglbl( 4 ); /*  vector-reverse-copy~1pxGHH~65028 */
  twobit_reg( 5 );
  twobit_setglbl( 5 ); /*  vector-append~1pxGHH~65029 */
  twobit_reg( 6 );
  twobit_setglbl( 6 ); /*  vector-concatenate~1pxGHH~65030 */
  twobit_reg( 7 );
  twobit_setglbl( 7 ); /*  vector-empty?~1pxGHH~65032 */
  twobit_reg( 8 );
  twobit_setglbl( 8 ); /*  vector=~1pxGHH~65033 */
  twobit_reg( 9 );
  twobit_setglbl( 9 ); /*  vector-fold~1pxGHH~65035 */
  twobit_reg( 10 );
  twobit_setglbl( 10 ); /*  vector-fold-right~1pxGHH~65036 */
  twobit_reg( 11 );
  twobit_setglbl( 11 ); /*  vector-map~1pxGHH~65037 */
  twobit_reg( 12 );
  twobit_setglbl( 12 ); /*  vector-map!~1pxGHH~65038 */
  twobit_reg( 13 );
  twobit_setglbl( 13 ); /*  vector-for-each~1pxGHH~65039 */
  twobit_reg( 14 );
  twobit_setglbl( 14 ); /*  vector-count~1pxGHH~65040 */
  twobit_reg( 15 );
  twobit_setglbl( 15 ); /*  vector-index~1pxGHH~65041 */
  twobit_reg( 16 );
  twobit_setglbl( 16 ); /*  vector-skip~1pxGHH~65042 */
  twobit_reg( 17 );
  twobit_setglbl( 17 ); /*  vector-index-right~1pxGHH~65044 */
  twobit_reg( 18 );
  twobit_setglbl( 18 ); /*  vector-skip-right~1pxGHH~65045 */
  twobit_reg( 19 );
  twobit_setglbl( 19 ); /*  vector-binary-search~1pxGHH~65047 */
  twobit_reg( 20 );
  twobit_setglbl( 20 ); /*  vector-any~1pxGHH~65048 */
  twobit_reg( 21 );
  twobit_setglbl( 21 ); /*  vector-every~1pxGHH~65049 */
  twobit_reg( 22 );
  twobit_setglbl( 22 ); /*  vector-swap!~1pxGHH~65050 */
  twobit_reg( 23 );
  twobit_setglbl( 23 ); /*  vector-fill!~1pxGHH~65051 */
  twobit_reg( 24 );
  twobit_setglbl( 24 ); /*  vector-copy!~1pxGHH~65052 */
  twobit_reg( 25 );
  twobit_setglbl( 25 ); /*  vector-reverse-copy!~1pxGHH~65053 */
  twobit_reg( 26 );
  twobit_setglbl( 26 ); /*  vector-reverse!~1pxGHH~65054 */
  twobit_reg( 27 );
  twobit_setglbl( 27 ); /*  vector->list~1pxGHH~65055 */
  twobit_reg( 28 );
  twobit_setglbl( 28 ); /*  reverse-vector->list~1pxGHH~65056 */
  twobit_reg( 29 );
  twobit_setglbl( 29 ); /*  list->vector~1pxGHH~65057 */
  twobit_reg( 30 );
  twobit_setglbl( 30 ); /*  reverse-list->vector~1pxGHH~65058 */
  twobit_global( 31 ); /* values */
  twobit_invoke( 0 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_5( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_reg( 1 );
  twobit_op1_22(); /* integer? */
  twobit_branchf( 1262, compiled_block_2_1262 );
  twobit_reg( 1 );
  twobit_op2imm_132( fixnum(0), 201, compiled_temp_2_201 ); /* < */
  twobit_op1_9(); /* not */
  twobit_return();
  twobit_label( 1262, compiled_block_2_1262 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_2_6( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 3 );
  twobit_reg( 1 );
  twobit_op1_branchf_610( 1264, compiled_block_2_1264 ); /* internal:branchf-null? */
  twobit_reg( 2 );
  twobit_return();
  twobit_label( 1264, compiled_block_2_1264 );
  twobit_save( 3 );
  twobit_store( 0, 0 );
  twobit_store( 2, 1 );
  twobit_store( 3, 3 );
  twobit_reg_op1_check_652(reg(1),1265,compiled_block_2_1265); /* internal:check-pair? with (1 0 0) */
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_reg( 1 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_global( 1 ); /* vector? */
  twobit_setreg( 1 );
  twobit_setrtn( 1266, compiled_block_2_1266 );
  twobit_jump( 1, 1257, compiled_block_2_1257 );
  twobit_label( 1266, compiled_block_2_1266 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_reg_op2_check_662(reg(4),reg(4),1267,compiled_block_2_1267); /* internal:check-vector?/vector-length:vec with (4 0 0) */
  twobit_load( 3, 1 );
  twobit_reg( 4 );
  twobit_op2_branchf_622( 3, 198, compiled_temp_2_198, 1269, compiled_block_2_1269 ); /* internal:branchf-<= */
  twobit_reg( 4 );
  twobit_skip( 1268, compiled_block_2_1268 );
  twobit_label( 1269, compiled_block_2_1269 );
  twobit_reg( 3 );
  twobit_label( 1268, compiled_block_2_1268 );
  twobit_setreg( 2 );
  twobit_reg( 4 );
  twobit_op2_406( 4 ); /* =:fix:fix */
  twobit_op1_9(); /* not */
  twobit_branchf( 1271, compiled_block_2_1271 );
  twobit_imm_const( TRUE_CONST ); /* #t */
  twobit_skip( 1270, compiled_block_2_1270 );
  twobit_label( 1271, compiled_block_2_1271 );
  twobit_reg( 3 );
  twobit_op2_branchf_623( 3, 199, compiled_temp_2_199, 1273, compiled_block_2_1273 ); /* internal:branchf-= */
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 1270, compiled_block_2_1270 );
  twobit_label( 1273, compiled_block_2_1273 );
  twobit_imm_const( TRUE_CONST ); /* #t */
  twobit_label( 1270, compiled_block_2_1270 );
  twobit_branchf( 1275, compiled_block_2_1275 );
  twobit_const( 2 );
  twobit_skip( 1274, compiled_block_2_1274 );
  twobit_label( 1275, compiled_block_2_1275 );
  twobit_reg( 3 );
  twobit_op1_26(); /* inexact? */
  twobit_branchf( 1277, compiled_block_2_1277 );
  twobit_reg( 2 );
  twobit_op1_26(); /* inexact? */
  twobit_branchf( 1279, compiled_block_2_1279 );
  twobit_reg( 2 );
  twobit_skip( 1274, compiled_block_2_1274 );
  twobit_label( 1279, compiled_block_2_1279 );
  twobit_const( 3 );
  twobit_setreg( 4 );
  twobit_reg( 2 );
  twobit_op2_61( 4, 200, compiled_temp_2_200 ); /* + */
  twobit_skip( 1274, compiled_block_2_1274 );
  twobit_label( 1277, compiled_block_2_1277 );
  twobit_reg( 2 );
  twobit_label( 1274, compiled_block_2_1274 );
  twobit_setreg( 2 );
  twobit_load( 1, 2 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_load( 3, 3 );
  twobit_reg( 4 );
  twobit_pop( 3 );
  twobit_invoke( 3 );
  twobit_label( 1265, compiled_block_2_1265 );
  twobit_trap( 1, 0, 0, 1 );
  twobit_label( 1267, compiled_block_2_1267 );
  twobit_trap( 4, 0, 0, 162 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_7( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_lambda( compiled_start_2_189, 2, 0 );
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_2_189( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 5 );
  twobit_reg( 4 );
  twobit_op2_branchf_620( 2, 190, compiled_temp_2_190, 1284, compiled_block_2_1284 ); /* internal:branchf-> */
  twobit_save( 2 );
  twobit_store( 0, 0 );
  twobit_store( 2, 1 );
  twobit_store( 4, 2 );
  twobit_movereg( 3, 2 );
  twobit_movereg( 5, 3 );
  twobit_stack( 1 );
  twobit_setreg( 4 );
  twobit_movereg( 4, 5 );
  twobit_load( 4, 2 );
  twobit_pop( 2 );
  twobit_branch( 1282, compiled_block_2_1282 );
  twobit_label( 1284, compiled_block_2_1284 );
  twobit_save( 3 );
  twobit_store( 0, 0 );
  twobit_store( 3, 2 );
  twobit_movereg( 4, 3 );
  twobit_reg( 5 );
  twobit_op2imm_131( fixnum(1), 191, compiled_temp_2_191 ); /* - */
  twobit_setreg( 31 );
  twobit_reg( 4 );
  twobit_op1_32( 192, compiled_temp_2_192 ); /* -- */
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_movereg( 31, 4 );
  twobit_store( 4, 3 );
  twobit_load( 4, 1 );
  twobit_reg( 5 );
  twobit_op2_61( 4, 193, compiled_temp_2_193 ); /* + */
  twobit_setreg( 4 );
  twobit_reg( 2 );
  twobit_op2_61( 4, 194, compiled_temp_2_194 ); /* + */
  twobit_setreg( 4 );
  twobit_load( 2, 2 );
  twobit_imm_const( fixnum(-1) ); /* -1 */
  twobit_op2_61( 4, 195, compiled_temp_2_195 ); /* + */
  twobit_setreg( 4 );
  twobit_movereg( 4, 5 );
  twobit_load( 4, 3 );
  twobit_pop( 3 );
  twobit_label( 1281, compiled_block_2_1281 );
  twobit_reg( 4 );
  twobit_op2_branchf_621( 3, 196, compiled_temp_2_196, 1288, compiled_block_2_1288 ); /* internal:branchf->= */
  twobit_reg_op1_check_651(reg(4),1289,compiled_block_2_1289); /* internal:check-fixnum? with (4 2 0) */
  twobit_reg_op2_check_662(reg(2),reg(31),1289,compiled_block_2_1289); /* internal:check-vector?/vector-length:vec with (4 2 0) */
  twobit_reg_op2_check_661(reg(4),reg(31),1289,compiled_block_2_1289); /* internal:check-range with (4 2 0) */
  twobit_reg( 2 );
  twobit_op2_402( 4 ); /* vector-ref:trusted */
  twobit_setreg( 31 );
  twobit_reg_op1_check_651(reg(5),1290,compiled_block_2_1290); /* internal:check-fixnum? with (31 5 1) */
  twobit_reg_op2_check_662(reg(1),reg(30),1290,compiled_block_2_1290); /* internal:check-vector?/vector-length:vec with (31 5 1) */
  twobit_reg_op2_check_661(reg(5),reg(30),1290,compiled_block_2_1290); /* internal:check-range with (31 5 1) */
  twobit_reg( 1 );
  twobit_op3_403( 5, 31 ); /* vector-set!:trusted */
  twobit_reg( 4 );
  twobit_op2imm_522( fixnum(1) ); /* -:idx:idx */
  twobit_setreg( 4 );
  twobit_reg( 5 );
  twobit_op2imm_522( fixnum(1) ); /* -:idx:idx */
  twobit_setreg( 31 );
  twobit_movereg( 31, 5 );
  twobit_branch( 1281, compiled_block_2_1281 );
  twobit_label( 1288, compiled_block_2_1288 );
  twobit_op1_3(); /* unspecified */
  twobit_return();
  twobit_label( 1282, compiled_block_2_1282 );
  twobit_reg( 4 );
  twobit_op2_branchf_619( 3, 197, compiled_temp_2_197, 1293, compiled_block_2_1293 ); /* internal:branchf-< */
  twobit_reg_op1_check_651(reg(4),1289,compiled_block_2_1289); /* internal:check-fixnum? with (4 2 0) */
  twobit_reg_op2_check_662(reg(2),reg(31),1289,compiled_block_2_1289); /* internal:check-vector?/vector-length:vec with (4 2 0) */
  twobit_reg_op2_check_661(reg(4),reg(31),1289,compiled_block_2_1289); /* internal:check-range with (4 2 0) */
  twobit_reg( 2 );
  twobit_op2_402( 4 ); /* vector-ref:trusted */
  twobit_setreg( 31 );
  twobit_reg_op1_check_651(reg(5),1290,compiled_block_2_1290); /* internal:check-fixnum? with (31 5 1) */
  twobit_reg_op2_check_662(reg(1),reg(30),1290,compiled_block_2_1290); /* internal:check-vector?/vector-length:vec with (31 5 1) */
  twobit_reg_op2_check_661(reg(5),reg(30),1290,compiled_block_2_1290); /* internal:check-range with (31 5 1) */
  twobit_reg( 1 );
  twobit_op3_403( 5, 31 ); /* vector-set!:trusted */
  twobit_reg( 4 );
  twobit_op2imm_520( fixnum(1) ); /* +:idx:idx */
  twobit_setreg( 4 );
  twobit_reg( 5 );
  twobit_op2imm_520( fixnum(1) ); /* +:idx:idx */
  twobit_setreg( 31 );
  twobit_movereg( 31, 5 );
  twobit_branch( 1282, compiled_block_2_1282 );
  twobit_label( 1293, compiled_block_2_1293 );
  twobit_op1_3(); /* unspecified */
  twobit_return();
  twobit_label( 1289, compiled_block_2_1289 );
  twobit_trap( 2, 4, 0, 160 );
  twobit_label( 1290, compiled_block_2_1290 );
  twobit_trap( 1, 5, 31, 161 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_8( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_lambda( compiled_start_2_186, 2, 0 );
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_2_186( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 5 );
  twobit_save( 2 );
  twobit_store( 0, 0 );
  twobit_store( 2, 2 );
  twobit_store( 3, 1 );
  twobit_movereg( 4, 3 );
  twobit_load( 2, 1 );
  twobit_reg( 5 );
  twobit_op2imm_131( fixnum(1), 187, compiled_temp_2_187 ); /* - */
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_stack( 2 );
  twobit_setreg( 4 );
  twobit_movereg( 4, 5 );
  twobit_load( 4, 1 );
  twobit_pop( 2 );
  twobit_label( 1296, compiled_block_2_1296 );
  twobit_reg( 4 );
  twobit_op2_branchf_621( 3, 188, compiled_temp_2_188, 1299, compiled_block_2_1299 ); /* internal:branchf->= */
  twobit_reg_op1_check_651(reg(4),1300,compiled_block_2_1300); /* internal:check-fixnum? with (4 2 0) */
  twobit_reg_op2_check_662(reg(2),reg(31),1300,compiled_block_2_1300); /* internal:check-vector?/vector-length:vec with (4 2 0) */
  twobit_reg_op2_check_661(reg(4),reg(31),1300,compiled_block_2_1300); /* internal:check-range with (4 2 0) */
  twobit_reg( 2 );
  twobit_op2_402( 4 ); /* vector-ref:trusted */
  twobit_setreg( 31 );
  twobit_reg_op1_check_651(reg(5),1301,compiled_block_2_1301); /* internal:check-fixnum? with (31 5 1) */
  twobit_reg_op2_check_662(reg(1),reg(30),1301,compiled_block_2_1301); /* internal:check-vector?/vector-length:vec with (31 5 1) */
  twobit_reg_op2_check_661(reg(5),reg(30),1301,compiled_block_2_1301); /* internal:check-range with (31 5 1) */
  twobit_reg( 1 );
  twobit_op3_403( 5, 31 ); /* vector-set!:trusted */
  twobit_reg( 4 );
  twobit_op2imm_522( fixnum(1) ); /* -:idx:idx */
  twobit_setreg( 4 );
  twobit_reg( 5 );
  twobit_op2imm_520( fixnum(1) ); /* +:idx:idx */
  twobit_setreg( 31 );
  twobit_movereg( 31, 5 );
  twobit_branch( 1296, compiled_block_2_1296 );
  twobit_label( 1299, compiled_block_2_1299 );
  twobit_op1_3(); /* unspecified */
  twobit_return();
  twobit_label( 1300, compiled_block_2_1300 );
  twobit_trap( 2, 4, 0, 160 );
  twobit_label( 1301, compiled_block_2_1301 );
  twobit_trap( 1, 5, 31, 161 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_9( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_lambda( compiled_start_2_183, 2, 0 );
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_2_183( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 3 );
  twobit_reg( 3 );
  twobit_op2imm_131( fixnum(1), 184, compiled_temp_2_184 ); /* - */
  twobit_setreg( 3 );
  twobit_label( 1304, compiled_block_2_1304 );
  twobit_reg( 2 );
  twobit_op2_branchf_622( 3, 185, compiled_temp_2_185, 1307, compiled_block_2_1307 ); /* internal:branchf-<= */
  twobit_reg_op1_check_651(reg(2),1308,compiled_block_2_1308); /* internal:check-fixnum? with (2 1 0) */
  twobit_reg_op2_check_662(reg(1),reg(4),1308,compiled_block_2_1308); /* internal:check-vector?/vector-length:vec with (2 1 0) */
  twobit_reg_op2_check_661(reg(2),reg(4),1308,compiled_block_2_1308); /* internal:check-range with (2 1 0) */
  twobit_reg( 1 );
  twobit_op2_402( 2 ); /* vector-ref:trusted */
  twobit_setreg( 31 );
  twobit_reg_op1_check_651(reg(3),1309,compiled_block_2_1309); /* internal:check-fixnum? with (3 1 0) */
  twobit_reg_op2_check_661(reg(3),reg(4),1309,compiled_block_2_1309); /* internal:check-range with (3 1 0) */
  twobit_reg( 1 );
  twobit_op2_402( 3 ); /* vector-ref:trusted */
  twobit_setreg( 4 );
  twobit_reg( 1 );
  twobit_op3_403( 2, 4 ); /* vector-set!:trusted */
  twobit_reg( 1 );
  twobit_op3_403( 3, 31 ); /* vector-set!:trusted */
  twobit_reg( 2 );
  twobit_op2imm_520( fixnum(1) ); /* +:idx:idx */
  twobit_setreg( 2 );
  twobit_reg( 3 );
  twobit_op2imm_522( fixnum(1) ); /* -:idx:idx */
  twobit_setreg( 3 );
  twobit_branch( 1304, compiled_block_2_1304 );
  twobit_label( 1307, compiled_block_2_1307 );
  twobit_op1_3(); /* unspecified */
  twobit_return();
  twobit_label( 1308, compiled_block_2_1308 );
  twobit_trap( 1, 2, 0, 160 );
  twobit_label( 1309, compiled_block_2_1309 );
  twobit_trap( 1, 3, 0, 160 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_10( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_lambda( compiled_start_2_180, 2, 0 );
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_2_180( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 4 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 5 );
  twobit_label( 1312, compiled_block_2_1312 );
  twobit_reg( 5 );
  twobit_op2_branchf_623( 3, 181, compiled_temp_2_181, 1315, compiled_block_2_1315 ); /* internal:branchf-= */
  twobit_reg( 2 );
  twobit_return();
  twobit_label( 1315, compiled_block_2_1315 );
  twobit_save( 4 );
  twobit_store( 0, 0 );
  twobit_store( 1, 2 );
  twobit_store( 3, 3 );
  twobit_store( 4, 4 );
  twobit_reg( 5 );
  twobit_op2imm_521( fixnum(1), 182, compiled_temp_2_182 ); /* +:fix:fix */
  twobit_setreg( 31 );
  twobit_store( 31, 1 );
  twobit_movereg( 1, 30 );
  twobit_movereg( 5, 1 );
  twobit_reg_op2_check_662(reg(4),reg(29),1316,compiled_block_2_1316); /* internal:check-vector?/vector-length:vec with (5 4 0) */
  twobit_reg_op2_check_655(reg(5),reg(29),1316,compiled_block_2_1316); /* internal:check-<:fix:fix with (5 4 0) */
  twobit_reg( 4 );
  twobit_op2_402( 5 ); /* vector-ref:trusted */
  twobit_setreg( 3 );
  twobit_reg( 30 );
  twobit_setrtn( 1317, compiled_block_2_1317 );
  twobit_invoke( 3 );
  twobit_label( 1317, compiled_block_2_1317 );
  twobit_load( 0, 0 );
  twobit_setreg( 2 );
  twobit_stack( 1 );
  twobit_setreg( 4 );
  twobit_movereg( 4, 5 );
  twobit_load( 1, 2 );
  twobit_load( 3, 3 );
  twobit_load( 4, 4 );
  twobit_pop( 4 );
  twobit_branch( 1312, compiled_block_2_1312 );
  twobit_label( 1316, compiled_block_2_1316 );
  twobit_trap( 4, 5, 0, 160 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_11( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_lambda( compiled_start_2_177, 2, 0 );
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_2_177( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 4 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 5 );
  twobit_label( 1320, compiled_block_2_1320 );
  twobit_reg( 5 );
  twobit_op2_branchf_623( 3, 178, compiled_temp_2_178, 1323, compiled_block_2_1323 ); /* internal:branchf-= */
  twobit_reg( 2 );
  twobit_return();
  twobit_label( 1323, compiled_block_2_1323 );
  twobit_save( 6 );
  twobit_store( 0, 0 );
  twobit_store( 1, 3 );
  twobit_store( 2, 1 );
  twobit_store( 3, 5 );
  twobit_store( 4, 6 );
  twobit_store( 5, 2 );
  twobit_movereg( 5, 2 );
  twobit_movereg( 4, 1 );
  twobit_reg( 5 );
  twobit_op2imm_130( fixnum(1), 179, compiled_temp_2_179 ); /* + */
  twobit_setreg( 31 );
  twobit_store( 31, 4 );
  twobit_setrtn( 1324, compiled_block_2_1324 );
  twobit_jump( 2, 1258, compiled_block_2_1258 );
  twobit_label( 1324, compiled_block_2_1324 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_load( 3, 1 );
  twobit_load( 2, 2 );
  twobit_load( 1, 3 );
  twobit_global( 1 ); /* apply */
  twobit_setrtn( 1325, compiled_block_2_1325 );
  twobit_invoke( 4 );
  twobit_label( 1325, compiled_block_2_1325 );
  twobit_load( 0, 0 );
  twobit_setreg( 2 );
  twobit_stack( 4 );
  twobit_setreg( 4 );
  twobit_movereg( 4, 5 );
  twobit_load( 1, 3 );
  twobit_load( 3, 5 );
  twobit_load( 4, 6 );
  twobit_pop( 6 );
  twobit_branch( 1320, compiled_block_2_1320 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_12( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_lambda( compiled_start_2_174, 2, 0 );
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_2_174( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 4 );
  twobit_label( 1328, compiled_block_2_1328 );
  twobit_reg( 4 );
  twobit_op1_branchf_612( 175, compiled_temp_2_175, 1331, compiled_block_2_1331 ); /* internal:branchf-zero? */
  twobit_reg( 2 );
  twobit_return();
  twobit_label( 1331, compiled_block_2_1331 );
  twobit_save( 4 );
  twobit_store( 0, 0 );
  twobit_store( 1, 3 );
  twobit_store( 2, 1 );
  twobit_store( 3, 4 );
  twobit_reg( 4 );
  twobit_op2imm_131( fixnum(1), 176, compiled_temp_2_176 ); /* - */
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_movereg( 1, 31 );
  twobit_reg_op1_check_651(reg(4),1332,compiled_block_2_1332); /* internal:check-fixnum? with (4 3 0) */
  twobit_reg_op2_check_662(reg(3),reg(30),1332,compiled_block_2_1332); /* internal:check-vector?/vector-length:vec with (4 3 0) */
  twobit_reg_op2_check_661(reg(4),reg(30),1332,compiled_block_2_1332); /* internal:check-range with (4 3 0) */
  twobit_reg( 3 );
  twobit_op2_402( 4 ); /* vector-ref:trusted */
  twobit_setreg( 2 );
  twobit_movereg( 4, 1 );
  twobit_reg( 31 );
  twobit_setrtn( 1333, compiled_block_2_1333 );
  twobit_invoke( 2 );
  twobit_label( 1333, compiled_block_2_1333 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_stack( 1 );
  twobit_op1_41(); /* vector? */
  twobit_load( 3, 1 );
  twobit_load( 2, 2 );
  twobit_check( 4, 2, 3, 1334, compiled_block_2_1334 );
  twobit_stack( 1 );
  twobit_op1_401(); /* vector-length:vec */
  twobit_setreg( 3 );
  twobit_stack( 2 );
  twobit_op2_407( 3 ); /* <:fix:fix */
  twobit_load( 3, 1 );
  twobit_check( 4, 2, 3, 1334, compiled_block_2_1334 );
  twobit_load( 3, 2 );
  twobit_stack( 1 );
  twobit_op3_403( 3, 4 ); /* vector-set!:trusted */
  twobit_movereg( 3, 4 );
  twobit_load( 1, 3 );
  twobit_load( 2, 1 );
  twobit_load( 3, 4 );
  twobit_pop( 4 );
  twobit_branch( 1328, compiled_block_2_1328 );
  twobit_label( 1334, compiled_block_2_1334 );
  twobit_trap( 3, 2, 4, 161 );
  twobit_label( 1332, compiled_block_2_1332 );
  twobit_trap( 3, 4, 0, 160 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_13( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_lambda( compiled_start_2_171, 2, 0 );
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_2_171( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 4 );
  twobit_label( 1337, compiled_block_2_1337 );
  twobit_reg( 4 );
  twobit_op1_branchf_612( 172, compiled_temp_2_172, 1340, compiled_block_2_1340 ); /* internal:branchf-zero? */
  twobit_reg( 2 );
  twobit_return();
  twobit_label( 1340, compiled_block_2_1340 );
  twobit_save( 4 );
  twobit_store( 0, 0 );
  twobit_store( 1, 1 );
  twobit_store( 2, 3 );
  twobit_store( 3, 4 );
  twobit_movereg( 3, 1 );
  twobit_reg( 4 );
  twobit_op2imm_131( fixnum(1), 173, compiled_temp_2_173 ); /* - */
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_movereg( 4, 2 );
  twobit_setrtn( 1341, compiled_block_2_1341 );
  twobit_jump( 2, 1258, compiled_block_2_1258 );
  twobit_label( 1341, compiled_block_2_1341 );
  twobit_load( 0, 0 );
  twobit_setreg( 3 );
  twobit_load( 1, 1 );
  twobit_load( 2, 2 );
  twobit_global( 1 ); /* apply */
  twobit_setrtn( 1342, compiled_block_2_1342 );
  twobit_invoke( 3 );
  twobit_label( 1342, compiled_block_2_1342 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_stack( 2 );
  twobit_op1_23(); /* fixnum? */
  twobit_load( 3, 3 );
  twobit_load( 2, 2 );
  twobit_check( 4, 2, 3, 1343, compiled_block_2_1343 );
  twobit_stack( 3 );
  twobit_reg_op1_check_653(RESULT,1343,compiled_block_2_1343); /* internal:check-vector? with (4 2 3) */
  twobit_stack( 3 );
  twobit_op1_401(); /* vector-length:vec */
  twobit_setreg( 3 );
  twobit_stack( 2 );
  twobit_op2_407( 3 ); /* <:fix:fix */
  twobit_load( 3, 3 );
  twobit_check( 4, 2, 3, 1343, compiled_block_2_1343 );
  twobit_stack( 2 );
  twobit_reg_op2imm_check_660(RESULT,fixnum(0),1343,compiled_block_2_1343); /* internal:check->=:fix:fix/imm with (4 2 3) */
  twobit_load( 3, 2 );
  twobit_stack( 3 );
  twobit_op3_403( 3, 4 ); /* vector-set!:trusted */
  twobit_movereg( 3, 4 );
  twobit_load( 1, 1 );
  twobit_load( 2, 3 );
  twobit_load( 3, 4 );
  twobit_pop( 4 );
  twobit_branch( 1337, compiled_block_2_1337 );
  twobit_label( 1343, compiled_block_2_1343 );
  twobit_trap( 3, 2, 4, 161 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_14( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_lambda( compiled_start_2_163, 2, 0 );
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_2_163( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argsge( 2 );
  twobit_save( 3 );
  twobit_store( 0, 0 );
  twobit_store( 1, 1 );
  twobit_store( 3, 3 );
  twobit_lexical( 1, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_lexical( 1, 2 );
  twobit_setreg( 1 );
  twobit_setrtn( 1349, compiled_block_2_1349 );
  twobit_jump( 2, 1257, compiled_block_2_1257 );
  twobit_label( 1349, compiled_block_2_1349 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_load( 2, 1 );
  twobit_global( 1 ); /* procedure? */
  twobit_setreg( 1 );
  twobit_lexical( 1, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_setrtn( 1350, compiled_block_2_1350 );
  twobit_jump( 2, 1257, compiled_block_2_1257 );
  twobit_label( 1350, compiled_block_2_1350 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_stack( 2 );
  twobit_op2_80( 3 ); /* make-vector */
  twobit_setreg( 3 );
  twobit_store( 3, 1 );
  twobit_stack( 3 );
  twobit_op1_branchf_610( 1352, compiled_block_2_1352 ); /* internal:branchf-null? */
  twobit_movereg( 4, 1 );
  twobit_movereg( 3, 2 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 3 );
  twobit_load( 4, 2 );
  twobit_setrtn( 1353, compiled_block_2_1353 );
  twobit_branch( 1348, compiled_block_2_1348 );
  twobit_label( 1353, compiled_block_2_1353 );
  twobit_load( 0, 0 );
  twobit_skip( 1351, compiled_block_2_1351 );
  twobit_label( 1352, compiled_block_2_1352 );
  twobit_stack( 3 );
  twobit_op1_11(); /* pair? */
  twobit_load( 1, 3 );
  twobit_check( 1, 0, 0, 1354, compiled_block_2_1354 );
  twobit_stack( 3 );
  twobit_op1_405(); /* cdr:pair */
  twobit_op1_branchf_610( 1356, compiled_block_2_1356 ); /* internal:branchf-null? */
  twobit_stack( 3 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_movereg( 2, 5 );
  twobit_movereg( 4, 1 );
  twobit_movereg( 3, 2 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 3 );
  twobit_load( 4, 2 );
  twobit_setrtn( 1357, compiled_block_2_1357 );
  twobit_branch( 1347, compiled_block_2_1347 );
  twobit_label( 1357, compiled_block_2_1357 );
  twobit_load( 0, 0 );
  twobit_skip( 1351, compiled_block_2_1351 );
  twobit_label( 1356, compiled_block_2_1356 );
  twobit_stack( 3 );
  twobit_setreg( 2 );
  twobit_movereg( 2, 5 );
  twobit_movereg( 4, 1 );
  twobit_movereg( 3, 2 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 3 );
  twobit_load( 4, 2 );
  twobit_setrtn( 1358, compiled_block_2_1358 );
  twobit_branch( 1346, compiled_block_2_1346 );
  twobit_label( 1358, compiled_block_2_1358 );
  twobit_load( 0, 0 );
  twobit_label( 1351, compiled_block_2_1351 );
  twobit_stack( 1 );
  twobit_pop( 3 );
  twobit_return();
  twobit_label( 1346, compiled_block_2_1346 );
  twobit_reg( 3 );
  twobit_op2_branchf_619( 4, 164, compiled_temp_2_164, 1360, compiled_block_2_1360 ); /* internal:branchf-< */
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_lambda( compiled_start_2_165, 3, 4 );
  twobit_setreg( 2 );
  twobit_store( 2, 1 );
  twobit_movereg( 5, 2 );
  twobit_lambda( compiled_start_2_166, 5, 3 );
  twobit_setreg( 1 );
  twobit_load( 2, 1 );
  twobit_global( 6 ); /* call-with-values */
  twobit_pop( 1 );
  twobit_invoke( 2 );
  twobit_label( 1360, compiled_block_2_1360 );
  twobit_op1_3(); /* unspecified */
  twobit_return();
  twobit_label( 1347, compiled_block_2_1347 );
  twobit_reg( 3 );
  twobit_op2_branchf_619( 4, 167, compiled_temp_2_167, 1366, compiled_block_2_1366 ); /* internal:branchf-< */
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_lambda( compiled_start_2_168, 8, 4 );
  twobit_setreg( 2 );
  twobit_store( 2, 1 );
  twobit_movereg( 5, 2 );
  twobit_lambda( compiled_start_2_169, 10, 3 );
  twobit_setreg( 1 );
  twobit_load( 2, 1 );
  twobit_global( 6 ); /* call-with-values */
  twobit_pop( 1 );
  twobit_invoke( 2 );
  twobit_label( 1366, compiled_block_2_1366 );
  twobit_op1_3(); /* unspecified */
  twobit_return();
  twobit_label( 1348, compiled_block_2_1348 );
  twobit_reg( 3 );
  twobit_op2_branchf_619( 4, 170, compiled_temp_2_170, 1372, compiled_block_2_1372 ); /* internal:branchf-< */
  twobit_save( 4 );
  twobit_store( 0, 0 );
  twobit_store( 1, 3 );
  twobit_store( 2, 1 );
  twobit_store( 3, 2 );
  twobit_store( 4, 4 );
  twobit_movereg( 1, 31 );
  twobit_movereg( 3, 1 );
  twobit_reg( 31 );
  twobit_setrtn( 1373, compiled_block_2_1373 );
  twobit_invoke( 1 );
  twobit_label( 1373, compiled_block_2_1373 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_stack( 1 );
  twobit_op1_401(); /* vector-length:vec */
  twobit_setreg( 3 );
  twobit_stack( 2 );
  twobit_op2_407( 3 ); /* <:fix:fix */
  twobit_load( 3, 1 );
  twobit_load( 2, 2 );
  twobit_check( 4, 2, 3, 1374, compiled_block_2_1374 );
  twobit_load( 3, 2 );
  twobit_stack( 1 );
  twobit_op3_403( 3, 4 ); /* vector-set!:trusted */
  twobit_reg( 3 );
  twobit_op2imm_520( fixnum(1) ); /* +:idx:idx */
  twobit_setreg( 3 );
  twobit_load( 1, 3 );
  twobit_load( 2, 1 );
  twobit_load( 4, 4 );
  twobit_pop( 4 );
  twobit_branch( 1348, compiled_block_2_1348 );
  twobit_label( 1372, compiled_block_2_1372 );
  twobit_op1_3(); /* unspecified */
  twobit_return();
  twobit_label( 1354, compiled_block_2_1354 );
  twobit_trap( 1, 0, 0, 1 );
  twobit_label( 1374, compiled_block_2_1374 );
  twobit_trap( 3, 2, 4, 161 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_165( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argsge( 1 );
  twobit_movereg( 2, 4 );
  twobit_lexical( 0, 2 );
  twobit_op1_401(); /* vector-length:vec */
  twobit_setreg( 3 );
  twobit_lexical( 0, 3 );
  twobit_op2_407( 3 ); /* <:fix:fix */
  twobit_setreg( 3 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 2 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 31 );
  twobit_reg( 3 );
  twobit_check( 1, 31, 2, 1361, compiled_block_2_1361 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 3 );
  twobit_lexical( 0, 2 );
  twobit_op3_403( 3, 1 ); /* vector-set!:trusted */
  twobit_lexical( 0, 3 );
  twobit_op2imm_520( fixnum(1) ); /* +:idx:idx */
  twobit_setreg( 3 );
  twobit_movereg( 4, 5 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 2 );
  twobit_lexical( 0, 4 );
  twobit_setreg( 4 );
  twobit_jump( 1, 1346, compiled_block_2_1346 );
  twobit_label( 1361, compiled_block_2_1361 );
  twobit_trap( 2, 31, 1, 161 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_166( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 2 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 3 );
  twobit_global( 1 ); /* apply */
  twobit_invoke( 3 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_168( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_movereg( 2, 4 );
  twobit_lexical( 0, 2 );
  twobit_op1_401(); /* vector-length:vec */
  twobit_setreg( 3 );
  twobit_lexical( 0, 3 );
  twobit_op2_407( 3 ); /* <:fix:fix */
  twobit_setreg( 3 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 2 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 31 );
  twobit_reg( 3 );
  twobit_check( 1, 31, 2, 1367, compiled_block_2_1367 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 3 );
  twobit_lexical( 0, 2 );
  twobit_op3_403( 3, 1 ); /* vector-set!:trusted */
  twobit_lexical( 0, 3 );
  twobit_op2imm_520( fixnum(1) ); /* +:idx:idx */
  twobit_setreg( 3 );
  twobit_movereg( 4, 5 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 2 );
  twobit_lexical( 0, 4 );
  twobit_setreg( 4 );
  twobit_jump( 1, 1347, compiled_block_2_1347 );
  twobit_label( 1367, compiled_block_2_1367 );
  twobit_trap( 2, 31, 1, 161 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_169( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 2 );
  twobit_lexical( 0, 1 );
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_15( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_lambda( compiled_start_2_154, 2, 0 );
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_2_154( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argsge( 2 );
  twobit_save( 3 );
  twobit_store( 0, 0 );
  twobit_store( 1, 1 );
  twobit_store( 3, 3 );
  twobit_lexical( 1, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_lexical( 1, 2 );
  twobit_setreg( 1 );
  twobit_setrtn( 1380, compiled_block_2_1380 );
  twobit_jump( 2, 1257, compiled_block_2_1257 );
  twobit_label( 1380, compiled_block_2_1380 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_load( 2, 1 );
  twobit_global( 1 ); /* procedure? */
  twobit_setreg( 1 );
  twobit_lexical( 1, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_setrtn( 1381, compiled_block_2_1381 );
  twobit_jump( 2, 1257, compiled_block_2_1257 );
  twobit_label( 1381, compiled_block_2_1381 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_stack( 2 );
  twobit_op2imm_131( fixnum(1), 155, compiled_temp_2_155 ); /* - */
  twobit_setreg( 3 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_stack( 2 );
  twobit_op2_80( 2 ); /* make-vector */
  twobit_setreg( 2 );
  twobit_store( 2, 2 );
  twobit_stack( 3 );
  twobit_op1_branchf_610( 1383, compiled_block_2_1383 ); /* internal:branchf-null? */
  twobit_movereg( 4, 1 );
  twobit_setrtn( 1384, compiled_block_2_1384 );
  twobit_branch( 1379, compiled_block_2_1379 );
  twobit_label( 1384, compiled_block_2_1384 );
  twobit_load( 0, 0 );
  twobit_skip( 1382, compiled_block_2_1382 );
  twobit_label( 1383, compiled_block_2_1383 );
  twobit_stack( 3 );
  twobit_op1_11(); /* pair? */
  twobit_load( 1, 3 );
  twobit_check( 1, 0, 0, 1385, compiled_block_2_1385 );
  twobit_stack( 3 );
  twobit_op1_405(); /* cdr:pair */
  twobit_op1_branchf_610( 1387, compiled_block_2_1387 ); /* internal:branchf-null? */
  twobit_stack( 3 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 4 );
  twobit_load( 1, 1 );
  twobit_setrtn( 1388, compiled_block_2_1388 );
  twobit_branch( 1378, compiled_block_2_1378 );
  twobit_label( 1388, compiled_block_2_1388 );
  twobit_load( 0, 0 );
  twobit_skip( 1382, compiled_block_2_1382 );
  twobit_label( 1387, compiled_block_2_1387 );
  twobit_load( 4, 3 );
  twobit_load( 1, 1 );
  twobit_setrtn( 1389, compiled_block_2_1389 );
  twobit_branch( 1377, compiled_block_2_1377 );
  twobit_label( 1389, compiled_block_2_1389 );
  twobit_load( 0, 0 );
  twobit_label( 1382, compiled_block_2_1382 );
  twobit_stack( 2 );
  twobit_pop( 3 );
  twobit_return();
  twobit_label( 1377, compiled_block_2_1377 );
  twobit_reg( 3 );
  twobit_op2imm_branchf_637( fixnum(0), 156, compiled_temp_2_156, 1391, compiled_block_2_1391 ); /* internal:branchf->=/imm */
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_lambda( compiled_start_2_157, 3, 3 );
  twobit_setreg( 2 );
  twobit_store( 2, 1 );
  twobit_movereg( 4, 2 );
  twobit_lambda( compiled_start_2_158, 5, 3 );
  twobit_setreg( 1 );
  twobit_load( 2, 1 );
  twobit_global( 6 ); /* call-with-values */
  twobit_pop( 1 );
  twobit_invoke( 2 );
  twobit_label( 1391, compiled_block_2_1391 );
  twobit_op1_3(); /* unspecified */
  twobit_return();
  twobit_label( 1378, compiled_block_2_1378 );
  twobit_reg( 3 );
  twobit_op2imm_branchf_637( fixnum(0), 159, compiled_temp_2_159, 1397, compiled_block_2_1397 ); /* internal:branchf->=/imm */
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_lambda( compiled_start_2_160, 8, 3 );
  twobit_setreg( 2 );
  twobit_store( 2, 1 );
  twobit_movereg( 4, 2 );
  twobit_lambda( compiled_start_2_161, 10, 3 );
  twobit_setreg( 1 );
  twobit_load( 2, 1 );
  twobit_global( 6 ); /* call-with-values */
  twobit_pop( 1 );
  twobit_invoke( 2 );
  twobit_label( 1397, compiled_block_2_1397 );
  twobit_op1_3(); /* unspecified */
  twobit_return();
  twobit_label( 1379, compiled_block_2_1379 );
  twobit_reg( 3 );
  twobit_op2imm_branchf_637( fixnum(0), 162, compiled_temp_2_162, 1403, compiled_block_2_1403 ); /* internal:branchf->=/imm */
  twobit_save( 3 );
  twobit_store( 0, 0 );
  twobit_store( 1, 3 );
  twobit_store( 2, 2 );
  twobit_store( 3, 1 );
  twobit_movereg( 1, 4 );
  twobit_movereg( 3, 1 );
  twobit_reg( 4 );
  twobit_setrtn( 1404, compiled_block_2_1404 );
  twobit_invoke( 1 );
  twobit_label( 1404, compiled_block_2_1404 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_stack( 1 );
  twobit_op1_23(); /* fixnum? */
  twobit_load( 3, 2 );
  twobit_load( 2, 1 );
  twobit_check( 4, 2, 3, 1405, compiled_block_2_1405 );
  twobit_stack( 2 );
  twobit_op1_401(); /* vector-length:vec */
  twobit_setreg( 3 );
  twobit_stack( 1 );
  twobit_op2_407( 3 ); /* <:fix:fix */
  twobit_load( 3, 2 );
  twobit_check( 4, 2, 3, 1405, compiled_block_2_1405 );
  twobit_stack( 1 );
  twobit_reg_op2imm_check_660(RESULT,fixnum(0),1405,compiled_block_2_1405); /* internal:check->=:fix:fix/imm with (4 2 3) */
  twobit_load( 3, 1 );
  twobit_stack( 2 );
  twobit_op3_403( 3, 4 ); /* vector-set!:trusted */
  twobit_reg( 3 );
  twobit_op2imm_522( fixnum(1) ); /* -:idx:idx */
  twobit_setreg( 3 );
  twobit_load( 1, 3 );
  twobit_load( 2, 2 );
  twobit_pop( 3 );
  twobit_branch( 1379, compiled_block_2_1379 );
  twobit_label( 1403, compiled_block_2_1403 );
  twobit_op1_3(); /* unspecified */
  twobit_return();
  twobit_label( 1385, compiled_block_2_1385 );
  twobit_trap( 1, 0, 0, 1 );
  twobit_label( 1405, compiled_block_2_1405 );
  twobit_trap( 3, 2, 4, 161 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_157( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argsge( 1 );
  twobit_movereg( 2, 4 );
  twobit_lexical( 0, 3 );
  twobit_op1_23(); /* fixnum? */
  twobit_setreg( 3 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 2 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 31 );
  twobit_reg( 3 );
  twobit_check( 1, 31, 2, 1392, compiled_block_2_1392 );
  twobit_lexical( 0, 2 );
  twobit_op1_401(); /* vector-length:vec */
  twobit_setreg( 3 );
  twobit_lexical( 0, 3 );
  twobit_op2_407( 3 ); /* <:fix:fix */
  twobit_setreg( 3 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 2 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 31 );
  twobit_reg( 3 );
  twobit_check( 1, 31, 2, 1392, compiled_block_2_1392 );
  twobit_lexical( 0, 3 );
  twobit_op2imm_455( fixnum(0) ); /* >=:fix:fix */
  twobit_setreg( 3 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 2 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 31 );
  twobit_reg( 3 );
  twobit_check( 1, 31, 2, 1392, compiled_block_2_1392 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 3 );
  twobit_lexical( 0, 2 );
  twobit_op3_403( 3, 1 ); /* vector-set!:trusted */
  twobit_lexical( 0, 3 );
  twobit_op2imm_522( fixnum(1) ); /* -:idx:idx */
  twobit_setreg( 3 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 2 );
  twobit_jump( 1, 1377, compiled_block_2_1377 );
  twobit_label( 1392, compiled_block_2_1392 );
  twobit_trap( 2, 31, 1, 161 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_158( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 2 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 3 );
  twobit_global( 1 ); /* apply */
  twobit_invoke( 3 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_160( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_movereg( 2, 4 );
  twobit_lexical( 0, 3 );
  twobit_op1_23(); /* fixnum? */
  twobit_setreg( 3 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 2 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 31 );
  twobit_reg( 3 );
  twobit_check( 1, 31, 2, 1398, compiled_block_2_1398 );
  twobit_lexical( 0, 2 );
  twobit_op1_401(); /* vector-length:vec */
  twobit_setreg( 3 );
  twobit_lexical( 0, 3 );
  twobit_op2_407( 3 ); /* <:fix:fix */
  twobit_setreg( 3 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 2 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 31 );
  twobit_reg( 3 );
  twobit_check( 1, 31, 2, 1398, compiled_block_2_1398 );
  twobit_lexical( 0, 3 );
  twobit_op2imm_455( fixnum(0) ); /* >=:fix:fix */
  twobit_setreg( 3 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 2 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 31 );
  twobit_reg( 3 );
  twobit_check( 1, 31, 2, 1398, compiled_block_2_1398 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 3 );
  twobit_lexical( 0, 2 );
  twobit_op3_403( 3, 1 ); /* vector-set!:trusted */
  twobit_lexical( 0, 3 );
  twobit_op2imm_522( fixnum(1) ); /* -:idx:idx */
  twobit_setreg( 3 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 2 );
  twobit_jump( 1, 1378, compiled_block_2_1378 );
  twobit_label( 1398, compiled_block_2_1398 );
  twobit_trap( 2, 31, 1, 161 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_161( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 2 );
  twobit_lexical( 0, 1 );
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_16( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argsge( 1 );
  twobit_save( 2 );
  twobit_store( 0, 0 );
  twobit_store( 2, 1 );
  twobit_movereg( 1, 2 );
  twobit_global( 1 ); /* vector? */
  twobit_setreg( 1 );
  twobit_lexical( 0, 3 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_setrtn( 1408, compiled_block_2_1408 );
  twobit_jump( 1, 1257, compiled_block_2_1257 );
  twobit_label( 1408, compiled_block_2_1408 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_load( 2, 1 );
  twobit_movereg( 4, 1 );
  twobit_lambda( compiled_start_2_150, 3, 2 );
  twobit_setreg( 1 );
  twobit_store( 1, 2 );
  twobit_movereg( 4, 1 );
  twobit_lambda( compiled_start_2_151, 5, 1 );
  twobit_setreg( 2 );
  twobit_load( 1, 2 );
  twobit_global( 6 ); /* call-with-values */
  twobit_pop( 2 );
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_150( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_lexical( 1, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 2 );
  twobit_reg( 4 );
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_151( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 3 );
  twobit_save( 2 );
  twobit_store( 0, 0 );
  twobit_store( 1, 1 );
  twobit_reg( 2 );
  twobit_op2_62( 1, 152, compiled_temp_2_152 ); /* - */
  twobit_op2_80( 3 ); /* make-vector */
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_lexical( 0, 1 );
  twobit_op1_41(); /* vector? */
  twobit_setreg( 3 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 31 );
  twobit_reg( 3 );
  twobit_check( 31, 0, 0, 1410, compiled_block_2_1410 );
  twobit_lexical( 0, 1 );
  twobit_op1_401(); /* vector-length:vec */
  twobit_setreg( 3 );
  twobit_reg( 2 );
  twobit_op2_branchf_620( 3, 153, compiled_temp_2_153, 1412, compiled_block_2_1412 ); /* internal:branchf-> */
  twobit_reg( 3 );
  twobit_skip( 1411, compiled_block_2_1411 );
  twobit_label( 1412, compiled_block_2_1412 );
  twobit_reg( 2 );
  twobit_label( 1411, compiled_block_2_1411 );
  twobit_setreg( 31 );
  twobit_movereg( 4, 1 );
  twobit_load( 4, 1 );
  twobit_lexical( 1, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_movereg( 3, 6 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 2 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 3 );
  twobit_movereg( 31, 5 );
  twobit_reg( 6 );
  twobit_setrtn( 1413, compiled_block_2_1413 );
  twobit_invoke( 5 );
  twobit_label( 1413, compiled_block_2_1413 );
  twobit_load( 0, 0 );
  twobit_stack( 2 );
  twobit_pop( 2 );
  twobit_return();
  twobit_label( 1410, compiled_block_2_1410 );
  twobit_trap( 31, 0, 0, 162 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_17( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_reg_op2_check_662(reg(1),reg(4),1417,compiled_block_2_1417); /* internal:check-vector?/vector-length:vec with (1 0 0) */
  twobit_reg( 2 );
  twobit_op1_branchf_610( 1419, compiled_block_2_1419 ); /* internal:branchf-null? */
  twobit_movereg( 4, 3 );
  twobit_op1_3(); /* unspecified */
  twobit_setreg( 2 );
  twobit_movereg( 2, 5 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 2 );
  twobit_branch( 1415, compiled_block_2_1415 );
  twobit_label( 1419, compiled_block_2_1419 );
  twobit_reg_op1_check_652(reg(2),1421,compiled_block_2_1421); /* internal:check-pair? with (2 0 0) */
  twobit_reg( 2 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 3 );
  twobit_reg( 3 );
  twobit_op1_branchf_610( 1423, compiled_block_2_1423 ); /* internal:branchf-null? */
  twobit_reg( 2 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_op1_3(); /* unspecified */
  twobit_setreg( 3 );
  twobit_movereg( 3, 5 );
  twobit_movereg( 4, 3 );
  twobit_branch( 1415, compiled_block_2_1415 );
  twobit_label( 1423, compiled_block_2_1423 );
  twobit_reg_op1_check_652(reg(3),1425,compiled_block_2_1425); /* internal:check-pair? with (3 0 0) */
  twobit_reg( 3 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 31 );
  twobit_reg( 31 );
  twobit_op1_branchf_610( 1427, compiled_block_2_1427 ); /* internal:branchf-null? */
  twobit_reg( 3 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_reg( 2 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_op1_3(); /* unspecified */
  twobit_setreg( 31 );
  twobit_movereg( 31, 5 );
  twobit_branch( 1415, compiled_block_2_1415 );
  twobit_label( 1427, compiled_block_2_1427 );
  twobit_reg_op1_check_652(reg(31),1429,compiled_block_2_1429); /* internal:check-pair? with (31 0 0) */
  twobit_reg( 31 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 30 );
  twobit_reg( 30 );
  twobit_op1_branchf_610( 1431, compiled_block_2_1431 ); /* internal:branchf-null? */
  twobit_reg( 3 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_reg( 31 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 31 );
  twobit_reg( 2 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_movereg( 31, 5 );
  twobit_branch( 1415, compiled_block_2_1415 );
  twobit_label( 1431, compiled_block_2_1431 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 2 );
  twobit_const( 1 );
  twobit_setreg( 1 );
  twobit_movereg( 30, 3 );
  twobit_global( 2 ); /*  error~1pxGHH~53790 */
  twobit_invoke( 3 );
  twobit_label( 1415, compiled_block_2_1415 );
  twobit_save( 5 );
  twobit_store( 0, 0 );
  twobit_store( 1, 5 );
  twobit_store( 2, 1 );
  twobit_store( 4, 3 );
  twobit_store( 5, 4 );
  twobit_movereg( 3, 2 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 1 );
  twobit_setrtn( 1434, compiled_block_2_1434 );
  twobit_jump( 1, 1257, compiled_block_2_1257 );
  twobit_label( 1434, compiled_block_2_1434 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 1 );
  twobit_load( 2, 1 );
  twobit_setrtn( 1435, compiled_block_2_1435 );
  twobit_jump( 1, 1257, compiled_block_2_1257 );
  twobit_label( 1435, compiled_block_2_1435 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_load( 3, 2 );
  twobit_reg( 4 );
  twobit_op2_67( 3, 147, compiled_temp_2_147 ); /* <= */
  twobit_setreg( 2 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_op2_branchf_622( 4, 148, compiled_temp_2_148, 1437, compiled_block_2_1437 ); /* internal:branchf-<= */
  twobit_reg( 2 );
  twobit_skip( 1436, compiled_block_2_1436 );
  twobit_label( 1437, compiled_block_2_1437 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1436, compiled_block_2_1436 );
  twobit_branchf( 1439, compiled_block_2_1439 );
  twobit_load( 1, 3 );
  twobit_reg( 4 );
  twobit_op2_67( 1, 149, compiled_temp_2_149 ); /* <= */
  twobit_skip( 1438, compiled_block_2_1438 );
  twobit_label( 1439, compiled_block_2_1439 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1438, compiled_block_2_1438 );
  twobit_branchf( 1441, compiled_block_2_1441 );
  twobit_load( 3, 4 );
  twobit_movereg( 4, 1 );
  twobit_load( 2, 2 );
  twobit_global( 3 ); /* values */
  twobit_pop( 5 );
  twobit_invoke( 3 );
  twobit_label( 1441, compiled_block_2_1441 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_stack( 5 );
  twobit_op2_58( 2 ); /* cons */
  twobit_setreg( 2 );
  twobit_const( 4 );
  twobit_op2_58( 2 ); /* cons */
  twobit_setreg( 2 );
  twobit_const( 5 );
  twobit_op2_58( 2 ); /* cons */
  twobit_setreg( 2 );
  twobit_store( 2, 4 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_const( 6 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_const( 7 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 2 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 8 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 3 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 4 );
  twobit_stack( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 9 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 10 );
  twobit_setreg( 1 );
  twobit_load( 5, 4 );
  twobit_global( 2 ); /*  error~1pxGHH~53790 */
  twobit_pop( 5 );
  twobit_invoke( 5 );
  twobit_label( 1425, compiled_block_2_1425 );
  twobit_trap( 3, 0, 0, 1 );
  twobit_label( 1421, compiled_block_2_1421 );
  twobit_trap( 2, 0, 0, 1 );
  twobit_label( 1417, compiled_block_2_1417 );
  twobit_trap( 1, 0, 0, 162 );
  twobit_label( 1429, compiled_block_2_1429 );
  twobit_trap( 31, 0, 0, 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_18( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argsge( 1 );
  twobit_save( 2 );
  twobit_store( 0, 0 );
  twobit_store( 2, 1 );
  twobit_movereg( 1, 2 );
  twobit_global( 1 ); /* vector? */
  twobit_setreg( 1 );
  twobit_lexical( 0, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_setrtn( 1444, compiled_block_2_1444 );
  twobit_jump( 1, 1257, compiled_block_2_1257 );
  twobit_label( 1444, compiled_block_2_1444 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_load( 2, 1 );
  twobit_movereg( 4, 1 );
  twobit_lambda( compiled_start_2_144, 3, 2 );
  twobit_setreg( 1 );
  twobit_store( 1, 2 );
  twobit_movereg( 4, 1 );
  twobit_lambda( compiled_start_2_145, 5, 1 );
  twobit_setreg( 2 );
  twobit_load( 1, 2 );
  twobit_global( 6 ); /* call-with-values */
  twobit_pop( 2 );
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_144( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_lexical( 1, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 2 );
  twobit_jump( 2, 1254, compiled_block_2_1254 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_145( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_save( 2 );
  twobit_store( 0, 0 );
  twobit_movereg( 2, 4 );
  twobit_store( 4, 1 );
  twobit_movereg( 1, 4 );
  twobit_reg( 2 );
  twobit_op2_62( 1, 146, compiled_temp_2_146 ); /* - */
  twobit_imm_const_setreg( NIL_CONST, 2 ); /* () */
  twobit_op2_80( 2 ); /* make-vector */
  twobit_setreg( 3 );
  twobit_store( 3, 2 );
  twobit_movereg( 3, 1 );
  twobit_lexical( 1, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 2 );
  twobit_movereg( 2, 6 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 2 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 3 );
  twobit_load( 5, 1 );
  twobit_reg( 6 );
  twobit_setrtn( 1446, compiled_block_2_1446 );
  twobit_invoke( 5 );
  twobit_label( 1446, compiled_block_2_1446 );
  twobit_load( 0, 0 );
  twobit_stack( 2 );
  twobit_pop( 2 );
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_2_19( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argsge( 0 );
  twobit_lexical( 0, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 2 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_20( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_lexical( 0, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 2 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_21( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_lambda( compiled_start_2_141, 2, 0 );
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_2_141( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_reg( 1 );
  twobit_op1_branchf_610( 1453, compiled_block_2_1453 ); /* internal:branchf-null? */
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 4 );
  twobit_op2_600( 4 ); /* make-vector:0 */
  twobit_return();
  twobit_label( 1453, compiled_block_2_1453 );
  twobit_reg_op1_check_652(reg(1),1454,compiled_block_2_1454); /* internal:check-pair? with (1 0 0) */
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_op1_branchf_610( 1456, compiled_block_2_1456 ); /* internal:branchf-null? */
  twobit_save( 2 );
  twobit_store( 0, 0 );
  twobit_movereg( 2, 3 );
  twobit_reg( 1 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_global( 1 ); /* vector? */
  twobit_setreg( 1 );
  twobit_setrtn( 1457, compiled_block_2_1457 );
  twobit_jump( 2, 1257, compiled_block_2_1257 );
  twobit_label( 1457, compiled_block_2_1457 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_reg_op2_check_662(reg(4),reg(3),1458,compiled_block_2_1458); /* internal:check-vector?/vector-length:vec with (4 0 0) */
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_reg( 3 );
  twobit_op2_80( 2 ); /* make-vector */
  twobit_setreg( 2 );
  twobit_store( 2, 2 );
  twobit_movereg( 2, 1 );
  twobit_lexical( 1, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_movereg( 4, 6 );
  twobit_movereg( 3, 5 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 2 );
  twobit_load( 3, 1 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_reg( 6 );
  twobit_setrtn( 1459, compiled_block_2_1459 );
  twobit_invoke( 5 );
  twobit_label( 1459, compiled_block_2_1459 );
  twobit_load( 0, 0 );
  twobit_stack( 2 );
  twobit_pop( 2 );
  twobit_return();
  twobit_label( 1456, compiled_block_2_1456 );
  twobit_save( 2 );
  twobit_store( 0, 0 );
  twobit_store( 1, 1 );
  twobit_movereg( 2, 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 2 );
  twobit_setrtn( 1460, compiled_block_2_1460 );
  twobit_branch( 1451, compiled_block_2_1451 );
  twobit_label( 1460, compiled_block_2_1460 );
  twobit_load( 0, 0 );
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_80( 3 ); /* make-vector */
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_movereg( 4, 2 );
  twobit_load( 1, 1 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 3 );
  twobit_setrtn( 1461, compiled_block_2_1461 );
  twobit_branch( 1450, compiled_block_2_1450 );
  twobit_label( 1461, compiled_block_2_1461 );
  twobit_load( 0, 0 );
  twobit_stack( 2 );
  twobit_pop( 2 );
  twobit_return();
  twobit_label( 1450, compiled_block_2_1450 );
  twobit_reg( 1 );
  twobit_op1_branchf_610( 1463, compiled_block_2_1463 ); /* internal:branchf-null? */
  twobit_reg( 2 );
  twobit_return();
  twobit_label( 1463, compiled_block_2_1463 );
  twobit_save( 6 );
  twobit_store( 0, 0 );
  twobit_store( 1, 4 );
  twobit_store( 2, 1 );
  twobit_store( 3, 6 );
  twobit_movereg( 3, 2 );
  twobit_reg_op1_check_652(reg(1),1464,compiled_block_2_1464); /* internal:check-pair? with (1 0 0) */
  twobit_reg( 1 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_load( 1, 1 );
  twobit_reg_op2_check_662(reg(4),reg(4),1458,compiled_block_2_1458); /* internal:check-vector?/vector-length:vec with (4 0 0) */
  twobit_store( 4, 5 );
  twobit_store( 4, 3 );
  twobit_lexical( 1, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_movereg( 4, 6 );
  twobit_load( 3, 2 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_load( 5, 3 );
  twobit_reg( 6 );
  twobit_setrtn( 1465, compiled_block_2_1465 );
  twobit_invoke( 5 );
  twobit_label( 1465, compiled_block_2_1465 );
  twobit_load( 0, 0 );
  twobit_stack( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 1 );
  twobit_load( 4, 5 );
  twobit_stack( 6 );
  twobit_op2_61( 4, 142, compiled_temp_2_142 ); /* + */
  twobit_setreg( 3 );
  twobit_load( 2, 1 );
  twobit_pop( 6 );
  twobit_branch( 1450, compiled_block_2_1450 );
  twobit_label( 1451, compiled_block_2_1451 );
  twobit_reg( 1 );
  twobit_op1_branchf_610( 1468, compiled_block_2_1468 ); /* internal:branchf-null? */
  twobit_reg( 2 );
  twobit_return();
  twobit_label( 1468, compiled_block_2_1468 );
  twobit_save( 3 );
  twobit_store( 0, 0 );
  twobit_store( 1, 1 );
  twobit_store( 2, 2 );
  twobit_store( 3, 3 );
  twobit_reg_op1_check_652(reg(1),1464,compiled_block_2_1464); /* internal:check-pair? with (1 0 0) */
  twobit_reg( 1 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_global( 1 ); /* vector? */
  twobit_setreg( 1 );
  twobit_setrtn( 1469, compiled_block_2_1469 );
  twobit_jump( 2, 1257, compiled_block_2_1257 );
  twobit_label( 1469, compiled_block_2_1469 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_stack( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 1 );
  twobit_reg_op1_check_653(reg(4),1458,compiled_block_2_1458); /* internal:check-vector? with (4 0 0) */
  twobit_reg( 4 );
  twobit_op1_401(); /* vector-length:vec */
  twobit_load( 3, 2 );
  twobit_op2_61( 3, 143, compiled_temp_2_143 ); /* + */
  twobit_setreg( 2 );
  twobit_load( 3, 3 );
  twobit_pop( 3 );
  twobit_branch( 1451, compiled_block_2_1451 );
  twobit_label( 1454, compiled_block_2_1454 );
  twobit_trap( 1, 0, 0, 1 );
  twobit_label( 1464, compiled_block_2_1464 );
  twobit_trap( 1, 0, 0, 0 );
  twobit_label( 1458, compiled_block_2_1458 );
  twobit_trap( 4, 0, 0, 162 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_22( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_save( 0 );
  twobit_store( 0, 0 );
  twobit_movereg( 1, 2 );
  twobit_global( 1 ); /* vector? */
  twobit_setreg( 1 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_setrtn( 1472, compiled_block_2_1472 );
  twobit_jump( 1, 1257, compiled_block_2_1257 );
  twobit_label( 1472, compiled_block_2_1472 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_reg_op1_check_653(reg(4),1473,compiled_block_2_1473); /* internal:check-vector? with (4 0 0) */
  twobit_reg( 4 );
  twobit_op1_401(); /* vector-length:vec */
  twobit_op1_31( 140, compiled_temp_2_140 ); /* zero? */
  twobit_pop( 0 );
  twobit_return();
  twobit_label( 1473, compiled_block_2_1473 );
  twobit_trap( 4, 0, 0, 162 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_23( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argsge( 1 );
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_store( 2, 1 );
  twobit_movereg( 1, 2 );
  twobit_global( 1 ); /* procedure? */
  twobit_setreg( 1 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_setrtn( 1476, compiled_block_2_1476 );
  twobit_jump( 1, 1257, compiled_block_2_1257 );
  twobit_label( 1476, compiled_block_2_1476 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_stack( 1 );
  twobit_op1_branchf_610( 1478, compiled_block_2_1478 ); /* internal:branchf-null? */
  twobit_imm_const( TRUE_CONST ); /* #t */
  twobit_pop( 1 );
  twobit_return();
  twobit_label( 1478, compiled_block_2_1478 );
  twobit_stack( 1 );
  twobit_op1_11(); /* pair? */
  twobit_load( 2, 1 );
  twobit_check( 2, 0, 0, 1479, compiled_block_2_1479 );
  twobit_stack( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_op1_branchf_610( 1481, compiled_block_2_1481 ); /* internal:branchf-null? */
  twobit_global( 2 ); /* vector? */
  twobit_setreg( 1 );
  twobit_stack( 1 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_setrtn( 1482, compiled_block_2_1482 );
  twobit_jump( 1, 1257, compiled_block_2_1257 );
  twobit_label( 1482, compiled_block_2_1482 );
  twobit_load( 0, 0 );
  twobit_imm_const( TRUE_CONST ); /* #t */
  twobit_pop( 1 );
  twobit_return();
  twobit_label( 1481, compiled_block_2_1481 );
  twobit_movereg( 4, 1 );
  twobit_load( 2, 1 );
  twobit_pop( 1 );
  twobit_label( 1474, compiled_block_2_1474 );
  twobit_save( 2 );
  twobit_store( 0, 0 );
  twobit_store( 1, 2 );
  twobit_store( 2, 1 );
  twobit_global( 2 ); /* vector? */
  twobit_setreg( 1 );
  twobit_reg( 2 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_setrtn( 1484, compiled_block_2_1484 );
  twobit_jump( 1, 1257, compiled_block_2_1257 );
  twobit_label( 1484, compiled_block_2_1484 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_stack( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 3 );
  twobit_store( 3, 1 );
  twobit_reg( 3 );
  twobit_op1_10(); /* null? */
  twobit_setreg( 2 );
  twobit_reg( 2 );
  twobit_branchf( 1486, compiled_block_2_1486 );
  twobit_reg( 2 );
  twobit_pop( 2 );
  twobit_return();
  twobit_label( 1486, compiled_block_2_1486 );
  twobit_movereg( 4, 2 );
  twobit_reg_op1_check_652(reg(3),1487,compiled_block_2_1487); /* internal:check-pair? with (3 0 0) */
  twobit_reg( 3 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_lexical( 0, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_load( 1, 2 );
  twobit_reg( 4 );
  twobit_setrtn( 1488, compiled_block_2_1488 );
  twobit_invoke( 3 );
  twobit_label( 1488, compiled_block_2_1488 );
  twobit_load( 0, 0 );
  twobit_branchf( 1490, compiled_block_2_1490 );
  twobit_load( 1, 2 );
  twobit_load( 2, 1 );
  twobit_pop( 2 );
  twobit_branch( 1474, compiled_block_2_1474 );
  twobit_label( 1490, compiled_block_2_1490 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_pop( 2 );
  twobit_return();
  twobit_label( 1487, compiled_block_2_1487 );
  twobit_trap( 3, 0, 0, 0 );
  twobit_label( 1479, compiled_block_2_1479 );
  twobit_trap( 2, 0, 0, 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_24( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 3 );
  twobit_reg( 2 );
  twobit_op2_56( 3 ); /* eq? */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 1496, compiled_block_2_1496 );
  twobit_reg( 4 );
  twobit_return();
  twobit_label( 1496, compiled_block_2_1496 );
  twobit_reg_op2_check_662(reg(3),reg(4),1497,compiled_block_2_1497); /* internal:check-vector?/vector-length:vec with (3 0 0) */
  twobit_reg_op2_check_662(reg(2),reg(31),1498,compiled_block_2_1498); /* internal:check-vector?/vector-length:vec with (2 0 0) */
  twobit_reg( 31 );
  twobit_op2_406( 4 ); /* =:fix:fix */
  twobit_branchf( 1500, compiled_block_2_1500 );
  twobit_movereg( 4, 5 );
  twobit_movereg( 31, 4 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 6 );
  twobit_branch( 1493, compiled_block_2_1493 );
  twobit_label( 1500, compiled_block_2_1500 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_return();
  twobit_label( 1492, compiled_block_2_1492 );
  twobit_save( 6 );
  twobit_store( 0, 0 );
  twobit_store( 1, 2 );
  twobit_store( 2, 3 );
  twobit_store( 3, 4 );
  twobit_store( 4, 5 );
  twobit_store( 5, 6 );
  twobit_store( 8, 1 );
  twobit_reg( 6 );
  twobit_op2_branchf_624( 7, 1503, compiled_block_2_1503 ); /* internal:branchf-eq? */
  twobit_imm_const( TRUE_CONST ); /* #t */
  twobit_skip( 1502, compiled_block_2_1502 );
  twobit_label( 1503, compiled_block_2_1503 );
  twobit_movereg( 7, 2 );
  twobit_movereg( 1, 31 );
  twobit_movereg( 6, 1 );
  twobit_reg( 31 );
  twobit_setrtn( 1504, compiled_block_2_1504 );
  twobit_invoke( 2 );
  twobit_label( 1504, compiled_block_2_1504 );
  twobit_load( 0, 0 );
  twobit_label( 1502, compiled_block_2_1502 );
  twobit_branchf( 1506, compiled_block_2_1506 );
  twobit_stack( 1 );
  twobit_op2imm_520( fixnum(1) ); /* +:idx:idx */
  twobit_setreg( 4 );
  twobit_movereg( 4, 6 );
  twobit_load( 1, 2 );
  twobit_load( 2, 3 );
  twobit_load( 3, 4 );
  twobit_load( 4, 5 );
  twobit_load( 5, 6 );
  twobit_pop( 6 );
  twobit_branch( 1493, compiled_block_2_1493 );
  twobit_label( 1506, compiled_block_2_1506 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_pop( 6 );
  twobit_return();
  twobit_label( 1493, compiled_block_2_1493 );
  twobit_reg( 6 );
  twobit_op2_406( 4 ); /* =:fix:fix */
  twobit_setreg( 31 );
  twobit_reg( 31 );
  twobit_branchf( 1509, compiled_block_2_1509 );
  twobit_reg( 31 );
  twobit_return();
  twobit_label( 1509, compiled_block_2_1509 );
  twobit_reg( 6 );
  twobit_op2_407( 5 ); /* <:fix:fix */
  twobit_branchf( 1511, compiled_block_2_1511 );
  twobit_movereg( 6, 31 );
  twobit_reg( 3 );
  twobit_op1_401(); /* vector-length:vec */
  twobit_setreg( 30 );
  twobit_reg_op2_check_655(reg(6),reg(30),1512,compiled_block_2_1512); /* internal:check-<:fix:fix with (6 3 0) */
  twobit_reg( 3 );
  twobit_op2_402( 6 ); /* vector-ref:trusted */
  twobit_setreg( 30 );
  twobit_reg( 2 );
  twobit_op1_401(); /* vector-length:vec */
  twobit_setreg( 29 );
  twobit_reg_op2_check_655(reg(6),reg(29),1513,compiled_block_2_1513); /* internal:check-<:fix:fix with (6 2 0) */
  twobit_reg( 2 );
  twobit_op2_402( 6 ); /* vector-ref:trusted */
  twobit_setreg( 29 );
  twobit_movereg( 29, 6 );
  twobit_movereg( 30, 7 );
  twobit_movereg( 31, 8 );
  twobit_branch( 1492, compiled_block_2_1492 );
  twobit_label( 1511, compiled_block_2_1511 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_return();
  twobit_label( 1498, compiled_block_2_1498 );
  twobit_trap( 2, 0, 0, 162 );
  twobit_label( 1513, compiled_block_2_1513 );
  twobit_trap( 2, 6, 0, 160 );
  twobit_label( 1497, compiled_block_2_1497 );
  twobit_trap( 3, 0, 0, 162 );
  twobit_label( 1512, compiled_block_2_1512 );
  twobit_trap( 3, 6, 0, 160 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_25( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argsge( 3 );
  twobit_save( 4 );
  twobit_store( 0, 0 );
  twobit_store( 1, 1 );
  twobit_store( 2, 4 );
  twobit_store( 4, 2 );
  twobit_movereg( 3, 2 );
  twobit_global( 1 ); /* vector? */
  twobit_setreg( 1 );
  twobit_lexical( 0, 3 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_setrtn( 1515, compiled_block_2_1515 );
  twobit_jump( 1, 1257, compiled_block_2_1257 );
  twobit_label( 1515, compiled_block_2_1515 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_load( 2, 1 );
  twobit_global( 2 ); /* procedure? */
  twobit_setreg( 1 );
  twobit_lexical( 0, 3 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_setrtn( 1516, compiled_block_2_1516 );
  twobit_jump( 1, 1257, compiled_block_2_1257 );
  twobit_label( 1516, compiled_block_2_1516 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_stack( 2 );
  twobit_op1_branchf_610( 1518, compiled_block_2_1518 ); /* internal:branchf-null? */
  twobit_movereg( 4, 1 );
  twobit_stack( 3 );
  twobit_op1_41(); /* vector? */
  twobit_load( 3, 3 );
  twobit_check( 3, 0, 0, 1519, compiled_block_2_1519 );
  twobit_stack( 3 );
  twobit_op1_401(); /* vector-length:vec */
  twobit_setreg( 3 );
  twobit_lexical( 0, 4 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_movereg( 4, 5 );
  twobit_load( 2, 4 );
  twobit_load( 4, 3 );
  twobit_reg( 5 );
  twobit_pop( 4 );
  twobit_invoke( 4 );
  twobit_label( 1518, compiled_block_2_1518 );
  twobit_load( 1, 2 );
  twobit_load( 3, 2 );
  twobit_stack( 3 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 2 );
  twobit_stack( 3 );
  twobit_op1_41(); /* vector? */
  twobit_load( 2, 3 );
  twobit_check( 2, 0, 0, 1521, compiled_block_2_1521 );
  twobit_stack( 3 );
  twobit_op1_401(); /* vector-length:vec */
  twobit_setreg( 2 );
  twobit_lexical( 0, 3 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_lexical( 0, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_setrtn( 1522, compiled_block_2_1522 );
  twobit_invoke( 3 );
  twobit_label( 1522, compiled_block_2_1522 );
  twobit_load( 0, 0 );
  twobit_setreg( 3 );
  twobit_load( 4, 2 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 2 );
  twobit_movereg( 2, 5 );
  twobit_load( 1, 1 );
  twobit_load( 2, 4 );
  twobit_reg( 5 );
  twobit_pop( 4 );
  twobit_invoke( 4 );
  twobit_label( 1521, compiled_block_2_1521 );
  twobit_trap( 2, 0, 0, 162 );
  twobit_label( 1519, compiled_block_2_1519 );
  twobit_trap( 3, 0, 0, 162 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_26( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_lambda( compiled_start_2_135, 2, 0 );
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_2_135( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argsge( 3 );
  twobit_save( 4 );
  twobit_store( 0, 0 );
  twobit_store( 1, 1 );
  twobit_store( 2, 4 );
  twobit_store( 4, 2 );
  twobit_movereg( 3, 2 );
  twobit_global( 1 ); /* vector? */
  twobit_setreg( 1 );
  twobit_lexical( 1, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_setrtn( 1526, compiled_block_2_1526 );
  twobit_jump( 2, 1257, compiled_block_2_1257 );
  twobit_label( 1526, compiled_block_2_1526 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_load( 2, 1 );
  twobit_global( 2 ); /* procedure? */
  twobit_setreg( 1 );
  twobit_lexical( 1, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_setrtn( 1527, compiled_block_2_1527 );
  twobit_jump( 2, 1257, compiled_block_2_1257 );
  twobit_label( 1527, compiled_block_2_1527 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_stack( 2 );
  twobit_op1_branchf_610( 1529, compiled_block_2_1529 ); /* internal:branchf-null? */
  twobit_movereg( 4, 1 );
  twobit_stack( 3 );
  twobit_op1_41(); /* vector? */
  twobit_load( 3, 3 );
  twobit_check( 3, 0, 0, 1530, compiled_block_2_1530 );
  twobit_stack( 3 );
  twobit_op1_401(); /* vector-length:vec */
  twobit_op2imm_522( fixnum(1) ); /* -:idx:idx */
  twobit_setreg( 4 );
  twobit_load( 2, 4 );
  twobit_pop( 4 );
  twobit_branch( 1525, compiled_block_2_1525 );
  twobit_label( 1529, compiled_block_2_1529 );
  twobit_load( 1, 2 );
  twobit_load( 3, 2 );
  twobit_stack( 3 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 2 );
  twobit_stack( 3 );
  twobit_op1_41(); /* vector? */
  twobit_load( 2, 3 );
  twobit_check( 2, 0, 0, 1532, compiled_block_2_1532 );
  twobit_stack( 3 );
  twobit_op1_401(); /* vector-length:vec */
  twobit_setreg( 2 );
  twobit_lexical( 1, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_lexical( 1, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_setrtn( 1533, compiled_block_2_1533 );
  twobit_invoke( 3 );
  twobit_label( 1533, compiled_block_2_1533 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_load( 3, 2 );
  twobit_reg( 4 );
  twobit_op2imm_131( fixnum(1), 136, compiled_temp_2_136 ); /* - */
  twobit_setreg( 4 );
  twobit_load( 1, 1 );
  twobit_load( 2, 4 );
  twobit_pop( 4 );
  twobit_label( 1524, compiled_block_2_1524 );
  twobit_reg( 4 );
  twobit_op2imm_branchf_635( fixnum(0), 137, compiled_temp_2_137, 1536, compiled_block_2_1536 ); /* internal:branchf-</imm */
  twobit_reg( 2 );
  twobit_return();
  twobit_label( 1536, compiled_block_2_1536 );
  twobit_save( 5 );
  twobit_store( 0, 0 );
  twobit_store( 1, 3 );
  twobit_store( 2, 1 );
  twobit_store( 3, 5 );
  twobit_store( 4, 2 );
  twobit_movereg( 4, 2 );
  twobit_movereg( 3, 1 );
  twobit_reg( 4 );
  twobit_op2imm_131( fixnum(1), 138, compiled_temp_2_138 ); /* - */
  twobit_setreg( 31 );
  twobit_store( 31, 4 );
  twobit_setrtn( 1537, compiled_block_2_1537 );
  twobit_jump( 2, 1258, compiled_block_2_1258 );
  twobit_label( 1537, compiled_block_2_1537 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_load( 3, 1 );
  twobit_load( 2, 2 );
  twobit_load( 1, 3 );
  twobit_global( 3 ); /* apply */
  twobit_setrtn( 1538, compiled_block_2_1538 );
  twobit_invoke( 4 );
  twobit_label( 1538, compiled_block_2_1538 );
  twobit_load( 0, 0 );
  twobit_setreg( 2 );
  twobit_load( 4, 4 );
  twobit_load( 1, 3 );
  twobit_load( 3, 5 );
  twobit_pop( 5 );
  twobit_branch( 1524, compiled_block_2_1524 );
  twobit_label( 1525, compiled_block_2_1525 );
  twobit_reg( 4 );
  twobit_op2imm_452( fixnum(0) ); /* <:fix:fix */
  twobit_branchf( 1541, compiled_block_2_1541 );
  twobit_reg( 2 );
  twobit_return();
  twobit_label( 1541, compiled_block_2_1541 );
  twobit_save( 3 );
  twobit_store( 0, 0 );
  twobit_store( 1, 2 );
  twobit_store( 3, 3 );
  twobit_reg( 4 );
  twobit_op2imm_523( fixnum(1), 139, compiled_temp_2_139 ); /* -:fix:fix */
  twobit_setreg( 31 );
  twobit_store( 31, 1 );
  twobit_movereg( 1, 30 );
  twobit_movereg( 4, 1 );
  twobit_reg( 3 );
  twobit_op1_401(); /* vector-length:vec */
  twobit_setreg( 29 );
  twobit_reg_op2_check_661(reg(4),reg(29),1542,compiled_block_2_1542); /* internal:check-range with (4 3 0) */
  twobit_reg( 3 );
  twobit_op2_402( 4 ); /* vector-ref:trusted */
  twobit_setreg( 3 );
  twobit_reg( 30 );
  twobit_setrtn( 1543, compiled_block_2_1543 );
  twobit_invoke( 3 );
  twobit_label( 1543, compiled_block_2_1543 );
  twobit_load( 0, 0 );
  twobit_setreg( 2 );
  twobit_load( 4, 1 );
  twobit_load( 1, 2 );
  twobit_load( 3, 3 );
  twobit_pop( 3 );
  twobit_branch( 1525, compiled_block_2_1525 );
  twobit_label( 1532, compiled_block_2_1532 );
  twobit_trap( 2, 0, 0, 162 );
  twobit_label( 1530, compiled_block_2_1530 );
  twobit_trap( 3, 0, 0, 162 );
  twobit_label( 1542, compiled_block_2_1542 );
  twobit_trap( 3, 4, 0, 160 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_27( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argsge( 2 );
  twobit_save( 3 );
  twobit_store( 0, 0 );
  twobit_store( 1, 1 );
  twobit_store( 3, 2 );
  twobit_global( 1 ); /* vector? */
  twobit_setreg( 1 );
  twobit_lexical( 0, 3 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_setrtn( 1546, compiled_block_2_1546 );
  twobit_jump( 1, 1257, compiled_block_2_1257 );
  twobit_label( 1546, compiled_block_2_1546 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_load( 2, 1 );
  twobit_global( 2 ); /* procedure? */
  twobit_setreg( 1 );
  twobit_lexical( 0, 3 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_setrtn( 1547, compiled_block_2_1547 );
  twobit_jump( 1, 1257, compiled_block_2_1257 );
  twobit_label( 1547, compiled_block_2_1547 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_stack( 2 );
  twobit_op1_branchf_610( 1549, compiled_block_2_1549 ); /* internal:branchf-null? */
  twobit_movereg( 4, 1 );
  twobit_stack( 3 );
  twobit_op1_41(); /* vector? */
  twobit_load( 3, 3 );
  twobit_check( 3, 0, 0, 1550, compiled_block_2_1550 );
  twobit_stack( 3 );
  twobit_op1_401(); /* vector-length:vec */
  twobit_setreg( 4 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op2_80( 3 ); /* make-vector */
  twobit_setreg( 2 );
  twobit_lexical( 0, 4 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_movereg( 3, 5 );
  twobit_load( 3, 3 );
  twobit_reg( 5 );
  twobit_pop( 3 );
  twobit_invoke( 4 );
  twobit_label( 1549, compiled_block_2_1549 );
  twobit_load( 1, 2 );
  twobit_stack( 3 );
  twobit_op1_41(); /* vector? */
  twobit_load( 2, 3 );
  twobit_check( 2, 0, 0, 1552, compiled_block_2_1552 );
  twobit_stack( 3 );
  twobit_op1_401(); /* vector-length:vec */
  twobit_setreg( 2 );
  twobit_lexical( 0, 3 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_lexical( 0, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_setrtn( 1553, compiled_block_2_1553 );
  twobit_invoke( 3 );
  twobit_label( 1553, compiled_block_2_1553 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op2_80( 3 ); /* make-vector */
  twobit_setreg( 2 );
  twobit_load( 3, 2 );
  twobit_stack( 3 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 1 );
  twobit_movereg( 1, 5 );
  twobit_load( 1, 1 );
  twobit_reg( 5 );
  twobit_pop( 3 );
  twobit_invoke( 4 );
  twobit_label( 1552, compiled_block_2_1552 );
  twobit_trap( 2, 0, 0, 162 );
  twobit_label( 1550, compiled_block_2_1550 );
  twobit_trap( 3, 0, 0, 162 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_28( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argsge( 2 );
  twobit_save( 4 );
  twobit_store( 0, 0 );
  twobit_store( 1, 1 );
  twobit_store( 3, 2 );
  twobit_global( 1 ); /* vector? */
  twobit_setreg( 1 );
  twobit_lexical( 0, 4 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_setrtn( 1555, compiled_block_2_1555 );
  twobit_jump( 1, 1257, compiled_block_2_1257 );
  twobit_label( 1555, compiled_block_2_1555 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_load( 2, 1 );
  twobit_global( 2 ); /* procedure? */
  twobit_setreg( 1 );
  twobit_lexical( 0, 4 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_setrtn( 1556, compiled_block_2_1556 );
  twobit_jump( 1, 1257, compiled_block_2_1257 );
  twobit_label( 1556, compiled_block_2_1556 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 4 );
  twobit_stack( 2 );
  twobit_op1_branchf_610( 1558, compiled_block_2_1558 ); /* internal:branchf-null? */
  twobit_movereg( 4, 1 );
  twobit_stack( 3 );
  twobit_op1_41(); /* vector? */
  twobit_load( 2, 3 );
  twobit_check( 2, 0, 0, 1559, compiled_block_2_1559 );
  twobit_stack( 3 );
  twobit_op1_401(); /* vector-length:vec */
  twobit_setreg( 4 );
  twobit_lexical( 0, 3 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_movereg( 3, 5 );
  twobit_load( 3, 3 );
  twobit_reg( 5 );
  twobit_setrtn( 1560, compiled_block_2_1560 );
  twobit_invoke( 4 );
  twobit_label( 1560, compiled_block_2_1560 );
  twobit_load( 0, 0 );
  twobit_skip( 1557, compiled_block_2_1557 );
  twobit_label( 1558, compiled_block_2_1558 );
  twobit_load( 1, 2 );
  twobit_load( 3, 2 );
  twobit_stack( 3 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 2 );
  twobit_store( 2, 1 );
  twobit_stack( 3 );
  twobit_op1_41(); /* vector? */
  twobit_load( 3, 3 );
  twobit_check( 3, 0, 0, 1561, compiled_block_2_1561 );
  twobit_stack( 3 );
  twobit_op1_401(); /* vector-length:vec */
  twobit_setreg( 2 );
  twobit_lexical( 0, 4 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_lexical( 0, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_setrtn( 1562, compiled_block_2_1562 );
  twobit_invoke( 3 );
  twobit_label( 1562, compiled_block_2_1562 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_load( 3, 1 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 2 );
  twobit_movereg( 2, 5 );
  twobit_load( 1, 4 );
  twobit_load( 2, 3 );
  twobit_reg( 5 );
  twobit_setrtn( 1563, compiled_block_2_1563 );
  twobit_invoke( 4 );
  twobit_label( 1563, compiled_block_2_1563 );
  twobit_load( 0, 0 );
  twobit_label( 1557, compiled_block_2_1557 );
  twobit_op1_3(); /* unspecified */
  twobit_pop( 4 );
  twobit_return();
  twobit_label( 1559, compiled_block_2_1559 );
  twobit_trap( 2, 0, 0, 162 );
  twobit_label( 1561, compiled_block_2_1561 );
  twobit_trap( 3, 0, 0, 162 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_29( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_lambda( compiled_start_2_132, 2, 0 );
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_2_132( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argsge( 2 );
  twobit_save( 3 );
  twobit_store( 0, 0 );
  twobit_store( 1, 1 );
  twobit_store( 3, 2 );
  twobit_global( 1 ); /* vector? */
  twobit_setreg( 1 );
  twobit_lexical( 1, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_setrtn( 1566, compiled_block_2_1566 );
  twobit_jump( 2, 1257, compiled_block_2_1257 );
  twobit_label( 1566, compiled_block_2_1566 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_load( 2, 1 );
  twobit_global( 2 ); /* procedure? */
  twobit_setreg( 1 );
  twobit_lexical( 1, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_setrtn( 1567, compiled_block_2_1567 );
  twobit_jump( 2, 1257, compiled_block_2_1257 );
  twobit_label( 1567, compiled_block_2_1567 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_stack( 2 );
  twobit_op1_branchf_610( 1569, compiled_block_2_1569 ); /* internal:branchf-null? */
  twobit_movereg( 4, 1 );
  twobit_stack( 3 );
  twobit_op1_41(); /* vector? */
  twobit_load( 3, 3 );
  twobit_check( 3, 0, 0, 1570, compiled_block_2_1570 );
  twobit_stack( 3 );
  twobit_op1_401(); /* vector-length:vec */
  twobit_setreg( 4 );
  twobit_load( 2, 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 3 );
  twobit_pop( 3 );
  twobit_branch( 1565, compiled_block_2_1565 );
  twobit_label( 1569, compiled_block_2_1569 );
  twobit_load( 1, 2 );
  twobit_load( 3, 2 );
  twobit_stack( 3 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 2 );
  twobit_stack( 3 );
  twobit_op1_41(); /* vector? */
  twobit_load( 2, 3 );
  twobit_check( 2, 0, 0, 1572, compiled_block_2_1572 );
  twobit_stack( 3 );
  twobit_op1_401(); /* vector-length:vec */
  twobit_setreg( 2 );
  twobit_lexical( 1, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_lexical( 1, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_setrtn( 1573, compiled_block_2_1573 );
  twobit_invoke( 3 );
  twobit_label( 1573, compiled_block_2_1573 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_load( 2, 2 );
  twobit_load( 1, 1 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 3 );
  twobit_pop( 3 );
  twobit_label( 1564, compiled_block_2_1564 );
  twobit_reg( 3 );
  twobit_op2_branchf_619( 4, 133, compiled_temp_2_133, 1576, compiled_block_2_1576 ); /* internal:branchf-< */
  twobit_save( 4 );
  twobit_store( 0, 0 );
  twobit_store( 1, 2 );
  twobit_store( 2, 3 );
  twobit_store( 3, 1 );
  twobit_store( 4, 4 );
  twobit_movereg( 2, 1 );
  twobit_movereg( 3, 2 );
  twobit_setrtn( 1577, compiled_block_2_1577 );
  twobit_jump( 2, 1258, compiled_block_2_1258 );
  twobit_label( 1577, compiled_block_2_1577 );
  twobit_load( 0, 0 );
  twobit_setreg( 3 );
  twobit_load( 2, 1 );
  twobit_load( 1, 2 );
  twobit_global( 3 ); /* apply */
  twobit_setrtn( 1578, compiled_block_2_1578 );
  twobit_invoke( 3 );
  twobit_label( 1578, compiled_block_2_1578 );
  twobit_load( 0, 0 );
  twobit_stack( 1 );
  twobit_op2imm_130( fixnum(1), 134, compiled_temp_2_134 ); /* + */
  twobit_setreg( 3 );
  twobit_load( 1, 2 );
  twobit_load( 2, 3 );
  twobit_load( 4, 4 );
  twobit_pop( 4 );
  twobit_branch( 1564, compiled_block_2_1564 );
  twobit_label( 1576, compiled_block_2_1576 );
  twobit_op1_3(); /* unspecified */
  twobit_return();
  twobit_label( 1565, compiled_block_2_1565 );
  twobit_reg( 3 );
  twobit_op2_407( 4 ); /* <:fix:fix */
  twobit_branchf( 1581, compiled_block_2_1581 );
  twobit_save( 4 );
  twobit_store( 0, 0 );
  twobit_store( 1, 2 );
  twobit_store( 2, 3 );
  twobit_store( 3, 1 );
  twobit_store( 4, 4 );
  twobit_movereg( 1, 31 );
  twobit_movereg( 3, 1 );
  twobit_reg( 2 );
  twobit_op1_401(); /* vector-length:vec */
  twobit_setreg( 30 );
  twobit_reg_op2_check_655(reg(3),reg(30),1582,compiled_block_2_1582); /* internal:check-<:fix:fix with (3 2 0) */
  twobit_reg( 2 );
  twobit_op2_402( 3 ); /* vector-ref:trusted */
  twobit_setreg( 2 );
  twobit_reg( 31 );
  twobit_setrtn( 1583, compiled_block_2_1583 );
  twobit_invoke( 2 );
  twobit_label( 1583, compiled_block_2_1583 );
  twobit_load( 0, 0 );
  twobit_stack( 1 );
  twobit_op2imm_520( fixnum(1) ); /* +:idx:idx */
  twobit_setreg( 3 );
  twobit_load( 1, 2 );
  twobit_load( 2, 3 );
  twobit_load( 4, 4 );
  twobit_pop( 4 );
  twobit_branch( 1565, compiled_block_2_1565 );
  twobit_label( 1581, compiled_block_2_1581 );
  twobit_op1_3(); /* unspecified */
  twobit_return();
  twobit_label( 1572, compiled_block_2_1572 );
  twobit_trap( 2, 0, 0, 162 );
  twobit_label( 1570, compiled_block_2_1570 );
  twobit_trap( 3, 0, 0, 162 );
  twobit_label( 1582, compiled_block_2_1582 );
  twobit_trap( 2, 3, 0, 160 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_30( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argsge( 2 );
  twobit_save( 4 );
  twobit_store( 0, 0 );
  twobit_store( 1, 1 );
  twobit_store( 3, 2 );
  twobit_global( 1 ); /* vector? */
  twobit_setreg( 1 );
  twobit_lexical( 0, 3 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_setrtn( 1586, compiled_block_2_1586 );
  twobit_jump( 1, 1257, compiled_block_2_1257 );
  twobit_label( 1586, compiled_block_2_1586 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_load( 2, 1 );
  twobit_global( 2 ); /* procedure? */
  twobit_setreg( 1 );
  twobit_lexical( 0, 3 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_setrtn( 1587, compiled_block_2_1587 );
  twobit_jump( 1, 1257, compiled_block_2_1257 );
  twobit_label( 1587, compiled_block_2_1587 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_stack( 2 );
  twobit_op1_branchf_610( 1589, compiled_block_2_1589 ); /* internal:branchf-null? */
  twobit_movereg( 4, 1 );
  twobit_lambda( compiled_start_2_128, 4, 1 );
  twobit_setreg( 1 );
  twobit_stack( 3 );
  twobit_op1_41(); /* vector? */
  twobit_load( 3, 3 );
  twobit_check( 3, 0, 0, 1593, compiled_block_2_1593 );
  twobit_stack( 3 );
  twobit_op1_401(); /* vector-length:vec */
  twobit_setreg( 3 );
  twobit_lexical( 0, 4 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_movereg( 4, 5 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 2 );
  twobit_load( 4, 3 );
  twobit_reg( 5 );
  twobit_pop( 4 );
  twobit_invoke( 4 );
  twobit_label( 1589, compiled_block_2_1589 );
  twobit_load( 1, 2 );
  twobit_store( 1, 1 );
  twobit_movereg( 4, 1 );
  twobit_lambda( compiled_start_2_129, 6, 1 );
  twobit_setreg( 4 );
  twobit_store( 4, 4 );
  twobit_load( 3, 2 );
  twobit_stack( 3 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 2 );
  twobit_stack( 3 );
  twobit_op1_41(); /* vector? */
  twobit_load( 1, 3 );
  twobit_check( 1, 0, 0, 1598, compiled_block_2_1598 );
  twobit_stack( 3 );
  twobit_op1_401(); /* vector-length:vec */
  twobit_setreg( 2 );
  twobit_lexical( 0, 3 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_lexical( 0, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 1 );
  twobit_movereg( 1, 4 );
  twobit_load( 1, 1 );
  twobit_reg( 4 );
  twobit_setrtn( 1599, compiled_block_2_1599 );
  twobit_invoke( 3 );
  twobit_label( 1599, compiled_block_2_1599 );
  twobit_load( 0, 0 );
  twobit_setreg( 3 );
  twobit_load( 1, 4 );
  twobit_load( 4, 2 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 2 );
  twobit_movereg( 2, 5 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 2 );
  twobit_reg( 5 );
  twobit_pop( 4 );
  twobit_invoke( 4 );
  twobit_label( 1593, compiled_block_2_1593 );
  twobit_trap( 3, 0, 0, 162 );
  twobit_label( 1598, compiled_block_2_1598 );
  twobit_trap( 1, 0, 0, 162 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_128( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 3 );
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_store( 2, 1 );
  twobit_movereg( 3, 2 );
  twobit_lexical( 0, 1 );
  twobit_setrtn( 1590, compiled_block_2_1590 );
  twobit_invoke( 2 );
  twobit_label( 1590, compiled_block_2_1590 );
  twobit_load( 0, 0 );
  twobit_branchf( 1592, compiled_block_2_1592 );
  twobit_stack( 1 );
  twobit_op2imm_130( fixnum(1), 131, compiled_temp_2_131 ); /* + */
  twobit_pop( 1 );
  twobit_return();
  twobit_label( 1592, compiled_block_2_1592 );
  twobit_stack( 1 );
  twobit_pop( 1 );
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_2_129( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argsge( 2 );
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_store( 2, 1 );
  twobit_movereg( 1, 2 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_global( 1 ); /* apply */
  twobit_setrtn( 1595, compiled_block_2_1595 );
  twobit_invoke( 3 );
  twobit_label( 1595, compiled_block_2_1595 );
  twobit_load( 0, 0 );
  twobit_branchf( 1597, compiled_block_2_1597 );
  twobit_stack( 1 );
  twobit_op2imm_130( fixnum(1), 130, compiled_temp_2_130 ); /* + */
  twobit_pop( 1 );
  twobit_return();
  twobit_label( 1597, compiled_block_2_1597 );
  twobit_stack( 1 );
  twobit_pop( 1 );
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_2_31( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argsge( 2 );
  twobit_lexical( 0, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 31 );
  twobit_reg( 31 );
  twobit_invoke( 4 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_32( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argsge( 2 );
  twobit_lambda( compiled_start_2_127, 2, 1 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 31 );
  twobit_reg( 31 );
  twobit_invoke( 4 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_127( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argsge( 0 );
  twobit_save( 0 );
  twobit_store( 0, 0 );
  twobit_movereg( 1, 2 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_global( 1 ); /* apply */
  twobit_setrtn( 1602, compiled_block_2_1602 );
  twobit_invoke( 2 );
  twobit_label( 1602, compiled_block_2_1602 );
  twobit_load( 0, 0 );
  twobit_op1_9(); /* not */
  twobit_pop( 0 );
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_2_33( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_lambda( compiled_start_2_124, 2, 0 );
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_2_124( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 4 );
  twobit_save( 4 );
  twobit_store( 0, 0 );
  twobit_store( 1, 2 );
  twobit_store( 3, 3 );
  twobit_store( 4, 1 );
  twobit_movereg( 4, 3 );
  twobit_global( 1 ); /* vector? */
  twobit_setreg( 1 );
  twobit_setrtn( 1606, compiled_block_2_1606 );
  twobit_jump( 2, 1257, compiled_block_2_1257 );
  twobit_label( 1606, compiled_block_2_1606 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 4 );
  twobit_load( 3, 1 );
  twobit_load( 2, 2 );
  twobit_global( 2 ); /* procedure? */
  twobit_setreg( 1 );
  twobit_setrtn( 1607, compiled_block_2_1607 );
  twobit_jump( 2, 1257, compiled_block_2_1257 );
  twobit_label( 1607, compiled_block_2_1607 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_stack( 3 );
  twobit_op1_branchf_610( 1609, compiled_block_2_1609 ); /* internal:branchf-null? */
  twobit_movereg( 4, 1 );
  twobit_stack( 4 );
  twobit_op1_41(); /* vector? */
  twobit_load( 3, 4 );
  twobit_check( 3, 0, 0, 1610, compiled_block_2_1610 );
  twobit_stack( 4 );
  twobit_op1_401(); /* vector-length:vec */
  twobit_setreg( 3 );
  twobit_load( 2, 4 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_pop( 4 );
  twobit_branch( 1605, compiled_block_2_1605 );
  twobit_label( 1609, compiled_block_2_1609 );
  twobit_load( 1, 3 );
  twobit_load( 3, 3 );
  twobit_stack( 4 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 3 );
  twobit_load( 3, 1 );
  twobit_stack( 4 );
  twobit_op1_41(); /* vector? */
  twobit_load( 2, 4 );
  twobit_check( 2, 0, 0, 1612, compiled_block_2_1612 );
  twobit_stack( 4 );
  twobit_op1_401(); /* vector-length:vec */
  twobit_setreg( 2 );
  twobit_lexical( 1, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_setrtn( 1613, compiled_block_2_1613 );
  twobit_invoke( 3 );
  twobit_label( 1613, compiled_block_2_1613 );
  twobit_load( 0, 0 );
  twobit_setreg( 3 );
  twobit_load( 2, 3 );
  twobit_load( 1, 2 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_pop( 4 );
  twobit_label( 1604, compiled_block_2_1604 );
  twobit_reg( 4 );
  twobit_op2_branchf_623( 3, 125, compiled_temp_2_125, 1616, compiled_block_2_1616 ); /* internal:branchf-= */
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_return();
  twobit_label( 1616, compiled_block_2_1616 );
  twobit_save( 4 );
  twobit_store( 0, 0 );
  twobit_store( 1, 1 );
  twobit_store( 2, 3 );
  twobit_store( 3, 4 );
  twobit_store( 4, 2 );
  twobit_movereg( 2, 1 );
  twobit_movereg( 4, 2 );
  twobit_setrtn( 1617, compiled_block_2_1617 );
  twobit_jump( 2, 1258, compiled_block_2_1258 );
  twobit_label( 1617, compiled_block_2_1617 );
  twobit_load( 0, 0 );
  twobit_setreg( 2 );
  twobit_load( 1, 1 );
  twobit_global( 3 ); /* apply */
  twobit_setrtn( 1618, compiled_block_2_1618 );
  twobit_invoke( 2 );
  twobit_label( 1618, compiled_block_2_1618 );
  twobit_load( 0, 0 );
  twobit_branchf( 1620, compiled_block_2_1620 );
  twobit_stack( 2 );
  twobit_pop( 4 );
  twobit_return();
  twobit_label( 1620, compiled_block_2_1620 );
  twobit_stack( 2 );
  twobit_op2imm_130( fixnum(1), 126, compiled_temp_2_126 ); /* + */
  twobit_setreg( 4 );
  twobit_load( 1, 1 );
  twobit_load( 2, 3 );
  twobit_load( 3, 4 );
  twobit_pop( 4 );
  twobit_branch( 1604, compiled_block_2_1604 );
  twobit_label( 1605, compiled_block_2_1605 );
  twobit_reg( 4 );
  twobit_op2_406( 3 ); /* =:fix:fix */
  twobit_branchf( 1623, compiled_block_2_1623 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_return();
  twobit_label( 1623, compiled_block_2_1623 );
  twobit_save( 4 );
  twobit_store( 0, 0 );
  twobit_store( 1, 2 );
  twobit_store( 2, 3 );
  twobit_store( 3, 4 );
  twobit_store( 4, 1 );
  twobit_movereg( 1, 31 );
  twobit_reg( 2 );
  twobit_op1_401(); /* vector-length:vec */
  twobit_setreg( 30 );
  twobit_reg_op2_check_655(reg(4),reg(30),1624,compiled_block_2_1624); /* internal:check-<:fix:fix with (4 2 0) */
  twobit_reg( 2 );
  twobit_op2_402( 4 ); /* vector-ref:trusted */
  twobit_setreg( 1 );
  twobit_reg( 31 );
  twobit_setrtn( 1625, compiled_block_2_1625 );
  twobit_invoke( 1 );
  twobit_label( 1625, compiled_block_2_1625 );
  twobit_load( 0, 0 );
  twobit_branchf( 1627, compiled_block_2_1627 );
  twobit_stack( 1 );
  twobit_pop( 4 );
  twobit_return();
  twobit_label( 1627, compiled_block_2_1627 );
  twobit_stack( 1 );
  twobit_op2imm_520( fixnum(1) ); /* +:idx:idx */
  twobit_setreg( 4 );
  twobit_load( 1, 2 );
  twobit_load( 2, 3 );
  twobit_load( 3, 4 );
  twobit_pop( 4 );
  twobit_branch( 1605, compiled_block_2_1605 );
  twobit_label( 1612, compiled_block_2_1612 );
  twobit_trap( 2, 0, 0, 162 );
  twobit_label( 1624, compiled_block_2_1624 );
  twobit_trap( 2, 4, 0, 160 );
  twobit_label( 1610, compiled_block_2_1610 );
  twobit_trap( 3, 0, 0, 162 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_34( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argsge( 2 );
  twobit_lexical( 0, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 31 );
  twobit_reg( 31 );
  twobit_invoke( 4 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_35( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argsge( 2 );
  twobit_lambda( compiled_start_2_123, 2, 1 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 31 );
  twobit_reg( 31 );
  twobit_invoke( 4 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_123( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argsge( 0 );
  twobit_save( 0 );
  twobit_store( 0, 0 );
  twobit_movereg( 1, 2 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_global( 1 ); /* apply */
  twobit_setrtn( 1631, compiled_block_2_1631 );
  twobit_invoke( 2 );
  twobit_label( 1631, compiled_block_2_1631 );
  twobit_load( 0, 0 );
  twobit_op1_9(); /* not */
  twobit_pop( 0 );
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_2_36( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_lambda( compiled_start_2_119, 2, 0 );
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_2_119( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 4 );
  twobit_save( 4 );
  twobit_store( 0, 0 );
  twobit_store( 1, 2 );
  twobit_store( 3, 3 );
  twobit_store( 4, 1 );
  twobit_movereg( 4, 3 );
  twobit_global( 1 ); /* vector? */
  twobit_setreg( 1 );
  twobit_setrtn( 1635, compiled_block_2_1635 );
  twobit_jump( 2, 1257, compiled_block_2_1257 );
  twobit_label( 1635, compiled_block_2_1635 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 4 );
  twobit_load( 3, 1 );
  twobit_load( 2, 2 );
  twobit_global( 2 ); /* procedure? */
  twobit_setreg( 1 );
  twobit_setrtn( 1636, compiled_block_2_1636 );
  twobit_jump( 2, 1257, compiled_block_2_1257 );
  twobit_label( 1636, compiled_block_2_1636 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_stack( 3 );
  twobit_op1_branchf_610( 1638, compiled_block_2_1638 ); /* internal:branchf-null? */
  twobit_movereg( 4, 1 );
  twobit_stack( 4 );
  twobit_op1_41(); /* vector? */
  twobit_load( 3, 4 );
  twobit_check( 3, 0, 0, 1639, compiled_block_2_1639 );
  twobit_stack( 4 );
  twobit_op1_401(); /* vector-length:vec */
  twobit_op2imm_522( fixnum(1) ); /* -:idx:idx */
  twobit_setreg( 3 );
  twobit_load( 2, 4 );
  twobit_pop( 4 );
  twobit_branch( 1634, compiled_block_2_1634 );
  twobit_label( 1638, compiled_block_2_1638 );
  twobit_load( 1, 3 );
  twobit_load( 3, 3 );
  twobit_stack( 4 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 3 );
  twobit_load( 3, 1 );
  twobit_stack( 4 );
  twobit_op1_41(); /* vector? */
  twobit_load( 2, 4 );
  twobit_check( 2, 0, 0, 1641, compiled_block_2_1641 );
  twobit_stack( 4 );
  twobit_op1_401(); /* vector-length:vec */
  twobit_setreg( 2 );
  twobit_lexical( 1, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_setrtn( 1642, compiled_block_2_1642 );
  twobit_invoke( 3 );
  twobit_label( 1642, compiled_block_2_1642 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_load( 2, 3 );
  twobit_reg( 4 );
  twobit_op2imm_131( fixnum(1), 120, compiled_temp_2_120 ); /* - */
  twobit_setreg( 3 );
  twobit_load( 1, 2 );
  twobit_pop( 4 );
  twobit_label( 1633, compiled_block_2_1633 );
  twobit_reg( 3 );
  twobit_op2imm_branchf_635( fixnum(0), 121, compiled_temp_2_121, 1645, compiled_block_2_1645 ); /* internal:branchf-</imm */
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_return();
  twobit_label( 1645, compiled_block_2_1645 );
  twobit_save( 3 );
  twobit_store( 0, 0 );
  twobit_store( 1, 1 );
  twobit_store( 2, 3 );
  twobit_store( 3, 2 );
  twobit_movereg( 2, 1 );
  twobit_movereg( 3, 2 );
  twobit_setrtn( 1646, compiled_block_2_1646 );
  twobit_jump( 2, 1258, compiled_block_2_1258 );
  twobit_label( 1646, compiled_block_2_1646 );
  twobit_load( 0, 0 );
  twobit_setreg( 2 );
  twobit_load( 1, 1 );
  twobit_global( 3 ); /* apply */
  twobit_setrtn( 1647, compiled_block_2_1647 );
  twobit_invoke( 2 );
  twobit_label( 1647, compiled_block_2_1647 );
  twobit_load( 0, 0 );
  twobit_branchf( 1649, compiled_block_2_1649 );
  twobit_stack( 2 );
  twobit_pop( 3 );
  twobit_return();
  twobit_label( 1649, compiled_block_2_1649 );
  twobit_stack( 2 );
  twobit_op2imm_131( fixnum(1), 122, compiled_temp_2_122 ); /* - */
  twobit_setreg( 3 );
  twobit_load( 1, 1 );
  twobit_load( 2, 3 );
  twobit_pop( 3 );
  twobit_branch( 1633, compiled_block_2_1633 );
  twobit_label( 1634, compiled_block_2_1634 );
  twobit_reg( 3 );
  twobit_op2imm_452( fixnum(0) ); /* <:fix:fix */
  twobit_branchf( 1652, compiled_block_2_1652 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_return();
  twobit_label( 1652, compiled_block_2_1652 );
  twobit_save( 3 );
  twobit_store( 0, 0 );
  twobit_store( 1, 2 );
  twobit_store( 2, 3 );
  twobit_store( 3, 1 );
  twobit_movereg( 1, 4 );
  twobit_reg( 2 );
  twobit_op1_401(); /* vector-length:vec */
  twobit_setreg( 31 );
  twobit_reg_op2_check_661(reg(3),reg(31),1653,compiled_block_2_1653); /* internal:check-range with (3 2 0) */
  twobit_reg( 2 );
  twobit_op2_402( 3 ); /* vector-ref:trusted */
  twobit_setreg( 1 );
  twobit_reg( 4 );
  twobit_setrtn( 1654, compiled_block_2_1654 );
  twobit_invoke( 1 );
  twobit_label( 1654, compiled_block_2_1654 );
  twobit_load( 0, 0 );
  twobit_branchf( 1656, compiled_block_2_1656 );
  twobit_stack( 1 );
  twobit_pop( 3 );
  twobit_return();
  twobit_label( 1656, compiled_block_2_1656 );
  twobit_stack( 1 );
  twobit_op2imm_522( fixnum(1) ); /* -:idx:idx */
  twobit_setreg( 3 );
  twobit_load( 1, 2 );
  twobit_load( 2, 3 );
  twobit_pop( 3 );
  twobit_branch( 1634, compiled_block_2_1634 );
  twobit_label( 1641, compiled_block_2_1641 );
  twobit_trap( 2, 0, 0, 162 );
  twobit_label( 1639, compiled_block_2_1639 );
  twobit_trap( 3, 0, 0, 162 );
  twobit_label( 1653, compiled_block_2_1653 );
  twobit_trap( 2, 3, 0, 160 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_37( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argsge( 3 );
  twobit_save( 4 );
  twobit_store( 0, 0 );
  twobit_store( 1, 1 );
  twobit_store( 2, 4 );
  twobit_store( 4, 2 );
  twobit_movereg( 3, 2 );
  twobit_global( 1 ); /* procedure? */
  twobit_setreg( 1 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_setrtn( 1659, compiled_block_2_1659 );
  twobit_jump( 1, 1257, compiled_block_2_1257 );
  twobit_label( 1659, compiled_block_2_1659 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_load( 2, 1 );
  twobit_global( 2 ); /* vector? */
  twobit_setreg( 1 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_setrtn( 1660, compiled_block_2_1660 );
  twobit_jump( 1, 1257, compiled_block_2_1257 );
  twobit_label( 1660, compiled_block_2_1660 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_load( 2, 2 );
  twobit_movereg( 4, 1 );
  twobit_lambda( compiled_start_2_111, 4, 2 );
  twobit_setreg( 1 );
  twobit_store( 1, 1 );
  twobit_movereg( 4, 3 );
  twobit_load( 2, 3 );
  twobit_load( 1, 4 );
  twobit_lambda( compiled_start_2_112, 6, 3 );
  twobit_setreg( 2 );
  twobit_load( 1, 1 );
  twobit_global( 7 ); /* call-with-values */
  twobit_pop( 4 );
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_111( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_lexical( 1, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 2 );
  twobit_jump( 2, 1254, compiled_block_2_1254 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_112( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_setreg( 3 );
  twobit_label( 1662, compiled_block_2_1662 );
  twobit_reg( 1 );
  twobit_op2_61( 2, 113, compiled_temp_2_113 ); /* + */
  twobit_imm_const_setreg( fixnum(2), 4 ); /* 2 */
  twobit_op2_65( 4, 114, compiled_temp_2_114 ); /* quotient */
  twobit_setreg( 4 );
  twobit_reg( 1 );
  twobit_op2_branchf_623( 2, 115, compiled_temp_2_115, 1666, compiled_block_2_1666 ); /* internal:branchf-= */
  twobit_imm_const( TRUE_CONST ); /* #t */
  twobit_skip( 1665, compiled_block_2_1665 );
  twobit_label( 1666, compiled_block_2_1666 );
  twobit_reg( 3 );
  twobit_branchf( 1668, compiled_block_2_1668 );
  twobit_reg( 4 );
  twobit_op2_68( 3, 116, compiled_temp_2_116 ); /* = */
  twobit_skip( 1665, compiled_block_2_1665 );
  twobit_label( 1668, compiled_block_2_1668 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1665, compiled_block_2_1665 );
  twobit_branchf( 1670, compiled_block_2_1670 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_return();
  twobit_label( 1670, compiled_block_2_1670 );
  twobit_save( 4 );
  twobit_store( 0, 0 );
  twobit_store( 1, 3 );
  twobit_store( 2, 4 );
  twobit_store( 4, 2 );
  twobit_lexical( 1, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_const( 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_lexical( 0, 2 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 1 );
  twobit_reg( 4 );
  twobit_op1_23(); /* fixnum? */
  twobit_setreg( 31 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 30 );
  twobit_reg( 31 );
  twobit_check( 4, 30, 0, 1671, compiled_block_2_1671 );
  twobit_lexical( 0, 3 );
  twobit_op1_41(); /* vector? */
  twobit_setreg( 31 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 30 );
  twobit_reg( 31 );
  twobit_check( 4, 30, 0, 1671, compiled_block_2_1671 );
  twobit_lexical( 0, 3 );
  twobit_op1_401(); /* vector-length:vec */
  twobit_setreg( 31 );
  twobit_reg( 4 );
  twobit_op2_407( 31 ); /* <:fix:fix */
  twobit_setreg( 31 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 30 );
  twobit_reg( 31 );
  twobit_check( 4, 30, 0, 1671, compiled_block_2_1671 );
  twobit_reg( 4 );
  twobit_op2imm_455( fixnum(0) ); /* >=:fix:fix */
  twobit_setreg( 31 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 30 );
  twobit_reg( 31 );
  twobit_check( 4, 30, 0, 1671, compiled_block_2_1671 );
  twobit_lexical( 0, 3 );
  twobit_op2_402( 4 ); /* vector-ref:trusted */
  twobit_setreg( 1 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 2 );
  twobit_lexical( 0, 2 );
  twobit_setrtn( 1672, compiled_block_2_1672 );
  twobit_invoke( 2 );
  twobit_label( 1672, compiled_block_2_1672 );
  twobit_load( 0, 0 );
  twobit_setreg( 2 );
  twobit_load( 3, 1 );
  twobit_global( 2 ); /* integer? */
  twobit_setreg( 1 );
  twobit_setrtn( 1673, compiled_block_2_1673 );
  twobit_jump( 2, 1257, compiled_block_2_1257 );
  twobit_label( 1673, compiled_block_2_1673 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_612( 117, compiled_temp_2_117, 1675, compiled_block_2_1675 ); /* internal:branchf-zero? */
  twobit_stack( 2 );
  twobit_pop( 4 );
  twobit_return();
  twobit_label( 1675, compiled_block_2_1675 );
  twobit_reg( 4 );
  twobit_op2imm_branchf_636( fixnum(0), 118, compiled_temp_2_118, 1677, compiled_block_2_1677 ); /* internal:branchf->/imm */
  twobit_load( 1, 3 );
  twobit_load( 2, 2 );
  twobit_load( 3, 2 );
  twobit_pop( 4 );
  twobit_branch( 1662, compiled_block_2_1662 );
  twobit_label( 1677, compiled_block_2_1677 );
  twobit_load( 1, 2 );
  twobit_load( 2, 4 );
  twobit_load( 3, 2 );
  twobit_pop( 4 );
  twobit_branch( 1662, compiled_block_2_1662 );
  twobit_label( 1671, compiled_block_2_1671 );
  twobit_trap( 30, 4, 0, 160 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_38( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_lambda( compiled_start_2_106, 2, 0 );
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_2_106( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argsge( 2 );
  twobit_save( 3 );
  twobit_store( 0, 0 );
  twobit_store( 1, 1 );
  twobit_store( 3, 2 );
  twobit_global( 1 ); /* vector? */
  twobit_setreg( 1 );
  twobit_lexical( 1, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_setrtn( 1683, compiled_block_2_1683 );
  twobit_jump( 2, 1257, compiled_block_2_1257 );
  twobit_label( 1683, compiled_block_2_1683 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_load( 2, 1 );
  twobit_global( 2 ); /* procedure? */
  twobit_setreg( 1 );
  twobit_lexical( 1, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_setrtn( 1684, compiled_block_2_1684 );
  twobit_jump( 2, 1257, compiled_block_2_1257 );
  twobit_label( 1684, compiled_block_2_1684 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_stack( 2 );
  twobit_op1_branchf_610( 1686, compiled_block_2_1686 ); /* internal:branchf-null? */
  twobit_movereg( 4, 1 );
  twobit_stack( 3 );
  twobit_op1_41(); /* vector? */
  twobit_load( 3, 3 );
  twobit_check( 3, 0, 0, 1687, compiled_block_2_1687 );
  twobit_stack( 3 );
  twobit_op1_401(); /* vector-length:vec */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op2imm_522( fixnum(1) ); /* -:idx:idx */
  twobit_setreg( 3 );
  twobit_movereg( 3, 5 );
  twobit_load( 2, 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 3 );
  twobit_pop( 3 );
  twobit_branch( 1682, compiled_block_2_1682 );
  twobit_label( 1686, compiled_block_2_1686 );
  twobit_load( 1, 2 );
  twobit_stack( 3 );
  twobit_op1_41(); /* vector? */
  twobit_load( 2, 3 );
  twobit_check( 2, 0, 0, 1689, compiled_block_2_1689 );
  twobit_stack( 3 );
  twobit_op1_401(); /* vector-length:vec */
  twobit_setreg( 2 );
  twobit_lexical( 1, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_lexical( 1, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_setrtn( 1690, compiled_block_2_1690 );
  twobit_invoke( 3 );
  twobit_label( 1690, compiled_block_2_1690 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_load( 3, 2 );
  twobit_stack( 3 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 2 );
  twobit_reg( 4 );
  twobit_op2imm_131( fixnum(1), 107, compiled_temp_2_107 ); /* - */
  twobit_setreg( 3 );
  twobit_movereg( 3, 5 );
  twobit_load( 1, 1 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 3 );
  twobit_pop( 3 );
  twobit_label( 1681, compiled_block_2_1681 );
  twobit_reg( 3 );
  twobit_op2_branchf_623( 4, 108, compiled_temp_2_108, 1693, compiled_block_2_1693 ); /* internal:branchf-= */
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_return();
  twobit_label( 1693, compiled_block_2_1693 );
  twobit_reg( 3 );
  twobit_op2_branchf_623( 5, 109, compiled_temp_2_109, 1695, compiled_block_2_1695 ); /* internal:branchf-= */
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_store( 1, 1 );
  twobit_movereg( 2, 1 );
  twobit_movereg( 3, 2 );
  twobit_setrtn( 1696, compiled_block_2_1696 );
  twobit_jump( 2, 1258, compiled_block_2_1258 );
  twobit_label( 1696, compiled_block_2_1696 );
  twobit_load( 0, 0 );
  twobit_setreg( 2 );
  twobit_load( 1, 1 );
  twobit_global( 3 ); /* apply */
  twobit_pop( 1 );
  twobit_invoke( 2 );
  twobit_label( 1695, compiled_block_2_1695 );
  twobit_save( 5 );
  twobit_store( 0, 0 );
  twobit_store( 1, 1 );
  twobit_store( 2, 3 );
  twobit_store( 3, 2 );
  twobit_store( 4, 4 );
  twobit_store( 5, 5 );
  twobit_movereg( 2, 1 );
  twobit_movereg( 3, 2 );
  twobit_setrtn( 1698, compiled_block_2_1698 );
  twobit_jump( 2, 1258, compiled_block_2_1258 );
  twobit_label( 1698, compiled_block_2_1698 );
  twobit_load( 0, 0 );
  twobit_setreg( 2 );
  twobit_load( 1, 1 );
  twobit_global( 3 ); /* apply */
  twobit_setrtn( 1699, compiled_block_2_1699 );
  twobit_invoke( 2 );
  twobit_label( 1699, compiled_block_2_1699 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 1701, compiled_block_2_1701 );
  twobit_reg( 4 );
  twobit_pop( 5 );
  twobit_return();
  twobit_label( 1701, compiled_block_2_1701 );
  twobit_stack( 2 );
  twobit_op2imm_130( fixnum(1), 110, compiled_temp_2_110 ); /* + */
  twobit_setreg( 3 );
  twobit_load( 1, 1 );
  twobit_load( 2, 3 );
  twobit_load( 4, 4 );
  twobit_load( 5, 5 );
  twobit_pop( 5 );
  twobit_branch( 1681, compiled_block_2_1681 );
  twobit_label( 1682, compiled_block_2_1682 );
  twobit_reg( 3 );
  twobit_op2_406( 4 ); /* =:fix:fix */
  twobit_branchf( 1704, compiled_block_2_1704 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_return();
  twobit_label( 1704, compiled_block_2_1704 );
  twobit_reg( 3 );
  twobit_op2_406( 5 ); /* =:fix:fix */
  twobit_branchf( 1706, compiled_block_2_1706 );
  twobit_movereg( 1, 4 );
  twobit_reg( 2 );
  twobit_op1_401(); /* vector-length:vec */
  twobit_setreg( 1 );
  twobit_reg_op2_check_655(reg(3),reg(1),1707,compiled_block_2_1707); /* internal:check-<:fix:fix with (3 2 0) */
  twobit_reg( 2 );
  twobit_op2_402( 3 ); /* vector-ref:trusted */
  twobit_setreg( 1 );
  twobit_reg( 4 );
  twobit_invoke( 1 );
  twobit_label( 1706, compiled_block_2_1706 );
  twobit_save( 5 );
  twobit_store( 0, 0 );
  twobit_store( 1, 2 );
  twobit_store( 2, 3 );
  twobit_store( 3, 1 );
  twobit_store( 4, 4 );
  twobit_store( 5, 5 );
  twobit_movereg( 1, 31 );
  twobit_reg( 2 );
  twobit_op1_401(); /* vector-length:vec */
  twobit_setreg( 30 );
  twobit_reg_op2_check_655(reg(3),reg(30),1707,compiled_block_2_1707); /* internal:check-<:fix:fix with (3 2 0) */
  twobit_reg( 2 );
  twobit_op2_402( 3 ); /* vector-ref:trusted */
  twobit_setreg( 1 );
  twobit_reg( 31 );
  twobit_setrtn( 1709, compiled_block_2_1709 );
  twobit_invoke( 1 );
  twobit_label( 1709, compiled_block_2_1709 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 1711, compiled_block_2_1711 );
  twobit_reg( 4 );
  twobit_pop( 5 );
  twobit_return();
  twobit_label( 1711, compiled_block_2_1711 );
  twobit_stack( 1 );
  twobit_op2imm_520( fixnum(1) ); /* +:idx:idx */
  twobit_setreg( 3 );
  twobit_load( 1, 2 );
  twobit_load( 2, 3 );
  twobit_load( 4, 4 );
  twobit_load( 5, 5 );
  twobit_pop( 5 );
  twobit_branch( 1682, compiled_block_2_1682 );
  twobit_label( 1689, compiled_block_2_1689 );
  twobit_trap( 2, 0, 0, 162 );
  twobit_label( 1687, compiled_block_2_1687 );
  twobit_trap( 3, 0, 0, 162 );
  twobit_label( 1707, compiled_block_2_1707 );
  twobit_trap( 2, 3, 0, 160 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_39( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_lambda( compiled_start_2_101, 2, 0 );
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_2_101( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argsge( 2 );
  twobit_save( 3 );
  twobit_store( 0, 0 );
  twobit_store( 1, 1 );
  twobit_store( 3, 2 );
  twobit_global( 1 ); /* vector? */
  twobit_setreg( 1 );
  twobit_lexical( 1, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_setrtn( 1716, compiled_block_2_1716 );
  twobit_jump( 2, 1257, compiled_block_2_1257 );
  twobit_label( 1716, compiled_block_2_1716 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_load( 2, 1 );
  twobit_global( 2 ); /* procedure? */
  twobit_setreg( 1 );
  twobit_lexical( 1, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_setrtn( 1717, compiled_block_2_1717 );
  twobit_jump( 2, 1257, compiled_block_2_1257 );
  twobit_label( 1717, compiled_block_2_1717 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_stack( 2 );
  twobit_op1_branchf_610( 1719, compiled_block_2_1719 ); /* internal:branchf-null? */
  twobit_movereg( 4, 1 );
  twobit_stack( 3 );
  twobit_op1_41(); /* vector? */
  twobit_load( 3, 3 );
  twobit_check( 3, 0, 0, 1720, compiled_block_2_1720 );
  twobit_stack( 3 );
  twobit_op1_401(); /* vector-length:vec */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op2imm_522( fixnum(1) ); /* -:idx:idx */
  twobit_setreg( 3 );
  twobit_movereg( 3, 5 );
  twobit_load( 2, 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 3 );
  twobit_pop( 3 );
  twobit_branch( 1715, compiled_block_2_1715 );
  twobit_label( 1719, compiled_block_2_1719 );
  twobit_load( 1, 2 );
  twobit_stack( 3 );
  twobit_op1_41(); /* vector? */
  twobit_load( 2, 3 );
  twobit_check( 2, 0, 0, 1722, compiled_block_2_1722 );
  twobit_stack( 3 );
  twobit_op1_401(); /* vector-length:vec */
  twobit_setreg( 2 );
  twobit_lexical( 1, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_lexical( 1, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_setrtn( 1723, compiled_block_2_1723 );
  twobit_invoke( 3 );
  twobit_label( 1723, compiled_block_2_1723 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_load( 3, 2 );
  twobit_stack( 3 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 2 );
  twobit_reg( 4 );
  twobit_op2imm_131( fixnum(1), 102, compiled_temp_2_102 ); /* - */
  twobit_setreg( 3 );
  twobit_movereg( 3, 5 );
  twobit_load( 1, 1 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 3 );
  twobit_pop( 3 );
  twobit_label( 1714, compiled_block_2_1714 );
  twobit_reg( 3 );
  twobit_op2_68( 4, 103, compiled_temp_2_103 ); /* = */
  twobit_setreg( 31 );
  twobit_reg( 31 );
  twobit_branchf( 1726, compiled_block_2_1726 );
  twobit_reg( 31 );
  twobit_return();
  twobit_label( 1726, compiled_block_2_1726 );
  twobit_reg( 3 );
  twobit_op2_branchf_623( 5, 104, compiled_temp_2_104, 1728, compiled_block_2_1728 ); /* internal:branchf-= */
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_store( 1, 1 );
  twobit_movereg( 2, 1 );
  twobit_movereg( 3, 2 );
  twobit_setrtn( 1729, compiled_block_2_1729 );
  twobit_jump( 2, 1258, compiled_block_2_1258 );
  twobit_label( 1729, compiled_block_2_1729 );
  twobit_load( 0, 0 );
  twobit_setreg( 2 );
  twobit_load( 1, 1 );
  twobit_global( 3 ); /* apply */
  twobit_pop( 1 );
  twobit_invoke( 2 );
  twobit_label( 1728, compiled_block_2_1728 );
  twobit_save( 5 );
  twobit_store( 0, 0 );
  twobit_store( 1, 1 );
  twobit_store( 2, 3 );
  twobit_store( 3, 2 );
  twobit_store( 4, 4 );
  twobit_store( 5, 5 );
  twobit_movereg( 2, 1 );
  twobit_movereg( 3, 2 );
  twobit_setrtn( 1731, compiled_block_2_1731 );
  twobit_jump( 2, 1258, compiled_block_2_1258 );
  twobit_label( 1731, compiled_block_2_1731 );
  twobit_load( 0, 0 );
  twobit_setreg( 2 );
  twobit_load( 1, 1 );
  twobit_global( 3 ); /* apply */
  twobit_setrtn( 1732, compiled_block_2_1732 );
  twobit_invoke( 2 );
  twobit_label( 1732, compiled_block_2_1732 );
  twobit_load( 0, 0 );
  twobit_branchf( 1734, compiled_block_2_1734 );
  twobit_stack( 2 );
  twobit_op2imm_130( fixnum(1), 105, compiled_temp_2_105 ); /* + */
  twobit_setreg( 3 );
  twobit_load( 1, 1 );
  twobit_load( 2, 3 );
  twobit_load( 4, 4 );
  twobit_load( 5, 5 );
  twobit_pop( 5 );
  twobit_branch( 1714, compiled_block_2_1714 );
  twobit_label( 1734, compiled_block_2_1734 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_pop( 5 );
  twobit_return();
  twobit_label( 1715, compiled_block_2_1715 );
  twobit_reg( 3 );
  twobit_op2_406( 4 ); /* =:fix:fix */
  twobit_setreg( 31 );
  twobit_reg( 31 );
  twobit_branchf( 1737, compiled_block_2_1737 );
  twobit_reg( 31 );
  twobit_return();
  twobit_label( 1737, compiled_block_2_1737 );
  twobit_reg( 3 );
  twobit_op2_406( 5 ); /* =:fix:fix */
  twobit_branchf( 1739, compiled_block_2_1739 );
  twobit_movereg( 1, 4 );
  twobit_reg( 2 );
  twobit_op1_401(); /* vector-length:vec */
  twobit_setreg( 1 );
  twobit_reg_op2_check_655(reg(3),reg(1),1740,compiled_block_2_1740); /* internal:check-<:fix:fix with (3 2 0) */
  twobit_reg( 2 );
  twobit_op2_402( 3 ); /* vector-ref:trusted */
  twobit_setreg( 1 );
  twobit_reg( 4 );
  twobit_invoke( 1 );
  twobit_label( 1739, compiled_block_2_1739 );
  twobit_save( 5 );
  twobit_store( 0, 0 );
  twobit_store( 1, 2 );
  twobit_store( 2, 3 );
  twobit_store( 3, 1 );
  twobit_store( 4, 4 );
  twobit_store( 5, 5 );
  twobit_movereg( 1, 31 );
  twobit_reg( 2 );
  twobit_op1_401(); /* vector-length:vec */
  twobit_setreg( 30 );
  twobit_reg_op2_check_655(reg(3),reg(30),1740,compiled_block_2_1740); /* internal:check-<:fix:fix with (3 2 0) */
  twobit_reg( 2 );
  twobit_op2_402( 3 ); /* vector-ref:trusted */
  twobit_setreg( 1 );
  twobit_reg( 31 );
  twobit_setrtn( 1742, compiled_block_2_1742 );
  twobit_invoke( 1 );
  twobit_label( 1742, compiled_block_2_1742 );
  twobit_load( 0, 0 );
  twobit_branchf( 1744, compiled_block_2_1744 );
  twobit_stack( 1 );
  twobit_op2imm_520( fixnum(1) ); /* +:idx:idx */
  twobit_setreg( 3 );
  twobit_load( 1, 2 );
  twobit_load( 2, 3 );
  twobit_load( 4, 4 );
  twobit_load( 5, 5 );
  twobit_pop( 5 );
  twobit_branch( 1715, compiled_block_2_1715 );
  twobit_label( 1744, compiled_block_2_1744 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_pop( 5 );
  twobit_return();
  twobit_label( 1722, compiled_block_2_1722 );
  twobit_trap( 2, 0, 0, 162 );
  twobit_label( 1720, compiled_block_2_1720 );
  twobit_trap( 3, 0, 0, 162 );
  twobit_label( 1740, compiled_block_2_1740 );
  twobit_trap( 2, 3, 0, 160 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_40( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 3 );
  twobit_save( 3 );
  twobit_store( 0, 0 );
  twobit_store( 2, 3 );
  twobit_store( 3, 1 );
  twobit_movereg( 1, 2 );
  twobit_global( 1 ); /* vector? */
  twobit_setreg( 1 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_setrtn( 1747, compiled_block_2_1747 );
  twobit_jump( 1, 1257, compiled_block_2_1257 );
  twobit_label( 1747, compiled_block_2_1747 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_load( 2, 1 );
  twobit_movereg( 4, 1 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_setrtn( 1748, compiled_block_2_1748 );
  twobit_jump( 1, 1256, compiled_block_2_1256 );
  twobit_label( 1748, compiled_block_2_1748 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_load( 1, 2 );
  twobit_load( 2, 3 );
  twobit_setrtn( 1749, compiled_block_2_1749 );
  twobit_jump( 1, 1256, compiled_block_2_1256 );
  twobit_label( 1749, compiled_block_2_1749 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_reg( 4 );
  twobit_op1_23(); /* fixnum? */
  twobit_load( 1, 2 );
  twobit_check( 4, 1, 0, 1750, compiled_block_2_1750 );
  twobit_stack( 2 );
  twobit_reg_op1_check_653(RESULT,1750,compiled_block_2_1750); /* internal:check-vector? with (4 1 0) */
  twobit_stack( 2 );
  twobit_op1_401(); /* vector-length:vec */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op2_407( 3 ); /* <:fix:fix */
  twobit_load( 2, 2 );
  twobit_check( 4, 2, 0, 1751, compiled_block_2_1751 );
  twobit_reg_op2imm_check_660(reg(4),fixnum(0),1751,compiled_block_2_1751); /* internal:check->=:fix:fix/imm with (4 2 0) */
  twobit_stack( 2 );
  twobit_op2_402( 4 ); /* vector-ref:trusted */
  twobit_setreg( 2 );
  twobit_stack( 1 );
  twobit_op1_23(); /* fixnum? */
  twobit_load( 4, 1 );
  twobit_check( 4, 1, 0, 1750, compiled_block_2_1750 );
  twobit_stack( 1 );
  twobit_op2_407( 3 ); /* <:fix:fix */
  twobit_load( 3, 1 );
  twobit_check( 3, 1, 0, 1752, compiled_block_2_1752 );
  twobit_stack( 1 );
  twobit_reg_op2imm_check_660(RESULT,fixnum(0),1752,compiled_block_2_1752); /* internal:check->=:fix:fix/imm with (3 1 0) */
  twobit_stack( 2 );
  twobit_op2_402( 4 ); /* vector-ref:trusted */
  twobit_setreg( 3 );
  twobit_load( 1, 3 );
  twobit_stack( 2 );
  twobit_op3_403( 1, 3 ); /* vector-set!:trusted */
  twobit_stack( 2 );
  twobit_op3_403( 4, 2 ); /* vector-set!:trusted */
  twobit_pop( 3 );
  twobit_return();
  twobit_label( 1751, compiled_block_2_1751 );
  twobit_trap( 2, 4, 0, 160 );
  twobit_label( 1752, compiled_block_2_1752 );
  twobit_trap( 1, 3, 0, 160 );
  twobit_label( 1750, compiled_block_2_1750 );
  twobit_trap( 1, 4, 0, 160 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_41( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argsge( 2 );
  twobit_reg( 3 );
  twobit_op1_branchf_610( 1754, compiled_block_2_1754 ); /* internal:branchf-null? */
  twobit_global( 1 ); /* vector-fill! */
  twobit_invoke( 2 );
  twobit_label( 1754, compiled_block_2_1754 );
  twobit_save( 3 );
  twobit_store( 0, 0 );
  twobit_store( 2, 2 );
  twobit_store( 3, 1 );
  twobit_movereg( 1, 2 );
  twobit_global( 2 ); /* vector? */
  twobit_setreg( 1 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_setrtn( 1756, compiled_block_2_1756 );
  twobit_jump( 1, 1257, compiled_block_2_1257 );
  twobit_label( 1756, compiled_block_2_1756 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_load( 2, 1 );
  twobit_movereg( 4, 1 );
  twobit_lambda( compiled_start_2_98, 4, 2 );
  twobit_setreg( 1 );
  twobit_store( 1, 3 );
  twobit_movereg( 4, 2 );
  twobit_load( 1, 2 );
  twobit_lambda( compiled_start_2_99, 6, 2 );
  twobit_setreg( 2 );
  twobit_load( 1, 3 );
  twobit_global( 7 ); /* call-with-values */
  twobit_pop( 3 );
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_98( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_lexical( 1, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 2 );
  twobit_jump( 2, 1254, compiled_block_2_1254 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_99( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_store( 1, 1 );
  twobit_movereg( 2, 1 );
  twobit_load( 2, 1 );
  twobit_pop( 1 );
  twobit_label( 1758, compiled_block_2_1758 );
  twobit_reg( 2 );
  twobit_op2_branchf_623( 1, 100, compiled_temp_2_100, 1762, compiled_block_2_1762 ); /* internal:branchf-= */
  twobit_op1_3(); /* unspecified */
  twobit_return();
  twobit_label( 1762, compiled_block_2_1762 );
  twobit_reg( 2 );
  twobit_op1_23(); /* fixnum? */
  twobit_setreg( 4 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 3 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 31 );
  twobit_reg( 4 );
  twobit_check( 31, 2, 3, 1763, compiled_block_2_1763 );
  twobit_lexical( 0, 2 );
  twobit_op1_41(); /* vector? */
  twobit_setreg( 4 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 3 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 31 );
  twobit_reg( 4 );
  twobit_check( 31, 2, 3, 1763, compiled_block_2_1763 );
  twobit_lexical( 0, 2 );
  twobit_op1_401(); /* vector-length:vec */
  twobit_setreg( 4 );
  twobit_reg( 2 );
  twobit_op2_407( 4 ); /* <:fix:fix */
  twobit_setreg( 4 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 3 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 31 );
  twobit_reg( 4 );
  twobit_check( 31, 2, 3, 1763, compiled_block_2_1763 );
  twobit_reg( 2 );
  twobit_op2imm_455( fixnum(0) ); /* >=:fix:fix */
  twobit_setreg( 4 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 3 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 31 );
  twobit_reg( 4 );
  twobit_check( 31, 2, 3, 1763, compiled_block_2_1763 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 3 );
  twobit_lexical( 0, 2 );
  twobit_op3_403( 2, 3 ); /* vector-set!:trusted */
  twobit_reg( 2 );
  twobit_op2imm_520( fixnum(1) ); /* +:idx:idx */
  twobit_setreg( 2 );
  twobit_branch( 1758, compiled_block_2_1758 );
  twobit_label( 1763, compiled_block_2_1763 );
  twobit_trap( 3, 2, 31, 161 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_42( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argsge( 3 );
  twobit_reg_op2_check_662(reg(3),reg(31),1768,compiled_block_2_1768); /* internal:check-vector?/vector-length:vec with (3 0 0) */
  twobit_reg( 4 );
  twobit_op1_branchf_610( 1770, compiled_block_2_1770 ); /* internal:branchf-null? */
  twobit_movereg( 31, 4 );
  twobit_movereg( 4, 5 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_movereg( 31, 6 );
  twobit_branch( 1766, compiled_block_2_1766 );
  twobit_label( 1770, compiled_block_2_1770 );
  twobit_reg_op1_check_652(reg(4),1772,compiled_block_2_1772); /* internal:check-pair? with (4 0 0) */
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 30 );
  twobit_reg( 30 );
  twobit_op1_branchf_610( 1774, compiled_block_2_1774 ); /* internal:branchf-null? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 4 );
  twobit_movereg( 31, 5 );
  twobit_movereg( 31, 6 );
  twobit_branch( 1766, compiled_block_2_1766 );
  twobit_label( 1774, compiled_block_2_1774 );
  twobit_reg_op1_check_652(reg(30),1776,compiled_block_2_1776); /* internal:check-pair? with (30 0 0) */
  twobit_reg( 30 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 29 );
  twobit_reg( 29 );
  twobit_op1_branchf_610( 1778, compiled_block_2_1778 ); /* internal:branchf-null? */
  twobit_reg( 30 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 30 );
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 4 );
  twobit_movereg( 30, 5 );
  twobit_movereg( 31, 6 );
  twobit_branch( 1766, compiled_block_2_1766 );
  twobit_label( 1778, compiled_block_2_1778 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 2 );
  twobit_const( 1 );
  twobit_setreg( 1 );
  twobit_movereg( 29, 3 );
  twobit_global( 2 ); /*  error~1pxGHH~53790 */
  twobit_invoke( 3 );
  twobit_label( 1766, compiled_block_2_1766 );
  twobit_save( 7 );
  twobit_store( 0, 0 );
  twobit_store( 1, 5 );
  twobit_store( 2, 2 );
  twobit_store( 3, 6 );
  twobit_store( 4, 1 );
  twobit_store( 6, 3 );
  twobit_movereg( 5, 2 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 1 );
  twobit_setrtn( 1781, compiled_block_2_1781 );
  twobit_jump( 1, 1257, compiled_block_2_1257 );
  twobit_label( 1781, compiled_block_2_1781 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 4 );
  twobit_load( 2, 1 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 1 );
  twobit_setrtn( 1782, compiled_block_2_1782 );
  twobit_jump( 1, 1257, compiled_block_2_1257 );
  twobit_label( 1782, compiled_block_2_1782 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 1 );
  twobit_load( 2, 2 );
  twobit_setrtn( 1783, compiled_block_2_1783 );
  twobit_jump( 1, 1257, compiled_block_2_1257 );
  twobit_label( 1783, compiled_block_2_1783 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_load( 3, 3 );
  twobit_stack( 4 );
  twobit_op2_67( 3, 92, compiled_temp_2_92 ); /* <= */
  twobit_setreg( 2 );
  twobit_load( 1, 4 );
  twobit_stack( 1 );
  twobit_op2_branchf_622( 1, 93, compiled_temp_2_93, 1785, compiled_block_2_1785 ); /* internal:branchf-<= */
  twobit_reg( 2 );
  twobit_skip( 1784, compiled_block_2_1784 );
  twobit_label( 1785, compiled_block_2_1785 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1784, compiled_block_2_1784 );
  twobit_setreg( 3 );
  twobit_load( 1, 1 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_op2_branchf_622( 1, 94, compiled_temp_2_94, 1787, compiled_block_2_1787 ); /* internal:branchf-<= */
  twobit_reg( 3 );
  twobit_skip( 1786, compiled_block_2_1786 );
  twobit_label( 1787, compiled_block_2_1787 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1786, compiled_block_2_1786 );
  twobit_branchf( 1789, compiled_block_2_1789 );
  twobit_stack( 5 );
  twobit_op1_41(); /* vector? */
  twobit_load( 2, 5 );
  twobit_check( 2, 0, 0, 1790, compiled_block_2_1790 );
  twobit_stack( 5 );
  twobit_op1_401(); /* vector-length:vec */
  twobit_setreg( 3 );
  twobit_stack( 4 );
  twobit_op2_62( 1, 95, compiled_temp_2_95 ); /* - */
  twobit_setreg( 2 );
  twobit_reg( 4 );
  twobit_op2_61( 2, 96, compiled_temp_2_96 ); /* + */
  twobit_op2_67( 3, 97, compiled_temp_2_97 ); /* <= */
  twobit_skip( 1788, compiled_block_2_1788 );
  twobit_label( 1789, compiled_block_2_1789 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1788, compiled_block_2_1788 );
  twobit_branchf( 1792, compiled_block_2_1792 );
  twobit_lexical( 0, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_movereg( 4, 2 );
  twobit_movereg( 1, 4 );
  twobit_movereg( 3, 6 );
  twobit_load( 1, 5 );
  twobit_load( 3, 6 );
  twobit_load( 5, 4 );
  twobit_reg( 6 );
  twobit_pop( 7 );
  twobit_invoke( 5 );
  twobit_label( 1792, compiled_block_2_1792 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_stack( 3 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_const( 3 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_const( 4 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 7 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_stack( 6 );
  twobit_op2_58( 2 ); /* cons */
  twobit_setreg( 2 );
  twobit_const( 3 );
  twobit_op2_58( 2 ); /* cons */
  twobit_setreg( 2 );
  twobit_const( 5 );
  twobit_op2_58( 2 ); /* cons */
  twobit_setreg( 2 );
  twobit_store( 2, 3 );
  twobit_stack( 5 );
  twobit_op1_41(); /* vector? */
  twobit_load( 1, 5 );
  twobit_check( 1, 0, 0, 1794, compiled_block_2_1794 );
  twobit_stack( 5 );
  twobit_op1_401(); /* vector-length:vec */
  twobit_imm_const_setreg( NIL_CONST, 1 ); /* () */
  twobit_op2_58( 1 ); /* cons */
  twobit_setreg( 1 );
  twobit_const( 3 );
  twobit_op2_58( 1 ); /* cons */
  twobit_setreg( 1 );
  twobit_const( 6 );
  twobit_op2_58( 1 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 6 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 1 );
  twobit_stack( 5 );
  twobit_op2_58( 1 ); /* cons */
  twobit_setreg( 1 );
  twobit_const( 3 );
  twobit_op2_58( 1 ); /* cons */
  twobit_setreg( 1 );
  twobit_const( 7 );
  twobit_op2_58( 1 ); /* cons */
  twobit_setreg( 3 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_imm_const_setreg( NIL_CONST, 1 ); /* () */
  twobit_op2_58( 1 ); /* cons */
  twobit_setreg( 1 );
  twobit_const( 8 );
  twobit_op2_58( 1 ); /* cons */
  twobit_setreg( 1 );
  twobit_const( 9 );
  twobit_op2_58( 1 ); /* cons */
  twobit_setreg( 2 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 1 );
  twobit_stack( 2 );
  twobit_op2_58( 1 ); /* cons */
  twobit_setreg( 1 );
  twobit_const( 3 );
  twobit_op2_58( 1 ); /* cons */
  twobit_setreg( 1 );
  twobit_const( 10 );
  twobit_op2_58( 1 ); /* cons */
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 4 );
  twobit_stack( 1 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 11 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 4 );
  twobit_stack( 4 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 12 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_movereg( 1, 5 );
  twobit_movereg( 4, 9 );
  twobit_const( 13 );
  twobit_setreg( 1 );
  twobit_load( 4, 6 );
  twobit_load( 6, 3 );
  twobit_load( 7, 7 );
  twobit_load( 8, 1 );
  twobit_global( 2 ); /*  error~1pxGHH~53790 */
  twobit_pop( 7 );
  twobit_invoke( 9 );
  twobit_label( 1790, compiled_block_2_1790 );
  twobit_trap( 2, 0, 0, 162 );
  twobit_label( 1776, compiled_block_2_1776 );
  twobit_trap( 30, 0, 0, 1 );
  twobit_label( 1772, compiled_block_2_1772 );
  twobit_trap( 4, 0, 0, 1 );
  twobit_label( 1768, compiled_block_2_1768 );
  twobit_trap( 3, 0, 0, 162 );
  twobit_label( 1794, compiled_block_2_1794 );
  twobit_trap( 1, 0, 0, 162 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_43( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argsge( 3 );
  twobit_reg_op2_check_662(reg(3),reg(31),1798,compiled_block_2_1798); /* internal:check-vector?/vector-length:vec with (3 0 0) */
  twobit_reg( 4 );
  twobit_op1_branchf_610( 1800, compiled_block_2_1800 ); /* internal:branchf-null? */
  twobit_movereg( 31, 4 );
  twobit_movereg( 4, 5 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_movereg( 31, 6 );
  twobit_branch( 1796, compiled_block_2_1796 );
  twobit_label( 1800, compiled_block_2_1800 );
  twobit_reg_op1_check_652(reg(4),1802,compiled_block_2_1802); /* internal:check-pair? with (4 0 0) */
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 30 );
  twobit_reg( 30 );
  twobit_op1_branchf_610( 1804, compiled_block_2_1804 ); /* internal:branchf-null? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 4 );
  twobit_movereg( 31, 5 );
  twobit_movereg( 31, 6 );
  twobit_branch( 1796, compiled_block_2_1796 );
  twobit_label( 1804, compiled_block_2_1804 );
  twobit_reg_op1_check_652(reg(30),1806,compiled_block_2_1806); /* internal:check-pair? with (30 0 0) */
  twobit_reg( 30 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 29 );
  twobit_reg( 29 );
  twobit_op1_branchf_610( 1808, compiled_block_2_1808 ); /* internal:branchf-null? */
  twobit_reg( 30 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 30 );
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 4 );
  twobit_movereg( 30, 5 );
  twobit_movereg( 31, 6 );
  twobit_branch( 1796, compiled_block_2_1796 );
  twobit_label( 1808, compiled_block_2_1808 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 2 );
  twobit_const( 1 );
  twobit_setreg( 1 );
  twobit_movereg( 29, 3 );
  twobit_global( 2 ); /*  error~1pxGHH~53790 */
  twobit_invoke( 3 );
  twobit_label( 1796, compiled_block_2_1796 );
  twobit_save( 6 );
  twobit_store( 0, 0 );
  twobit_store( 1, 4 );
  twobit_store( 2, 2 );
  twobit_store( 3, 3 );
  twobit_store( 4, 1 );
  twobit_store( 6, 6 );
  twobit_movereg( 5, 2 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 1 );
  twobit_setrtn( 1811, compiled_block_2_1811 );
  twobit_jump( 1, 1257, compiled_block_2_1257 );
  twobit_label( 1811, compiled_block_2_1811 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 5 );
  twobit_load( 2, 1 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 1 );
  twobit_setrtn( 1812, compiled_block_2_1812 );
  twobit_jump( 1, 1257, compiled_block_2_1257 );
  twobit_label( 1812, compiled_block_2_1812 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 1 );
  twobit_load( 2, 2 );
  twobit_setrtn( 1813, compiled_block_2_1813 );
  twobit_jump( 1, 1257, compiled_block_2_1257 );
  twobit_label( 1813, compiled_block_2_1813 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_load( 3, 3 );
  twobit_stack( 4 );
  twobit_op2_branchf_624( 3, 1815, compiled_block_2_1815 ); /* internal:branchf-eq? */
  twobit_stack( 1 );
  twobit_op2_branchf_619( 4, 80, compiled_temp_2_80, 1817, compiled_block_2_1817 ); /* internal:branchf-< */
  twobit_load( 2, 5 );
  twobit_reg( 4 );
  twobit_op2_67( 2, 81, compiled_temp_2_81 ); /* <= */
  twobit_skip( 1816, compiled_block_2_1816 );
  twobit_label( 1817, compiled_block_2_1817 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1816, compiled_block_2_1816 );
  twobit_setreg( 2 );
  twobit_reg( 2 );
  twobit_branchf( 1819, compiled_block_2_1819 );
  twobit_reg( 2 );
  twobit_skip( 1814, compiled_block_2_1814 );
  twobit_label( 1819, compiled_block_2_1819 );
  twobit_load( 1, 1 );
  twobit_stack( 5 );
  twobit_op2_62( 1, 82, compiled_temp_2_82 ); /* - */
  twobit_setreg( 2 );
  twobit_reg( 4 );
  twobit_op2_61( 2, 83, compiled_temp_2_83 ); /* + */
  twobit_setreg( 2 );
  twobit_reg( 4 );
  twobit_op2_branchf_619( 1, 84, compiled_temp_2_84, 1821, compiled_block_2_1821 ); /* internal:branchf-< */
  twobit_reg( 1 );
  twobit_op2_67( 2, 85, compiled_temp_2_85 ); /* <= */
  twobit_skip( 1814, compiled_block_2_1814 );
  twobit_label( 1821, compiled_block_2_1821 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 1814, compiled_block_2_1814 );
  twobit_label( 1815, compiled_block_2_1815 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1814, compiled_block_2_1814 );
  twobit_branchf( 1823, compiled_block_2_1823 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_stack( 4 );
  twobit_op2_58( 2 ); /* cons */
  twobit_setreg( 3 );
  twobit_const( 3 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_const( 4 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 2 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 1 );
  twobit_reg( 4 );
  twobit_op2_58( 1 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 5 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 1 );
  twobit_stack( 1 );
  twobit_op2_58( 1 ); /* cons */
  twobit_setreg( 1 );
  twobit_const( 3 );
  twobit_op2_58( 1 ); /* cons */
  twobit_setreg( 1 );
  twobit_const( 6 );
  twobit_op2_58( 1 ); /* cons */
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 4 );
  twobit_stack( 5 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 7 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_movereg( 4, 6 );
  twobit_movereg( 1, 5 );
  twobit_const( 8 );
  twobit_setreg( 1 );
  twobit_load( 4, 3 );
  twobit_global( 2 ); /*  error~1pxGHH~53790 */
  twobit_pop( 6 );
  twobit_invoke( 6 );
  twobit_label( 1823, compiled_block_2_1823 );
  twobit_load( 2, 6 );
  twobit_stack( 5 );
  twobit_op2_67( 2, 86, compiled_temp_2_86 ); /* <= */
  twobit_setreg( 1 );
  twobit_load( 3, 5 );
  twobit_stack( 1 );
  twobit_op2_branchf_622( 3, 87, compiled_temp_2_87, 1826, compiled_block_2_1826 ); /* internal:branchf-<= */
  twobit_reg( 1 );
  twobit_skip( 1825, compiled_block_2_1825 );
  twobit_label( 1826, compiled_block_2_1826 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1825, compiled_block_2_1825 );
  twobit_setreg( 3 );
  twobit_load( 2, 1 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_op2_branchf_622( 2, 88, compiled_temp_2_88, 1828, compiled_block_2_1828 ); /* internal:branchf-<= */
  twobit_reg( 3 );
  twobit_skip( 1827, compiled_block_2_1827 );
  twobit_label( 1828, compiled_block_2_1828 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1827, compiled_block_2_1827 );
  twobit_branchf( 1830, compiled_block_2_1830 );
  twobit_stack( 4 );
  twobit_op1_41(); /* vector? */
  twobit_load( 1, 4 );
  twobit_check( 1, 0, 0, 1831, compiled_block_2_1831 );
  twobit_stack( 4 );
  twobit_op1_401(); /* vector-length:vec */
  twobit_setreg( 3 );
  twobit_stack( 5 );
  twobit_op2_62( 2, 89, compiled_temp_2_89 ); /* - */
  twobit_setreg( 1 );
  twobit_reg( 4 );
  twobit_op2_61( 1, 90, compiled_temp_2_90 ); /* + */
  twobit_op2_67( 3, 91, compiled_temp_2_91 ); /* <= */
  twobit_skip( 1829, compiled_block_2_1829 );
  twobit_label( 1830, compiled_block_2_1830 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1829, compiled_block_2_1829 );
  twobit_branchf( 1833, compiled_block_2_1833 );
  twobit_lexical( 0, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_load( 1, 4 );
  twobit_movereg( 4, 2 );
  twobit_movereg( 3, 6 );
  twobit_load( 3, 3 );
  twobit_load( 4, 1 );
  twobit_load( 5, 5 );
  twobit_reg( 6 );
  twobit_pop( 6 );
  twobit_invoke( 5 );
  twobit_label( 1833, compiled_block_2_1833 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_stack( 6 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_const( 3 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_const( 9 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 6 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 1 );
  twobit_stack( 3 );
  twobit_op2_58( 1 ); /* cons */
  twobit_setreg( 1 );
  twobit_const( 3 );
  twobit_op2_58( 1 ); /* cons */
  twobit_setreg( 1 );
  twobit_const( 10 );
  twobit_op2_58( 1 ); /* cons */
  twobit_setreg( 1 );
  twobit_stack( 4 );
  twobit_op1_41(); /* vector? */
  twobit_load( 2, 4 );
  twobit_check( 2, 0, 0, 1835, compiled_block_2_1835 );
  twobit_stack( 4 );
  twobit_op1_401(); /* vector-length:vec */
  twobit_imm_const_setreg( NIL_CONST, 2 ); /* () */
  twobit_op2_58( 2 ); /* cons */
  twobit_setreg( 2 );
  twobit_const( 3 );
  twobit_op2_58( 2 ); /* cons */
  twobit_setreg( 2 );
  twobit_const( 11 );
  twobit_op2_58( 2 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_stack( 4 );
  twobit_op2_58( 2 ); /* cons */
  twobit_setreg( 2 );
  twobit_const( 3 );
  twobit_op2_58( 2 ); /* cons */
  twobit_setreg( 2 );
  twobit_const( 12 );
  twobit_op2_58( 2 ); /* cons */
  twobit_setreg( 3 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_imm_const_setreg( NIL_CONST, 2 ); /* () */
  twobit_op2_58( 2 ); /* cons */
  twobit_setreg( 2 );
  twobit_const( 13 );
  twobit_op2_58( 2 ); /* cons */
  twobit_setreg( 2 );
  twobit_const( 14 );
  twobit_op2_58( 2 ); /* cons */
  twobit_setreg( 2 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 4 );
  twobit_stack( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 5 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 4 );
  twobit_stack( 1 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 6 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 4 );
  twobit_stack( 5 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 7 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_movereg( 1, 6 );
  twobit_movereg( 4, 9 );
  twobit_const( 15 );
  twobit_setreg( 1 );
  twobit_load( 4, 3 );
  twobit_load( 5, 2 );
  twobit_load( 7, 6 );
  twobit_load( 8, 1 );
  twobit_global( 2 ); /*  error~1pxGHH~53790 */
  twobit_pop( 6 );
  twobit_invoke( 9 );
  twobit_label( 1835, compiled_block_2_1835 );
  twobit_trap( 2, 0, 0, 162 );
  twobit_label( 1806, compiled_block_2_1806 );
  twobit_trap( 30, 0, 0, 1 );
  twobit_label( 1802, compiled_block_2_1802 );
  twobit_trap( 4, 0, 0, 1 );
  twobit_label( 1798, compiled_block_2_1798 );
  twobit_trap( 3, 0, 0, 162 );
  twobit_label( 1831, compiled_block_2_1831 );
  twobit_trap( 1, 0, 0, 162 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_44( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argsge( 1 );
  twobit_save( 2 );
  twobit_store( 0, 0 );
  twobit_store( 2, 1 );
  twobit_movereg( 1, 2 );
  twobit_global( 1 ); /* vector? */
  twobit_setreg( 1 );
  twobit_lexical( 0, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_setrtn( 1837, compiled_block_2_1837 );
  twobit_jump( 1, 1257, compiled_block_2_1257 );
  twobit_label( 1837, compiled_block_2_1837 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_load( 2, 1 );
  twobit_movereg( 4, 1 );
  twobit_lambda( compiled_start_2_78, 3, 2 );
  twobit_setreg( 1 );
  twobit_store( 1, 2 );
  twobit_movereg( 4, 1 );
  twobit_lambda( compiled_start_2_79, 5, 1 );
  twobit_setreg( 2 );
  twobit_load( 1, 2 );
  twobit_global( 6 ); /* call-with-values */
  twobit_pop( 2 );
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_78( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_lexical( 1, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 2 );
  twobit_jump( 2, 1254, compiled_block_2_1254 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_79( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_movereg( 2, 3 );
  twobit_movereg( 1, 2 );
  twobit_lexical( 1, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_reg( 4 );
  twobit_invoke( 3 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_45( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argsge( 1 );
  twobit_reg( 2 );
  twobit_op1_branchf_610( 1842, compiled_block_2_1842 ); /* internal:branchf-null? */
  twobit_global( 1 ); /* vector->list */
  twobit_invoke( 1 );
  twobit_label( 1842, compiled_block_2_1842 );
  twobit_save( 2 );
  twobit_store( 0, 0 );
  twobit_store( 2, 1 );
  twobit_movereg( 1, 2 );
  twobit_global( 2 ); /* vector? */
  twobit_setreg( 1 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_setrtn( 1844, compiled_block_2_1844 );
  twobit_jump( 1, 1257, compiled_block_2_1257 );
  twobit_label( 1844, compiled_block_2_1844 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_load( 2, 1 );
  twobit_movereg( 4, 1 );
  twobit_lambda( compiled_start_2_74, 4, 2 );
  twobit_setreg( 1 );
  twobit_store( 1, 2 );
  twobit_movereg( 4, 1 );
  twobit_lambda( compiled_start_2_75, 6, 1 );
  twobit_setreg( 2 );
  twobit_load( 1, 2 );
  twobit_global( 7 ); /* call-with-values */
  twobit_pop( 2 );
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_74( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_lexical( 1, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 2 );
  twobit_jump( 2, 1254, compiled_block_2_1254 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_75( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_reg( 2 );
  twobit_op2imm_131( fixnum(1), 76, compiled_temp_2_76 ); /* - */
  twobit_setreg( 2 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_label( 1846, compiled_block_2_1846 );
  twobit_reg( 2 );
  twobit_op2_branchf_619( 1, 77, compiled_temp_2_77, 1850, compiled_block_2_1850 ); /* internal:branchf-< */
  twobit_reg( 3 );
  twobit_return();
  twobit_label( 1850, compiled_block_2_1850 );
  twobit_reg( 2 );
  twobit_op1_23(); /* fixnum? */
  twobit_setreg( 4 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 31 );
  twobit_reg( 4 );
  twobit_check( 2, 31, 0, 1851, compiled_block_2_1851 );
  twobit_lexical( 0, 1 );
  twobit_op1_41(); /* vector? */
  twobit_setreg( 4 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 31 );
  twobit_reg( 4 );
  twobit_check( 2, 31, 0, 1851, compiled_block_2_1851 );
  twobit_lexical( 0, 1 );
  twobit_op1_401(); /* vector-length:vec */
  twobit_setreg( 4 );
  twobit_reg( 2 );
  twobit_op2_407( 4 ); /* <:fix:fix */
  twobit_setreg( 4 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 31 );
  twobit_reg( 4 );
  twobit_check( 2, 31, 0, 1851, compiled_block_2_1851 );
  twobit_reg( 2 );
  twobit_op2imm_455( fixnum(0) ); /* >=:fix:fix */
  twobit_setreg( 4 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 31 );
  twobit_reg( 4 );
  twobit_check( 2, 31, 0, 1851, compiled_block_2_1851 );
  twobit_lexical( 0, 1 );
  twobit_op2_402( 2 ); /* vector-ref:trusted */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_reg( 2 );
  twobit_op2imm_522( fixnum(1) ); /* -:idx:idx */
  twobit_setreg( 2 );
  twobit_branch( 1846, compiled_block_2_1846 );
  twobit_label( 1851, compiled_block_2_1851 );
  twobit_trap( 31, 2, 0, 160 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_46( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argsge( 1 );
  twobit_save( 2 );
  twobit_store( 0, 0 );
  twobit_store( 2, 1 );
  twobit_movereg( 1, 2 );
  twobit_global( 1 ); /* vector? */
  twobit_setreg( 1 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_setrtn( 1854, compiled_block_2_1854 );
  twobit_jump( 1, 1257, compiled_block_2_1257 );
  twobit_label( 1854, compiled_block_2_1854 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_load( 2, 1 );
  twobit_movereg( 4, 1 );
  twobit_lambda( compiled_start_2_71, 3, 2 );
  twobit_setreg( 1 );
  twobit_store( 1, 2 );
  twobit_movereg( 4, 1 );
  twobit_lambda( compiled_start_2_72, 5, 1 );
  twobit_setreg( 2 );
  twobit_load( 1, 2 );
  twobit_global( 6 ); /* call-with-values */
  twobit_pop( 2 );
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_71( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_lexical( 1, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 2 );
  twobit_jump( 2, 1254, compiled_block_2_1254 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_72( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_store( 1, 1 );
  twobit_movereg( 2, 1 );
  twobit_load( 2, 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_pop( 1 );
  twobit_label( 1856, compiled_block_2_1856 );
  twobit_reg( 2 );
  twobit_op2_branchf_623( 1, 73, compiled_temp_2_73, 1860, compiled_block_2_1860 ); /* internal:branchf-= */
  twobit_reg( 3 );
  twobit_return();
  twobit_label( 1860, compiled_block_2_1860 );
  twobit_reg( 2 );
  twobit_op1_23(); /* fixnum? */
  twobit_setreg( 4 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 31 );
  twobit_reg( 4 );
  twobit_check( 2, 31, 0, 1861, compiled_block_2_1861 );
  twobit_lexical( 0, 1 );
  twobit_op1_41(); /* vector? */
  twobit_setreg( 4 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 31 );
  twobit_reg( 4 );
  twobit_check( 2, 31, 0, 1861, compiled_block_2_1861 );
  twobit_lexical( 0, 1 );
  twobit_op1_401(); /* vector-length:vec */
  twobit_setreg( 4 );
  twobit_reg( 2 );
  twobit_op2_407( 4 ); /* <:fix:fix */
  twobit_setreg( 4 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 31 );
  twobit_reg( 4 );
  twobit_check( 2, 31, 0, 1861, compiled_block_2_1861 );
  twobit_reg( 2 );
  twobit_op2imm_455( fixnum(0) ); /* >=:fix:fix */
  twobit_setreg( 4 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 31 );
  twobit_reg( 4 );
  twobit_check( 2, 31, 0, 1861, compiled_block_2_1861 );
  twobit_lexical( 0, 1 );
  twobit_op2_402( 2 ); /* vector-ref:trusted */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_reg( 2 );
  twobit_op2imm_520( fixnum(1) ); /* +:idx:idx */
  twobit_setreg( 2 );
  twobit_branch( 1856, compiled_block_2_1856 );
  twobit_label( 1861, compiled_block_2_1861 );
  twobit_trap( 31, 2, 0, 160 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_47( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argsge( 1 );
  twobit_reg( 2 );
  twobit_op1_branchf_610( 1865, compiled_block_2_1865 ); /* internal:branchf-null? */
  twobit_global( 1 ); /* list->vector */
  twobit_invoke( 1 );
  twobit_label( 1865, compiled_block_2_1865 );
  twobit_reg_op1_check_652(reg(2),1867,compiled_block_2_1867); /* internal:check-pair? with (2 0 0) */
  twobit_reg( 2 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 2 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op1_branchf_610( 1869, compiled_block_2_1869 ); /* internal:branchf-null? */
  twobit_save( 3 );
  twobit_store( 0, 0 );
  twobit_store( 1, 3 );
  twobit_store( 3, 1 );
  twobit_global( 2 ); /* length */
  twobit_setrtn( 1870, compiled_block_2_1870 );
  twobit_invoke( 1 );
  twobit_label( 1870, compiled_block_2_1870 );
  twobit_load( 0, 0 );
  twobit_setreg( 2 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 1 );
  twobit_setrtn( 1871, compiled_block_2_1871 );
  twobit_jump( 1, 1257, compiled_block_2_1257 );
  twobit_label( 1871, compiled_block_2_1871 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_load( 2, 1 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 1 );
  twobit_setrtn( 1872, compiled_block_2_1872 );
  twobit_jump( 1, 1257, compiled_block_2_1257 );
  twobit_label( 1872, compiled_block_2_1872 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_load( 2, 2 );
  twobit_load( 1, 3 );
  twobit_lambda( compiled_start_2_67, 4, 2 );
  twobit_setreg( 3 );
  twobit_store( 3, 1 );
  twobit_reg( 2 );
  twobit_op2_62( 4, 68, compiled_temp_2_68 ); /* - */
  twobit_setreg( 2 );
  twobit_store( 2, 2 );
  twobit_movereg( 4, 2 );
  twobit_global( 5 ); /* list-tail */
  twobit_setrtn( 1880, compiled_block_2_1880 );
  twobit_invoke( 2 );
  twobit_label( 1880, compiled_block_2_1880 );
  twobit_load( 0, 0 );
  twobit_setreg( 3 );
  twobit_load( 2, 2 );
  twobit_load( 1, 1 );
  twobit_lexical( 0, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_pop( 3 );
  twobit_invoke( 3 );
  twobit_label( 1869, compiled_block_2_1869 );
  twobit_reg_op1_check_652(reg(4),1882,compiled_block_2_1882); /* internal:check-pair? with (4 0 0) */
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 31 );
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 4 );
  twobit_reg( 31 );
  twobit_op1_branchf_610( 1884, compiled_block_2_1884 ); /* internal:branchf-null? */
  twobit_save( 3 );
  twobit_store( 0, 0 );
  twobit_store( 1, 3 );
  twobit_store( 3, 1 );
  twobit_movereg( 4, 2 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 1 );
  twobit_setrtn( 1885, compiled_block_2_1885 );
  twobit_jump( 1, 1257, compiled_block_2_1257 );
  twobit_label( 1885, compiled_block_2_1885 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 1 );
  twobit_load( 2, 1 );
  twobit_setrtn( 1886, compiled_block_2_1886 );
  twobit_jump( 1, 1257, compiled_block_2_1257 );
  twobit_label( 1886, compiled_block_2_1886 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_load( 2, 2 );
  twobit_load( 1, 3 );
  twobit_lambda( compiled_start_2_69, 7, 2 );
  twobit_setreg( 3 );
  twobit_store( 3, 1 );
  twobit_reg( 2 );
  twobit_op2_62( 4, 70, compiled_temp_2_70 ); /* - */
  twobit_setreg( 2 );
  twobit_store( 2, 2 );
  twobit_movereg( 4, 2 );
  twobit_global( 5 ); /* list-tail */
  twobit_setrtn( 1894, compiled_block_2_1894 );
  twobit_invoke( 2 );
  twobit_label( 1894, compiled_block_2_1894 );
  twobit_load( 0, 0 );
  twobit_setreg( 3 );
  twobit_load( 2, 2 );
  twobit_load( 1, 1 );
  twobit_lexical( 0, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_pop( 3 );
  twobit_invoke( 3 );
  twobit_label( 1884, compiled_block_2_1884 );
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_store( 2, 1 );
  twobit_movereg( 2, 1 );
  twobit_global( 2 ); /* length */
  twobit_setrtn( 1896, compiled_block_2_1896 );
  twobit_invoke( 1 );
  twobit_label( 1896, compiled_block_2_1896 );
  twobit_load( 0, 0 );
  twobit_setreg( 2 );
  twobit_load( 3, 1 );
  twobit_const( 8 );
  twobit_setreg( 1 );
  twobit_global( 9 ); /*  error~1pxGHH~53790 */
  twobit_pop( 1 );
  twobit_invoke( 3 );
  twobit_label( 1882, compiled_block_2_1882 );
  twobit_trap( 4, 0, 0, 1 );
  twobit_label( 1867, compiled_block_2_1867 );
  twobit_trap( 2, 0, 0, 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_67( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_reg( 2 );
  twobit_op1_branchf_610( 1874, compiled_block_2_1874 ); /* internal:branchf-null? */
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 4 );
  twobit_lexical( 0, 1 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 1 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 2 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 4 );
  twobit_lexical( 0, 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 1 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 3 );
  twobit_lexical( 1, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_imm_const_setreg( NIL_CONST, 1 ); /* () */
  twobit_op2_58( 1 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 5 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 6 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 7 );
  twobit_setreg( 1 );
  twobit_global( 8 ); /*  error~1pxGHH~53790 */
  twobit_invoke( 4 );
  twobit_label( 1874, compiled_block_2_1874 );
  twobit_reg( 2 );
  twobit_op1_branchf_611( 1877, compiled_block_2_1877 ); /* internal:branchf-pair? */
  twobit_reg( 2 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 1 );
  twobit_reg( 2 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 2 );
  twobit_global( 9 ); /* values */
  twobit_invoke( 2 );
  twobit_label( 1877, compiled_block_2_1877 );
  twobit_global( 10 ); /* list? */
  twobit_setreg( 4 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_lexical( 0, 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 2 );
  twobit_lexical( 1, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 5 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 6 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 3 );
  twobit_const( 11 );
  twobit_setreg( 1 );
  twobit_global( 8 ); /*  error~1pxGHH~53790 */
  twobit_invoke( 3 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_69( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_reg( 2 );
  twobit_op1_branchf_610( 1888, compiled_block_2_1888 ); /* internal:branchf-null? */
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 4 );
  twobit_lexical( 0, 1 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 1 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 2 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 4 );
  twobit_lexical( 0, 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 1 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 3 );
  twobit_lexical( 1, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_imm_const_setreg( NIL_CONST, 1 ); /* () */
  twobit_op2_58( 1 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 5 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 6 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 7 );
  twobit_setreg( 1 );
  twobit_global( 8 ); /*  error~1pxGHH~53790 */
  twobit_invoke( 4 );
  twobit_label( 1888, compiled_block_2_1888 );
  twobit_reg( 2 );
  twobit_op1_branchf_611( 1891, compiled_block_2_1891 ); /* internal:branchf-pair? */
  twobit_reg( 2 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 1 );
  twobit_reg( 2 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 2 );
  twobit_global( 9 ); /* values */
  twobit_invoke( 2 );
  twobit_label( 1891, compiled_block_2_1891 );
  twobit_global( 10 ); /* list? */
  twobit_setreg( 4 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_lexical( 0, 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 2 );
  twobit_lexical( 1, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 5 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 6 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 3 );
  twobit_const( 11 );
  twobit_setreg( 1 );
  twobit_global( 8 ); /*  error~1pxGHH~53790 */
  twobit_invoke( 3 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_48( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argsge( 1 );
  twobit_reg( 2 );
  twobit_op1_branchf_610( 1899, compiled_block_2_1899 ); /* internal:branchf-null? */
  twobit_save( 3 );
  twobit_store( 0, 0 );
  twobit_store( 1, 2 );
  twobit_global( 1 ); /* length */
  twobit_setrtn( 1900, compiled_block_2_1900 );
  twobit_invoke( 1 );
  twobit_label( 1900, compiled_block_2_1900 );
  twobit_load( 0, 0 );
  twobit_setreg( 2 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 1 );
  twobit_setrtn( 1901, compiled_block_2_1901 );
  twobit_jump( 1, 1257, compiled_block_2_1257 );
  twobit_label( 1901, compiled_block_2_1901 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 1 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 2 );
  twobit_setrtn( 1902, compiled_block_2_1902 );
  twobit_jump( 1, 1257, compiled_block_2_1257 );
  twobit_label( 1902, compiled_block_2_1902 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_load( 2, 1 );
  twobit_load( 1, 2 );
  twobit_lambda( compiled_start_2_61, 3, 2 );
  twobit_setreg( 3 );
  twobit_store( 3, 3 );
  twobit_reg( 2 );
  twobit_op2_62( 4, 62, compiled_temp_2_62 ); /* - */
  twobit_setreg( 2 );
  twobit_store( 2, 1 );
  twobit_movereg( 4, 2 );
  twobit_global( 4 ); /* list-tail */
  twobit_setrtn( 1910, compiled_block_2_1910 );
  twobit_invoke( 2 );
  twobit_label( 1910, compiled_block_2_1910 );
  twobit_load( 0, 0 );
  twobit_setreg( 3 );
  twobit_load( 2, 1 );
  twobit_load( 1, 3 );
  twobit_lexical( 0, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_pop( 3 );
  twobit_invoke( 3 );
  twobit_label( 1899, compiled_block_2_1899 );
  twobit_reg_op1_check_652(reg(2),1912,compiled_block_2_1912); /* internal:check-pair? with (2 0 0) */
  twobit_reg( 2 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 2 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op1_branchf_610( 1914, compiled_block_2_1914 ); /* internal:branchf-null? */
  twobit_save( 3 );
  twobit_store( 0, 0 );
  twobit_store( 1, 3 );
  twobit_store( 3, 1 );
  twobit_global( 1 ); /* length */
  twobit_setrtn( 1915, compiled_block_2_1915 );
  twobit_invoke( 1 );
  twobit_label( 1915, compiled_block_2_1915 );
  twobit_load( 0, 0 );
  twobit_setreg( 2 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 1 );
  twobit_setrtn( 1916, compiled_block_2_1916 );
  twobit_jump( 1, 1257, compiled_block_2_1257 );
  twobit_label( 1916, compiled_block_2_1916 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_load( 2, 1 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 1 );
  twobit_setrtn( 1917, compiled_block_2_1917 );
  twobit_jump( 1, 1257, compiled_block_2_1257 );
  twobit_label( 1917, compiled_block_2_1917 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_load( 2, 2 );
  twobit_load( 1, 3 );
  twobit_lambda( compiled_start_2_63, 6, 2 );
  twobit_setreg( 3 );
  twobit_store( 3, 1 );
  twobit_reg( 2 );
  twobit_op2_62( 4, 64, compiled_temp_2_64 ); /* - */
  twobit_setreg( 2 );
  twobit_store( 2, 2 );
  twobit_movereg( 4, 2 );
  twobit_global( 4 ); /* list-tail */
  twobit_setrtn( 1925, compiled_block_2_1925 );
  twobit_invoke( 2 );
  twobit_label( 1925, compiled_block_2_1925 );
  twobit_load( 0, 0 );
  twobit_setreg( 3 );
  twobit_load( 2, 2 );
  twobit_load( 1, 1 );
  twobit_lexical( 0, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_pop( 3 );
  twobit_invoke( 3 );
  twobit_label( 1914, compiled_block_2_1914 );
  twobit_reg_op1_check_652(reg(4),1927,compiled_block_2_1927); /* internal:check-pair? with (4 0 0) */
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 31 );
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 4 );
  twobit_reg( 31 );
  twobit_op1_branchf_610( 1929, compiled_block_2_1929 ); /* internal:branchf-null? */
  twobit_save( 3 );
  twobit_store( 0, 0 );
  twobit_store( 1, 3 );
  twobit_store( 3, 1 );
  twobit_movereg( 4, 2 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 1 );
  twobit_setrtn( 1930, compiled_block_2_1930 );
  twobit_jump( 1, 1257, compiled_block_2_1257 );
  twobit_label( 1930, compiled_block_2_1930 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 3 );
  twobit_lexical( 0, 3 );
  twobit_setreg( 1 );
  twobit_load( 2, 1 );
  twobit_setrtn( 1931, compiled_block_2_1931 );
  twobit_jump( 1, 1257, compiled_block_2_1257 );
  twobit_label( 1931, compiled_block_2_1931 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_load( 2, 2 );
  twobit_load( 1, 3 );
  twobit_lambda( compiled_start_2_65, 8, 2 );
  twobit_setreg( 3 );
  twobit_store( 3, 1 );
  twobit_reg( 2 );
  twobit_op2_62( 4, 66, compiled_temp_2_66 ); /* - */
  twobit_setreg( 2 );
  twobit_store( 2, 2 );
  twobit_movereg( 4, 2 );
  twobit_global( 4 ); /* list-tail */
  twobit_setrtn( 1939, compiled_block_2_1939 );
  twobit_invoke( 2 );
  twobit_label( 1939, compiled_block_2_1939 );
  twobit_load( 0, 0 );
  twobit_setreg( 3 );
  twobit_load( 2, 2 );
  twobit_load( 1, 1 );
  twobit_lexical( 0, 2 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_pop( 3 );
  twobit_invoke( 3 );
  twobit_label( 1929, compiled_block_2_1929 );
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_store( 2, 1 );
  twobit_movereg( 2, 1 );
  twobit_global( 1 ); /* length */
  twobit_setrtn( 1941, compiled_block_2_1941 );
  twobit_invoke( 1 );
  twobit_label( 1941, compiled_block_2_1941 );
  twobit_load( 0, 0 );
  twobit_setreg( 2 );
  twobit_load( 3, 1 );
  twobit_const( 9 );
  twobit_setreg( 1 );
  twobit_global( 10 ); /*  error~1pxGHH~53790 */
  twobit_pop( 1 );
  twobit_invoke( 3 );
  twobit_label( 1927, compiled_block_2_1927 );
  twobit_trap( 4, 0, 0, 1 );
  twobit_label( 1912, compiled_block_2_1912 );
  twobit_trap( 2, 0, 0, 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_61( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_reg( 2 );
  twobit_op1_branchf_610( 1904, compiled_block_2_1904 ); /* internal:branchf-null? */
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 4 );
  twobit_lexical( 0, 1 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 1 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 2 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 4 );
  twobit_lexical( 0, 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 1 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 3 );
  twobit_lexical( 1, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_imm_const_setreg( NIL_CONST, 1 ); /* () */
  twobit_op2_58( 1 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 5 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 6 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 7 );
  twobit_setreg( 1 );
  twobit_global( 8 ); /*  error~1pxGHH~53790 */
  twobit_invoke( 4 );
  twobit_label( 1904, compiled_block_2_1904 );
  twobit_reg( 2 );
  twobit_op1_branchf_611( 1907, compiled_block_2_1907 ); /* internal:branchf-pair? */
  twobit_reg( 2 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 1 );
  twobit_reg( 2 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 2 );
  twobit_global( 9 ); /* values */
  twobit_invoke( 2 );
  twobit_label( 1907, compiled_block_2_1907 );
  twobit_global( 10 ); /* list? */
  twobit_setreg( 4 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_lexical( 0, 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 2 );
  twobit_lexical( 1, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 5 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 6 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 3 );
  twobit_const( 11 );
  twobit_setreg( 1 );
  twobit_global( 8 ); /*  error~1pxGHH~53790 */
  twobit_invoke( 3 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_63( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_reg( 2 );
  twobit_op1_branchf_610( 1919, compiled_block_2_1919 ); /* internal:branchf-null? */
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 4 );
  twobit_lexical( 0, 1 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 1 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 2 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 4 );
  twobit_lexical( 0, 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 1 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 3 );
  twobit_lexical( 1, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_imm_const_setreg( NIL_CONST, 1 ); /* () */
  twobit_op2_58( 1 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 5 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 6 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 7 );
  twobit_setreg( 1 );
  twobit_global( 8 ); /*  error~1pxGHH~53790 */
  twobit_invoke( 4 );
  twobit_label( 1919, compiled_block_2_1919 );
  twobit_reg( 2 );
  twobit_op1_branchf_611( 1922, compiled_block_2_1922 ); /* internal:branchf-pair? */
  twobit_reg( 2 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 1 );
  twobit_reg( 2 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 2 );
  twobit_global( 9 ); /* values */
  twobit_invoke( 2 );
  twobit_label( 1922, compiled_block_2_1922 );
  twobit_global( 10 ); /* list? */
  twobit_setreg( 4 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_lexical( 0, 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 2 );
  twobit_lexical( 1, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 5 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 6 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 3 );
  twobit_const( 11 );
  twobit_setreg( 1 );
  twobit_global( 8 ); /*  error~1pxGHH~53790 */
  twobit_invoke( 3 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_65( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_reg( 2 );
  twobit_op1_branchf_610( 1933, compiled_block_2_1933 ); /* internal:branchf-null? */
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 4 );
  twobit_lexical( 0, 1 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 1 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 2 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 4 );
  twobit_lexical( 0, 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 1 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 3 );
  twobit_lexical( 1, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_imm_const_setreg( NIL_CONST, 1 ); /* () */
  twobit_op2_58( 1 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 5 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 6 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 7 );
  twobit_setreg( 1 );
  twobit_global( 8 ); /*  error~1pxGHH~53790 */
  twobit_invoke( 4 );
  twobit_label( 1933, compiled_block_2_1933 );
  twobit_reg( 2 );
  twobit_op1_branchf_611( 1936, compiled_block_2_1936 ); /* internal:branchf-pair? */
  twobit_reg( 2 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 1 );
  twobit_reg( 2 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 2 );
  twobit_global( 9 ); /* values */
  twobit_invoke( 2 );
  twobit_label( 1936, compiled_block_2_1936 );
  twobit_global( 10 ); /* list? */
  twobit_setreg( 4 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_lexical( 0, 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 2 );
  twobit_lexical( 1, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 5 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 6 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 3 );
  twobit_const( 11 );
  twobit_setreg( 1 );
  twobit_global( 8 ); /*  error~1pxGHH~53790 */
  twobit_invoke( 3 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_49( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_50( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_51( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 3 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_invoke( 3 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_53( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_store( 2, 1 );
  twobit_movereg( 1, 2 );
  twobit_load( 3, 1 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_lexical( 0, 2 );
  twobit_setreg( 4 );
  twobit_pop( 1 );
  twobit_jump( 2, 1255, compiled_block_2_1255 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_54( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 4 );
  twobit_const( 1 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 1 );
  twobit_jump( 1, 1962, compiled_block_2_1962 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_60( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_lexical( 0, 1 );
  twobit_op1_23(); /* fixnum? */
  twobit_setreg( 2 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 3 );
  twobit_reg( 2 );
  twobit_check( 3, 1, 0, 2002, compiled_block_2_2002 );
  twobit_reg( 1 );
  twobit_op1_41(); /* vector? */
  twobit_setreg( 2 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 3 );
  twobit_reg( 2 );
  twobit_check( 3, 1, 0, 2002, compiled_block_2_2002 );
  twobit_reg( 1 );
  twobit_op1_401(); /* vector-length:vec */
  twobit_setreg( 4 );
  twobit_lexical( 0, 1 );
  twobit_op2_407( 4 ); /* <:fix:fix */
  twobit_setreg( 2 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 3 );
  twobit_reg( 2 );
  twobit_check( 3, 1, 0, 2002, compiled_block_2_2002 );
  twobit_lexical( 0, 1 );
  twobit_op2imm_455( fixnum(0) ); /* >=:fix:fix */
  twobit_setreg( 2 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 3 );
  twobit_reg( 2 );
  twobit_check( 3, 1, 0, 2002, compiled_block_2_2002 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 4 );
  twobit_reg( 1 );
  twobit_op2_402( 4 ); /* vector-ref:trusted */
  twobit_return();
  twobit_label( 2002, compiled_block_2_2002 );
  twobit_trap( 1, 3, 0, 160 );
  twobit_epilogue();
}


RTYPE twobit_thunk_1a14957f3f7a01b9fddcee8a24187c9b_1(CONT_PARAMS) {
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


RTYPE twobit_thunk_1a14957f3f7a01b9fddcee8a24187c9b_2(CONT_PARAMS) {
  RETURN_RTYPE(compiled_start_3_0(CONT_ACTUALS));
}
codeptr_t CDECL twobit_load_table[] = { 
  twobit_thunk_1a14957f3f7a01b9fddcee8a24187c9b_0,
  twobit_thunk_1a14957f3f7a01b9fddcee8a24187c9b_1,
  twobit_thunk_1a14957f3f7a01b9fddcee8a24187c9b_2,
  0  /* The table may be empty; some compilers complain */
};
