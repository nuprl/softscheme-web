/* Generated from /home/henchman/larcenytest/larceny-petit-Nightly-2017-08-06/larceny_src/lib/R6RS/rnrs/records/syntactic/original.slfasl */
#include "petit-instr.h"

static RTYPE compiled_block_1_1016( CONT_PARAMS );
static RTYPE compiled_block_1_1015( CONT_PARAMS );
static RTYPE compiled_start_1_0( CONT_PARAMS );
static RTYPE compiled_block_1_1011( CONT_PARAMS );
static RTYPE compiled_block_1_1005( CONT_PARAMS );
static RTYPE compiled_start_1_3( CONT_PARAMS );
static RTYPE compiled_start_1_9( CONT_PARAMS );
static RTYPE compiled_start_1_8( CONT_PARAMS );
static RTYPE compiled_start_1_7( CONT_PARAMS );
static RTYPE compiled_block_1_1008( CONT_PARAMS );
static RTYPE compiled_block_1_1006( CONT_PARAMS );
static RTYPE compiled_start_1_6( CONT_PARAMS );
static RTYPE compiled_block_1_1003( CONT_PARAMS );
static RTYPE compiled_start_1_5( CONT_PARAMS );
static RTYPE compiled_start_1_4( CONT_PARAMS );
static RTYPE compiled_start_1_2( CONT_PARAMS );
static RTYPE compiled_start_1_1( CONT_PARAMS );

static RTYPE compiled_start_1_0( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_save( 0 );
  twobit_store( 0, 0 );
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 2 ); /*  preferred-cd-set!~1pxGHH~2336 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 3 ); /*  preferred-cd~1pxGHH~2335 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 4 ); /*  preferred-cd-table~1pxGHH~2334 */
  twobit_lambda( compiled_start_1_1, 6, 0 );
  twobit_setreg( 2 );
  twobit_lambda( compiled_start_1_2, 8, 0 );
  twobit_setreg( 4 );
  twobit_lambda( compiled_start_1_3, 10, 0 );
  twobit_setreg( 3 );
  twobit_movereg( 3, 7 );
  twobit_movereg( 4, 6 );
  twobit_const( 11 );
  twobit_setreg( 1 );
  twobit_const( 12 );
  twobit_setreg( 3 );
  twobit_const( 13 );
  twobit_setreg( 4 );
  twobit_const( 14 );
  twobit_setreg( 5 );
  twobit_const( 15 );
  twobit_setreg( 8 );
  twobit_global( 16 ); /* ex:make-library */
  twobit_setrtn( 1015, compiled_block_1_1015 );
  twobit_invoke( 8 );
  twobit_label( 1015, compiled_block_1_1015 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_global( 17 ); /* ex:register-library! */
  twobit_setrtn( 1016, compiled_block_1_1016 );
  twobit_invoke( 1 );
  twobit_label( 1016, compiled_block_1_1016 );
  twobit_load( 0, 0 );
  twobit_global( 18 ); /* values */
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
  twobit_setglbl( 2 ); /*  preferred-cd-set!~1pxGHH~2336 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 3 ); /*  preferred-cd~1pxGHH~2335 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 4 ); /*  preferred-cd-table~1pxGHH~2334 */
  twobit_lambda( compiled_start_1_4, 6, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_op1_4(); /* undefined */
  twobit_op1_4(); /* undefined */
  twobit_setreg( 3 );
  twobit_op1_4(); /* undefined */
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 2 );
  twobit_store( 2, 2 );
  twobit_reg( 3 );
  twobit_op1_52(); /* make-cell */
  twobit_setreg( 3 );
  twobit_store( 3, 1 );
  twobit_lambda( compiled_start_1_5, 8, 0 );
  twobit_setreg( 1 );
  twobit_global( 9 ); /* eqv? */
  twobit_setreg( 2 );
  twobit_global( 10 ); /* make-r6rs-hashtable */
  twobit_setrtn( 1005, compiled_block_1_1005 );
  twobit_invoke( 2 );
  twobit_label( 1005, compiled_block_1_1005 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_movereg( 4, 1 );
  twobit_lambda( compiled_start_1_6, 12, 1 );
  twobit_setreg( 3 );
  twobit_stack( 1 );
  twobit_op2_84( 3 ); /* cell-set! */
  twobit_movereg( 4, 1 );
  twobit_lambda( compiled_start_1_7, 14, 1 );
  twobit_setreg( 4 );
  twobit_stack( 2 );
  twobit_op2_84( 4 ); /* cell-set! */
  twobit_global( 15 ); /* values */
  twobit_setrtn( 1011, compiled_block_1_1011 );
  twobit_invoke( 0 );
  twobit_label( 1011, compiled_block_1_1011 );
  twobit_load( 0, 0 );
  twobit_load( 1, 3 );
  twobit_store( 1, 4 );
  twobit_load( 1, 1 );
  twobit_lambda( compiled_start_1_8, 17, 1 );
  twobit_setreg( 4 );
  twobit_load( 1, 2 );
  twobit_lambda( compiled_start_1_9, 19, 1 );
  twobit_imm_const_setreg( NIL_CONST, 2 ); /* () */
  twobit_op2_58( 2 ); /* cons */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 2 );
  twobit_load( 1, 4 );
  twobit_global( 20 ); /* apply */
  twobit_pop( 4 );
  twobit_invoke( 2 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_4( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_reg( 1 );
  twobit_setglbl( 1 ); /*  preferred-cd~1pxGHH~2335 */
  twobit_reg( 2 );
  twobit_setglbl( 2 ); /*  preferred-cd-set!~1pxGHH~2336 */
  twobit_global( 3 ); /* values */
  twobit_invoke( 0 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_5( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_save( 0 );
  twobit_store( 0, 0 );
  twobit_global( 1 ); /* record-type-name */
  twobit_setrtn( 1003, compiled_block_1_1003 );
  twobit_invoke( 1 );
  twobit_label( 1003, compiled_block_1_1003 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_global( 2 ); /* symbol-hash */
  twobit_pop( 0 );
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_6( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_store( 1, 1 );
  twobit_movereg( 1, 2 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_setreg( 3 );
  twobit_global( 1 ); /* hashtable-ref */
  twobit_setrtn( 1006, compiled_block_1_1006 );
  twobit_invoke( 3 );
  twobit_label( 1006, compiled_block_1_1006 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 1008, compiled_block_1_1008 );
  twobit_reg( 4 );
  twobit_pop( 1 );
  twobit_return();
  twobit_label( 1008, compiled_block_1_1008 );
  twobit_load( 1, 1 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_setreg( 2 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_setreg( 3 );
  twobit_global( 2 ); /* make-record-constructor-descriptor */
  twobit_pop( 1 );
  twobit_invoke( 3 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_7( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_store( 2, 1 );
  twobit_movereg( 1, 2 );
  twobit_load( 3, 1 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_global( 1 ); /* hashtable-set! */
  twobit_pop( 1 );
  twobit_invoke( 3 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_8( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_1_9( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_lexical( 0, 1 );
  twobit_op1_54(); /* cell-ref */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_invoke( 2 );
  twobit_epilogue();
}


RTYPE twobit_thunk_cbe6774606b45513e2c3c8852927d4cf_0(CONT_PARAMS) {
  RETURN_RTYPE(compiled_start_1_0(CONT_ACTUALS));
}
static RTYPE compiled_block_2_2206( CONT_PARAMS );
static RTYPE compiled_block_2_2205( CONT_PARAMS );
static RTYPE compiled_start_2_0( CONT_PARAMS );
static RTYPE compiled_start_2_3( CONT_PARAMS );
static RTYPE compiled_start_2_5( CONT_PARAMS );
static RTYPE compiled_start_2_4( CONT_PARAMS );
static RTYPE compiled_block_2_2201( CONT_PARAMS );
static RTYPE compiled_block_2_2160( CONT_PARAMS );
static RTYPE compiled_block_2_2119( CONT_PARAMS );
static RTYPE compiled_block_2_2085( CONT_PARAMS );
static RTYPE compiled_block_2_2050( CONT_PARAMS );
static RTYPE compiled_block_2_1886( CONT_PARAMS );
static RTYPE compiled_block_2_1513( CONT_PARAMS );
static RTYPE compiled_block_2_1380( CONT_PARAMS );
static RTYPE compiled_block_2_1038( CONT_PARAMS );
static RTYPE compiled_start_2_2( CONT_PARAMS );
static RTYPE compiled_block_2_2184( CONT_PARAMS );
static RTYPE compiled_block_2_2186( CONT_PARAMS );
static RTYPE compiled_block_2_2188( CONT_PARAMS );
static RTYPE compiled_block_2_2190( CONT_PARAMS );
static RTYPE compiled_block_2_2192( CONT_PARAMS );
static RTYPE compiled_block_2_2195( CONT_PARAMS );
static RTYPE compiled_block_2_2194( CONT_PARAMS );
static RTYPE compiled_block_2_2193( CONT_PARAMS );
static RTYPE compiled_block_2_2161( CONT_PARAMS );
static RTYPE compiled_block_2_2164( CONT_PARAMS );
static RTYPE compiled_block_2_2166( CONT_PARAMS );
static RTYPE compiled_block_2_2168( CONT_PARAMS );
static RTYPE compiled_block_2_2170( CONT_PARAMS );
static RTYPE compiled_block_2_2173( CONT_PARAMS );
static RTYPE compiled_block_2_2175( CONT_PARAMS );
static RTYPE compiled_block_2_2176( CONT_PARAMS );
static RTYPE compiled_block_2_2171( CONT_PARAMS );
static RTYPE compiled_start_2_14( CONT_PARAMS );
static RTYPE compiled_block_2_2143( CONT_PARAMS );
static RTYPE compiled_block_2_2145( CONT_PARAMS );
static RTYPE compiled_block_2_2147( CONT_PARAMS );
static RTYPE compiled_block_2_2149( CONT_PARAMS );
static RTYPE compiled_block_2_2151( CONT_PARAMS );
static RTYPE compiled_block_2_2154( CONT_PARAMS );
static RTYPE compiled_block_2_2153( CONT_PARAMS );
static RTYPE compiled_block_2_2152( CONT_PARAMS );
static RTYPE compiled_block_2_2120( CONT_PARAMS );
static RTYPE compiled_block_2_2123( CONT_PARAMS );
static RTYPE compiled_block_2_2125( CONT_PARAMS );
static RTYPE compiled_block_2_2127( CONT_PARAMS );
static RTYPE compiled_block_2_2129( CONT_PARAMS );
static RTYPE compiled_block_2_2132( CONT_PARAMS );
static RTYPE compiled_block_2_2134( CONT_PARAMS );
static RTYPE compiled_block_2_2135( CONT_PARAMS );
static RTYPE compiled_block_2_2130( CONT_PARAMS );
static RTYPE compiled_start_2_13( CONT_PARAMS );
static RTYPE compiled_block_2_2106( CONT_PARAMS );
static RTYPE compiled_block_2_2108( CONT_PARAMS );
static RTYPE compiled_block_2_2110( CONT_PARAMS );
static RTYPE compiled_block_2_2112( CONT_PARAMS );
static RTYPE compiled_block_2_2114( CONT_PARAMS );
static RTYPE compiled_block_2_2113( CONT_PARAMS );
static RTYPE compiled_block_2_2086( CONT_PARAMS );
static RTYPE compiled_block_2_2089( CONT_PARAMS );
static RTYPE compiled_block_2_2091( CONT_PARAMS );
static RTYPE compiled_block_2_2093( CONT_PARAMS );
static RTYPE compiled_block_2_2096( CONT_PARAMS );
static RTYPE compiled_block_2_2098( CONT_PARAMS );
static RTYPE compiled_block_2_2099( CONT_PARAMS );
static RTYPE compiled_block_2_2094( CONT_PARAMS );
static RTYPE compiled_start_2_12( CONT_PARAMS );
static RTYPE compiled_block_2_2071( CONT_PARAMS );
static RTYPE compiled_block_2_2073( CONT_PARAMS );
static RTYPE compiled_block_2_2075( CONT_PARAMS );
static RTYPE compiled_block_2_2077( CONT_PARAMS );
static RTYPE compiled_block_2_2080( CONT_PARAMS );
static RTYPE compiled_block_2_2079( CONT_PARAMS );
static RTYPE compiled_block_2_2078( CONT_PARAMS );
static RTYPE compiled_block_2_2051( CONT_PARAMS );
static RTYPE compiled_block_2_2054( CONT_PARAMS );
static RTYPE compiled_block_2_2056( CONT_PARAMS );
static RTYPE compiled_block_2_2058( CONT_PARAMS );
static RTYPE compiled_block_2_2061( CONT_PARAMS );
static RTYPE compiled_block_2_2063( CONT_PARAMS );
static RTYPE compiled_block_2_2064( CONT_PARAMS );
static RTYPE compiled_block_2_2059( CONT_PARAMS );
static RTYPE compiled_start_2_11( CONT_PARAMS );
static RTYPE compiled_block_2_2018( CONT_PARAMS );
static RTYPE compiled_block_2_2020( CONT_PARAMS );
static RTYPE compiled_block_2_2022( CONT_PARAMS );
static RTYPE compiled_block_2_2024( CONT_PARAMS );
static RTYPE compiled_block_2_2027( CONT_PARAMS );
static RTYPE compiled_block_2_2029( CONT_PARAMS );
static RTYPE compiled_block_2_2032( CONT_PARAMS );
static RTYPE compiled_block_2_2034( CONT_PARAMS );
static RTYPE compiled_block_2_2036( CONT_PARAMS );
static RTYPE compiled_block_2_2040( CONT_PARAMS );
static RTYPE compiled_block_2_2039( CONT_PARAMS );
static RTYPE compiled_block_2_2038( CONT_PARAMS );
static RTYPE compiled_block_2_2037( CONT_PARAMS );
static RTYPE compiled_block_2_2030( CONT_PARAMS );
static RTYPE compiled_block_2_2025( CONT_PARAMS );
static RTYPE compiled_block_2_1890( CONT_PARAMS );
static RTYPE compiled_block_2_1985( CONT_PARAMS );
static RTYPE compiled_block_2_1987( CONT_PARAMS );
static RTYPE compiled_block_2_1989( CONT_PARAMS );
static RTYPE compiled_block_2_1991( CONT_PARAMS );
static RTYPE compiled_block_2_1993( CONT_PARAMS );
static RTYPE compiled_block_2_1996( CONT_PARAMS );
static RTYPE compiled_block_2_1998( CONT_PARAMS );
static RTYPE compiled_block_2_2001( CONT_PARAMS );
static RTYPE compiled_block_2_2003( CONT_PARAMS );
static RTYPE compiled_block_2_2007( CONT_PARAMS );
static RTYPE compiled_block_2_2006( CONT_PARAMS );
static RTYPE compiled_block_2_2005( CONT_PARAMS );
static RTYPE compiled_block_2_2004( CONT_PARAMS );
static RTYPE compiled_block_2_1999( CONT_PARAMS );
static RTYPE compiled_block_2_1994( CONT_PARAMS );
static RTYPE compiled_block_2_1889( CONT_PARAMS );
static RTYPE compiled_block_2_1955( CONT_PARAMS );
static RTYPE compiled_block_2_1957( CONT_PARAMS );
static RTYPE compiled_block_2_1959( CONT_PARAMS );
static RTYPE compiled_block_2_1961( CONT_PARAMS );
static RTYPE compiled_block_2_1963( CONT_PARAMS );
static RTYPE compiled_block_2_1966( CONT_PARAMS );
static RTYPE compiled_block_2_1968( CONT_PARAMS );
static RTYPE compiled_block_2_1970( CONT_PARAMS );
static RTYPE compiled_block_2_1975( CONT_PARAMS );
static RTYPE compiled_block_2_1974( CONT_PARAMS );
static RTYPE compiled_block_2_1973( CONT_PARAMS );
static RTYPE compiled_block_2_1972( CONT_PARAMS );
static RTYPE compiled_block_2_1971( CONT_PARAMS );
static RTYPE compiled_block_2_1964( CONT_PARAMS );
static RTYPE compiled_block_2_1888( CONT_PARAMS );
static RTYPE compiled_block_2_1930( CONT_PARAMS );
static RTYPE compiled_block_2_1932( CONT_PARAMS );
static RTYPE compiled_block_2_1934( CONT_PARAMS );
static RTYPE compiled_block_2_1936( CONT_PARAMS );
static RTYPE compiled_block_2_1938( CONT_PARAMS );
static RTYPE compiled_block_2_1940( CONT_PARAMS );
static RTYPE compiled_block_2_1942( CONT_PARAMS );
static RTYPE compiled_block_2_1946( CONT_PARAMS );
static RTYPE compiled_block_2_1945( CONT_PARAMS );
static RTYPE compiled_block_2_1944( CONT_PARAMS );
static RTYPE compiled_block_2_1943( CONT_PARAMS );
static RTYPE compiled_block_2_1887( CONT_PARAMS );
static RTYPE compiled_block_2_1893( CONT_PARAMS );
static RTYPE compiled_block_2_1895( CONT_PARAMS );
static RTYPE compiled_block_2_1897( CONT_PARAMS );
static RTYPE compiled_block_2_1899( CONT_PARAMS );
static RTYPE compiled_block_2_1902( CONT_PARAMS );
static RTYPE compiled_block_2_1904( CONT_PARAMS );
static RTYPE compiled_block_2_1907( CONT_PARAMS );
static RTYPE compiled_block_2_1909( CONT_PARAMS );
static RTYPE compiled_block_2_1912( CONT_PARAMS );
static RTYPE compiled_block_2_1914( CONT_PARAMS );
static RTYPE compiled_block_2_1918( CONT_PARAMS );
static RTYPE compiled_block_2_1917( CONT_PARAMS );
static RTYPE compiled_block_2_1916( CONT_PARAMS );
static RTYPE compiled_block_2_1915( CONT_PARAMS );
static RTYPE compiled_block_2_1910( CONT_PARAMS );
static RTYPE compiled_block_2_1905( CONT_PARAMS );
static RTYPE compiled_block_2_1900( CONT_PARAMS );
static RTYPE compiled_start_2_10( CONT_PARAMS );
static RTYPE compiled_block_2_1841( CONT_PARAMS );
static RTYPE compiled_block_2_1843( CONT_PARAMS );
static RTYPE compiled_block_2_1845( CONT_PARAMS );
static RTYPE compiled_block_2_1847( CONT_PARAMS );
static RTYPE compiled_block_2_1850( CONT_PARAMS );
static RTYPE compiled_block_2_1852( CONT_PARAMS );
static RTYPE compiled_block_2_1854( CONT_PARAMS );
static RTYPE compiled_block_2_1856( CONT_PARAMS );
static RTYPE compiled_block_2_1859( CONT_PARAMS );
static RTYPE compiled_block_2_1861( CONT_PARAMS );
static RTYPE compiled_block_2_1864( CONT_PARAMS );
static RTYPE compiled_block_2_1866( CONT_PARAMS );
static RTYPE compiled_block_2_1873( CONT_PARAMS );
static RTYPE compiled_block_2_1872( CONT_PARAMS );
static RTYPE compiled_block_2_1871( CONT_PARAMS );
static RTYPE compiled_block_2_1870( CONT_PARAMS );
static RTYPE compiled_block_2_1869( CONT_PARAMS );
static RTYPE compiled_block_2_1868( CONT_PARAMS );
static RTYPE compiled_block_2_1867( CONT_PARAMS );
static RTYPE compiled_block_2_1862( CONT_PARAMS );
static RTYPE compiled_block_2_1857( CONT_PARAMS );
static RTYPE compiled_block_2_1848( CONT_PARAMS );
static RTYPE compiled_block_2_1520( CONT_PARAMS );
static RTYPE compiled_block_2_1795( CONT_PARAMS );
static RTYPE compiled_block_2_1797( CONT_PARAMS );
static RTYPE compiled_block_2_1799( CONT_PARAMS );
static RTYPE compiled_block_2_1801( CONT_PARAMS );
static RTYPE compiled_block_2_1804( CONT_PARAMS );
static RTYPE compiled_block_2_1806( CONT_PARAMS );
static RTYPE compiled_block_2_1808( CONT_PARAMS );
static RTYPE compiled_block_2_1811( CONT_PARAMS );
static RTYPE compiled_block_2_1813( CONT_PARAMS );
static RTYPE compiled_block_2_1815( CONT_PARAMS );
static RTYPE compiled_block_2_1818( CONT_PARAMS );
static RTYPE compiled_block_2_1820( CONT_PARAMS );
static RTYPE compiled_block_2_1827( CONT_PARAMS );
static RTYPE compiled_block_2_1826( CONT_PARAMS );
static RTYPE compiled_block_2_1825( CONT_PARAMS );
static RTYPE compiled_block_2_1824( CONT_PARAMS );
static RTYPE compiled_block_2_1823( CONT_PARAMS );
static RTYPE compiled_block_2_1822( CONT_PARAMS );
static RTYPE compiled_block_2_1821( CONT_PARAMS );
static RTYPE compiled_block_2_1816( CONT_PARAMS );
static RTYPE compiled_block_2_1809( CONT_PARAMS );
static RTYPE compiled_block_2_1802( CONT_PARAMS );
static RTYPE compiled_block_2_1519( CONT_PARAMS );
static RTYPE compiled_block_2_1751( CONT_PARAMS );
static RTYPE compiled_block_2_1753( CONT_PARAMS );
static RTYPE compiled_block_2_1755( CONT_PARAMS );
static RTYPE compiled_block_2_1757( CONT_PARAMS );
static RTYPE compiled_block_2_1760( CONT_PARAMS );
static RTYPE compiled_block_2_1762( CONT_PARAMS );
static RTYPE compiled_block_2_1764( CONT_PARAMS );
static RTYPE compiled_block_2_1766( CONT_PARAMS );
static RTYPE compiled_block_2_1768( CONT_PARAMS );
static RTYPE compiled_block_2_1771( CONT_PARAMS );
static RTYPE compiled_block_2_1773( CONT_PARAMS );
static RTYPE compiled_block_2_1782( CONT_PARAMS );
static RTYPE compiled_block_2_1781( CONT_PARAMS );
static RTYPE compiled_block_2_1780( CONT_PARAMS );
static RTYPE compiled_block_2_1779( CONT_PARAMS );
static RTYPE compiled_block_2_1778( CONT_PARAMS );
static RTYPE compiled_block_2_1777( CONT_PARAMS );
static RTYPE compiled_block_2_1776( CONT_PARAMS );
static RTYPE compiled_block_2_1775( CONT_PARAMS );
static RTYPE compiled_block_2_1774( CONT_PARAMS );
static RTYPE compiled_block_2_1769( CONT_PARAMS );
static RTYPE compiled_block_2_1758( CONT_PARAMS );
static RTYPE compiled_block_2_1518( CONT_PARAMS );
static RTYPE compiled_block_2_1704( CONT_PARAMS );
static RTYPE compiled_block_2_1706( CONT_PARAMS );
static RTYPE compiled_block_2_1708( CONT_PARAMS );
static RTYPE compiled_block_2_1710( CONT_PARAMS );
static RTYPE compiled_block_2_1713( CONT_PARAMS );
static RTYPE compiled_block_2_1715( CONT_PARAMS );
static RTYPE compiled_block_2_1717( CONT_PARAMS );
static RTYPE compiled_block_2_1720( CONT_PARAMS );
static RTYPE compiled_block_2_1722( CONT_PARAMS );
static RTYPE compiled_block_2_1725( CONT_PARAMS );
static RTYPE compiled_block_2_1727( CONT_PARAMS );
static RTYPE compiled_block_2_1729( CONT_PARAMS );
static RTYPE compiled_block_2_1737( CONT_PARAMS );
static RTYPE compiled_block_2_1736( CONT_PARAMS );
static RTYPE compiled_block_2_1735( CONT_PARAMS );
static RTYPE compiled_block_2_1734( CONT_PARAMS );
static RTYPE compiled_block_2_1733( CONT_PARAMS );
static RTYPE compiled_block_2_1732( CONT_PARAMS );
static RTYPE compiled_block_2_1731( CONT_PARAMS );
static RTYPE compiled_block_2_1730( CONT_PARAMS );
static RTYPE compiled_block_2_1723( CONT_PARAMS );
static RTYPE compiled_block_2_1718( CONT_PARAMS );
static RTYPE compiled_block_2_1711( CONT_PARAMS );
static RTYPE compiled_block_2_1517( CONT_PARAMS );
static RTYPE compiled_block_2_1659( CONT_PARAMS );
static RTYPE compiled_block_2_1661( CONT_PARAMS );
static RTYPE compiled_block_2_1663( CONT_PARAMS );
static RTYPE compiled_block_2_1665( CONT_PARAMS );
static RTYPE compiled_block_2_1668( CONT_PARAMS );
static RTYPE compiled_block_2_1670( CONT_PARAMS );
static RTYPE compiled_block_2_1672( CONT_PARAMS );
static RTYPE compiled_block_2_1674( CONT_PARAMS );
static RTYPE compiled_block_2_1677( CONT_PARAMS );
static RTYPE compiled_block_2_1679( CONT_PARAMS );
static RTYPE compiled_block_2_1681( CONT_PARAMS );
static RTYPE compiled_block_2_1691( CONT_PARAMS );
static RTYPE compiled_block_2_1690( CONT_PARAMS );
static RTYPE compiled_block_2_1689( CONT_PARAMS );
static RTYPE compiled_block_2_1688( CONT_PARAMS );
static RTYPE compiled_block_2_1687( CONT_PARAMS );
static RTYPE compiled_block_2_1686( CONT_PARAMS );
static RTYPE compiled_block_2_1685( CONT_PARAMS );
static RTYPE compiled_block_2_1684( CONT_PARAMS );
static RTYPE compiled_block_2_1683( CONT_PARAMS );
static RTYPE compiled_block_2_1682( CONT_PARAMS );
static RTYPE compiled_block_2_1675( CONT_PARAMS );
static RTYPE compiled_block_2_1666( CONT_PARAMS );
static RTYPE compiled_block_2_1516( CONT_PARAMS );
static RTYPE compiled_block_2_1614( CONT_PARAMS );
static RTYPE compiled_block_2_1616( CONT_PARAMS );
static RTYPE compiled_block_2_1618( CONT_PARAMS );
static RTYPE compiled_block_2_1620( CONT_PARAMS );
static RTYPE compiled_block_2_1623( CONT_PARAMS );
static RTYPE compiled_block_2_1625( CONT_PARAMS );
static RTYPE compiled_block_2_1627( CONT_PARAMS );
static RTYPE compiled_block_2_1630( CONT_PARAMS );
static RTYPE compiled_block_2_1632( CONT_PARAMS );
static RTYPE compiled_block_2_1634( CONT_PARAMS );
static RTYPE compiled_block_2_1636( CONT_PARAMS );
static RTYPE compiled_block_2_1646( CONT_PARAMS );
static RTYPE compiled_block_2_1645( CONT_PARAMS );
static RTYPE compiled_block_2_1644( CONT_PARAMS );
static RTYPE compiled_block_2_1643( CONT_PARAMS );
static RTYPE compiled_block_2_1642( CONT_PARAMS );
static RTYPE compiled_block_2_1641( CONT_PARAMS );
static RTYPE compiled_block_2_1640( CONT_PARAMS );
static RTYPE compiled_block_2_1639( CONT_PARAMS );
static RTYPE compiled_block_2_1638( CONT_PARAMS );
static RTYPE compiled_block_2_1637( CONT_PARAMS );
static RTYPE compiled_block_2_1628( CONT_PARAMS );
static RTYPE compiled_block_2_1621( CONT_PARAMS );
static RTYPE compiled_block_2_1515( CONT_PARAMS );
static RTYPE compiled_block_2_1571( CONT_PARAMS );
static RTYPE compiled_block_2_1573( CONT_PARAMS );
static RTYPE compiled_block_2_1575( CONT_PARAMS );
static RTYPE compiled_block_2_1577( CONT_PARAMS );
static RTYPE compiled_block_2_1580( CONT_PARAMS );
static RTYPE compiled_block_2_1582( CONT_PARAMS );
static RTYPE compiled_block_2_1584( CONT_PARAMS );
static RTYPE compiled_block_2_1586( CONT_PARAMS );
static RTYPE compiled_block_2_1588( CONT_PARAMS );
static RTYPE compiled_block_2_1590( CONT_PARAMS );
static RTYPE compiled_block_2_1602( CONT_PARAMS );
static RTYPE compiled_block_2_1601( CONT_PARAMS );
static RTYPE compiled_block_2_1600( CONT_PARAMS );
static RTYPE compiled_block_2_1599( CONT_PARAMS );
static RTYPE compiled_block_2_1598( CONT_PARAMS );
static RTYPE compiled_block_2_1597( CONT_PARAMS );
static RTYPE compiled_block_2_1596( CONT_PARAMS );
static RTYPE compiled_block_2_1595( CONT_PARAMS );
static RTYPE compiled_block_2_1594( CONT_PARAMS );
static RTYPE compiled_block_2_1593( CONT_PARAMS );
static RTYPE compiled_block_2_1592( CONT_PARAMS );
static RTYPE compiled_block_2_1591( CONT_PARAMS );
static RTYPE compiled_block_2_1578( CONT_PARAMS );
static RTYPE compiled_block_2_1514( CONT_PARAMS );
static RTYPE compiled_block_2_1523( CONT_PARAMS );
static RTYPE compiled_block_2_1525( CONT_PARAMS );
static RTYPE compiled_block_2_1527( CONT_PARAMS );
static RTYPE compiled_block_2_1529( CONT_PARAMS );
static RTYPE compiled_block_2_1532( CONT_PARAMS );
static RTYPE compiled_block_2_1534( CONT_PARAMS );
static RTYPE compiled_block_2_1536( CONT_PARAMS );
static RTYPE compiled_block_2_1539( CONT_PARAMS );
static RTYPE compiled_block_2_1541( CONT_PARAMS );
static RTYPE compiled_block_2_1544( CONT_PARAMS );
static RTYPE compiled_block_2_1546( CONT_PARAMS );
static RTYPE compiled_block_2_1549( CONT_PARAMS );
static RTYPE compiled_block_2_1551( CONT_PARAMS );
static RTYPE compiled_block_2_1556( CONT_PARAMS );
static RTYPE compiled_block_2_1555( CONT_PARAMS );
static RTYPE compiled_block_2_1554( CONT_PARAMS );
static RTYPE compiled_block_2_1553( CONT_PARAMS );
static RTYPE compiled_block_2_1552( CONT_PARAMS );
static RTYPE compiled_block_2_1547( CONT_PARAMS );
static RTYPE compiled_block_2_1542( CONT_PARAMS );
static RTYPE compiled_block_2_1537( CONT_PARAMS );
static RTYPE compiled_block_2_1530( CONT_PARAMS );
static RTYPE compiled_start_2_9( CONT_PARAMS );
static RTYPE compiled_block_2_1382( CONT_PARAMS );
static RTYPE compiled_block_2_1384( CONT_PARAMS );
static RTYPE compiled_block_2_1386( CONT_PARAMS );
static RTYPE compiled_block_2_1388( CONT_PARAMS );
static RTYPE compiled_block_2_1390( CONT_PARAMS );
static RTYPE compiled_block_2_1392( CONT_PARAMS );
static RTYPE compiled_start_2_8( CONT_PARAMS );
static RTYPE compiled_block_2_1404( CONT_PARAMS );
static RTYPE compiled_block_2_1501( CONT_PARAMS );
static RTYPE compiled_block_2_1503( CONT_PARAMS );
static RTYPE compiled_block_2_1502( CONT_PARAMS );
static RTYPE compiled_start_2_16( CONT_PARAMS );
static RTYPE compiled_block_2_1499( CONT_PARAMS );
static RTYPE compiled_block_2_1468( CONT_PARAMS );
static RTYPE compiled_block_2_1467( CONT_PARAMS );
static RTYPE compiled_block_2_1498( CONT_PARAMS );
static RTYPE compiled_block_2_1489( CONT_PARAMS );
static RTYPE compiled_block_2_1492( CONT_PARAMS );
static RTYPE compiled_block_2_1496( CONT_PARAMS );
static RTYPE compiled_block_2_1495( CONT_PARAMS );
static RTYPE compiled_block_2_1494( CONT_PARAMS );
static RTYPE compiled_block_2_1493( CONT_PARAMS );
static RTYPE compiled_block_2_1490( CONT_PARAMS );
static RTYPE compiled_block_2_1491( CONT_PARAMS );
static RTYPE compiled_block_2_1486( CONT_PARAMS );
static RTYPE compiled_block_2_1487( CONT_PARAMS );
static RTYPE compiled_block_2_1407( CONT_PARAMS );
static RTYPE compiled_block_2_1484( CONT_PARAMS );
static RTYPE compiled_block_2_1474( CONT_PARAMS );
static RTYPE compiled_block_2_1477( CONT_PARAMS );
static RTYPE compiled_block_2_1482( CONT_PARAMS );
static RTYPE compiled_block_2_1481( CONT_PARAMS );
static RTYPE compiled_block_2_1480( CONT_PARAMS );
static RTYPE compiled_block_2_1478( CONT_PARAMS );
static RTYPE compiled_block_2_1475( CONT_PARAMS );
static RTYPE compiled_block_2_1476( CONT_PARAMS );
static RTYPE compiled_block_2_1471( CONT_PARAMS );
static RTYPE compiled_block_2_1472( CONT_PARAMS );
static RTYPE compiled_block_2_1406( CONT_PARAMS );
static RTYPE compiled_block_2_1469( CONT_PARAMS );
static RTYPE compiled_block_2_1457( CONT_PARAMS );
static RTYPE compiled_block_2_1460( CONT_PARAMS );
static RTYPE compiled_block_2_1465( CONT_PARAMS );
static RTYPE compiled_block_2_1464( CONT_PARAMS );
static RTYPE compiled_block_2_1463( CONT_PARAMS );
static RTYPE compiled_block_2_1461( CONT_PARAMS );
static RTYPE compiled_block_2_1458( CONT_PARAMS );
static RTYPE compiled_block_2_1459( CONT_PARAMS );
static RTYPE compiled_block_2_1454( CONT_PARAMS );
static RTYPE compiled_block_2_1455( CONT_PARAMS );
static RTYPE compiled_block_2_1405( CONT_PARAMS );
static RTYPE compiled_block_2_1410( CONT_PARAMS );
static RTYPE compiled_block_2_1412( CONT_PARAMS );
static RTYPE compiled_block_2_1414( CONT_PARAMS );
static RTYPE compiled_block_2_1416( CONT_PARAMS );
static RTYPE compiled_block_2_1418( CONT_PARAMS );
static RTYPE compiled_block_2_1420( CONT_PARAMS );
static RTYPE compiled_block_2_1422( CONT_PARAMS );
static RTYPE compiled_block_2_1446( CONT_PARAMS );
static RTYPE compiled_block_2_1442( CONT_PARAMS );
static RTYPE compiled_block_2_1445( CONT_PARAMS );
static RTYPE compiled_block_2_1443( CONT_PARAMS );
static RTYPE compiled_block_2_1444( CONT_PARAMS );
static RTYPE compiled_temp_2_20( CONT_PARAMS );
static RTYPE compiled_block_2_1441( CONT_PARAMS );
static RTYPE compiled_block_2_1440( CONT_PARAMS );
static RTYPE compiled_block_2_1436( CONT_PARAMS );
static RTYPE compiled_block_2_1439( CONT_PARAMS );
static RTYPE compiled_block_2_1437( CONT_PARAMS );
static RTYPE compiled_block_2_1438( CONT_PARAMS );
static RTYPE compiled_temp_2_19( CONT_PARAMS );
static RTYPE compiled_block_2_1435( CONT_PARAMS );
static RTYPE compiled_block_2_1434( CONT_PARAMS );
static RTYPE compiled_block_2_1433( CONT_PARAMS );
static RTYPE compiled_block_2_1432( CONT_PARAMS );
static RTYPE compiled_block_2_1431( CONT_PARAMS );
static RTYPE compiled_block_2_1427( CONT_PARAMS );
static RTYPE compiled_block_2_1430( CONT_PARAMS );
static RTYPE compiled_block_2_1428( CONT_PARAMS );
static RTYPE compiled_block_2_1429( CONT_PARAMS );
static RTYPE compiled_temp_2_18( CONT_PARAMS );
static RTYPE compiled_block_2_1426( CONT_PARAMS );
static RTYPE compiled_block_2_1425( CONT_PARAMS );
static RTYPE compiled_block_2_1424( CONT_PARAMS );
static RTYPE compiled_block_2_1423( CONT_PARAMS );
static RTYPE compiled_start_2_17( CONT_PARAMS );
static RTYPE compiled_start_2_23( CONT_PARAMS );
static RTYPE compiled_block_2_1479( CONT_PARAMS );
static RTYPE compiled_start_2_22( CONT_PARAMS );
static RTYPE compiled_block_2_1462( CONT_PARAMS );
static RTYPE compiled_start_2_21( CONT_PARAMS );
static RTYPE compiled_block_2_1394( CONT_PARAMS );
static RTYPE compiled_block_2_1396( CONT_PARAMS );
static RTYPE compiled_block_2_1398( CONT_PARAMS );
static RTYPE compiled_block_2_1400( CONT_PARAMS );
static RTYPE compiled_block_2_1402( CONT_PARAMS );
static RTYPE compiled_start_2_15( CONT_PARAMS );
static RTYPE compiled_block_2_1263( CONT_PARAMS );
static RTYPE compiled_block_2_1264( CONT_PARAMS );
static RTYPE compiled_block_2_1268( CONT_PARAMS );
static RTYPE compiled_block_2_1123( CONT_PARAMS );
static RTYPE compiled_block_2_1153( CONT_PARAMS );
static RTYPE compiled_block_2_1345( CONT_PARAMS );
static RTYPE compiled_block_2_1347( CONT_PARAMS );
static RTYPE compiled_block_2_1349( CONT_PARAMS );
static RTYPE compiled_block_2_1351( CONT_PARAMS );
static RTYPE compiled_block_2_1353( CONT_PARAMS );
static RTYPE compiled_block_2_1355( CONT_PARAMS );
static RTYPE compiled_block_2_1357( CONT_PARAMS );
static RTYPE compiled_block_2_1359( CONT_PARAMS );
static RTYPE compiled_block_2_1361( CONT_PARAMS );
static RTYPE compiled_block_2_1363( CONT_PARAMS );
static RTYPE compiled_block_2_1365( CONT_PARAMS );
static RTYPE compiled_block_2_1367( CONT_PARAMS );
static RTYPE compiled_block_2_1343( CONT_PARAMS );
static RTYPE compiled_block_2_1342( CONT_PARAMS );
static RTYPE compiled_block_2_1341( CONT_PARAMS );
static RTYPE compiled_block_2_1340( CONT_PARAMS );
static RTYPE compiled_block_2_1339( CONT_PARAMS );
static RTYPE compiled_block_2_1338( CONT_PARAMS );
static RTYPE compiled_block_2_1337( CONT_PARAMS );
static RTYPE compiled_block_2_1336( CONT_PARAMS );
static RTYPE compiled_block_2_1335( CONT_PARAMS );
static RTYPE compiled_block_2_1334( CONT_PARAMS );
static RTYPE compiled_block_2_1333( CONT_PARAMS );
static RTYPE compiled_block_2_1332( CONT_PARAMS );
static RTYPE compiled_block_2_1331( CONT_PARAMS );
static RTYPE compiled_block_2_1043( CONT_PARAMS );
static RTYPE compiled_block_2_1311( CONT_PARAMS );
static RTYPE compiled_block_2_1313( CONT_PARAMS );
static RTYPE compiled_block_2_1316( CONT_PARAMS );
static RTYPE compiled_block_2_1319( CONT_PARAMS );
static RTYPE compiled_block_2_1325( CONT_PARAMS );
static RTYPE compiled_block_2_1321( CONT_PARAMS );
static RTYPE compiled_block_2_1322( CONT_PARAMS );
static RTYPE compiled_block_2_1323( CONT_PARAMS );
static RTYPE compiled_block_2_1320( CONT_PARAMS );
static RTYPE compiled_block_2_1317( CONT_PARAMS );
static RTYPE compiled_block_2_1314( CONT_PARAMS );
static RTYPE compiled_block_2_1042( CONT_PARAMS );
static RTYPE compiled_block_2_1304( CONT_PARAMS );
static RTYPE compiled_block_2_1307( CONT_PARAMS );
static RTYPE compiled_block_2_1305( CONT_PARAMS );
static RTYPE compiled_block_2_1041( CONT_PARAMS );
static RTYPE compiled_block_2_1296( CONT_PARAMS );
static RTYPE compiled_block_2_1298( CONT_PARAMS );
static RTYPE compiled_block_2_1301( CONT_PARAMS );
static RTYPE compiled_block_2_1299( CONT_PARAMS );
static RTYPE compiled_block_2_1040( CONT_PARAMS );
static RTYPE compiled_block_2_1291( CONT_PARAMS );
static RTYPE compiled_block_2_1293( CONT_PARAMS );
static RTYPE compiled_block_2_1292( CONT_PARAMS );
static RTYPE compiled_block_2_1289( CONT_PARAMS );
static RTYPE compiled_block_2_1287( CONT_PARAMS );
static RTYPE compiled_block_2_1039( CONT_PARAMS );
static RTYPE compiled_block_2_1046( CONT_PARAMS );
static RTYPE compiled_block_2_1048( CONT_PARAMS );
static RTYPE compiled_block_2_1050( CONT_PARAMS );
static RTYPE compiled_block_2_1052( CONT_PARAMS );
static RTYPE compiled_block_2_1054( CONT_PARAMS );
static RTYPE compiled_block_2_1057( CONT_PARAMS );
static RTYPE compiled_block_2_1275( CONT_PARAMS );
static RTYPE compiled_block_2_1278( CONT_PARAMS );
static RTYPE compiled_block_2_1279( CONT_PARAMS );
static RTYPE compiled_block_2_1276( CONT_PARAMS );
static RTYPE compiled_block_2_1272( CONT_PARAMS );
static RTYPE compiled_block_2_1273( CONT_PARAMS );
static RTYPE compiled_block_2_1274( CONT_PARAMS );
static RTYPE compiled_block_2_1269( CONT_PARAMS );
static RTYPE compiled_block_2_1270( CONT_PARAMS );
static RTYPE compiled_block_2_1271( CONT_PARAMS );
static RTYPE compiled_block_2_1265( CONT_PARAMS );
static RTYPE compiled_block_2_1266( CONT_PARAMS );
static RTYPE compiled_block_2_1267( CONT_PARAMS );
static RTYPE compiled_block_2_1261( CONT_PARAMS );
static RTYPE compiled_block_2_1262( CONT_PARAMS );
static RTYPE compiled_block_2_1257( CONT_PARAMS );
static RTYPE compiled_block_2_1260( CONT_PARAMS );
static RTYPE compiled_block_2_1258( CONT_PARAMS );
static RTYPE compiled_block_2_1254( CONT_PARAMS );
static RTYPE compiled_block_2_1256( CONT_PARAMS );
static RTYPE compiled_block_2_1255( CONT_PARAMS );
static RTYPE compiled_block_2_1253( CONT_PARAMS );
static RTYPE compiled_block_2_1250( CONT_PARAMS );
static RTYPE compiled_block_2_1251( CONT_PARAMS );
static RTYPE compiled_block_2_1252( CONT_PARAMS );
static RTYPE compiled_block_2_1193( CONT_PARAMS );
static RTYPE compiled_block_2_1197( CONT_PARAMS );
static RTYPE compiled_block_2_1196( CONT_PARAMS );
static RTYPE compiled_block_2_1195( CONT_PARAMS );
static RTYPE compiled_block_2_1194( CONT_PARAMS );
static RTYPE compiled_block_2_1192( CONT_PARAMS );
static RTYPE compiled_block_2_1187( CONT_PARAMS );
static RTYPE compiled_block_2_1191( CONT_PARAMS );
static RTYPE compiled_block_2_1190( CONT_PARAMS );
static RTYPE compiled_block_2_1189( CONT_PARAMS );
static RTYPE compiled_block_2_1188( CONT_PARAMS );
static RTYPE compiled_block_2_1186( CONT_PARAMS );
static RTYPE compiled_block_2_1185( CONT_PARAMS );
static RTYPE compiled_block_2_1074( CONT_PARAMS );
static RTYPE compiled_block_2_1075( CONT_PARAMS );
static RTYPE compiled_block_2_1084( CONT_PARAMS );
static RTYPE compiled_block_2_1126( CONT_PARAMS );
static RTYPE compiled_block_2_1136( CONT_PARAMS );
static RTYPE compiled_block_2_1144( CONT_PARAMS );
static RTYPE compiled_block_2_1157( CONT_PARAMS );
static RTYPE compiled_block_2_1169( CONT_PARAMS );
static RTYPE compiled_block_2_1178( CONT_PARAMS );
static RTYPE compiled_block_2_1183( CONT_PARAMS );
static RTYPE compiled_temp_2_29( CONT_PARAMS );
static RTYPE compiled_block_2_1184( CONT_PARAMS );
static RTYPE compiled_block_2_1181( CONT_PARAMS );
static RTYPE compiled_block_2_1180( CONT_PARAMS );
static RTYPE compiled_block_2_1170( CONT_PARAMS );
static RTYPE compiled_block_2_1174( CONT_PARAMS );
static RTYPE compiled_block_2_1176( CONT_PARAMS );
static RTYPE compiled_block_2_1172( CONT_PARAMS );
static RTYPE compiled_block_2_1171( CONT_PARAMS );
static RTYPE compiled_block_2_1158( CONT_PARAMS );
static RTYPE compiled_block_2_1162( CONT_PARAMS );
static RTYPE compiled_block_2_1165( CONT_PARAMS );
static RTYPE compiled_block_2_1167( CONT_PARAMS );
static RTYPE compiled_temp_2_28( CONT_PARAMS );
static RTYPE compiled_block_2_1163( CONT_PARAMS );
static RTYPE compiled_block_2_1160( CONT_PARAMS );
static RTYPE compiled_block_2_1159( CONT_PARAMS );
static RTYPE compiled_block_2_1145( CONT_PARAMS );
static RTYPE compiled_block_2_1149( CONT_PARAMS );
static RTYPE compiled_block_2_1152( CONT_PARAMS );
static RTYPE compiled_block_2_1155( CONT_PARAMS );
static RTYPE compiled_temp_2_27( CONT_PARAMS );
static RTYPE compiled_block_2_1150( CONT_PARAMS );
static RTYPE compiled_block_2_1147( CONT_PARAMS );
static RTYPE compiled_block_2_1146( CONT_PARAMS );
static RTYPE compiled_block_2_1137( CONT_PARAMS );
static RTYPE compiled_block_2_1141( CONT_PARAMS );
static RTYPE compiled_temp_2_26( CONT_PARAMS );
static RTYPE compiled_block_2_1142( CONT_PARAMS );
static RTYPE compiled_block_2_1139( CONT_PARAMS );
static RTYPE compiled_block_2_1138( CONT_PARAMS );
static RTYPE compiled_block_2_1127( CONT_PARAMS );
static RTYPE compiled_block_2_1131( CONT_PARAMS );
static RTYPE compiled_block_2_1134( CONT_PARAMS );
static RTYPE compiled_temp_2_25( CONT_PARAMS );
static RTYPE compiled_block_2_1132( CONT_PARAMS );
static RTYPE compiled_block_2_1129( CONT_PARAMS );
static RTYPE compiled_block_2_1128( CONT_PARAMS );
static RTYPE compiled_block_2_1085( CONT_PARAMS );
static RTYPE compiled_block_2_1089( CONT_PARAMS );
static RTYPE compiled_block_2_1124( CONT_PARAMS );
static RTYPE compiled_block_2_1087( CONT_PARAMS );
static RTYPE compiled_block_2_1086( CONT_PARAMS );
static RTYPE compiled_block_2_1077( CONT_PARAMS );
static RTYPE compiled_block_2_1078( CONT_PARAMS );
static RTYPE compiled_block_2_1081( CONT_PARAMS );
static RTYPE compiled_block_2_1082( CONT_PARAMS );
static RTYPE compiled_block_2_1079( CONT_PARAMS );
static RTYPE compiled_block_2_1076( CONT_PARAMS );
static RTYPE compiled_block_2_1073( CONT_PARAMS );
static RTYPE compiled_block_2_1072( CONT_PARAMS );
static RTYPE compiled_block_2_1071( CONT_PARAMS );
static RTYPE compiled_block_2_1070( CONT_PARAMS );
static RTYPE compiled_block_2_1069( CONT_PARAMS );
static RTYPE compiled_block_2_1068( CONT_PARAMS );
static RTYPE compiled_block_2_1067( CONT_PARAMS );
static RTYPE compiled_block_2_1066( CONT_PARAMS );
static RTYPE compiled_block_2_1065( CONT_PARAMS );
static RTYPE compiled_block_2_1064( CONT_PARAMS );
static RTYPE compiled_block_2_1063( CONT_PARAMS );
static RTYPE compiled_block_2_1062( CONT_PARAMS );
static RTYPE compiled_block_2_1061( CONT_PARAMS );
static RTYPE compiled_block_2_1060( CONT_PARAMS );
static RTYPE compiled_block_2_1059( CONT_PARAMS );
static RTYPE compiled_block_2_1058( CONT_PARAMS );
static RTYPE compiled_block_2_1055( CONT_PARAMS );
static RTYPE compiled_start_2_7( CONT_PARAMS );
static RTYPE compiled_block_2_1240( CONT_PARAMS );
static RTYPE compiled_block_2_1205( CONT_PARAMS );
static RTYPE compiled_block_2_1206( CONT_PARAMS );
static RTYPE compiled_block_2_1239( CONT_PARAMS );
static RTYPE compiled_block_2_1242( CONT_PARAMS );
static RTYPE compiled_block_2_1244( CONT_PARAMS );
static RTYPE compiled_block_2_1246( CONT_PARAMS );
static RTYPE compiled_temp_2_32( CONT_PARAMS );
static RTYPE compiled_block_2_1237( CONT_PARAMS );
static RTYPE compiled_block_2_1204( CONT_PARAMS );
static RTYPE compiled_block_2_1222( CONT_PARAMS );
static RTYPE compiled_block_2_1228( CONT_PARAMS );
static RTYPE compiled_block_2_1230( CONT_PARAMS );
static RTYPE compiled_block_2_1232( CONT_PARAMS );
static RTYPE compiled_block_2_1233( CONT_PARAMS );
static RTYPE compiled_block_2_1226( CONT_PARAMS );
static RTYPE compiled_block_2_1225( CONT_PARAMS );
static RTYPE compiled_block_2_1224( CONT_PARAMS );
static RTYPE compiled_block_2_1223( CONT_PARAMS );
static RTYPE compiled_block_2_1213( CONT_PARAMS );
static RTYPE compiled_block_2_1215( CONT_PARAMS );
static RTYPE compiled_block_2_1217( CONT_PARAMS );
static RTYPE compiled_block_2_1218( CONT_PARAMS );
static RTYPE compiled_block_2_1211( CONT_PARAMS );
static RTYPE compiled_block_2_1210( CONT_PARAMS );
static RTYPE compiled_block_2_1209( CONT_PARAMS );
static RTYPE compiled_block_2_1208( CONT_PARAMS );
static RTYPE compiled_block_2_1207( CONT_PARAMS );
static RTYPE compiled_temp_2_31( CONT_PARAMS );
static RTYPE compiled_block_2_1202( CONT_PARAMS );
static RTYPE compiled_block_2_1199( CONT_PARAMS );
static RTYPE compiled_block_2_1200( CONT_PARAMS );
static RTYPE compiled_block_2_1201( CONT_PARAMS );
static RTYPE compiled_block_2_1198( CONT_PARAMS );
static RTYPE compiled_start_2_30( CONT_PARAMS );
static RTYPE compiled_block_2_1098( CONT_PARAMS );
static RTYPE compiled_block_2_1116( CONT_PARAMS );
static RTYPE compiled_block_2_1103( CONT_PARAMS );
static RTYPE compiled_block_2_1106( CONT_PARAMS );
static RTYPE compiled_block_2_1094( CONT_PARAMS );
static RTYPE compiled_block_2_1097( CONT_PARAMS );
static RTYPE compiled_block_2_1105( CONT_PARAMS );
static RTYPE compiled_block_2_1108( CONT_PARAMS );
static RTYPE compiled_block_2_1118( CONT_PARAMS );
static RTYPE compiled_block_2_1120( CONT_PARAMS );
static RTYPE compiled_block_2_1122( CONT_PARAMS );
static RTYPE compiled_block_2_1113( CONT_PARAMS );
static RTYPE compiled_block_2_1115( CONT_PARAMS );
static RTYPE compiled_block_2_1111( CONT_PARAMS );
static RTYPE compiled_block_2_1109( CONT_PARAMS );
static RTYPE compiled_block_2_1099( CONT_PARAMS );
static RTYPE compiled_block_2_1102( CONT_PARAMS );
static RTYPE compiled_block_2_1100( CONT_PARAMS );
static RTYPE compiled_temp_2_33( CONT_PARAMS );
static RTYPE compiled_block_2_1095( CONT_PARAMS );
static RTYPE compiled_block_2_1092( CONT_PARAMS );
static RTYPE compiled_block_2_1091( CONT_PARAMS );
static RTYPE compiled_start_2_24( CONT_PARAMS );
static RTYPE compiled_block_2_1028( CONT_PARAMS );
static RTYPE compiled_block_2_1030( CONT_PARAMS );
static RTYPE compiled_block_2_1033( CONT_PARAMS );
static RTYPE compiled_block_2_1034( CONT_PARAMS );
static RTYPE compiled_block_2_1031( CONT_PARAMS );
static RTYPE compiled_block_2_1002( CONT_PARAMS );
static RTYPE compiled_block_2_1005( CONT_PARAMS );
static RTYPE compiled_block_2_1007( CONT_PARAMS );
static RTYPE compiled_block_2_1009( CONT_PARAMS );
static RTYPE compiled_block_2_1011( CONT_PARAMS );
static RTYPE compiled_block_2_1013( CONT_PARAMS );
static RTYPE compiled_block_2_1015( CONT_PARAMS );
static RTYPE compiled_block_2_1018( CONT_PARAMS );
static RTYPE compiled_block_2_1019( CONT_PARAMS );
static RTYPE compiled_block_2_1016( CONT_PARAMS );
static RTYPE compiled_start_2_6( CONT_PARAMS );
static RTYPE compiled_start_2_1( CONT_PARAMS );

static RTYPE compiled_start_2_0( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_save( 0 );
  twobit_store( 0, 0 );
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 2 ); /*  record-constructor-descriptor~1pxGHH~3324 */
  twobit_global( 1 ); /* ex:unspecified */
  twobit_setglbl( 3 ); /*  record-type-descriptor~1pxGHH~3323 */
  twobit_lambda( compiled_start_2_1, 5, 0 );
  twobit_setreg( 2 );
  twobit_lambda( compiled_start_2_2, 7, 0 );
  twobit_setreg( 4 );
  twobit_lambda( compiled_start_2_3, 9, 0 );
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
  twobit_setrtn( 2205, compiled_block_2_2205 );
  twobit_invoke( 8 );
  twobit_label( 2205, compiled_block_2_2205 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_global( 16 ); /* ex:register-library! */
  twobit_setrtn( 2206, compiled_block_2_2206 );
  twobit_invoke( 1 );
  twobit_label( 2206, compiled_block_2_2206 );
  twobit_load( 0, 0 );
  twobit_global( 17 ); /* values */
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
  twobit_lambda( compiled_start_2_6, 2, 0 );
  twobit_setreg( 2 );
  twobit_const( 3 );
  twobit_setreg( 1 );
  twobit_global( 4 ); /* ex:register-macro! */
  twobit_setrtn( 1038, compiled_block_2_1038 );
  twobit_invoke( 2 );
  twobit_label( 1038, compiled_block_2_1038 );
  twobit_load( 0, 0 );
  twobit_lambda( compiled_start_2_7, 6, 0 );
  twobit_setreg( 2 );
  twobit_const( 7 );
  twobit_setreg( 1 );
  twobit_global( 4 ); /* ex:register-macro! */
  twobit_setrtn( 1380, compiled_block_2_1380 );
  twobit_invoke( 2 );
  twobit_label( 1380, compiled_block_2_1380 );
  twobit_load( 0, 0 );
  twobit_lambda( compiled_start_2_8, 9, 0 );
  twobit_setreg( 2 );
  twobit_const( 10 );
  twobit_setreg( 1 );
  twobit_global( 4 ); /* ex:register-macro! */
  twobit_setrtn( 1513, compiled_block_2_1513 );
  twobit_invoke( 2 );
  twobit_label( 1513, compiled_block_2_1513 );
  twobit_load( 0, 0 );
  twobit_lambda( compiled_start_2_9, 12, 0 );
  twobit_setreg( 2 );
  twobit_const( 13 );
  twobit_setreg( 1 );
  twobit_global( 4 ); /* ex:register-macro! */
  twobit_setrtn( 1886, compiled_block_2_1886 );
  twobit_invoke( 2 );
  twobit_label( 1886, compiled_block_2_1886 );
  twobit_load( 0, 0 );
  twobit_lambda( compiled_start_2_10, 15, 0 );
  twobit_setreg( 2 );
  twobit_const( 16 );
  twobit_setreg( 1 );
  twobit_global( 4 ); /* ex:register-macro! */
  twobit_setrtn( 2050, compiled_block_2_2050 );
  twobit_invoke( 2 );
  twobit_label( 2050, compiled_block_2_2050 );
  twobit_load( 0, 0 );
  twobit_lambda( compiled_start_2_11, 18, 0 );
  twobit_setreg( 2 );
  twobit_const( 19 );
  twobit_setreg( 1 );
  twobit_global( 4 ); /* ex:register-macro! */
  twobit_setrtn( 2085, compiled_block_2_2085 );
  twobit_invoke( 2 );
  twobit_label( 2085, compiled_block_2_2085 );
  twobit_load( 0, 0 );
  twobit_lambda( compiled_start_2_12, 21, 0 );
  twobit_setreg( 2 );
  twobit_const( 22 );
  twobit_setreg( 1 );
  twobit_global( 4 ); /* ex:register-macro! */
  twobit_setrtn( 2119, compiled_block_2_2119 );
  twobit_invoke( 2 );
  twobit_label( 2119, compiled_block_2_2119 );
  twobit_load( 0, 0 );
  twobit_lambda( compiled_start_2_13, 24, 0 );
  twobit_setreg( 2 );
  twobit_const( 25 );
  twobit_setreg( 1 );
  twobit_global( 4 ); /* ex:register-macro! */
  twobit_setrtn( 2160, compiled_block_2_2160 );
  twobit_invoke( 2 );
  twobit_label( 2160, compiled_block_2_2160 );
  twobit_load( 0, 0 );
  twobit_lambda( compiled_start_2_14, 27, 0 );
  twobit_setreg( 2 );
  twobit_const( 28 );
  twobit_setreg( 1 );
  twobit_global( 4 ); /* ex:register-macro! */
  twobit_setrtn( 2201, compiled_block_2_2201 );
  twobit_invoke( 2 );
  twobit_label( 2201, compiled_block_2_2201 );
  twobit_load( 0, 0 );
  twobit_global( 29 ); /* values */
  twobit_pop( 0 );
  twobit_invoke( 0 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_6( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_reg( 1 );
  twobit_op1_branchf_611( 1005, compiled_block_2_1005 ); /* internal:branchf-pair? */
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1007, compiled_block_2_1007 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_reg( 3 );
  twobit_op1_branchf_611( 1009, compiled_block_2_1009 ); /* internal:branchf-pair? */
  twobit_reg( 3 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_reg( 3 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 3 );
  twobit_reg( 3 );
  twobit_op1_branchf_611( 1011, compiled_block_2_1011 ); /* internal:branchf-pair? */
  twobit_reg( 3 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 31 );
  twobit_reg( 3 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 3 );
  twobit_reg( 3 );
  twobit_op1_branchf_611( 1013, compiled_block_2_1013 ); /* internal:branchf-pair? */
  twobit_reg( 3 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 30 );
  twobit_reg( 3 );
  twobit_op1_405(); /* cdr:pair */
  twobit_op1_branchf_610( 1015, compiled_block_2_1015 ); /* internal:branchf-null? */
  twobit_save( 5 );
  twobit_store( 0, 0 );
  twobit_store( 1, 5 );
  twobit_store( 2, 4 );
  twobit_store( 30, 2 );
  twobit_store( 31, 3 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_movereg( 4, 1 );
  twobit_global( 1 ); /* list? */
  twobit_setrtn( 1016, compiled_block_2_1016 );
  twobit_invoke( 1 );
  twobit_label( 1016, compiled_block_2_1016 );
  twobit_load( 0, 0 );
  twobit_branchf( 1018, compiled_block_2_1018 );
  twobit_load( 4, 1 );
  twobit_stack( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 4 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_imm_const( TRUE_CONST ); /* #t */
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 4 );
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
  twobit_setrtn( 1019, compiled_block_2_1019 );
  twobit_invoke( 5 );
  twobit_label( 1019, compiled_block_2_1019 );
  twobit_load( 0, 0 );
  twobit_load( 3, 4 );
  twobit_op2_58( 3 ); /* cons */
  twobit_pop( 5 );
  twobit_return();
  twobit_label( 1018, compiled_block_2_1018 );
  twobit_load( 1, 5 );
  twobit_pop( 5 );
  twobit_branch( 1002, compiled_block_2_1002 );
  twobit_label( 1015, compiled_block_2_1015 );
  twobit_branch( 1002, compiled_block_2_1002 );
  twobit_label( 1013, compiled_block_2_1013 );
  twobit_branch( 1002, compiled_block_2_1002 );
  twobit_label( 1011, compiled_block_2_1011 );
  twobit_branch( 1002, compiled_block_2_1002 );
  twobit_label( 1009, compiled_block_2_1009 );
  twobit_branch( 1002, compiled_block_2_1002 );
  twobit_label( 1007, compiled_block_2_1007 );
  twobit_branch( 1002, compiled_block_2_1002 );
  twobit_label( 1005, compiled_block_2_1005 );
  twobit_label( 1002, compiled_block_2_1002 );
  twobit_reg( 1 );
  twobit_op1_branchf_611( 1028, compiled_block_2_1028 ); /* internal:branchf-pair? */
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1030, compiled_block_2_1030 ); /* internal:branchf-pair? */
  twobit_save( 3 );
  twobit_store( 0, 0 );
  twobit_store( 1, 3 );
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
  twobit_setrtn( 1031, compiled_block_2_1031 );
  twobit_invoke( 1 );
  twobit_label( 1031, compiled_block_2_1031 );
  twobit_load( 0, 0 );
  twobit_branchf( 1033, compiled_block_2_1033 );
  twobit_load( 4, 1 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_const( 2 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 6 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1034, compiled_block_2_1034 );
  twobit_invoke( 5 );
  twobit_label( 1034, compiled_block_2_1034 );
  twobit_load( 0, 0 );
  twobit_load( 3, 2 );
  twobit_op2_58( 3 ); /* cons */
  twobit_pop( 3 );
  twobit_return();
  twobit_label( 1033, compiled_block_2_1033 );
  twobit_load( 1, 3 );
  twobit_global( 7 ); /* ex:invalid-form */
  twobit_pop( 3 );
  twobit_invoke( 1 );
  twobit_label( 1030, compiled_block_2_1030 );
  twobit_global( 7 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1028, compiled_block_2_1028 );
  twobit_global( 7 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_7( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_reg( 1 );
  twobit_op1_branchf_611( 1046, compiled_block_2_1046 ); /* internal:branchf-pair? */
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1048, compiled_block_2_1048 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1050, compiled_block_2_1050 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1052, compiled_block_2_1052 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 31 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1054, compiled_block_2_1054 ); /* internal:branchf-pair? */
  twobit_save( 21 );
  twobit_store( 0, 0 );
  twobit_store( 1, 21 );
  twobit_store( 2, 1 );
  twobit_store( 3, 11 );
  twobit_store( 31, 12 );
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 30 );
  twobit_store( 30, 13 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_movereg( 4, 1 );
  twobit_global( 1 ); /* list? */
  twobit_setrtn( 1055, compiled_block_2_1055 );
  twobit_invoke( 1 );
  twobit_label( 1055, compiled_block_2_1055 );
  twobit_load( 0, 0 );
  twobit_branchf( 1057, compiled_block_2_1057 );
  twobit_load( 1, 1 );
  twobit_global( 2 ); /* ex:syntax->datum */
  twobit_setrtn( 1058, compiled_block_2_1058 );
  twobit_invoke( 1 );
  twobit_label( 1058, compiled_block_2_1058 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 10 );
  twobit_const( 3 );
  twobit_setreg( 1 );
  twobit_load( 2, 2 );
  twobit_setrtn( 1059, compiled_block_2_1059 );
  twobit_branch( 1042, compiled_block_2_1042 );
  twobit_label( 1059, compiled_block_2_1059 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 9 );
  twobit_const( 4 );
  twobit_setreg( 1 );
  twobit_load( 2, 2 );
  twobit_setrtn( 1060, compiled_block_2_1060 );
  twobit_branch( 1042, compiled_block_2_1042 );
  twobit_label( 1060, compiled_block_2_1060 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 8 );
  twobit_const( 5 );
  twobit_setreg( 1 );
  twobit_load( 2, 2 );
  twobit_setrtn( 1061, compiled_block_2_1061 );
  twobit_branch( 1042, compiled_block_2_1042 );
  twobit_label( 1061, compiled_block_2_1061 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 7 );
  twobit_const( 6 );
  twobit_setreg( 1 );
  twobit_load( 2, 2 );
  twobit_setrtn( 1062, compiled_block_2_1062 );
  twobit_branch( 1042, compiled_block_2_1042 );
  twobit_label( 1062, compiled_block_2_1062 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 6 );
  twobit_const( 7 );
  twobit_setreg( 1 );
  twobit_load( 2, 2 );
  twobit_setrtn( 1063, compiled_block_2_1063 );
  twobit_branch( 1042, compiled_block_2_1042 );
  twobit_label( 1063, compiled_block_2_1063 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 5 );
  twobit_const( 8 );
  twobit_setreg( 1 );
  twobit_load( 2, 2 );
  twobit_setrtn( 1064, compiled_block_2_1064 );
  twobit_branch( 1042, compiled_block_2_1042 );
  twobit_label( 1064, compiled_block_2_1064 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 4 );
  twobit_const( 9 );
  twobit_setreg( 1 );
  twobit_load( 2, 2 );
  twobit_setrtn( 1065, compiled_block_2_1065 );
  twobit_branch( 1042, compiled_block_2_1042 );
  twobit_label( 1065, compiled_block_2_1065 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_load( 1, 2 );
  twobit_global( 2 ); /* ex:syntax->datum */
  twobit_setrtn( 1066, compiled_block_2_1066 );
  twobit_invoke( 1 );
  twobit_label( 1066, compiled_block_2_1066 );
  twobit_load( 0, 0 );
  twobit_load( 1, 3 );
  twobit_global( 2 ); /* ex:syntax->datum */
  twobit_setrtn( 1067, compiled_block_2_1067 );
  twobit_invoke( 1 );
  twobit_label( 1067, compiled_block_2_1067 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 19 );
  twobit_load( 1, 4 );
  twobit_global( 2 ); /* ex:syntax->datum */
  twobit_setrtn( 1068, compiled_block_2_1068 );
  twobit_invoke( 1 );
  twobit_label( 1068, compiled_block_2_1068 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 18 );
  twobit_load( 1, 5 );
  twobit_global( 2 ); /* ex:syntax->datum */
  twobit_setrtn( 1069, compiled_block_2_1069 );
  twobit_invoke( 1 );
  twobit_label( 1069, compiled_block_2_1069 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 17 );
  twobit_load( 1, 6 );
  twobit_global( 2 ); /* ex:syntax->datum */
  twobit_setrtn( 1070, compiled_block_2_1070 );
  twobit_invoke( 1 );
  twobit_label( 1070, compiled_block_2_1070 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 16 );
  twobit_load( 1, 7 );
  twobit_global( 2 ); /* ex:syntax->datum */
  twobit_setrtn( 1071, compiled_block_2_1071 );
  twobit_invoke( 1 );
  twobit_label( 1071, compiled_block_2_1071 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 15 );
  twobit_load( 1, 8 );
  twobit_global( 2 ); /* ex:syntax->datum */
  twobit_setrtn( 1072, compiled_block_2_1072 );
  twobit_invoke( 1 );
  twobit_label( 1072, compiled_block_2_1072 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 14 );
  twobit_load( 1, 9 );
  twobit_global( 2 ); /* ex:syntax->datum */
  twobit_setrtn( 1073, compiled_block_2_1073 );
  twobit_invoke( 1 );
  twobit_label( 1073, compiled_block_2_1073 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_stack( 10 );
  twobit_op1_17(); /* symbol? */
  twobit_branchf( 1075, compiled_block_2_1075 );
  twobit_load( 1, 11 );
  twobit_global( 2 ); /* ex:syntax->datum */
  twobit_setrtn( 1076, compiled_block_2_1076 );
  twobit_invoke( 1 );
  twobit_label( 1076, compiled_block_2_1076 );
  twobit_load( 0, 0 );
  twobit_branchf( 1078, compiled_block_2_1078 );
  twobit_load( 1, 12 );
  twobit_global( 2 ); /* ex:syntax->datum */
  twobit_setrtn( 1079, compiled_block_2_1079 );
  twobit_invoke( 1 );
  twobit_label( 1079, compiled_block_2_1079 );
  twobit_load( 0, 0 );
  twobit_op1_17(); /* symbol? */
  twobit_branchf( 1081, compiled_block_2_1081 );
  twobit_load( 1, 13 );
  twobit_global( 2 ); /* ex:syntax->datum */
  twobit_setrtn( 1082, compiled_block_2_1082 );
  twobit_invoke( 1 );
  twobit_label( 1082, compiled_block_2_1082 );
  twobit_load( 0, 0 );
  twobit_op1_17(); /* symbol? */
  twobit_skip( 1077, compiled_block_2_1077 );
  twobit_label( 1081, compiled_block_2_1081 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 1077, compiled_block_2_1077 );
  twobit_label( 1078, compiled_block_2_1078 );
  twobit_imm_const( TRUE_CONST ); /* #t */
  twobit_label( 1077, compiled_block_2_1077 );
  twobit_branchf( 1084, compiled_block_2_1084 );
  twobit_stack( 2 );
  twobit_op1_9(); /* not */
  twobit_branchf( 1086, compiled_block_2_1086 );
  twobit_imm_const( TRUE_CONST ); /* #t */
  twobit_skip( 1085, compiled_block_2_1085 );
  twobit_label( 1086, compiled_block_2_1086 );
  twobit_load( 1, 2 );
  twobit_global( 1 ); /* list? */
  twobit_setrtn( 1087, compiled_block_2_1087 );
  twobit_invoke( 1 );
  twobit_label( 1087, compiled_block_2_1087 );
  twobit_load( 0, 0 );
  twobit_branchf( 1089, compiled_block_2_1089 );
  twobit_lambda( compiled_start_2_24, 11, 0 );
  twobit_setreg( 1 );
  twobit_stack( 2 );
  twobit_op1_11(); /* pair? */
  twobit_load( 3, 2 );
  twobit_check( 3, 0, 0, 1123, compiled_block_2_1123 );
  twobit_stack( 2 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 2 );
  twobit_global( 12 ); /* for-all */
  twobit_setrtn( 1124, compiled_block_2_1124 );
  twobit_invoke( 2 );
  twobit_label( 1124, compiled_block_2_1124 );
  twobit_load( 0, 0 );
  twobit_skip( 1085, compiled_block_2_1085 );
  twobit_label( 1089, compiled_block_2_1089 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1085, compiled_block_2_1085 );
  twobit_branchf( 1126, compiled_block_2_1126 );
  twobit_stack( 14 );
  twobit_op1_9(); /* not */
  twobit_branchf( 1128, compiled_block_2_1128 );
  twobit_imm_const( TRUE_CONST ); /* #t */
  twobit_skip( 1127, compiled_block_2_1127 );
  twobit_label( 1128, compiled_block_2_1128 );
  twobit_load( 1, 14 );
  twobit_global( 1 ); /* list? */
  twobit_setrtn( 1129, compiled_block_2_1129 );
  twobit_invoke( 1 );
  twobit_label( 1129, compiled_block_2_1129 );
  twobit_load( 0, 0 );
  twobit_branchf( 1131, compiled_block_2_1131 );
  twobit_load( 1, 14 );
  twobit_global( 13 ); /* length */
  twobit_setrtn( 1132, compiled_block_2_1132 );
  twobit_invoke( 1 );
  twobit_label( 1132, compiled_block_2_1132 );
  twobit_load( 0, 0 );
  twobit_op2imm_branchf_639( fixnum(2), 25, compiled_temp_2_25, 1134, compiled_block_2_1134 ); /* internal:branchf-=/imm */
  twobit_imm_const( TRUE_CONST ); /* #t */
  twobit_skip( 1127, compiled_block_2_1127 );
  twobit_label( 1134, compiled_block_2_1134 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 1127, compiled_block_2_1127 );
  twobit_label( 1131, compiled_block_2_1131 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1127, compiled_block_2_1127 );
  twobit_branchf( 1136, compiled_block_2_1136 );
  twobit_stack( 15 );
  twobit_op1_9(); /* not */
  twobit_branchf( 1138, compiled_block_2_1138 );
  twobit_imm_const( TRUE_CONST ); /* #t */
  twobit_skip( 1137, compiled_block_2_1137 );
  twobit_label( 1138, compiled_block_2_1138 );
  twobit_load( 1, 15 );
  twobit_global( 1 ); /* list? */
  twobit_setrtn( 1139, compiled_block_2_1139 );
  twobit_invoke( 1 );
  twobit_label( 1139, compiled_block_2_1139 );
  twobit_load( 0, 0 );
  twobit_branchf( 1141, compiled_block_2_1141 );
  twobit_load( 1, 15 );
  twobit_global( 13 ); /* length */
  twobit_setrtn( 1142, compiled_block_2_1142 );
  twobit_invoke( 1 );
  twobit_label( 1142, compiled_block_2_1142 );
  twobit_load( 0, 0 );
  twobit_op2imm_134( fixnum(2), 26, compiled_temp_2_26 ); /* = */
  twobit_skip( 1137, compiled_block_2_1137 );
  twobit_label( 1141, compiled_block_2_1141 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1137, compiled_block_2_1137 );
  twobit_branchf( 1144, compiled_block_2_1144 );
  twobit_stack( 16 );
  twobit_op1_9(); /* not */
  twobit_branchf( 1146, compiled_block_2_1146 );
  twobit_imm_const( TRUE_CONST ); /* #t */
  twobit_skip( 1145, compiled_block_2_1145 );
  twobit_label( 1146, compiled_block_2_1146 );
  twobit_load( 1, 16 );
  twobit_global( 1 ); /* list? */
  twobit_setrtn( 1147, compiled_block_2_1147 );
  twobit_invoke( 1 );
  twobit_label( 1147, compiled_block_2_1147 );
  twobit_load( 0, 0 );
  twobit_branchf( 1149, compiled_block_2_1149 );
  twobit_load( 1, 16 );
  twobit_global( 13 ); /* length */
  twobit_setrtn( 1150, compiled_block_2_1150 );
  twobit_invoke( 1 );
  twobit_label( 1150, compiled_block_2_1150 );
  twobit_load( 0, 0 );
  twobit_op2imm_branchf_639( fixnum(2), 27, compiled_temp_2_27, 1152, compiled_block_2_1152 ); /* internal:branchf-=/imm */
  twobit_stack( 16 );
  twobit_op1_11(); /* pair? */
  twobit_load( 3, 16 );
  twobit_check( 3, 0, 0, 1123, compiled_block_2_1123 );
  twobit_stack( 16 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg_op1_check_652(reg(4),1153,compiled_block_2_1153); /* internal:check-pair? with (4 0 0) */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op2imm_129( TRUE_CONST ); /* eq? */
  twobit_setreg( 3 );
  twobit_reg( 3 );
  twobit_branchf( 1155, compiled_block_2_1155 );
  twobit_reg( 3 );
  twobit_skip( 1145, compiled_block_2_1145 );
  twobit_label( 1155, compiled_block_2_1155 );
  twobit_reg( 4 );
  twobit_op2imm_129( FALSE_CONST ); /* eq? */
  twobit_skip( 1145, compiled_block_2_1145 );
  twobit_label( 1152, compiled_block_2_1152 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 1145, compiled_block_2_1145 );
  twobit_label( 1149, compiled_block_2_1149 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1145, compiled_block_2_1145 );
  twobit_branchf( 1157, compiled_block_2_1157 );
  twobit_stack( 17 );
  twobit_op1_9(); /* not */
  twobit_branchf( 1159, compiled_block_2_1159 );
  twobit_imm_const( TRUE_CONST ); /* #t */
  twobit_skip( 1158, compiled_block_2_1158 );
  twobit_label( 1159, compiled_block_2_1159 );
  twobit_load( 1, 17 );
  twobit_global( 1 ); /* list? */
  twobit_setrtn( 1160, compiled_block_2_1160 );
  twobit_invoke( 1 );
  twobit_label( 1160, compiled_block_2_1160 );
  twobit_load( 0, 0 );
  twobit_branchf( 1162, compiled_block_2_1162 );
  twobit_load( 1, 17 );
  twobit_global( 13 ); /* length */
  twobit_setrtn( 1163, compiled_block_2_1163 );
  twobit_invoke( 1 );
  twobit_label( 1163, compiled_block_2_1163 );
  twobit_load( 0, 0 );
  twobit_op2imm_branchf_639( fixnum(2), 28, compiled_temp_2_28, 1165, compiled_block_2_1165 ); /* internal:branchf-=/imm */
  twobit_stack( 17 );
  twobit_op1_11(); /* pair? */
  twobit_load( 3, 17 );
  twobit_check( 3, 0, 0, 1123, compiled_block_2_1123 );
  twobit_stack( 17 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg_op1_check_652(reg(4),1153,compiled_block_2_1153); /* internal:check-pair? with (4 0 0) */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op2imm_129( TRUE_CONST ); /* eq? */
  twobit_setreg( 3 );
  twobit_reg( 3 );
  twobit_branchf( 1167, compiled_block_2_1167 );
  twobit_reg( 3 );
  twobit_skip( 1158, compiled_block_2_1158 );
  twobit_label( 1167, compiled_block_2_1167 );
  twobit_reg( 4 );
  twobit_op2imm_129( FALSE_CONST ); /* eq? */
  twobit_skip( 1158, compiled_block_2_1158 );
  twobit_label( 1165, compiled_block_2_1165 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 1158, compiled_block_2_1158 );
  twobit_label( 1162, compiled_block_2_1162 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1158, compiled_block_2_1158 );
  twobit_branchf( 1169, compiled_block_2_1169 );
  twobit_stack( 18 );
  twobit_op1_9(); /* not */
  twobit_branchf( 1171, compiled_block_2_1171 );
  twobit_imm_const( TRUE_CONST ); /* #t */
  twobit_skip( 1170, compiled_block_2_1170 );
  twobit_label( 1171, compiled_block_2_1171 );
  twobit_load( 1, 18 );
  twobit_global( 1 ); /* list? */
  twobit_setrtn( 1172, compiled_block_2_1172 );
  twobit_invoke( 1 );
  twobit_label( 1172, compiled_block_2_1172 );
  twobit_load( 0, 0 );
  twobit_branchf( 1174, compiled_block_2_1174 );
  twobit_stack( 18 );
  twobit_op1_11(); /* pair? */
  twobit_load( 3, 18 );
  twobit_check( 3, 0, 0, 1123, compiled_block_2_1123 );
  twobit_stack( 18 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_10(); /* null? */
  twobit_setreg( 3 );
  twobit_reg( 3 );
  twobit_branchf( 1176, compiled_block_2_1176 );
  twobit_reg( 3 );
  twobit_skip( 1170, compiled_block_2_1170 );
  twobit_label( 1176, compiled_block_2_1176 );
  twobit_reg_op1_check_652(reg(4),1153,compiled_block_2_1153); /* internal:check-pair? with (4 0 0) */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_op1_17(); /* symbol? */
  twobit_skip( 1170, compiled_block_2_1170 );
  twobit_label( 1174, compiled_block_2_1174 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1170, compiled_block_2_1170 );
  twobit_branchf( 1178, compiled_block_2_1178 );
  twobit_stack( 19 );
  twobit_op1_9(); /* not */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 1180, compiled_block_2_1180 );
  twobit_reg( 4 );
  twobit_skip( 1074, compiled_block_2_1074 );
  twobit_label( 1180, compiled_block_2_1180 );
  twobit_load( 1, 19 );
  twobit_global( 1 ); /* list? */
  twobit_setrtn( 1181, compiled_block_2_1181 );
  twobit_invoke( 1 );
  twobit_label( 1181, compiled_block_2_1181 );
  twobit_load( 0, 0 );
  twobit_branchf( 1183, compiled_block_2_1183 );
  twobit_load( 1, 19 );
  twobit_global( 13 ); /* length */
  twobit_setrtn( 1184, compiled_block_2_1184 );
  twobit_invoke( 1 );
  twobit_label( 1184, compiled_block_2_1184 );
  twobit_load( 0, 0 );
  twobit_op2imm_134( fixnum(3), 29, compiled_temp_2_29 ); /* = */
  twobit_skip( 1074, compiled_block_2_1074 );
  twobit_label( 1183, compiled_block_2_1183 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 1074, compiled_block_2_1074 );
  twobit_label( 1178, compiled_block_2_1178 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 1074, compiled_block_2_1074 );
  twobit_label( 1169, compiled_block_2_1169 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 1074, compiled_block_2_1074 );
  twobit_label( 1157, compiled_block_2_1157 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 1074, compiled_block_2_1074 );
  twobit_label( 1144, compiled_block_2_1144 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 1074, compiled_block_2_1074 );
  twobit_label( 1136, compiled_block_2_1136 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 1074, compiled_block_2_1074 );
  twobit_label( 1126, compiled_block_2_1126 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 1074, compiled_block_2_1074 );
  twobit_label( 1084, compiled_block_2_1084 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 1074, compiled_block_2_1074 );
  twobit_label( 1075, compiled_block_2_1075 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1074, compiled_block_2_1074 );
  twobit_setreg( 4 );
  twobit_store( 4, 20 );
  twobit_load( 1, 10 );
  twobit_global( 14 ); /* symbol->string */
  twobit_setrtn( 1185, compiled_block_2_1185 );
  twobit_invoke( 1 );
  twobit_label( 1185, compiled_block_2_1185 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_load( 1, 12 );
  twobit_global( 2 ); /* ex:syntax->datum */
  twobit_setrtn( 1186, compiled_block_2_1186 );
  twobit_invoke( 1 );
  twobit_label( 1186, compiled_block_2_1186 );
  twobit_load( 0, 0 );
  twobit_op1_17(); /* symbol? */
  twobit_branchf( 1188, compiled_block_2_1188 );
  twobit_stack( 12 );
  twobit_skip( 1187, compiled_block_2_1187 );
  twobit_label( 1188, compiled_block_2_1188 );
  twobit_load( 2, 2 );
  twobit_const( 15 );
  twobit_setreg( 1 );
  twobit_global( 16 ); /* string-append */
  twobit_setrtn( 1189, compiled_block_2_1189 );
  twobit_invoke( 2 );
  twobit_label( 1189, compiled_block_2_1189 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_global( 17 ); /* string->symbol */
  twobit_setrtn( 1190, compiled_block_2_1190 );
  twobit_invoke( 1 );
  twobit_label( 1190, compiled_block_2_1190 );
  twobit_load( 0, 0 );
  twobit_setreg( 2 );
  twobit_load( 1, 1 );
  twobit_global( 18 ); /* ex:datum->syntax */
  twobit_setrtn( 1191, compiled_block_2_1191 );
  twobit_invoke( 2 );
  twobit_label( 1191, compiled_block_2_1191 );
  twobit_load( 0, 0 );
  twobit_label( 1187, compiled_block_2_1187 );
  twobit_setreg( 4 );
  twobit_store( 4, 14 );
  twobit_load( 1, 13 );
  twobit_global( 2 ); /* ex:syntax->datum */
  twobit_setrtn( 1192, compiled_block_2_1192 );
  twobit_invoke( 1 );
  twobit_label( 1192, compiled_block_2_1192 );
  twobit_load( 0, 0 );
  twobit_op1_17(); /* symbol? */
  twobit_branchf( 1194, compiled_block_2_1194 );
  twobit_stack( 13 );
  twobit_skip( 1193, compiled_block_2_1193 );
  twobit_label( 1194, compiled_block_2_1194 );
  twobit_load( 1, 2 );
  twobit_const( 19 );
  twobit_setreg( 2 );
  twobit_global( 16 ); /* string-append */
  twobit_setrtn( 1195, compiled_block_2_1195 );
  twobit_invoke( 2 );
  twobit_label( 1195, compiled_block_2_1195 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_global( 17 ); /* string->symbol */
  twobit_setrtn( 1196, compiled_block_2_1196 );
  twobit_invoke( 1 );
  twobit_label( 1196, compiled_block_2_1196 );
  twobit_load( 0, 0 );
  twobit_setreg( 2 );
  twobit_load( 1, 1 );
  twobit_global( 18 ); /* ex:datum->syntax */
  twobit_setrtn( 1197, compiled_block_2_1197 );
  twobit_invoke( 2 );
  twobit_label( 1197, compiled_block_2_1197 );
  twobit_load( 0, 0 );
  twobit_label( 1193, compiled_block_2_1193 );
  twobit_setreg( 4 );
  twobit_store( 4, 12 );
  twobit_load( 1, 2 );
  twobit_lambda( compiled_start_2_30, 21, 1 );
  twobit_setreg( 3 );
  twobit_store( 3, 2 );
  twobit_stack( 9 );
  twobit_branchf( 1251, compiled_block_2_1251 );
  twobit_load( 1, 9 );
  twobit_setrtn( 1252, compiled_block_2_1252 );
  twobit_branch( 1041, compiled_block_2_1041 );
  twobit_label( 1252, compiled_block_2_1252 );
  twobit_load( 0, 0 );
  twobit_setreg( 2 );
  twobit_skip( 1250, compiled_block_2_1250 );
  twobit_label( 1251, compiled_block_2_1251 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_label( 1250, compiled_block_2_1250 );
  twobit_load( 1, 2 );
  twobit_global( 22 ); /*  map~1pxGHH~1463 */
  twobit_setrtn( 1253, compiled_block_2_1253 );
  twobit_invoke( 2 );
  twobit_label( 1253, compiled_block_2_1253 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_stack( 20 );
  twobit_branchf( 1255, compiled_block_2_1255 );
  twobit_op1_3(); /* unspecified */
  twobit_skip( 1254, compiled_block_2_1254 );
  twobit_label( 1255, compiled_block_2_1255 );
  twobit_load( 3, 21 );
  twobit_const( 23 );
  twobit_setreg( 1 );
  twobit_const( 24 );
  twobit_setreg( 2 );
  twobit_global( 25 ); /* ex:syntax-violation */
  twobit_setrtn( 1256, compiled_block_2_1256 );
  twobit_invoke( 3 );
  twobit_label( 1256, compiled_block_2_1256 );
  twobit_load( 0, 0 );
  twobit_label( 1254, compiled_block_2_1254 );
  twobit_stack( 8 );
  twobit_branchf( 1258, compiled_block_2_1258 );
  twobit_stack( 8 );
  twobit_op1_11(); /* pair? */
  twobit_load( 3, 8 );
  twobit_check( 3, 0, 0, 1123, compiled_block_2_1123 );
  twobit_stack( 8 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg_op1_check_652(reg(4),1153,compiled_block_2_1153); /* internal:check-pair? with (4 0 0) */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_skip( 1257, compiled_block_2_1257 );
  twobit_label( 1258, compiled_block_2_1258 );
  twobit_stack( 3 );
  twobit_branchf( 1260, compiled_block_2_1260 );
  twobit_stack( 3 );
  twobit_op1_11(); /* pair? */
  twobit_load( 3, 3 );
  twobit_check( 3, 0, 0, 1123, compiled_block_2_1123 );
  twobit_stack( 3 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg_op1_check_652(reg(4),1153,compiled_block_2_1153); /* internal:check-pair? with (4 0 0) */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_skip( 1257, compiled_block_2_1257 );
  twobit_label( 1260, compiled_block_2_1260 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1257, compiled_block_2_1257 );
  twobit_setreg( 4 );
  twobit_store( 4, 8 );
  twobit_stack( 3 );
  twobit_branchf( 1262, compiled_block_2_1262 );
  twobit_stack( 3 );
  twobit_op1_11(); /* pair? */
  twobit_load( 2, 3 );
  twobit_check( 2, 0, 0, 1263, compiled_block_2_1263 );
  twobit_stack( 3 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 3 );
  twobit_reg_op1_check_652(reg(3),1123,compiled_block_2_1123); /* internal:check-pair? with (3 0 0) */
  twobit_reg( 3 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 3 );
  twobit_reg_op1_check_652(reg(3),1264,compiled_block_2_1264); /* internal:check-pair? with (3 0 0) */
  twobit_reg( 3 );
  twobit_op1_404(); /* car:pair */
  twobit_skip( 1261, compiled_block_2_1261 );
  twobit_label( 1262, compiled_block_2_1262 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1261, compiled_block_2_1261 );
  twobit_setreg( 3 );
  twobit_store( 3, 3 );
  twobit_stack( 7 );
  twobit_branchf( 1266, compiled_block_2_1266 );
  twobit_load( 1, 7 );
  twobit_global( 2 ); /* ex:syntax->datum */
  twobit_setrtn( 1267, compiled_block_2_1267 );
  twobit_invoke( 1 );
  twobit_label( 1267, compiled_block_2_1267 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_reg_op1_check_652(reg(4),1268,compiled_block_2_1268); /* internal:check-pair? with (4 0 0) */
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg_op1_check_652(reg(4),1153,compiled_block_2_1153); /* internal:check-pair? with (4 0 0) */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_skip( 1265, compiled_block_2_1265 );
  twobit_label( 1266, compiled_block_2_1266 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1265, compiled_block_2_1265 );
  twobit_setreg( 4 );
  twobit_store( 4, 7 );
  twobit_stack( 6 );
  twobit_branchf( 1270, compiled_block_2_1270 );
  twobit_load( 1, 6 );
  twobit_global( 2 ); /* ex:syntax->datum */
  twobit_setrtn( 1271, compiled_block_2_1271 );
  twobit_invoke( 1 );
  twobit_label( 1271, compiled_block_2_1271 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_reg_op1_check_652(reg(4),1268,compiled_block_2_1268); /* internal:check-pair? with (4 0 0) */
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg_op1_check_652(reg(4),1153,compiled_block_2_1153); /* internal:check-pair? with (4 0 0) */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_skip( 1269, compiled_block_2_1269 );
  twobit_label( 1270, compiled_block_2_1270 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1269, compiled_block_2_1269 );
  twobit_setreg( 4 );
  twobit_store( 4, 6 );
  twobit_stack( 5 );
  twobit_branchf( 1273, compiled_block_2_1273 );
  twobit_load( 1, 5 );
  twobit_global( 2 ); /* ex:syntax->datum */
  twobit_setrtn( 1274, compiled_block_2_1274 );
  twobit_invoke( 1 );
  twobit_label( 1274, compiled_block_2_1274 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_reg_op1_check_652(reg(4),1268,compiled_block_2_1268); /* internal:check-pair? with (4 0 0) */
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg_op1_check_652(reg(4),1153,compiled_block_2_1153); /* internal:check-pair? with (4 0 0) */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_skip( 1272, compiled_block_2_1272 );
  twobit_label( 1273, compiled_block_2_1273 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1272, compiled_block_2_1272 );
  twobit_setreg( 4 );
  twobit_store( 4, 5 );
  twobit_stack( 4 );
  twobit_op2imm_branchf_640( FALSE_CONST, 1276, compiled_block_2_1276 ); /* internal:branchf-eq?/imm */
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_skip( 1275, compiled_block_2_1275 );
  twobit_label( 1276, compiled_block_2_1276 );
  twobit_stack( 4 );
  twobit_op1_11(); /* pair? */
  twobit_load( 2, 4 );
  twobit_check( 2, 0, 0, 1263, compiled_block_2_1263 );
  twobit_stack( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 3 );
  twobit_reg( 3 );
  twobit_op1_branchf_610( 1278, compiled_block_2_1278 ); /* internal:branchf-null? */
  twobit_const( 26 );
  twobit_setreg( 1 );
  twobit_global( 27 ); /* gensym */
  twobit_setrtn( 1279, compiled_block_2_1279 );
  twobit_invoke( 1 );
  twobit_label( 1279, compiled_block_2_1279 );
  twobit_load( 0, 0 );
  twobit_skip( 1275, compiled_block_2_1275 );
  twobit_label( 1278, compiled_block_2_1278 );
  twobit_reg_op1_check_652(reg(3),1264,compiled_block_2_1264); /* internal:check-pair? with (3 0 0) */
  twobit_reg( 3 );
  twobit_op1_404(); /* car:pair */
  twobit_label( 1275, compiled_block_2_1275 );
  twobit_setreg( 4 );
  twobit_store( 4, 21 );
  twobit_stack( 3 );
  twobit_setreg( 3 );
  twobit_store( 3, 3 );
  twobit_stack( 8 );
  twobit_setreg( 2 );
  twobit_store( 2, 8 );
  twobit_stack( 5 );
  twobit_setreg( 1 );
  twobit_stack( 6 );
  twobit_setreg( 4 );
  twobit_store( 4, 6 );
  twobit_stack( 7 );
  twobit_setreg( 4 );
  twobit_store( 4, 7 );
  twobit_stack( 2 );
  twobit_setreg( 4 );
  twobit_load( 3, 12 );
  twobit_load( 2, 14 );
  twobit_movereg( 4, 5 );
  twobit_movereg( 1, 8 );
  twobit_load( 1, 1 );
  twobit_load( 4, 10 );
  twobit_load( 6, 7 );
  twobit_load( 7, 6 );
  twobit_load( 9, 21 );
  twobit_load( 10, 8 );
  twobit_load( 11, 3 );
  twobit_pop( 21 );
  twobit_branch( 1043, compiled_block_2_1043 );
  twobit_label( 1057, compiled_block_2_1057 );
  twobit_load( 1, 21 );
  twobit_global( 28 ); /* ex:invalid-form */
  twobit_pop( 21 );
  twobit_invoke( 1 );
  twobit_label( 1054, compiled_block_2_1054 );
  twobit_global( 28 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1052, compiled_block_2_1052 );
  twobit_global( 28 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1050, compiled_block_2_1050 );
  twobit_global( 28 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1048, compiled_block_2_1048 );
  twobit_global( 28 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1046, compiled_block_2_1046 );
  twobit_global( 28 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1039, compiled_block_2_1039 );
  twobit_save( 3 );
  twobit_store( 0, 0 );
  twobit_store( 1, 2 );
  twobit_store( 2, 1 );
  twobit_movereg( 2, 1 );
  twobit_global( 29 ); /* ex:identifier? */
  twobit_setrtn( 1287, compiled_block_2_1287 );
  twobit_invoke( 1 );
  twobit_label( 1287, compiled_block_2_1287 );
  twobit_load( 0, 0 );
  twobit_branchf( 1289, compiled_block_2_1289 );
  twobit_stack( 1 );
  twobit_pop( 3 );
  twobit_return();
  twobit_label( 1289, compiled_block_2_1289 );
  twobit_stack( 1 );
  twobit_op1_branchf_611( 1291, compiled_block_2_1291 ); /* internal:branchf-pair? */
  twobit_stack( 1 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_load( 1, 2 );
  twobit_setrtn( 1292, compiled_block_2_1292 );
  twobit_branch( 1039, compiled_block_2_1039 );
  twobit_label( 1292, compiled_block_2_1292 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_stack( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 2 );
  twobit_load( 1, 2 );
  twobit_setrtn( 1293, compiled_block_2_1293 );
  twobit_branch( 1039, compiled_block_2_1039 );
  twobit_label( 1293, compiled_block_2_1293 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_stack( 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_pop( 3 );
  twobit_return();
  twobit_label( 1291, compiled_block_2_1291 );
  twobit_load( 1, 2 );
  twobit_load( 2, 1 );
  twobit_global( 18 ); /* ex:datum->syntax */
  twobit_pop( 3 );
  twobit_invoke( 2 );
  twobit_label( 1040, compiled_block_2_1040 );
  twobit_reg( 2 );
  twobit_op1_branchf_611( 1296, compiled_block_2_1296 ); /* internal:branchf-pair? */
  twobit_reg( 2 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1298, compiled_block_2_1298 ); /* internal:branchf-pair? */
  twobit_save( 3 );
  twobit_store( 0, 0 );
  twobit_store( 1, 3 );
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
  twobit_setrtn( 1299, compiled_block_2_1299 );
  twobit_invoke( 1 );
  twobit_label( 1299, compiled_block_2_1299 );
  twobit_load( 0, 0 );
  twobit_branchf( 1301, compiled_block_2_1301 );
  twobit_load( 4, 1 );
  twobit_stack( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 2 );
  twobit_load( 1, 3 );
  twobit_pop( 3 );
  twobit_branch( 1042, compiled_block_2_1042 );
  twobit_label( 1301, compiled_block_2_1301 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_pop( 3 );
  twobit_return();
  twobit_label( 1298, compiled_block_2_1298 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_return();
  twobit_label( 1296, compiled_block_2_1296 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_return();
  twobit_label( 1041, compiled_block_2_1041 );
  twobit_reg( 1 );
  twobit_op1_branchf_611( 1304, compiled_block_2_1304 ); /* internal:branchf-pair? */
  twobit_save( 2 );
  twobit_store( 0, 0 );
  twobit_store( 1, 2 );
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_movereg( 4, 1 );
  twobit_global( 1 ); /* list? */
  twobit_setrtn( 1305, compiled_block_2_1305 );
  twobit_invoke( 1 );
  twobit_label( 1305, compiled_block_2_1305 );
  twobit_load( 0, 0 );
  twobit_branchf( 1307, compiled_block_2_1307 );
  twobit_stack( 1 );
  twobit_pop( 2 );
  twobit_return();
  twobit_label( 1307, compiled_block_2_1307 );
  twobit_load( 1, 2 );
  twobit_global( 28 ); /* ex:invalid-form */
  twobit_pop( 2 );
  twobit_invoke( 1 );
  twobit_label( 1304, compiled_block_2_1304 );
  twobit_global( 28 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1042, compiled_block_2_1042 );
  twobit_reg( 2 );
  twobit_op1_branchf_611( 1311, compiled_block_2_1311 ); /* internal:branchf-pair? */
  twobit_reg( 2 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1313, compiled_block_2_1313 ); /* internal:branchf-pair? */
  twobit_save( 5 );
  twobit_store( 0, 0 );
  twobit_store( 1, 3 );
  twobit_store( 2, 1 );
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_store( 3, 2 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_store( 4, 4 );
  twobit_movereg( 4, 1 );
  twobit_global( 1 ); /* list? */
  twobit_setrtn( 1314, compiled_block_2_1314 );
  twobit_invoke( 1 );
  twobit_label( 1314, compiled_block_2_1314 );
  twobit_load( 0, 0 );
  twobit_branchf( 1316, compiled_block_2_1316 );
  twobit_stack( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_store( 4, 5 );
  twobit_movereg( 4, 1 );
  twobit_global( 1 ); /* list? */
  twobit_setrtn( 1317, compiled_block_2_1317 );
  twobit_invoke( 1 );
  twobit_label( 1317, compiled_block_2_1317 );
  twobit_load( 0, 0 );
  twobit_branchf( 1319, compiled_block_2_1319 );
  twobit_load( 1, 2 );
  twobit_global( 29 ); /* ex:identifier? */
  twobit_setrtn( 1320, compiled_block_2_1320 );
  twobit_invoke( 1 );
  twobit_label( 1320, compiled_block_2_1320 );
  twobit_load( 0, 0 );
  twobit_branchf( 1322, compiled_block_2_1322 );
  twobit_load( 1, 2 );
  twobit_global( 2 ); /* ex:syntax->datum */
  twobit_setrtn( 1323, compiled_block_2_1323 );
  twobit_invoke( 1 );
  twobit_label( 1323, compiled_block_2_1323 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_stack( 3 );
  twobit_op2_56( 4 ); /* eq? */
  twobit_skip( 1321, compiled_block_2_1321 );
  twobit_label( 1322, compiled_block_2_1322 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1321, compiled_block_2_1321 );
  twobit_branchf( 1325, compiled_block_2_1325 );
  twobit_load( 4, 4 );
  twobit_stack( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_pop( 5 );
  twobit_return();
  twobit_label( 1325, compiled_block_2_1325 );
  twobit_load( 1, 3 );
  twobit_load( 2, 5 );
  twobit_pop( 5 );
  twobit_branch( 1042, compiled_block_2_1042 );
  twobit_label( 1319, compiled_block_2_1319 );
  twobit_load( 1, 3 );
  twobit_load( 2, 1 );
  twobit_pop( 5 );
  twobit_branch( 1040, compiled_block_2_1040 );
  twobit_label( 1316, compiled_block_2_1316 );
  twobit_load( 1, 3 );
  twobit_load( 2, 1 );
  twobit_pop( 5 );
  twobit_branch( 1040, compiled_block_2_1040 );
  twobit_label( 1313, compiled_block_2_1313 );
  twobit_branch( 1040, compiled_block_2_1040 );
  twobit_label( 1311, compiled_block_2_1311 );
  twobit_branch( 1040, compiled_block_2_1040 );
  twobit_label( 1043, compiled_block_2_1043 );
  twobit_save( 13 );
  twobit_store( 0, 0 );
  twobit_store( 1, 1 );
  twobit_store( 2, 2 );
  twobit_store( 3, 3 );
  twobit_store( 4, 4 );
  twobit_store( 5, 5 );
  twobit_store( 6, 6 );
  twobit_store( 7, 7 );
  twobit_store( 8, 8 );
  twobit_store( 9, 9 );
  twobit_store( 10, 10 );
  twobit_store( 11, 11 );
  twobit_const( 30 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 31 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 32 );
  twobit_setreg( 5 );
  twobit_global( 33 ); /* ex:syntax-rename */
  twobit_setrtn( 1331, compiled_block_2_1331 );
  twobit_invoke( 5 );
  twobit_label( 1331, compiled_block_2_1331 );
  twobit_load( 0, 0 );
  twobit_setreg( 2 );
  twobit_load( 1, 1 );
  twobit_setrtn( 1332, compiled_block_2_1332 );
  twobit_branch( 1039, compiled_block_2_1039 );
  twobit_label( 1332, compiled_block_2_1332 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 13 );
  twobit_load( 2, 1 );
  twobit_load( 1, 1 );
  twobit_setrtn( 1333, compiled_block_2_1333 );
  twobit_branch( 1039, compiled_block_2_1039 );
  twobit_label( 1333, compiled_block_2_1333 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 12 );
  twobit_load( 1, 1 );
  twobit_load( 2, 2 );
  twobit_setrtn( 1334, compiled_block_2_1334 );
  twobit_branch( 1039, compiled_block_2_1039 );
  twobit_label( 1334, compiled_block_2_1334 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_load( 2, 3 );
  twobit_load( 1, 1 );
  twobit_setrtn( 1335, compiled_block_2_1335 );
  twobit_branch( 1039, compiled_block_2_1039 );
  twobit_label( 1335, compiled_block_2_1335 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_load( 2, 4 );
  twobit_load( 1, 1 );
  twobit_setrtn( 1336, compiled_block_2_1336 );
  twobit_branch( 1039, compiled_block_2_1039 );
  twobit_label( 1336, compiled_block_2_1336 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 4 );
  twobit_load( 2, 5 );
  twobit_load( 1, 1 );
  twobit_setrtn( 1337, compiled_block_2_1337 );
  twobit_branch( 1039, compiled_block_2_1039 );
  twobit_label( 1337, compiled_block_2_1337 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 5 );
  twobit_load( 2, 6 );
  twobit_load( 1, 1 );
  twobit_setrtn( 1338, compiled_block_2_1338 );
  twobit_branch( 1039, compiled_block_2_1039 );
  twobit_label( 1338, compiled_block_2_1338 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 6 );
  twobit_load( 2, 7 );
  twobit_load( 1, 1 );
  twobit_setrtn( 1339, compiled_block_2_1339 );
  twobit_branch( 1039, compiled_block_2_1039 );
  twobit_label( 1339, compiled_block_2_1339 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 7 );
  twobit_load( 2, 8 );
  twobit_load( 1, 1 );
  twobit_setrtn( 1340, compiled_block_2_1340 );
  twobit_branch( 1039, compiled_block_2_1039 );
  twobit_label( 1340, compiled_block_2_1340 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 8 );
  twobit_load( 2, 9 );
  twobit_load( 1, 1 );
  twobit_setrtn( 1341, compiled_block_2_1341 );
  twobit_branch( 1039, compiled_block_2_1039 );
  twobit_label( 1341, compiled_block_2_1341 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 9 );
  twobit_load( 2, 10 );
  twobit_load( 1, 1 );
  twobit_setrtn( 1342, compiled_block_2_1342 );
  twobit_branch( 1039, compiled_block_2_1039 );
  twobit_label( 1342, compiled_block_2_1342 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 10 );
  twobit_load( 2, 11 );
  twobit_load( 1, 1 );
  twobit_setrtn( 1343, compiled_block_2_1343 );
  twobit_branch( 1039, compiled_block_2_1039 );
  twobit_label( 1343, compiled_block_2_1343 );
  twobit_load( 0, 0 );
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
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
  twobit_stack( 12 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 13 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 9 );
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 2 );
  twobit_reg( 2 );
  twobit_op1_branchf_611( 1345, compiled_block_2_1345 ); /* internal:branchf-pair? */
  twobit_reg( 2 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 1 );
  twobit_reg( 2 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 2 );
  twobit_reg( 2 );
  twobit_op1_branchf_611( 1347, compiled_block_2_1347 ); /* internal:branchf-pair? */
  twobit_reg( 2 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 4 );
  twobit_store( 4, 8 );
  twobit_reg( 2 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 2 );
  twobit_reg( 2 );
  twobit_op1_branchf_611( 1349, compiled_block_2_1349 ); /* internal:branchf-pair? */
  twobit_reg( 2 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 4 );
  twobit_store( 4, 7 );
  twobit_reg( 2 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 2 );
  twobit_reg( 2 );
  twobit_op1_branchf_611( 1351, compiled_block_2_1351 ); /* internal:branchf-pair? */
  twobit_reg( 2 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 4 );
  twobit_store( 4, 6 );
  twobit_reg( 2 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 2 );
  twobit_reg( 2 );
  twobit_op1_branchf_611( 1353, compiled_block_2_1353 ); /* internal:branchf-pair? */
  twobit_reg( 2 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 4 );
  twobit_store( 4, 5 );
  twobit_reg( 2 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 2 );
  twobit_reg( 2 );
  twobit_op1_branchf_611( 1355, compiled_block_2_1355 ); /* internal:branchf-pair? */
  twobit_reg( 2 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 4 );
  twobit_store( 4, 4 );
  twobit_reg( 2 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 2 );
  twobit_reg( 2 );
  twobit_op1_branchf_611( 1357, compiled_block_2_1357 ); /* internal:branchf-pair? */
  twobit_reg( 2 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_reg( 2 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 2 );
  twobit_reg( 2 );
  twobit_op1_branchf_611( 1359, compiled_block_2_1359 ); /* internal:branchf-pair? */
  twobit_reg( 2 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_reg( 2 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 2 );
  twobit_reg( 2 );
  twobit_op1_branchf_611( 1361, compiled_block_2_1361 ); /* internal:branchf-pair? */
  twobit_reg( 2 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 4 );
  twobit_store( 4, 12 );
  twobit_reg( 2 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 2 );
  twobit_reg( 2 );
  twobit_op1_branchf_611( 1363, compiled_block_2_1363 ); /* internal:branchf-pair? */
  twobit_reg( 2 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 4 );
  twobit_store( 4, 13 );
  twobit_reg( 2 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 2 );
  twobit_reg( 2 );
  twobit_op1_branchf_611( 1365, compiled_block_2_1365 ); /* internal:branchf-pair? */
  twobit_reg( 2 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 4 );
  twobit_reg( 2 );
  twobit_op1_405(); /* cdr:pair */
  twobit_op1_branchf_610( 1367, compiled_block_2_1367 ); /* internal:branchf-null? */
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_reg( 4 );
  twobit_op2_58( 2 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 13 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 12 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 4 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 5 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 6 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 7 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 8 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_reg( 1 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_reg( 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_pop( 13 );
  twobit_return();
  twobit_label( 1367, compiled_block_2_1367 );
  twobit_load( 1, 9 );
  twobit_global( 28 ); /* ex:invalid-form */
  twobit_pop( 13 );
  twobit_invoke( 1 );
  twobit_label( 1365, compiled_block_2_1365 );
  twobit_load( 1, 9 );
  twobit_global( 28 ); /* ex:invalid-form */
  twobit_pop( 13 );
  twobit_invoke( 1 );
  twobit_label( 1363, compiled_block_2_1363 );
  twobit_load( 1, 9 );
  twobit_global( 28 ); /* ex:invalid-form */
  twobit_pop( 13 );
  twobit_invoke( 1 );
  twobit_label( 1361, compiled_block_2_1361 );
  twobit_load( 1, 9 );
  twobit_global( 28 ); /* ex:invalid-form */
  twobit_pop( 13 );
  twobit_invoke( 1 );
  twobit_label( 1359, compiled_block_2_1359 );
  twobit_load( 1, 9 );
  twobit_global( 28 ); /* ex:invalid-form */
  twobit_pop( 13 );
  twobit_invoke( 1 );
  twobit_label( 1357, compiled_block_2_1357 );
  twobit_load( 1, 9 );
  twobit_global( 28 ); /* ex:invalid-form */
  twobit_pop( 13 );
  twobit_invoke( 1 );
  twobit_label( 1355, compiled_block_2_1355 );
  twobit_load( 1, 9 );
  twobit_global( 28 ); /* ex:invalid-form */
  twobit_pop( 13 );
  twobit_invoke( 1 );
  twobit_label( 1353, compiled_block_2_1353 );
  twobit_load( 1, 9 );
  twobit_global( 28 ); /* ex:invalid-form */
  twobit_pop( 13 );
  twobit_invoke( 1 );
  twobit_label( 1351, compiled_block_2_1351 );
  twobit_load( 1, 9 );
  twobit_global( 28 ); /* ex:invalid-form */
  twobit_pop( 13 );
  twobit_invoke( 1 );
  twobit_label( 1349, compiled_block_2_1349 );
  twobit_load( 1, 9 );
  twobit_global( 28 ); /* ex:invalid-form */
  twobit_pop( 13 );
  twobit_invoke( 1 );
  twobit_label( 1347, compiled_block_2_1347 );
  twobit_movereg( 4, 1 );
  twobit_global( 28 ); /* ex:invalid-form */
  twobit_pop( 13 );
  twobit_invoke( 1 );
  twobit_label( 1345, compiled_block_2_1345 );
  twobit_movereg( 4, 1 );
  twobit_global( 28 ); /* ex:invalid-form */
  twobit_pop( 13 );
  twobit_invoke( 1 );
  twobit_label( 1153, compiled_block_2_1153 );
  twobit_trap( 4, 0, 0, 0 );
  twobit_label( 1123, compiled_block_2_1123 );
  twobit_trap( 3, 0, 0, 1 );
  twobit_label( 1268, compiled_block_2_1268 );
  twobit_trap( 4, 0, 0, 1 );
  twobit_label( 1264, compiled_block_2_1264 );
  twobit_trap( 3, 0, 0, 0 );
  twobit_label( 1263, compiled_block_2_1263 );
  twobit_trap( 2, 0, 0, 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_24( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_reg( 1 );
  twobit_op1_17(); /* symbol? */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 1091, compiled_block_2_1091 );
  twobit_reg( 4 );
  twobit_return();
  twobit_label( 1091, compiled_block_2_1091 );
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_store( 1, 1 );
  twobit_global( 1 ); /* list? */
  twobit_setrtn( 1092, compiled_block_2_1092 );
  twobit_invoke( 1 );
  twobit_label( 1092, compiled_block_2_1092 );
  twobit_load( 0, 0 );
  twobit_branchf( 1094, compiled_block_2_1094 );
  twobit_load( 1, 1 );
  twobit_global( 2 ); /* length */
  twobit_setrtn( 1095, compiled_block_2_1095 );
  twobit_invoke( 1 );
  twobit_label( 1095, compiled_block_2_1095 );
  twobit_load( 0, 0 );
  twobit_op2imm_branchf_637( fixnum(2), 33, compiled_temp_2_33, 1097, compiled_block_2_1097 ); /* internal:branchf->=/imm */
  twobit_stack( 1 );
  twobit_op1_11(); /* pair? */
  twobit_load( 3, 1 );
  twobit_check( 3, 0, 0, 1098, compiled_block_2_1098 );
  twobit_stack( 1 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 4 );
  twobit_const( 3 );
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op2_branchf_624( 3, 1100, compiled_block_2_1100 ); /* internal:branchf-eq? */
  twobit_const( 4 );
  twobit_skip( 1099, compiled_block_2_1099 );
  twobit_label( 1100, compiled_block_2_1100 );
  twobit_const( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 3 );
  twobit_const( 5 );
  twobit_setreg( 2 );
  twobit_reg( 4 );
  twobit_op2_branchf_624( 2, 1102, compiled_block_2_1102 ); /* internal:branchf-eq? */
  twobit_reg( 3 );
  twobit_skip( 1099, compiled_block_2_1099 );
  twobit_label( 1102, compiled_block_2_1102 );
  twobit_reg_op1_check_652(reg(3),1103,compiled_block_2_1103); /* internal:check-pair? with (3 0 0) */
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1099, compiled_block_2_1099 );
  twobit_branchf( 1105, compiled_block_2_1105 );
  twobit_stack( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg_op1_check_652(reg(4),1106,compiled_block_2_1106); /* internal:check-pair? with (4 0 0) */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_op1_17(); /* symbol? */
  twobit_branchf( 1108, compiled_block_2_1108 );
  twobit_load( 1, 1 );
  twobit_global( 2 ); /* length */
  twobit_setrtn( 1109, compiled_block_2_1109 );
  twobit_invoke( 1 );
  twobit_label( 1109, compiled_block_2_1109 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op2imm_branchf_640( fixnum(2), 1111, compiled_block_2_1111 ); /* internal:branchf-eq?/imm */
  twobit_imm_const( TRUE_CONST ); /* #t */
  twobit_pop( 1 );
  twobit_return();
  twobit_label( 1111, compiled_block_2_1111 );
  twobit_reg( 4 );
  twobit_op2imm_branchf_640( fixnum(3), 1113, compiled_block_2_1113 ); /* internal:branchf-eq?/imm */
  twobit_stack( 1 );
  twobit_op1_404(); /* car:pair */
  twobit_const_setreg( 3, 3 );
  twobit_op2_branchf_624( 3, 1115, compiled_block_2_1115 ); /* internal:branchf-eq? */
  twobit_stack( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg_op1_check_652(reg(4),1116,compiled_block_2_1116); /* internal:check-pair? with (4 0 0) */
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg_op1_check_652(reg(4),1106,compiled_block_2_1106); /* internal:check-pair? with (4 0 0) */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_op1_17(); /* symbol? */
  twobit_pop( 1 );
  twobit_return();
  twobit_label( 1115, compiled_block_2_1115 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_pop( 1 );
  twobit_return();
  twobit_label( 1113, compiled_block_2_1113 );
  twobit_reg( 4 );
  twobit_op2imm_branchf_640( fixnum(4), 1118, compiled_block_2_1118 ); /* internal:branchf-eq?/imm */
  twobit_stack( 1 );
  twobit_op1_404(); /* car:pair */
  twobit_const_setreg( 5, 3 );
  twobit_op2_branchf_624( 3, 1120, compiled_block_2_1120 ); /* internal:branchf-eq? */
  twobit_stack( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg_op1_check_652(reg(4),1116,compiled_block_2_1116); /* internal:check-pair? with (4 0 0) */
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg_op1_check_652(reg(4),1106,compiled_block_2_1106); /* internal:check-pair? with (4 0 0) */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_op1_17(); /* symbol? */
  twobit_branchf( 1122, compiled_block_2_1122 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg_op1_check_652(reg(4),1106,compiled_block_2_1106); /* internal:check-pair? with (4 0 0) */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_op1_17(); /* symbol? */
  twobit_pop( 1 );
  twobit_return();
  twobit_label( 1122, compiled_block_2_1122 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_pop( 1 );
  twobit_return();
  twobit_label( 1120, compiled_block_2_1120 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_pop( 1 );
  twobit_return();
  twobit_label( 1118, compiled_block_2_1118 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_pop( 1 );
  twobit_return();
  twobit_label( 1108, compiled_block_2_1108 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_pop( 1 );
  twobit_return();
  twobit_label( 1105, compiled_block_2_1105 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_pop( 1 );
  twobit_return();
  twobit_label( 1097, compiled_block_2_1097 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_pop( 1 );
  twobit_return();
  twobit_label( 1094, compiled_block_2_1094 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_pop( 1 );
  twobit_return();
  twobit_label( 1106, compiled_block_2_1106 );
  twobit_trap( 4, 0, 0, 0 );
  twobit_label( 1103, compiled_block_2_1103 );
  twobit_trap( 3, 0, 0, 1 );
  twobit_label( 1116, compiled_block_2_1116 );
  twobit_trap( 4, 0, 0, 1 );
  twobit_label( 1098, compiled_block_2_1098 );
  twobit_trap( 3, 0, 0, 0 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_30( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_save( 2 );
  twobit_store( 0, 0 );
  twobit_store( 1, 1 );
  twobit_global( 1 ); /* ex:identifier? */
  twobit_setrtn( 1198, compiled_block_2_1198 );
  twobit_invoke( 1 );
  twobit_label( 1198, compiled_block_2_1198 );
  twobit_load( 0, 0 );
  twobit_branchf( 1200, compiled_block_2_1200 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 4 );
  twobit_stack( 1 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
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
  twobit_setrtn( 1201, compiled_block_2_1201 );
  twobit_invoke( 5 );
  twobit_label( 1201, compiled_block_2_1201 );
  twobit_load( 0, 0 );
  twobit_load( 3, 2 );
  twobit_op2_58( 3 ); /* cons */
  twobit_skip( 1199, compiled_block_2_1199 );
  twobit_label( 1200, compiled_block_2_1200 );
  twobit_stack( 1 );
  twobit_label( 1199, compiled_block_2_1199 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_movereg( 4, 1 );
  twobit_global( 6 ); /* length */
  twobit_setrtn( 1202, compiled_block_2_1202 );
  twobit_invoke( 1 );
  twobit_label( 1202, compiled_block_2_1202 );
  twobit_load( 0, 0 );
  twobit_op2imm_branchf_639( fixnum(2), 31, compiled_temp_2_31, 1204, compiled_block_2_1204 ); /* internal:branchf-=/imm */
  twobit_stack( 2 );
  twobit_op1_11(); /* pair? */
  twobit_load( 3, 2 );
  twobit_check( 3, 0, 0, 1205, compiled_block_2_1205 );
  twobit_stack( 2 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg_op1_check_652(reg(4),1206,compiled_block_2_1206); /* internal:check-pair? with (4 0 0) */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 1 );
  twobit_global( 7 ); /* ex:syntax->datum */
  twobit_setrtn( 1207, compiled_block_2_1207 );
  twobit_invoke( 1 );
  twobit_label( 1207, compiled_block_2_1207 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_global( 8 ); /* symbol->string */
  twobit_setrtn( 1208, compiled_block_2_1208 );
  twobit_invoke( 1 );
  twobit_label( 1208, compiled_block_2_1208 );
  twobit_load( 0, 0 );
  twobit_setreg( 3 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_const( 9 );
  twobit_setreg( 2 );
  twobit_global( 10 ); /* string-append */
  twobit_setrtn( 1209, compiled_block_2_1209 );
  twobit_invoke( 3 );
  twobit_label( 1209, compiled_block_2_1209 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_global( 11 ); /* string->symbol */
  twobit_setrtn( 1210, compiled_block_2_1210 );
  twobit_invoke( 1 );
  twobit_label( 1210, compiled_block_2_1210 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_stack( 2 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 1 );
  twobit_global( 7 ); /* ex:syntax->datum */
  twobit_setrtn( 1211, compiled_block_2_1211 );
  twobit_invoke( 1 );
  twobit_label( 1211, compiled_block_2_1211 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_const( 2 );
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op2_branchf_624( 3, 1213, compiled_block_2_1213 ); /* internal:branchf-eq? */
  twobit_stack( 2 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg_op1_check_652(reg(4),1206,compiled_block_2_1206); /* internal:check-pair? with (4 0 0) */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 4 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_stack( 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 2 );
  twobit_reg( 2 );
  twobit_op1_branchf_611( 1215, compiled_block_2_1215 ); /* internal:branchf-pair? */
  twobit_reg( 2 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 1 );
  twobit_reg( 2 );
  twobit_op1_405(); /* cdr:pair */
  twobit_op1_branchf_610( 1217, compiled_block_2_1217 ); /* internal:branchf-null? */
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_op2_58( 2 ); /* cons */
  twobit_setreg( 4 );
  twobit_reg( 1 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_reg( 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_const( 2 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 12 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1218, compiled_block_2_1218 );
  twobit_invoke( 5 );
  twobit_label( 1218, compiled_block_2_1218 );
  twobit_load( 0, 0 );
  twobit_load( 3, 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_pop( 2 );
  twobit_return();
  twobit_label( 1217, compiled_block_2_1217 );
  twobit_movereg( 4, 1 );
  twobit_global( 13 ); /* ex:invalid-form */
  twobit_pop( 2 );
  twobit_invoke( 1 );
  twobit_label( 1215, compiled_block_2_1215 );
  twobit_movereg( 4, 1 );
  twobit_global( 13 ); /* ex:invalid-form */
  twobit_pop( 2 );
  twobit_invoke( 1 );
  twobit_label( 1213, compiled_block_2_1213 );
  twobit_const( 14 );
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op2_branchf_624( 3, 1222, compiled_block_2_1222 ); /* internal:branchf-eq? */
  twobit_stack( 2 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg_op1_check_652(reg(4),1206,compiled_block_2_1206); /* internal:check-pair? with (4 0 0) */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_movereg( 4, 1 );
  twobit_global( 7 ); /* ex:syntax->datum */
  twobit_setrtn( 1223, compiled_block_2_1223 );
  twobit_invoke( 1 );
  twobit_label( 1223, compiled_block_2_1223 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_global( 8 ); /* symbol->string */
  twobit_setrtn( 1224, compiled_block_2_1224 );
  twobit_invoke( 1 );
  twobit_label( 1224, compiled_block_2_1224 );
  twobit_load( 0, 0 );
  twobit_setreg( 3 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_const( 9 );
  twobit_setreg( 2 );
  twobit_const( 15 );
  twobit_setreg( 4 );
  twobit_global( 10 ); /* string-append */
  twobit_setrtn( 1225, compiled_block_2_1225 );
  twobit_invoke( 4 );
  twobit_label( 1225, compiled_block_2_1225 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_global( 11 ); /* string->symbol */
  twobit_setrtn( 1226, compiled_block_2_1226 );
  twobit_invoke( 1 );
  twobit_label( 1226, compiled_block_2_1226 );
  twobit_load( 0, 0 );
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 1 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 2 );
  twobit_reg( 2 );
  twobit_op1_branchf_611( 1228, compiled_block_2_1228 ); /* internal:branchf-pair? */
  twobit_reg( 2 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 1 );
  twobit_reg( 2 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 2 );
  twobit_reg( 2 );
  twobit_op1_branchf_611( 1230, compiled_block_2_1230 ); /* internal:branchf-pair? */
  twobit_reg( 2 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 4 );
  twobit_reg( 2 );
  twobit_op1_405(); /* cdr:pair */
  twobit_op1_branchf_610( 1232, compiled_block_2_1232 ); /* internal:branchf-null? */
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_reg( 4 );
  twobit_op2_58( 2 ); /* cons */
  twobit_setreg( 4 );
  twobit_reg( 1 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_reg( 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_const( 14 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 16 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1233, compiled_block_2_1233 );
  twobit_invoke( 5 );
  twobit_label( 1233, compiled_block_2_1233 );
  twobit_load( 0, 0 );
  twobit_load( 3, 2 );
  twobit_op2_58( 3 ); /* cons */
  twobit_pop( 2 );
  twobit_return();
  twobit_label( 1232, compiled_block_2_1232 );
  twobit_load( 1, 1 );
  twobit_global( 13 ); /* ex:invalid-form */
  twobit_pop( 2 );
  twobit_invoke( 1 );
  twobit_label( 1230, compiled_block_2_1230 );
  twobit_movereg( 4, 1 );
  twobit_global( 13 ); /* ex:invalid-form */
  twobit_pop( 2 );
  twobit_invoke( 1 );
  twobit_label( 1228, compiled_block_2_1228 );
  twobit_movereg( 4, 1 );
  twobit_global( 13 ); /* ex:invalid-form */
  twobit_pop( 2 );
  twobit_invoke( 1 );
  twobit_label( 1222, compiled_block_2_1222 );
  twobit_op1_3(); /* unspecified */
  twobit_pop( 2 );
  twobit_return();
  twobit_label( 1204, compiled_block_2_1204 );
  twobit_load( 1, 2 );
  twobit_global( 6 ); /* length */
  twobit_setrtn( 1237, compiled_block_2_1237 );
  twobit_invoke( 1 );
  twobit_label( 1237, compiled_block_2_1237 );
  twobit_load( 0, 0 );
  twobit_op2imm_branchf_639( fixnum(3), 32, compiled_temp_2_32, 1239, compiled_block_2_1239 ); /* internal:branchf-=/imm */
  twobit_stack( 2 );
  twobit_op1_11(); /* pair? */
  twobit_load( 3, 2 );
  twobit_check( 3, 0, 0, 1240, compiled_block_2_1240 );
  twobit_stack( 2 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 4 );
  twobit_stack( 2 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 3 );
  twobit_reg_op1_check_652(reg(3),1240,compiled_block_2_1240); /* internal:check-pair? with (3 0 0) */
  twobit_reg( 3 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_reg( 3 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 3 );
  twobit_reg_op1_check_652(reg(3),1240,compiled_block_2_1240); /* internal:check-pair? with (3 0 0) */
  twobit_reg( 3 );
  twobit_op1_404(); /* car:pair */
  twobit_imm_const_setreg( NIL_CONST, 1 ); /* () */
  twobit_op2_58( 1 ); /* cons */
  twobit_setreg( 3 );
  twobit_reg( 2 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 2 );
  twobit_reg( 2 );
  twobit_op1_branchf_611( 1242, compiled_block_2_1242 ); /* internal:branchf-pair? */
  twobit_reg( 2 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 1 );
  twobit_reg( 2 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 2 );
  twobit_reg( 2 );
  twobit_op1_branchf_611( 1244, compiled_block_2_1244 ); /* internal:branchf-pair? */
  twobit_reg( 2 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 4 );
  twobit_reg( 2 );
  twobit_op1_405(); /* cdr:pair */
  twobit_op1_branchf_610( 1246, compiled_block_2_1246 ); /* internal:branchf-null? */
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_op2_58( 2 ); /* cons */
  twobit_setreg( 2 );
  twobit_reg( 4 );
  twobit_op2_58( 2 ); /* cons */
  twobit_setreg( 4 );
  twobit_reg( 1 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_reg( 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_pop( 2 );
  twobit_return();
  twobit_label( 1246, compiled_block_2_1246 );
  twobit_load( 1, 2 );
  twobit_global( 13 ); /* ex:invalid-form */
  twobit_pop( 2 );
  twobit_invoke( 1 );
  twobit_label( 1244, compiled_block_2_1244 );
  twobit_movereg( 4, 1 );
  twobit_global( 13 ); /* ex:invalid-form */
  twobit_pop( 2 );
  twobit_invoke( 1 );
  twobit_label( 1242, compiled_block_2_1242 );
  twobit_movereg( 4, 1 );
  twobit_global( 13 ); /* ex:invalid-form */
  twobit_pop( 2 );
  twobit_invoke( 1 );
  twobit_label( 1239, compiled_block_2_1239 );
  twobit_stack( 2 );
  twobit_pop( 2 );
  twobit_return();
  twobit_label( 1206, compiled_block_2_1206 );
  twobit_trap( 4, 0, 0, 0 );
  twobit_label( 1205, compiled_block_2_1205 );
  twobit_trap( 3, 0, 0, 1 );
  twobit_label( 1240, compiled_block_2_1240 );
  twobit_trap( 3, 0, 0, 0 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_8( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_reg( 1 );
  twobit_op1_branchf_611( 1382, compiled_block_2_1382 ); /* internal:branchf-pair? */
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1384, compiled_block_2_1384 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1386, compiled_block_2_1386 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1388, compiled_block_2_1388 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 31 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1390, compiled_block_2_1390 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 30 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1392, compiled_block_2_1392 ); /* internal:branchf-pair? */
  twobit_save( 2 );
  twobit_store( 0, 0 );
  twobit_store( 2, 1 );
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_store( 2, 2 );
  twobit_lambda( compiled_start_2_15, 2, 0 );
  twobit_setreg( 29 );
  twobit_movereg( 31, 6 );
  twobit_load( 5, 1 );
  twobit_movereg( 30, 2 );
  twobit_lambda( compiled_start_2_16, 4, 6 );
  twobit_setreg( 3 );
  twobit_movereg( 29, 1 );
  twobit_load( 2, 2 );
  twobit_global( 5 ); /* ex:map-while */
  twobit_pop( 2 );
  twobit_invoke( 3 );
  twobit_label( 1392, compiled_block_2_1392 );
  twobit_global( 6 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1390, compiled_block_2_1390 );
  twobit_global( 6 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1388, compiled_block_2_1388 );
  twobit_global( 6 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1386, compiled_block_2_1386 );
  twobit_global( 6 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1384, compiled_block_2_1384 );
  twobit_global( 6 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1382, compiled_block_2_1382 );
  twobit_global( 6 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_15( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_reg( 1 );
  twobit_op1_branchf_611( 1394, compiled_block_2_1394 ); /* internal:branchf-pair? */
  twobit_reg( 1 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 4 );
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 3 );
  twobit_reg( 3 );
  twobit_op1_branchf_611( 1396, compiled_block_2_1396 ); /* internal:branchf-pair? */
  twobit_reg( 3 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_reg( 3 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 3 );
  twobit_reg( 3 );
  twobit_op1_branchf_611( 1398, compiled_block_2_1398 ); /* internal:branchf-pair? */
  twobit_reg( 3 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 1 );
  twobit_reg( 3 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 3 );
  twobit_reg( 3 );
  twobit_op1_branchf_611( 1400, compiled_block_2_1400 ); /* internal:branchf-pair? */
  twobit_reg( 3 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 31 );
  twobit_reg( 3 );
  twobit_op1_405(); /* cdr:pair */
  twobit_op1_branchf_610( 1402, compiled_block_2_1402 ); /* internal:branchf-null? */
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_reg( 31 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_reg( 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_reg( 2 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op2_58( 3 ); /* cons */
  twobit_return();
  twobit_label( 1402, compiled_block_2_1402 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_return();
  twobit_label( 1400, compiled_block_2_1400 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_return();
  twobit_label( 1398, compiled_block_2_1398 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_return();
  twobit_label( 1396, compiled_block_2_1396 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_return();
  twobit_label( 1394, compiled_block_2_1394 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_2_16( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_reg( 2 );
  twobit_op1_branchf_610( 1404, compiled_block_2_1404 ); /* internal:branchf-null? */
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_lambda( compiled_start_2_17, 2, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_reg( 1 );
  twobit_op1_branchf_610( 1502, compiled_block_2_1502 ); /* internal:branchf-null? */
  twobit_const( 3 );
  twobit_skip( 1501, compiled_block_2_1501 );
  twobit_label( 1502, compiled_block_2_1502 );
  twobit_movereg( 1, 3 );
  twobit_global( 4 ); /* map */
  twobit_setreg( 1 );
  twobit_global( 5 ); /* list */
  twobit_setreg( 2 );
  twobit_global( 6 ); /* apply */
  twobit_setrtn( 1503, compiled_block_2_1503 );
  twobit_invoke( 3 );
  twobit_label( 1503, compiled_block_2_1503 );
  twobit_load( 0, 0 );
  twobit_label( 1501, compiled_block_2_1501 );
  twobit_setreg( 2 );
  twobit_load( 1, 1 );
  twobit_global( 6 ); /* apply */
  twobit_pop( 1 );
  twobit_invoke( 2 );
  twobit_label( 1404, compiled_block_2_1404 );
  twobit_lexical( 0, 1 );
  twobit_setreg( 1 );
  twobit_global( 7 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_17( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 4 );
  twobit_lexical( 1, 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 31 );
  twobit_reg( 31 );
  twobit_op1_branchf_611( 1410, compiled_block_2_1410 ); /* internal:branchf-pair? */
  twobit_reg( 31 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 30 );
  twobit_reg( 31 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 31 );
  twobit_reg( 31 );
  twobit_op1_branchf_611( 1412, compiled_block_2_1412 ); /* internal:branchf-pair? */
  twobit_reg( 31 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 29 );
  twobit_reg( 31 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 31 );
  twobit_reg( 31 );
  twobit_op1_branchf_611( 1414, compiled_block_2_1414 ); /* internal:branchf-pair? */
  twobit_reg( 31 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 28 );
  twobit_reg( 31 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 31 );
  twobit_reg( 31 );
  twobit_op1_branchf_611( 1416, compiled_block_2_1416 ); /* internal:branchf-pair? */
  twobit_reg( 31 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 27 );
  twobit_reg( 31 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 31 );
  twobit_reg( 31 );
  twobit_op1_branchf_611( 1418, compiled_block_2_1418 ); /* internal:branchf-pair? */
  twobit_reg( 31 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 26 );
  twobit_reg( 31 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 31 );
  twobit_reg( 31 );
  twobit_op1_branchf_611( 1420, compiled_block_2_1420 ); /* internal:branchf-pair? */
  twobit_reg( 31 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 25 );
  twobit_reg( 31 );
  twobit_op1_405(); /* cdr:pair */
  twobit_op1_branchf_610( 1422, compiled_block_2_1422 ); /* internal:branchf-null? */
  twobit_save( 12 );
  twobit_store( 0, 0 );
  twobit_store( 1, 5 );
  twobit_store( 2, 6 );
  twobit_store( 3, 10 );
  twobit_store( 4, 11 );
  twobit_store( 25, 9 );
  twobit_store( 26, 4 );
  twobit_store( 27, 1 );
  twobit_store( 28, 2 );
  twobit_store( 29, 3 );
  twobit_store( 30, 8 );
  twobit_const( 1 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 2 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 3 );
  twobit_setreg( 5 );
  twobit_global( 4 ); /* ex:syntax-rename */
  twobit_setrtn( 1423, compiled_block_2_1423 );
  twobit_invoke( 5 );
  twobit_label( 1423, compiled_block_2_1423 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 12 );
  twobit_const( 5 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 2 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 3 );
  twobit_setreg( 5 );
  twobit_global( 4 ); /* ex:syntax-rename */
  twobit_setrtn( 1424, compiled_block_2_1424 );
  twobit_invoke( 5 );
  twobit_label( 1424, compiled_block_2_1424 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 7 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_stack( 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_stack( 2 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_stack( 3 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_stack( 4 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 2 );
  twobit_load( 1, 5 );
  twobit_global( 6 ); /* length */
  twobit_setrtn( 1425, compiled_block_2_1425 );
  twobit_invoke( 1 );
  twobit_label( 1425, compiled_block_2_1425 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_load( 1, 6 );
  twobit_global( 6 ); /* length */
  twobit_setrtn( 1426, compiled_block_2_1426 );
  twobit_invoke( 1 );
  twobit_label( 1426, compiled_block_2_1426 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_stack( 3 );
  twobit_op2_branchf_623( 4, 18, compiled_temp_2_18, 1428, compiled_block_2_1428 ); /* internal:branchf-= */
  twobit_load( 1, 5 );
  twobit_load( 2, 6 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_setrtn( 1429, compiled_block_2_1429 );
  twobit_branch( 1407, compiled_block_2_1407 );
  twobit_label( 1429, compiled_block_2_1429 );
  twobit_load( 0, 0 );
  twobit_skip( 1427, compiled_block_2_1427 );
  twobit_label( 1428, compiled_block_2_1428 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 4 );
  twobit_stack( 6 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 5 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 7 );
  twobit_setreg( 1 );
  twobit_const( 8 );
  twobit_setreg( 2 );
  twobit_const( 9 );
  twobit_setreg( 3 );
  twobit_global( 10 ); /* ex:syntax-violation */
  twobit_setrtn( 1430, compiled_block_2_1430 );
  twobit_invoke( 4 );
  twobit_label( 1430, compiled_block_2_1430 );
  twobit_load( 0, 0 );
  twobit_label( 1427, compiled_block_2_1427 );
  twobit_load( 3, 2 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_lexical( 1, 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_lexical( 1, 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 7 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_stack( 8 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_stack( 9 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_stack( 4 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_lexical( 1, 2 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_lexical( 1, 3 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 4 );
  twobit_const( 11 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 2 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 3 );
  twobit_setreg( 5 );
  twobit_global( 4 ); /* ex:syntax-rename */
  twobit_setrtn( 1431, compiled_block_2_1431 );
  twobit_invoke( 5 );
  twobit_label( 1431, compiled_block_2_1431 );
  twobit_load( 0, 0 );
  twobit_load( 3, 4 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 7 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_lexical( 1, 5 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_lexical( 1, 3 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 4 );
  twobit_const( 12 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 2 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 3 );
  twobit_setreg( 5 );
  twobit_global( 4 ); /* ex:syntax-rename */
  twobit_setrtn( 1432, compiled_block_2_1432 );
  twobit_invoke( 5 );
  twobit_label( 1432, compiled_block_2_1432 );
  twobit_load( 0, 0 );
  twobit_load( 3, 4 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 8 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_lexical( 1, 6 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_lexical( 1, 3 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 4 );
  twobit_const( 13 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 2 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 3 );
  twobit_setreg( 5 );
  twobit_global( 4 ); /* ex:syntax-rename */
  twobit_setrtn( 1433, compiled_block_2_1433 );
  twobit_invoke( 5 );
  twobit_label( 1433, compiled_block_2_1433 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_load( 1, 6 );
  twobit_load( 3, 4 );
  twobit_reg( 4 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 9 );
  twobit_global( 6 ); /* length */
  twobit_setrtn( 1434, compiled_block_2_1434 );
  twobit_invoke( 1 );
  twobit_label( 1434, compiled_block_2_1434 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 4 );
  twobit_load( 1, 10 );
  twobit_global( 6 ); /* length */
  twobit_setrtn( 1435, compiled_block_2_1435 );
  twobit_invoke( 1 );
  twobit_label( 1435, compiled_block_2_1435 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_stack( 4 );
  twobit_op2_branchf_623( 4, 19, compiled_temp_2_19, 1437, compiled_block_2_1437 ); /* internal:branchf-= */
  twobit_load( 1, 6 );
  twobit_load( 2, 10 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_setrtn( 1438, compiled_block_2_1438 );
  twobit_branch( 1406, compiled_block_2_1406 );
  twobit_label( 1438, compiled_block_2_1438 );
  twobit_load( 0, 0 );
  twobit_skip( 1436, compiled_block_2_1436 );
  twobit_label( 1437, compiled_block_2_1437 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 4 );
  twobit_stack( 10 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 6 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 7 );
  twobit_setreg( 1 );
  twobit_const( 8 );
  twobit_setreg( 2 );
  twobit_const( 14 );
  twobit_setreg( 3 );
  twobit_global( 10 ); /* ex:syntax-violation */
  twobit_setrtn( 1439, compiled_block_2_1439 );
  twobit_invoke( 4 );
  twobit_label( 1439, compiled_block_2_1439 );
  twobit_load( 0, 0 );
  twobit_label( 1436, compiled_block_2_1436 );
  twobit_setreg( 4 );
  twobit_store( 4, 4 );
  twobit_load( 1, 6 );
  twobit_global( 6 ); /* length */
  twobit_setrtn( 1440, compiled_block_2_1440 );
  twobit_invoke( 1 );
  twobit_label( 1440, compiled_block_2_1440 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 10 );
  twobit_load( 1, 11 );
  twobit_global( 6 ); /* length */
  twobit_setrtn( 1441, compiled_block_2_1441 );
  twobit_invoke( 1 );
  twobit_label( 1441, compiled_block_2_1441 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_stack( 10 );
  twobit_op2_branchf_623( 4, 20, compiled_temp_2_20, 1443, compiled_block_2_1443 ); /* internal:branchf-= */
  twobit_load( 1, 6 );
  twobit_load( 2, 11 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_setrtn( 1444, compiled_block_2_1444 );
  twobit_branch( 1405, compiled_block_2_1405 );
  twobit_label( 1444, compiled_block_2_1444 );
  twobit_load( 0, 0 );
  twobit_skip( 1442, compiled_block_2_1442 );
  twobit_label( 1443, compiled_block_2_1443 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 4 );
  twobit_stack( 11 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 6 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_const( 7 );
  twobit_setreg( 1 );
  twobit_const( 8 );
  twobit_setreg( 2 );
  twobit_const( 15 );
  twobit_setreg( 3 );
  twobit_global( 10 ); /* ex:syntax-violation */
  twobit_setrtn( 1445, compiled_block_2_1445 );
  twobit_invoke( 4 );
  twobit_label( 1445, compiled_block_2_1445 );
  twobit_load( 0, 0 );
  twobit_label( 1442, compiled_block_2_1442 );
  twobit_setreg( 2 );
  twobit_load( 1, 4 );
  twobit_global( 16 ); /* append */
  twobit_setrtn( 1446, compiled_block_2_1446 );
  twobit_invoke( 2 );
  twobit_label( 1446, compiled_block_2_1446 );
  twobit_load( 0, 0 );
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
  twobit_stack( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 12 );
  twobit_op2_58( 4 ); /* cons */
  twobit_pop( 12 );
  twobit_return();
  twobit_label( 1422, compiled_block_2_1422 );
  twobit_lexical( 1, 1 );
  twobit_setreg( 1 );
  twobit_global( 17 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1420, compiled_block_2_1420 );
  twobit_lexical( 1, 1 );
  twobit_setreg( 1 );
  twobit_global( 17 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1418, compiled_block_2_1418 );
  twobit_lexical( 1, 1 );
  twobit_setreg( 1 );
  twobit_global( 17 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1416, compiled_block_2_1416 );
  twobit_lexical( 1, 1 );
  twobit_setreg( 1 );
  twobit_global( 17 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1414, compiled_block_2_1414 );
  twobit_lexical( 1, 1 );
  twobit_setreg( 1 );
  twobit_global( 17 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1412, compiled_block_2_1412 );
  twobit_lexical( 1, 1 );
  twobit_setreg( 1 );
  twobit_global( 17 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1410, compiled_block_2_1410 );
  twobit_lexical( 1, 1 );
  twobit_setreg( 1 );
  twobit_global( 17 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1405, compiled_block_2_1405 );
  twobit_reg( 1 );
  twobit_op1_10(); /* null? */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 1455, compiled_block_2_1455 );
  twobit_imm_const( TRUE_CONST ); /* #t */
  twobit_skip( 1454, compiled_block_2_1454 );
  twobit_label( 1455, compiled_block_2_1455 );
  twobit_reg( 2 );
  twobit_op1_10(); /* null? */
  twobit_label( 1454, compiled_block_2_1454 );
  twobit_branchf( 1457, compiled_block_2_1457 );
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_store( 3, 1 );
  twobit_reg( 4 );
  twobit_branchf( 1459, compiled_block_2_1459 );
  twobit_reg( 2 );
  twobit_op1_10(); /* null? */
  twobit_skip( 1458, compiled_block_2_1458 );
  twobit_label( 1459, compiled_block_2_1459 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1458, compiled_block_2_1458 );
  twobit_branchf( 1461, compiled_block_2_1461 );
  twobit_reg( 3 );
  twobit_skip( 1460, compiled_block_2_1460 );
  twobit_label( 1461, compiled_block_2_1461 );
  twobit_movereg( 2, 3 );
  twobit_movereg( 1, 2 );
  twobit_lambda( compiled_start_2_21, 19, 0 );
  twobit_setreg( 1 );
  twobit_global( 20 ); /* larceny:map */
  twobit_setrtn( 1463, compiled_block_2_1463 );
  twobit_invoke( 3 );
  twobit_label( 1463, compiled_block_2_1463 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_global( 21 ); /* reverse */
  twobit_setrtn( 1464, compiled_block_2_1464 );
  twobit_invoke( 1 );
  twobit_label( 1464, compiled_block_2_1464 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_load( 2, 1 );
  twobit_global( 16 ); /* append */
  twobit_setrtn( 1465, compiled_block_2_1465 );
  twobit_invoke( 2 );
  twobit_label( 1465, compiled_block_2_1465 );
  twobit_load( 0, 0 );
  twobit_label( 1460, compiled_block_2_1460 );
  twobit_setreg( 1 );
  twobit_global( 21 ); /* reverse */
  twobit_pop( 1 );
  twobit_invoke( 1 );
  twobit_label( 1457, compiled_block_2_1457 );
  twobit_save( 4 );
  twobit_store( 0, 0 );
  twobit_store( 3, 4 );
  twobit_reg_op1_check_652(reg(1),1467,compiled_block_2_1467); /* internal:check-pair? with (1 0 0) */
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_reg_op1_check_652(reg(2),1468,compiled_block_2_1468); /* internal:check-pair? with (2 0 0) */
  twobit_reg( 2 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 31 );
  twobit_store( 31, 1 );
  twobit_reg( 2 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_reg( 1 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 30 );
  twobit_reg( 2 );
  twobit_op2_58( 30 ); /* cons */
  twobit_setreg( 2 );
  twobit_reg( 1 );
  twobit_op2_58( 2 ); /* cons */
  twobit_setreg( 2 );
  twobit_lexical( 1, 3 );
  twobit_op2_58( 2 ); /* cons */
  twobit_setreg( 2 );
  twobit_store( 2, 3 );
  twobit_const( 22 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 2 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 3 );
  twobit_setreg( 5 );
  twobit_global( 4 ); /* ex:syntax-rename */
  twobit_setrtn( 1469, compiled_block_2_1469 );
  twobit_invoke( 5 );
  twobit_label( 1469, compiled_block_2_1469 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_load( 2, 1 );
  twobit_load( 1, 2 );
  twobit_load( 3, 3 );
  twobit_reg( 4 );
  twobit_op2_58( 3 ); /* cons */
  twobit_load( 3, 4 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_pop( 4 );
  twobit_branch( 1405, compiled_block_2_1405 );
  twobit_label( 1406, compiled_block_2_1406 );
  twobit_reg( 1 );
  twobit_op1_10(); /* null? */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 1472, compiled_block_2_1472 );
  twobit_imm_const( TRUE_CONST ); /* #t */
  twobit_skip( 1471, compiled_block_2_1471 );
  twobit_label( 1472, compiled_block_2_1472 );
  twobit_reg( 2 );
  twobit_op1_10(); /* null? */
  twobit_label( 1471, compiled_block_2_1471 );
  twobit_branchf( 1474, compiled_block_2_1474 );
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_store( 3, 1 );
  twobit_reg( 4 );
  twobit_branchf( 1476, compiled_block_2_1476 );
  twobit_reg( 2 );
  twobit_op1_10(); /* null? */
  twobit_skip( 1475, compiled_block_2_1475 );
  twobit_label( 1476, compiled_block_2_1476 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1475, compiled_block_2_1475 );
  twobit_branchf( 1478, compiled_block_2_1478 );
  twobit_reg( 3 );
  twobit_skip( 1477, compiled_block_2_1477 );
  twobit_label( 1478, compiled_block_2_1478 );
  twobit_movereg( 2, 3 );
  twobit_movereg( 1, 2 );
  twobit_lambda( compiled_start_2_22, 24, 0 );
  twobit_setreg( 1 );
  twobit_global( 20 ); /* larceny:map */
  twobit_setrtn( 1480, compiled_block_2_1480 );
  twobit_invoke( 3 );
  twobit_label( 1480, compiled_block_2_1480 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_global( 21 ); /* reverse */
  twobit_setrtn( 1481, compiled_block_2_1481 );
  twobit_invoke( 1 );
  twobit_label( 1481, compiled_block_2_1481 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_load( 2, 1 );
  twobit_global( 16 ); /* append */
  twobit_setrtn( 1482, compiled_block_2_1482 );
  twobit_invoke( 2 );
  twobit_label( 1482, compiled_block_2_1482 );
  twobit_load( 0, 0 );
  twobit_label( 1477, compiled_block_2_1477 );
  twobit_setreg( 1 );
  twobit_global( 21 ); /* reverse */
  twobit_pop( 1 );
  twobit_invoke( 1 );
  twobit_label( 1474, compiled_block_2_1474 );
  twobit_save( 4 );
  twobit_store( 0, 0 );
  twobit_store( 3, 4 );
  twobit_reg_op1_check_652(reg(1),1467,compiled_block_2_1467); /* internal:check-pair? with (1 0 0) */
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_reg_op1_check_652(reg(2),1468,compiled_block_2_1468); /* internal:check-pair? with (2 0 0) */
  twobit_reg( 2 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 31 );
  twobit_store( 31, 1 );
  twobit_reg( 2 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_reg( 1 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 30 );
  twobit_reg( 2 );
  twobit_op2_58( 30 ); /* cons */
  twobit_setreg( 2 );
  twobit_reg( 1 );
  twobit_op2_58( 2 ); /* cons */
  twobit_setreg( 2 );
  twobit_lexical( 1, 3 );
  twobit_op2_58( 2 ); /* cons */
  twobit_setreg( 2 );
  twobit_store( 2, 3 );
  twobit_const( 25 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 2 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 3 );
  twobit_setreg( 5 );
  twobit_global( 4 ); /* ex:syntax-rename */
  twobit_setrtn( 1484, compiled_block_2_1484 );
  twobit_invoke( 5 );
  twobit_label( 1484, compiled_block_2_1484 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_load( 2, 1 );
  twobit_load( 1, 2 );
  twobit_load( 3, 3 );
  twobit_reg( 4 );
  twobit_op2_58( 3 ); /* cons */
  twobit_load( 3, 4 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_pop( 4 );
  twobit_branch( 1406, compiled_block_2_1406 );
  twobit_label( 1407, compiled_block_2_1407 );
  twobit_reg( 1 );
  twobit_op1_10(); /* null? */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_branchf( 1487, compiled_block_2_1487 );
  twobit_imm_const( TRUE_CONST ); /* #t */
  twobit_skip( 1486, compiled_block_2_1486 );
  twobit_label( 1487, compiled_block_2_1487 );
  twobit_reg( 2 );
  twobit_op1_10(); /* null? */
  twobit_label( 1486, compiled_block_2_1486 );
  twobit_branchf( 1489, compiled_block_2_1489 );
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_store( 3, 1 );
  twobit_reg( 4 );
  twobit_branchf( 1491, compiled_block_2_1491 );
  twobit_reg( 2 );
  twobit_op1_10(); /* null? */
  twobit_skip( 1490, compiled_block_2_1490 );
  twobit_label( 1491, compiled_block_2_1491 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_label( 1490, compiled_block_2_1490 );
  twobit_branchf( 1493, compiled_block_2_1493 );
  twobit_reg( 3 );
  twobit_skip( 1492, compiled_block_2_1492 );
  twobit_label( 1493, compiled_block_2_1493 );
  twobit_movereg( 2, 3 );
  twobit_movereg( 1, 2 );
  twobit_lambda( compiled_start_2_23, 27, 0 );
  twobit_setreg( 1 );
  twobit_global( 20 ); /* larceny:map */
  twobit_setrtn( 1494, compiled_block_2_1494 );
  twobit_invoke( 3 );
  twobit_label( 1494, compiled_block_2_1494 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_global( 21 ); /* reverse */
  twobit_setrtn( 1495, compiled_block_2_1495 );
  twobit_invoke( 1 );
  twobit_label( 1495, compiled_block_2_1495 );
  twobit_load( 0, 0 );
  twobit_setreg( 1 );
  twobit_load( 2, 1 );
  twobit_global( 16 ); /* append */
  twobit_setrtn( 1496, compiled_block_2_1496 );
  twobit_invoke( 2 );
  twobit_label( 1496, compiled_block_2_1496 );
  twobit_load( 0, 0 );
  twobit_label( 1492, compiled_block_2_1492 );
  twobit_setreg( 1 );
  twobit_global( 21 ); /* reverse */
  twobit_pop( 1 );
  twobit_invoke( 1 );
  twobit_label( 1489, compiled_block_2_1489 );
  twobit_reg_op1_check_652(reg(2),1498,compiled_block_2_1498); /* internal:check-pair? with (2 0 0) */
  twobit_reg( 2 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 4 );
  twobit_reg_op1_check_652(reg(1),1499,compiled_block_2_1499); /* internal:check-pair? with (1 0 0) */
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
  twobit_branch( 1407, compiled_block_2_1407 );
  twobit_label( 1498, compiled_block_2_1498 );
  twobit_trap( 2, 0, 0, 0 );
  twobit_label( 1467, compiled_block_2_1467 );
  twobit_trap( 1, 0, 0, 1 );
  twobit_label( 1468, compiled_block_2_1468 );
  twobit_trap( 2, 0, 0, 1 );
  twobit_label( 1499, compiled_block_2_1499 );
  twobit_trap( 1, 0, 0, 0 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_21( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 4 );
  twobit_reg( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_reg( 1 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_lexical( 2, 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_const( 1 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 2 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 3 );
  twobit_setreg( 5 );
  twobit_global( 4 ); /* ex:syntax-rename */
  twobit_setrtn( 1462, compiled_block_2_1462 );
  twobit_invoke( 5 );
  twobit_label( 1462, compiled_block_2_1462 );
  twobit_load( 0, 0 );
  twobit_load( 3, 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_pop( 1 );
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_2_22( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 2 );
  twobit_save( 1 );
  twobit_store( 0, 0 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 4 );
  twobit_reg( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_reg( 1 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_lexical( 2, 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_const( 1 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 2 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 3 );
  twobit_setreg( 5 );
  twobit_global( 4 ); /* ex:syntax-rename */
  twobit_setrtn( 1479, compiled_block_2_1479 );
  twobit_invoke( 5 );
  twobit_label( 1479, compiled_block_2_1479 );
  twobit_load( 0, 0 );
  twobit_load( 3, 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_pop( 1 );
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_2_23( CONT_PARAMS ) {
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


static RTYPE compiled_start_2_9( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_reg( 1 );
  twobit_op1_branchf_611( 1523, compiled_block_2_1523 ); /* internal:branchf-pair? */
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1525, compiled_block_2_1525 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1527, compiled_block_2_1527 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1529, compiled_block_2_1529 ); /* internal:branchf-pair? */
  twobit_save( 8 );
  twobit_store( 0, 0 );
  twobit_store( 1, 8 );
  twobit_store( 2, 2 );
  twobit_store( 3, 6 );
  twobit_store( 4, 1 );
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 31 );
  twobit_store( 31, 4 );
  twobit_movereg( 31, 1 );
  twobit_global( 1 ); /* list? */
  twobit_setrtn( 1530, compiled_block_2_1530 );
  twobit_invoke( 1 );
  twobit_label( 1530, compiled_block_2_1530 );
  twobit_load( 0, 0 );
  twobit_branchf( 1532, compiled_block_2_1532 );
  twobit_stack( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1534, compiled_block_2_1534 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_store( 3, 3 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1536, compiled_block_2_1536 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 1 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_setreg( 2 );
  twobit_global( 2 ); /* equal? */
  twobit_setrtn( 1537, compiled_block_2_1537 );
  twobit_invoke( 2 );
  twobit_label( 1537, compiled_block_2_1537 );
  twobit_load( 0, 0 );
  twobit_branchf( 1539, compiled_block_2_1539 );
  twobit_stack( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1541, compiled_block_2_1541 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 1 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_setreg( 2 );
  twobit_global( 2 ); /* equal? */
  twobit_setrtn( 1542, compiled_block_2_1542 );
  twobit_invoke( 2 );
  twobit_label( 1542, compiled_block_2_1542 );
  twobit_load( 0, 0 );
  twobit_branchf( 1544, compiled_block_2_1544 );
  twobit_stack( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1546, compiled_block_2_1546 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 1 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_setreg( 2 );
  twobit_global( 2 ); /* equal? */
  twobit_setrtn( 1547, compiled_block_2_1547 );
  twobit_invoke( 2 );
  twobit_label( 1547, compiled_block_2_1547 );
  twobit_load( 0, 0 );
  twobit_branchf( 1549, compiled_block_2_1549 );
  twobit_stack( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_op1_branchf_610( 1551, compiled_block_2_1551 ); /* internal:branchf-null? */
  twobit_const( 3 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 4 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 5 );
  twobit_setreg( 5 );
  twobit_global( 6 ); /* ex:syntax-rename */
  twobit_setrtn( 1552, compiled_block_2_1552 );
  twobit_invoke( 5 );
  twobit_label( 1552, compiled_block_2_1552 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 7 );
  twobit_const( 7 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 4 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 5 );
  twobit_setreg( 5 );
  twobit_global( 6 ); /* ex:syntax-rename */
  twobit_setrtn( 1553, compiled_block_2_1553 );
  twobit_invoke( 5 );
  twobit_label( 1553, compiled_block_2_1553 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 5 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_stack( 2 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 2 );
  twobit_const( 8 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 4 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 5 );
  twobit_setreg( 5 );
  twobit_global( 6 ); /* ex:syntax-rename */
  twobit_setrtn( 1554, compiled_block_2_1554 );
  twobit_invoke( 5 );
  twobit_label( 1554, compiled_block_2_1554 );
  twobit_load( 0, 0 );
  twobit_load( 3, 2 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_stack( 3 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 3 );
  twobit_const( 8 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 4 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 5 );
  twobit_setreg( 5 );
  twobit_global( 6 ); /* ex:syntax-rename */
  twobit_setrtn( 1555, compiled_block_2_1555 );
  twobit_invoke( 5 );
  twobit_label( 1555, compiled_block_2_1555 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_load( 1, 4 );
  twobit_global( 9 ); /* list->vector */
  twobit_setrtn( 1556, compiled_block_2_1556 );
  twobit_invoke( 1 );
  twobit_label( 1556, compiled_block_2_1556 );
  twobit_load( 0, 0 );
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_load( 3, 3 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 1 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 5 );
  twobit_op2_58( 4 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 6 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 7 );
  twobit_op2_58( 4 ); /* cons */
  twobit_pop( 8 );
  twobit_return();
  twobit_label( 1551, compiled_block_2_1551 );
  twobit_load( 1, 8 );
  twobit_pop( 8 );
  twobit_branch( 1520, compiled_block_2_1520 );
  twobit_label( 1549, compiled_block_2_1549 );
  twobit_load( 1, 8 );
  twobit_pop( 8 );
  twobit_branch( 1520, compiled_block_2_1520 );
  twobit_label( 1546, compiled_block_2_1546 );
  twobit_load( 1, 8 );
  twobit_pop( 8 );
  twobit_branch( 1520, compiled_block_2_1520 );
  twobit_label( 1544, compiled_block_2_1544 );
  twobit_load( 1, 8 );
  twobit_pop( 8 );
  twobit_branch( 1520, compiled_block_2_1520 );
  twobit_label( 1541, compiled_block_2_1541 );
  twobit_load( 1, 8 );
  twobit_pop( 8 );
  twobit_branch( 1520, compiled_block_2_1520 );
  twobit_label( 1539, compiled_block_2_1539 );
  twobit_load( 1, 8 );
  twobit_pop( 8 );
  twobit_branch( 1520, compiled_block_2_1520 );
  twobit_label( 1536, compiled_block_2_1536 );
  twobit_load( 1, 8 );
  twobit_pop( 8 );
  twobit_branch( 1520, compiled_block_2_1520 );
  twobit_label( 1534, compiled_block_2_1534 );
  twobit_load( 1, 8 );
  twobit_pop( 8 );
  twobit_branch( 1520, compiled_block_2_1520 );
  twobit_label( 1532, compiled_block_2_1532 );
  twobit_load( 1, 8 );
  twobit_pop( 8 );
  twobit_branch( 1520, compiled_block_2_1520 );
  twobit_label( 1529, compiled_block_2_1529 );
  twobit_branch( 1520, compiled_block_2_1520 );
  twobit_label( 1527, compiled_block_2_1527 );
  twobit_branch( 1520, compiled_block_2_1520 );
  twobit_label( 1525, compiled_block_2_1525 );
  twobit_branch( 1520, compiled_block_2_1520 );
  twobit_label( 1523, compiled_block_2_1523 );
  twobit_branch( 1520, compiled_block_2_1520 );
  twobit_label( 1514, compiled_block_2_1514 );
  twobit_reg( 1 );
  twobit_op1_branchf_611( 1571, compiled_block_2_1571 ); /* internal:branchf-pair? */
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1573, compiled_block_2_1573 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1575, compiled_block_2_1575 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1577, compiled_block_2_1577 ); /* internal:branchf-pair? */
  twobit_save( 11 );
  twobit_store( 0, 0 );
  twobit_store( 1, 11 );
  twobit_store( 2, 2 );
  twobit_store( 3, 9 );
  twobit_store( 4, 1 );
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 31 );
  twobit_store( 31, 3 );
  twobit_movereg( 31, 1 );
  twobit_global( 1 ); /* list? */
  twobit_setrtn( 1578, compiled_block_2_1578 );
  twobit_invoke( 1 );
  twobit_label( 1578, compiled_block_2_1578 );
  twobit_load( 0, 0 );
  twobit_branchf( 1580, compiled_block_2_1580 );
  twobit_stack( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1582, compiled_block_2_1582 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_store( 3, 5 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1584, compiled_block_2_1584 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1586, compiled_block_2_1586 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1588, compiled_block_2_1588 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_store( 2, 1 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_op1_branchf_610( 1590, compiled_block_2_1590 ); /* internal:branchf-null? */
  twobit_const( 3 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 10 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 5 );
  twobit_setreg( 5 );
  twobit_global( 6 ); /* ex:syntax-rename */
  twobit_setrtn( 1591, compiled_block_2_1591 );
  twobit_invoke( 5 );
  twobit_label( 1591, compiled_block_2_1591 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 10 );
  twobit_const( 7 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 10 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 5 );
  twobit_setreg( 5 );
  twobit_global( 6 ); /* ex:syntax-rename */
  twobit_setrtn( 1592, compiled_block_2_1592 );
  twobit_invoke( 5 );
  twobit_label( 1592, compiled_block_2_1592 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 8 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_stack( 2 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 2 );
  twobit_const( 8 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 10 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 5 );
  twobit_setreg( 5 );
  twobit_global( 6 ); /* ex:syntax-rename */
  twobit_setrtn( 1593, compiled_block_2_1593 );
  twobit_invoke( 5 );
  twobit_label( 1593, compiled_block_2_1593 );
  twobit_load( 0, 0 );
  twobit_load( 3, 2 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 7 );
  twobit_const( 8 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 10 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 5 );
  twobit_setreg( 5 );
  twobit_global( 6 ); /* ex:syntax-rename */
  twobit_setrtn( 1594, compiled_block_2_1594 );
  twobit_invoke( 5 );
  twobit_label( 1594, compiled_block_2_1594 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_load( 1, 3 );
  twobit_global( 9 ); /* list->vector */
  twobit_setrtn( 1595, compiled_block_2_1595 );
  twobit_invoke( 1 );
  twobit_label( 1595, compiled_block_2_1595 );
  twobit_load( 0, 0 );
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 6 );
  twobit_const( 8 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 10 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 5 );
  twobit_setreg( 5 );
  twobit_global( 6 ); /* ex:syntax-rename */
  twobit_setrtn( 1596, compiled_block_2_1596 );
  twobit_invoke( 5 );
  twobit_label( 1596, compiled_block_2_1596 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_const( 11 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 10 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 5 );
  twobit_setreg( 5 );
  twobit_global( 6 ); /* ex:syntax-rename */
  twobit_setrtn( 1597, compiled_block_2_1597 );
  twobit_invoke( 5 );
  twobit_label( 1597, compiled_block_2_1597 );
  twobit_load( 0, 0 );
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 4 );
  twobit_const( 8 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 10 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 5 );
  twobit_setreg( 5 );
  twobit_global( 6 ); /* ex:syntax-rename */
  twobit_setrtn( 1598, compiled_block_2_1598 );
  twobit_invoke( 5 );
  twobit_label( 1598, compiled_block_2_1598 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_const( 12 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 10 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 5 );
  twobit_setreg( 5 );
  twobit_global( 6 ); /* ex:syntax-rename */
  twobit_setrtn( 1599, compiled_block_2_1599 );
  twobit_invoke( 5 );
  twobit_label( 1599, compiled_block_2_1599 );
  twobit_load( 0, 0 );
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_const( 8 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 10 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 5 );
  twobit_setreg( 5 );
  twobit_global( 6 ); /* ex:syntax-rename */
  twobit_setrtn( 1600, compiled_block_2_1600 );
  twobit_invoke( 5 );
  twobit_label( 1600, compiled_block_2_1600 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_const( 13 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 10 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 5 );
  twobit_setreg( 5 );
  twobit_global( 6 ); /* ex:syntax-rename */
  twobit_setrtn( 1601, compiled_block_2_1601 );
  twobit_invoke( 5 );
  twobit_label( 1601, compiled_block_2_1601 );
  twobit_load( 0, 0 );
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_stack( 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 1 );
  twobit_const( 8 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 10 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 5 );
  twobit_setreg( 5 );
  twobit_global( 6 ); /* ex:syntax-rename */
  twobit_setrtn( 1602, compiled_block_2_1602 );
  twobit_invoke( 5 );
  twobit_label( 1602, compiled_block_2_1602 );
  twobit_load( 0, 0 );
  twobit_load( 3, 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 4 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 5 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 6 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 7 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 8 );
  twobit_op2_58( 4 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 9 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 10 );
  twobit_op2_58( 4 ); /* cons */
  twobit_pop( 11 );
  twobit_return();
  twobit_label( 1590, compiled_block_2_1590 );
  twobit_load( 1, 11 );
  twobit_global( 14 ); /* ex:invalid-form */
  twobit_pop( 11 );
  twobit_invoke( 1 );
  twobit_label( 1588, compiled_block_2_1588 );
  twobit_load( 1, 11 );
  twobit_global( 14 ); /* ex:invalid-form */
  twobit_pop( 11 );
  twobit_invoke( 1 );
  twobit_label( 1586, compiled_block_2_1586 );
  twobit_load( 1, 11 );
  twobit_global( 14 ); /* ex:invalid-form */
  twobit_pop( 11 );
  twobit_invoke( 1 );
  twobit_label( 1584, compiled_block_2_1584 );
  twobit_load( 1, 11 );
  twobit_global( 14 ); /* ex:invalid-form */
  twobit_pop( 11 );
  twobit_invoke( 1 );
  twobit_label( 1582, compiled_block_2_1582 );
  twobit_load( 1, 11 );
  twobit_global( 14 ); /* ex:invalid-form */
  twobit_pop( 11 );
  twobit_invoke( 1 );
  twobit_label( 1580, compiled_block_2_1580 );
  twobit_load( 1, 11 );
  twobit_global( 14 ); /* ex:invalid-form */
  twobit_pop( 11 );
  twobit_invoke( 1 );
  twobit_label( 1577, compiled_block_2_1577 );
  twobit_global( 14 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1575, compiled_block_2_1575 );
  twobit_global( 14 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1573, compiled_block_2_1573 );
  twobit_global( 14 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1571, compiled_block_2_1571 );
  twobit_global( 14 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1515, compiled_block_2_1515 );
  twobit_reg( 1 );
  twobit_op1_branchf_611( 1614, compiled_block_2_1614 ); /* internal:branchf-pair? */
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1616, compiled_block_2_1616 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1618, compiled_block_2_1618 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1620, compiled_block_2_1620 ); /* internal:branchf-pair? */
  twobit_save( 10 );
  twobit_store( 0, 0 );
  twobit_store( 1, 10 );
  twobit_store( 2, 2 );
  twobit_store( 3, 8 );
  twobit_store( 4, 1 );
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 31 );
  twobit_store( 31, 3 );
  twobit_movereg( 31, 1 );
  twobit_global( 1 ); /* list? */
  twobit_setrtn( 1621, compiled_block_2_1621 );
  twobit_invoke( 1 );
  twobit_label( 1621, compiled_block_2_1621 );
  twobit_load( 0, 0 );
  twobit_branchf( 1623, compiled_block_2_1623 );
  twobit_stack( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1625, compiled_block_2_1625 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_store( 3, 4 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1627, compiled_block_2_1627 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 1 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_setreg( 2 );
  twobit_global( 2 ); /* equal? */
  twobit_setrtn( 1628, compiled_block_2_1628 );
  twobit_invoke( 2 );
  twobit_label( 1628, compiled_block_2_1628 );
  twobit_load( 0, 0 );
  twobit_branchf( 1630, compiled_block_2_1630 );
  twobit_stack( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1632, compiled_block_2_1632 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1634, compiled_block_2_1634 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_store( 3, 1 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_op1_branchf_610( 1636, compiled_block_2_1636 ); /* internal:branchf-null? */
  twobit_const( 3 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 15 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 5 );
  twobit_setreg( 5 );
  twobit_global( 6 ); /* ex:syntax-rename */
  twobit_setrtn( 1637, compiled_block_2_1637 );
  twobit_invoke( 5 );
  twobit_label( 1637, compiled_block_2_1637 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 9 );
  twobit_const( 7 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 15 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 5 );
  twobit_setreg( 5 );
  twobit_global( 6 ); /* ex:syntax-rename */
  twobit_setrtn( 1638, compiled_block_2_1638 );
  twobit_invoke( 5 );
  twobit_label( 1638, compiled_block_2_1638 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 7 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_stack( 2 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 2 );
  twobit_const( 8 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 15 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 5 );
  twobit_setreg( 5 );
  twobit_global( 6 ); /* ex:syntax-rename */
  twobit_setrtn( 1639, compiled_block_2_1639 );
  twobit_invoke( 5 );
  twobit_label( 1639, compiled_block_2_1639 );
  twobit_load( 0, 0 );
  twobit_load( 3, 2 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 6 );
  twobit_const( 8 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 15 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 5 );
  twobit_setreg( 5 );
  twobit_global( 6 ); /* ex:syntax-rename */
  twobit_setrtn( 1640, compiled_block_2_1640 );
  twobit_invoke( 5 );
  twobit_label( 1640, compiled_block_2_1640 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_load( 1, 3 );
  twobit_global( 9 ); /* list->vector */
  twobit_setrtn( 1641, compiled_block_2_1641 );
  twobit_invoke( 1 );
  twobit_label( 1641, compiled_block_2_1641 );
  twobit_load( 0, 0 );
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 5 );
  twobit_const( 8 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 15 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 5 );
  twobit_setreg( 5 );
  twobit_global( 6 ); /* ex:syntax-rename */
  twobit_setrtn( 1642, compiled_block_2_1642 );
  twobit_invoke( 5 );
  twobit_label( 1642, compiled_block_2_1642 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_const( 12 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 15 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 5 );
  twobit_setreg( 5 );
  twobit_global( 6 ); /* ex:syntax-rename */
  twobit_setrtn( 1643, compiled_block_2_1643 );
  twobit_invoke( 5 );
  twobit_label( 1643, compiled_block_2_1643 );
  twobit_load( 0, 0 );
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_const( 8 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 15 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 5 );
  twobit_setreg( 5 );
  twobit_global( 6 ); /* ex:syntax-rename */
  twobit_setrtn( 1644, compiled_block_2_1644 );
  twobit_invoke( 5 );
  twobit_label( 1644, compiled_block_2_1644 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_const( 13 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 15 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 5 );
  twobit_setreg( 5 );
  twobit_global( 6 ); /* ex:syntax-rename */
  twobit_setrtn( 1645, compiled_block_2_1645 );
  twobit_invoke( 5 );
  twobit_label( 1645, compiled_block_2_1645 );
  twobit_load( 0, 0 );
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_stack( 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 1 );
  twobit_const( 8 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 15 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 5 );
  twobit_setreg( 5 );
  twobit_global( 6 ); /* ex:syntax-rename */
  twobit_setrtn( 1646, compiled_block_2_1646 );
  twobit_invoke( 5 );
  twobit_label( 1646, compiled_block_2_1646 );
  twobit_load( 0, 0 );
  twobit_load( 3, 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 4 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 5 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 6 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 7 );
  twobit_op2_58( 4 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 8 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 9 );
  twobit_op2_58( 4 ); /* cons */
  twobit_pop( 10 );
  twobit_return();
  twobit_label( 1636, compiled_block_2_1636 );
  twobit_load( 1, 10 );
  twobit_pop( 10 );
  twobit_branch( 1514, compiled_block_2_1514 );
  twobit_label( 1634, compiled_block_2_1634 );
  twobit_load( 1, 10 );
  twobit_pop( 10 );
  twobit_branch( 1514, compiled_block_2_1514 );
  twobit_label( 1632, compiled_block_2_1632 );
  twobit_load( 1, 10 );
  twobit_pop( 10 );
  twobit_branch( 1514, compiled_block_2_1514 );
  twobit_label( 1630, compiled_block_2_1630 );
  twobit_load( 1, 10 );
  twobit_pop( 10 );
  twobit_branch( 1514, compiled_block_2_1514 );
  twobit_label( 1627, compiled_block_2_1627 );
  twobit_load( 1, 10 );
  twobit_pop( 10 );
  twobit_branch( 1514, compiled_block_2_1514 );
  twobit_label( 1625, compiled_block_2_1625 );
  twobit_load( 1, 10 );
  twobit_pop( 10 );
  twobit_branch( 1514, compiled_block_2_1514 );
  twobit_label( 1623, compiled_block_2_1623 );
  twobit_load( 1, 10 );
  twobit_pop( 10 );
  twobit_branch( 1514, compiled_block_2_1514 );
  twobit_label( 1620, compiled_block_2_1620 );
  twobit_branch( 1514, compiled_block_2_1514 );
  twobit_label( 1618, compiled_block_2_1618 );
  twobit_branch( 1514, compiled_block_2_1514 );
  twobit_label( 1616, compiled_block_2_1616 );
  twobit_branch( 1514, compiled_block_2_1514 );
  twobit_label( 1614, compiled_block_2_1614 );
  twobit_branch( 1514, compiled_block_2_1514 );
  twobit_label( 1516, compiled_block_2_1516 );
  twobit_reg( 1 );
  twobit_op1_branchf_611( 1659, compiled_block_2_1659 ); /* internal:branchf-pair? */
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1661, compiled_block_2_1661 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1663, compiled_block_2_1663 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1665, compiled_block_2_1665 ); /* internal:branchf-pair? */
  twobit_save( 10 );
  twobit_store( 0, 0 );
  twobit_store( 1, 10 );
  twobit_store( 2, 2 );
  twobit_store( 3, 8 );
  twobit_store( 4, 1 );
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 31 );
  twobit_store( 31, 3 );
  twobit_movereg( 31, 1 );
  twobit_global( 1 ); /* list? */
  twobit_setrtn( 1666, compiled_block_2_1666 );
  twobit_invoke( 1 );
  twobit_label( 1666, compiled_block_2_1666 );
  twobit_load( 0, 0 );
  twobit_branchf( 1668, compiled_block_2_1668 );
  twobit_stack( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1670, compiled_block_2_1670 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_store( 3, 4 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1672, compiled_block_2_1672 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1674, compiled_block_2_1674 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 1 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_setreg( 2 );
  twobit_global( 2 ); /* equal? */
  twobit_setrtn( 1675, compiled_block_2_1675 );
  twobit_invoke( 2 );
  twobit_label( 1675, compiled_block_2_1675 );
  twobit_load( 0, 0 );
  twobit_branchf( 1677, compiled_block_2_1677 );
  twobit_stack( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1679, compiled_block_2_1679 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_store( 3, 1 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_op1_branchf_610( 1681, compiled_block_2_1681 ); /* internal:branchf-null? */
  twobit_const( 3 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 16 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 5 );
  twobit_setreg( 5 );
  twobit_global( 6 ); /* ex:syntax-rename */
  twobit_setrtn( 1682, compiled_block_2_1682 );
  twobit_invoke( 5 );
  twobit_label( 1682, compiled_block_2_1682 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 9 );
  twobit_const( 7 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 16 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 5 );
  twobit_setreg( 5 );
  twobit_global( 6 ); /* ex:syntax-rename */
  twobit_setrtn( 1683, compiled_block_2_1683 );
  twobit_invoke( 5 );
  twobit_label( 1683, compiled_block_2_1683 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 7 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_stack( 2 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 2 );
  twobit_const( 8 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 16 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 5 );
  twobit_setreg( 5 );
  twobit_global( 6 ); /* ex:syntax-rename */
  twobit_setrtn( 1684, compiled_block_2_1684 );
  twobit_invoke( 5 );
  twobit_label( 1684, compiled_block_2_1684 );
  twobit_load( 0, 0 );
  twobit_load( 3, 2 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 6 );
  twobit_const( 8 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 16 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 5 );
  twobit_setreg( 5 );
  twobit_global( 6 ); /* ex:syntax-rename */
  twobit_setrtn( 1685, compiled_block_2_1685 );
  twobit_invoke( 5 );
  twobit_label( 1685, compiled_block_2_1685 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_load( 1, 3 );
  twobit_global( 9 ); /* list->vector */
  twobit_setrtn( 1686, compiled_block_2_1686 );
  twobit_invoke( 1 );
  twobit_label( 1686, compiled_block_2_1686 );
  twobit_load( 0, 0 );
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 5 );
  twobit_const( 8 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 16 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 5 );
  twobit_setreg( 5 );
  twobit_global( 6 ); /* ex:syntax-rename */
  twobit_setrtn( 1687, compiled_block_2_1687 );
  twobit_invoke( 5 );
  twobit_label( 1687, compiled_block_2_1687 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_const( 11 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 16 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 5 );
  twobit_setreg( 5 );
  twobit_global( 6 ); /* ex:syntax-rename */
  twobit_setrtn( 1688, compiled_block_2_1688 );
  twobit_invoke( 5 );
  twobit_label( 1688, compiled_block_2_1688 );
  twobit_load( 0, 0 );
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_const( 8 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 16 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 5 );
  twobit_setreg( 5 );
  twobit_global( 6 ); /* ex:syntax-rename */
  twobit_setrtn( 1689, compiled_block_2_1689 );
  twobit_invoke( 5 );
  twobit_label( 1689, compiled_block_2_1689 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_const( 13 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 16 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 5 );
  twobit_setreg( 5 );
  twobit_global( 6 ); /* ex:syntax-rename */
  twobit_setrtn( 1690, compiled_block_2_1690 );
  twobit_invoke( 5 );
  twobit_label( 1690, compiled_block_2_1690 );
  twobit_load( 0, 0 );
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_stack( 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 1 );
  twobit_const( 8 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 16 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 5 );
  twobit_setreg( 5 );
  twobit_global( 6 ); /* ex:syntax-rename */
  twobit_setrtn( 1691, compiled_block_2_1691 );
  twobit_invoke( 5 );
  twobit_label( 1691, compiled_block_2_1691 );
  twobit_load( 0, 0 );
  twobit_load( 3, 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 4 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 5 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 6 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 7 );
  twobit_op2_58( 4 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 8 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 9 );
  twobit_op2_58( 4 ); /* cons */
  twobit_pop( 10 );
  twobit_return();
  twobit_label( 1681, compiled_block_2_1681 );
  twobit_load( 1, 10 );
  twobit_pop( 10 );
  twobit_branch( 1515, compiled_block_2_1515 );
  twobit_label( 1679, compiled_block_2_1679 );
  twobit_load( 1, 10 );
  twobit_pop( 10 );
  twobit_branch( 1515, compiled_block_2_1515 );
  twobit_label( 1677, compiled_block_2_1677 );
  twobit_load( 1, 10 );
  twobit_pop( 10 );
  twobit_branch( 1515, compiled_block_2_1515 );
  twobit_label( 1674, compiled_block_2_1674 );
  twobit_load( 1, 10 );
  twobit_pop( 10 );
  twobit_branch( 1515, compiled_block_2_1515 );
  twobit_label( 1672, compiled_block_2_1672 );
  twobit_load( 1, 10 );
  twobit_pop( 10 );
  twobit_branch( 1515, compiled_block_2_1515 );
  twobit_label( 1670, compiled_block_2_1670 );
  twobit_load( 1, 10 );
  twobit_pop( 10 );
  twobit_branch( 1515, compiled_block_2_1515 );
  twobit_label( 1668, compiled_block_2_1668 );
  twobit_load( 1, 10 );
  twobit_pop( 10 );
  twobit_branch( 1515, compiled_block_2_1515 );
  twobit_label( 1665, compiled_block_2_1665 );
  twobit_branch( 1515, compiled_block_2_1515 );
  twobit_label( 1663, compiled_block_2_1663 );
  twobit_branch( 1515, compiled_block_2_1515 );
  twobit_label( 1661, compiled_block_2_1661 );
  twobit_branch( 1515, compiled_block_2_1515 );
  twobit_label( 1659, compiled_block_2_1659 );
  twobit_branch( 1515, compiled_block_2_1515 );
  twobit_label( 1517, compiled_block_2_1517 );
  twobit_reg( 1 );
  twobit_op1_branchf_611( 1704, compiled_block_2_1704 ); /* internal:branchf-pair? */
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1706, compiled_block_2_1706 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1708, compiled_block_2_1708 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1710, compiled_block_2_1710 ); /* internal:branchf-pair? */
  twobit_save( 9 );
  twobit_store( 0, 0 );
  twobit_store( 1, 9 );
  twobit_store( 2, 2 );
  twobit_store( 3, 7 );
  twobit_store( 4, 1 );
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 31 );
  twobit_store( 31, 3 );
  twobit_movereg( 31, 1 );
  twobit_global( 1 ); /* list? */
  twobit_setrtn( 1711, compiled_block_2_1711 );
  twobit_invoke( 1 );
  twobit_label( 1711, compiled_block_2_1711 );
  twobit_load( 0, 0 );
  twobit_branchf( 1713, compiled_block_2_1713 );
  twobit_stack( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1715, compiled_block_2_1715 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_store( 3, 4 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1717, compiled_block_2_1717 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 1 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_setreg( 2 );
  twobit_global( 2 ); /* equal? */
  twobit_setrtn( 1718, compiled_block_2_1718 );
  twobit_invoke( 2 );
  twobit_label( 1718, compiled_block_2_1718 );
  twobit_load( 0, 0 );
  twobit_branchf( 1720, compiled_block_2_1720 );
  twobit_stack( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1722, compiled_block_2_1722 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 1 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_setreg( 2 );
  twobit_global( 2 ); /* equal? */
  twobit_setrtn( 1723, compiled_block_2_1723 );
  twobit_invoke( 2 );
  twobit_label( 1723, compiled_block_2_1723 );
  twobit_load( 0, 0 );
  twobit_branchf( 1725, compiled_block_2_1725 );
  twobit_stack( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1727, compiled_block_2_1727 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_store( 3, 1 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_op1_branchf_610( 1729, compiled_block_2_1729 ); /* internal:branchf-null? */
  twobit_const( 3 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 17 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 5 );
  twobit_setreg( 5 );
  twobit_global( 6 ); /* ex:syntax-rename */
  twobit_setrtn( 1730, compiled_block_2_1730 );
  twobit_invoke( 5 );
  twobit_label( 1730, compiled_block_2_1730 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 8 );
  twobit_const( 7 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 17 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 5 );
  twobit_setreg( 5 );
  twobit_global( 6 ); /* ex:syntax-rename */
  twobit_setrtn( 1731, compiled_block_2_1731 );
  twobit_invoke( 5 );
  twobit_label( 1731, compiled_block_2_1731 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 6 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_stack( 2 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 2 );
  twobit_const( 8 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 17 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 5 );
  twobit_setreg( 5 );
  twobit_global( 6 ); /* ex:syntax-rename */
  twobit_setrtn( 1732, compiled_block_2_1732 );
  twobit_invoke( 5 );
  twobit_label( 1732, compiled_block_2_1732 );
  twobit_load( 0, 0 );
  twobit_load( 3, 2 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 5 );
  twobit_const( 8 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 17 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 5 );
  twobit_setreg( 5 );
  twobit_global( 6 ); /* ex:syntax-rename */
  twobit_setrtn( 1733, compiled_block_2_1733 );
  twobit_invoke( 5 );
  twobit_label( 1733, compiled_block_2_1733 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_load( 1, 3 );
  twobit_global( 9 ); /* list->vector */
  twobit_setrtn( 1734, compiled_block_2_1734 );
  twobit_invoke( 1 );
  twobit_label( 1734, compiled_block_2_1734 );
  twobit_load( 0, 0 );
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_const( 8 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 17 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 5 );
  twobit_setreg( 5 );
  twobit_global( 6 ); /* ex:syntax-rename */
  twobit_setrtn( 1735, compiled_block_2_1735 );
  twobit_invoke( 5 );
  twobit_label( 1735, compiled_block_2_1735 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_const( 13 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 17 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 5 );
  twobit_setreg( 5 );
  twobit_global( 6 ); /* ex:syntax-rename */
  twobit_setrtn( 1736, compiled_block_2_1736 );
  twobit_invoke( 5 );
  twobit_label( 1736, compiled_block_2_1736 );
  twobit_load( 0, 0 );
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_stack( 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 1 );
  twobit_const( 8 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 17 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 5 );
  twobit_setreg( 5 );
  twobit_global( 6 ); /* ex:syntax-rename */
  twobit_setrtn( 1737, compiled_block_2_1737 );
  twobit_invoke( 5 );
  twobit_label( 1737, compiled_block_2_1737 );
  twobit_load( 0, 0 );
  twobit_load( 3, 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 4 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 5 );
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
  twobit_pop( 9 );
  twobit_return();
  twobit_label( 1729, compiled_block_2_1729 );
  twobit_load( 1, 9 );
  twobit_pop( 9 );
  twobit_branch( 1516, compiled_block_2_1516 );
  twobit_label( 1727, compiled_block_2_1727 );
  twobit_load( 1, 9 );
  twobit_pop( 9 );
  twobit_branch( 1516, compiled_block_2_1516 );
  twobit_label( 1725, compiled_block_2_1725 );
  twobit_load( 1, 9 );
  twobit_pop( 9 );
  twobit_branch( 1516, compiled_block_2_1516 );
  twobit_label( 1722, compiled_block_2_1722 );
  twobit_load( 1, 9 );
  twobit_pop( 9 );
  twobit_branch( 1516, compiled_block_2_1516 );
  twobit_label( 1720, compiled_block_2_1720 );
  twobit_load( 1, 9 );
  twobit_pop( 9 );
  twobit_branch( 1516, compiled_block_2_1516 );
  twobit_label( 1717, compiled_block_2_1717 );
  twobit_load( 1, 9 );
  twobit_pop( 9 );
  twobit_branch( 1516, compiled_block_2_1516 );
  twobit_label( 1715, compiled_block_2_1715 );
  twobit_load( 1, 9 );
  twobit_pop( 9 );
  twobit_branch( 1516, compiled_block_2_1516 );
  twobit_label( 1713, compiled_block_2_1713 );
  twobit_load( 1, 9 );
  twobit_pop( 9 );
  twobit_branch( 1516, compiled_block_2_1516 );
  twobit_label( 1710, compiled_block_2_1710 );
  twobit_branch( 1516, compiled_block_2_1516 );
  twobit_label( 1708, compiled_block_2_1708 );
  twobit_branch( 1516, compiled_block_2_1516 );
  twobit_label( 1706, compiled_block_2_1706 );
  twobit_branch( 1516, compiled_block_2_1516 );
  twobit_label( 1704, compiled_block_2_1704 );
  twobit_branch( 1516, compiled_block_2_1516 );
  twobit_label( 1518, compiled_block_2_1518 );
  twobit_reg( 1 );
  twobit_op1_branchf_611( 1751, compiled_block_2_1751 ); /* internal:branchf-pair? */
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1753, compiled_block_2_1753 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1755, compiled_block_2_1755 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1757, compiled_block_2_1757 ); /* internal:branchf-pair? */
  twobit_save( 9 );
  twobit_store( 0, 0 );
  twobit_store( 1, 9 );
  twobit_store( 2, 2 );
  twobit_store( 3, 7 );
  twobit_store( 4, 1 );
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 31 );
  twobit_store( 31, 3 );
  twobit_movereg( 31, 1 );
  twobit_global( 1 ); /* list? */
  twobit_setrtn( 1758, compiled_block_2_1758 );
  twobit_invoke( 1 );
  twobit_label( 1758, compiled_block_2_1758 );
  twobit_load( 0, 0 );
  twobit_branchf( 1760, compiled_block_2_1760 );
  twobit_stack( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1762, compiled_block_2_1762 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_store( 3, 4 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1764, compiled_block_2_1764 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1766, compiled_block_2_1766 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1768, compiled_block_2_1768 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 1 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_setreg( 2 );
  twobit_global( 2 ); /* equal? */
  twobit_setrtn( 1769, compiled_block_2_1769 );
  twobit_invoke( 2 );
  twobit_label( 1769, compiled_block_2_1769 );
  twobit_load( 0, 0 );
  twobit_branchf( 1771, compiled_block_2_1771 );
  twobit_stack( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_op1_branchf_610( 1773, compiled_block_2_1773 ); /* internal:branchf-null? */
  twobit_const( 3 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 18 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 5 );
  twobit_setreg( 5 );
  twobit_global( 6 ); /* ex:syntax-rename */
  twobit_setrtn( 1774, compiled_block_2_1774 );
  twobit_invoke( 5 );
  twobit_label( 1774, compiled_block_2_1774 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 8 );
  twobit_const( 7 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 18 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 5 );
  twobit_setreg( 5 );
  twobit_global( 6 ); /* ex:syntax-rename */
  twobit_setrtn( 1775, compiled_block_2_1775 );
  twobit_invoke( 5 );
  twobit_label( 1775, compiled_block_2_1775 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 6 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_stack( 2 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 2 );
  twobit_const( 8 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 18 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 5 );
  twobit_setreg( 5 );
  twobit_global( 6 ); /* ex:syntax-rename */
  twobit_setrtn( 1776, compiled_block_2_1776 );
  twobit_invoke( 5 );
  twobit_label( 1776, compiled_block_2_1776 );
  twobit_load( 0, 0 );
  twobit_load( 3, 2 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 5 );
  twobit_const( 8 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 18 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 5 );
  twobit_setreg( 5 );
  twobit_global( 6 ); /* ex:syntax-rename */
  twobit_setrtn( 1777, compiled_block_2_1777 );
  twobit_invoke( 5 );
  twobit_label( 1777, compiled_block_2_1777 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_load( 1, 3 );
  twobit_global( 9 ); /* list->vector */
  twobit_setrtn( 1778, compiled_block_2_1778 );
  twobit_invoke( 1 );
  twobit_label( 1778, compiled_block_2_1778 );
  twobit_load( 0, 0 );
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_const( 8 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 18 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 5 );
  twobit_setreg( 5 );
  twobit_global( 6 ); /* ex:syntax-rename */
  twobit_setrtn( 1779, compiled_block_2_1779 );
  twobit_invoke( 5 );
  twobit_label( 1779, compiled_block_2_1779 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_const( 11 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 18 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 5 );
  twobit_setreg( 5 );
  twobit_global( 6 ); /* ex:syntax-rename */
  twobit_setrtn( 1780, compiled_block_2_1780 );
  twobit_invoke( 5 );
  twobit_label( 1780, compiled_block_2_1780 );
  twobit_load( 0, 0 );
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_const( 8 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 18 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 5 );
  twobit_setreg( 5 );
  twobit_global( 6 ); /* ex:syntax-rename */
  twobit_setrtn( 1781, compiled_block_2_1781 );
  twobit_invoke( 5 );
  twobit_label( 1781, compiled_block_2_1781 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_const( 12 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 18 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 5 );
  twobit_setreg( 5 );
  twobit_global( 6 ); /* ex:syntax-rename */
  twobit_setrtn( 1782, compiled_block_2_1782 );
  twobit_invoke( 5 );
  twobit_label( 1782, compiled_block_2_1782 );
  twobit_load( 0, 0 );
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 4 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 1 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 5 );
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
  twobit_pop( 9 );
  twobit_return();
  twobit_label( 1773, compiled_block_2_1773 );
  twobit_load( 1, 9 );
  twobit_pop( 9 );
  twobit_branch( 1517, compiled_block_2_1517 );
  twobit_label( 1771, compiled_block_2_1771 );
  twobit_load( 1, 9 );
  twobit_pop( 9 );
  twobit_branch( 1517, compiled_block_2_1517 );
  twobit_label( 1768, compiled_block_2_1768 );
  twobit_load( 1, 9 );
  twobit_pop( 9 );
  twobit_branch( 1517, compiled_block_2_1517 );
  twobit_label( 1766, compiled_block_2_1766 );
  twobit_load( 1, 9 );
  twobit_pop( 9 );
  twobit_branch( 1517, compiled_block_2_1517 );
  twobit_label( 1764, compiled_block_2_1764 );
  twobit_load( 1, 9 );
  twobit_pop( 9 );
  twobit_branch( 1517, compiled_block_2_1517 );
  twobit_label( 1762, compiled_block_2_1762 );
  twobit_load( 1, 9 );
  twobit_pop( 9 );
  twobit_branch( 1517, compiled_block_2_1517 );
  twobit_label( 1760, compiled_block_2_1760 );
  twobit_load( 1, 9 );
  twobit_pop( 9 );
  twobit_branch( 1517, compiled_block_2_1517 );
  twobit_label( 1757, compiled_block_2_1757 );
  twobit_branch( 1517, compiled_block_2_1517 );
  twobit_label( 1755, compiled_block_2_1755 );
  twobit_branch( 1517, compiled_block_2_1517 );
  twobit_label( 1753, compiled_block_2_1753 );
  twobit_branch( 1517, compiled_block_2_1517 );
  twobit_label( 1751, compiled_block_2_1751 );
  twobit_branch( 1517, compiled_block_2_1517 );
  twobit_label( 1519, compiled_block_2_1519 );
  twobit_reg( 1 );
  twobit_op1_branchf_611( 1795, compiled_block_2_1795 ); /* internal:branchf-pair? */
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1797, compiled_block_2_1797 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1799, compiled_block_2_1799 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1801, compiled_block_2_1801 ); /* internal:branchf-pair? */
  twobit_save( 8 );
  twobit_store( 0, 0 );
  twobit_store( 1, 8 );
  twobit_store( 2, 2 );
  twobit_store( 3, 6 );
  twobit_store( 4, 1 );
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 31 );
  twobit_store( 31, 3 );
  twobit_movereg( 31, 1 );
  twobit_global( 1 ); /* list? */
  twobit_setrtn( 1802, compiled_block_2_1802 );
  twobit_invoke( 1 );
  twobit_label( 1802, compiled_block_2_1802 );
  twobit_load( 0, 0 );
  twobit_branchf( 1804, compiled_block_2_1804 );
  twobit_stack( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1806, compiled_block_2_1806 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_store( 3, 4 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1808, compiled_block_2_1808 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 1 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_setreg( 2 );
  twobit_global( 2 ); /* equal? */
  twobit_setrtn( 1809, compiled_block_2_1809 );
  twobit_invoke( 2 );
  twobit_label( 1809, compiled_block_2_1809 );
  twobit_load( 0, 0 );
  twobit_branchf( 1811, compiled_block_2_1811 );
  twobit_stack( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1813, compiled_block_2_1813 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1815, compiled_block_2_1815 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 1 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_setreg( 2 );
  twobit_global( 2 ); /* equal? */
  twobit_setrtn( 1816, compiled_block_2_1816 );
  twobit_invoke( 2 );
  twobit_label( 1816, compiled_block_2_1816 );
  twobit_load( 0, 0 );
  twobit_branchf( 1818, compiled_block_2_1818 );
  twobit_stack( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_op1_branchf_610( 1820, compiled_block_2_1820 ); /* internal:branchf-null? */
  twobit_const( 3 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 19 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 5 );
  twobit_setreg( 5 );
  twobit_global( 6 ); /* ex:syntax-rename */
  twobit_setrtn( 1821, compiled_block_2_1821 );
  twobit_invoke( 5 );
  twobit_label( 1821, compiled_block_2_1821 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 7 );
  twobit_const( 7 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 19 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 5 );
  twobit_setreg( 5 );
  twobit_global( 6 ); /* ex:syntax-rename */
  twobit_setrtn( 1822, compiled_block_2_1822 );
  twobit_invoke( 5 );
  twobit_label( 1822, compiled_block_2_1822 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 5 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_stack( 2 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 2 );
  twobit_const( 8 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 19 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 5 );
  twobit_setreg( 5 );
  twobit_global( 6 ); /* ex:syntax-rename */
  twobit_setrtn( 1823, compiled_block_2_1823 );
  twobit_invoke( 5 );
  twobit_label( 1823, compiled_block_2_1823 );
  twobit_load( 0, 0 );
  twobit_load( 3, 2 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_const( 8 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 19 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 5 );
  twobit_setreg( 5 );
  twobit_global( 6 ); /* ex:syntax-rename */
  twobit_setrtn( 1824, compiled_block_2_1824 );
  twobit_invoke( 5 );
  twobit_label( 1824, compiled_block_2_1824 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_load( 1, 3 );
  twobit_global( 9 ); /* list->vector */
  twobit_setrtn( 1825, compiled_block_2_1825 );
  twobit_invoke( 1 );
  twobit_label( 1825, compiled_block_2_1825 );
  twobit_load( 0, 0 );
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_const( 8 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 19 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 5 );
  twobit_setreg( 5 );
  twobit_global( 6 ); /* ex:syntax-rename */
  twobit_setrtn( 1826, compiled_block_2_1826 );
  twobit_invoke( 5 );
  twobit_label( 1826, compiled_block_2_1826 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_const( 12 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 19 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 5 );
  twobit_setreg( 5 );
  twobit_global( 6 ); /* ex:syntax-rename */
  twobit_setrtn( 1827, compiled_block_2_1827 );
  twobit_invoke( 5 );
  twobit_label( 1827, compiled_block_2_1827 );
  twobit_load( 0, 0 );
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 4 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 1 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 5 );
  twobit_op2_58( 4 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 6 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 7 );
  twobit_op2_58( 4 ); /* cons */
  twobit_pop( 8 );
  twobit_return();
  twobit_label( 1820, compiled_block_2_1820 );
  twobit_load( 1, 8 );
  twobit_pop( 8 );
  twobit_branch( 1518, compiled_block_2_1518 );
  twobit_label( 1818, compiled_block_2_1818 );
  twobit_load( 1, 8 );
  twobit_pop( 8 );
  twobit_branch( 1518, compiled_block_2_1518 );
  twobit_label( 1815, compiled_block_2_1815 );
  twobit_load( 1, 8 );
  twobit_pop( 8 );
  twobit_branch( 1518, compiled_block_2_1518 );
  twobit_label( 1813, compiled_block_2_1813 );
  twobit_load( 1, 8 );
  twobit_pop( 8 );
  twobit_branch( 1518, compiled_block_2_1518 );
  twobit_label( 1811, compiled_block_2_1811 );
  twobit_load( 1, 8 );
  twobit_pop( 8 );
  twobit_branch( 1518, compiled_block_2_1518 );
  twobit_label( 1808, compiled_block_2_1808 );
  twobit_load( 1, 8 );
  twobit_pop( 8 );
  twobit_branch( 1518, compiled_block_2_1518 );
  twobit_label( 1806, compiled_block_2_1806 );
  twobit_load( 1, 8 );
  twobit_pop( 8 );
  twobit_branch( 1518, compiled_block_2_1518 );
  twobit_label( 1804, compiled_block_2_1804 );
  twobit_load( 1, 8 );
  twobit_pop( 8 );
  twobit_branch( 1518, compiled_block_2_1518 );
  twobit_label( 1801, compiled_block_2_1801 );
  twobit_branch( 1518, compiled_block_2_1518 );
  twobit_label( 1799, compiled_block_2_1799 );
  twobit_branch( 1518, compiled_block_2_1518 );
  twobit_label( 1797, compiled_block_2_1797 );
  twobit_branch( 1518, compiled_block_2_1518 );
  twobit_label( 1795, compiled_block_2_1795 );
  twobit_branch( 1518, compiled_block_2_1518 );
  twobit_label( 1520, compiled_block_2_1520 );
  twobit_reg( 1 );
  twobit_op1_branchf_611( 1841, compiled_block_2_1841 ); /* internal:branchf-pair? */
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1843, compiled_block_2_1843 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1845, compiled_block_2_1845 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1847, compiled_block_2_1847 ); /* internal:branchf-pair? */
  twobit_save( 8 );
  twobit_store( 0, 0 );
  twobit_store( 1, 8 );
  twobit_store( 2, 2 );
  twobit_store( 3, 6 );
  twobit_store( 4, 1 );
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 31 );
  twobit_store( 31, 3 );
  twobit_movereg( 31, 1 );
  twobit_global( 1 ); /* list? */
  twobit_setrtn( 1848, compiled_block_2_1848 );
  twobit_invoke( 1 );
  twobit_label( 1848, compiled_block_2_1848 );
  twobit_load( 0, 0 );
  twobit_branchf( 1850, compiled_block_2_1850 );
  twobit_stack( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1852, compiled_block_2_1852 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_store( 3, 4 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1854, compiled_block_2_1854 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1856, compiled_block_2_1856 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 1 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_setreg( 2 );
  twobit_global( 2 ); /* equal? */
  twobit_setrtn( 1857, compiled_block_2_1857 );
  twobit_invoke( 2 );
  twobit_label( 1857, compiled_block_2_1857 );
  twobit_load( 0, 0 );
  twobit_branchf( 1859, compiled_block_2_1859 );
  twobit_stack( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1861, compiled_block_2_1861 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 1 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_setreg( 2 );
  twobit_global( 2 ); /* equal? */
  twobit_setrtn( 1862, compiled_block_2_1862 );
  twobit_invoke( 2 );
  twobit_label( 1862, compiled_block_2_1862 );
  twobit_load( 0, 0 );
  twobit_branchf( 1864, compiled_block_2_1864 );
  twobit_stack( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_op1_branchf_610( 1866, compiled_block_2_1866 ); /* internal:branchf-null? */
  twobit_const( 3 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 20 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 5 );
  twobit_setreg( 5 );
  twobit_global( 6 ); /* ex:syntax-rename */
  twobit_setrtn( 1867, compiled_block_2_1867 );
  twobit_invoke( 5 );
  twobit_label( 1867, compiled_block_2_1867 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 7 );
  twobit_const( 7 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 20 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 5 );
  twobit_setreg( 5 );
  twobit_global( 6 ); /* ex:syntax-rename */
  twobit_setrtn( 1868, compiled_block_2_1868 );
  twobit_invoke( 5 );
  twobit_label( 1868, compiled_block_2_1868 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 5 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_stack( 2 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 2 );
  twobit_const( 8 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 20 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 5 );
  twobit_setreg( 5 );
  twobit_global( 6 ); /* ex:syntax-rename */
  twobit_setrtn( 1869, compiled_block_2_1869 );
  twobit_invoke( 5 );
  twobit_label( 1869, compiled_block_2_1869 );
  twobit_load( 0, 0 );
  twobit_load( 3, 2 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_const( 8 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 20 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 5 );
  twobit_setreg( 5 );
  twobit_global( 6 ); /* ex:syntax-rename */
  twobit_setrtn( 1870, compiled_block_2_1870 );
  twobit_invoke( 5 );
  twobit_label( 1870, compiled_block_2_1870 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_load( 1, 3 );
  twobit_global( 9 ); /* list->vector */
  twobit_setrtn( 1871, compiled_block_2_1871 );
  twobit_invoke( 1 );
  twobit_label( 1871, compiled_block_2_1871 );
  twobit_load( 0, 0 );
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_const( 8 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 20 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 5 );
  twobit_setreg( 5 );
  twobit_global( 6 ); /* ex:syntax-rename */
  twobit_setrtn( 1872, compiled_block_2_1872 );
  twobit_invoke( 5 );
  twobit_label( 1872, compiled_block_2_1872 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_const( 11 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 20 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 5 );
  twobit_setreg( 5 );
  twobit_global( 6 ); /* ex:syntax-rename */
  twobit_setrtn( 1873, compiled_block_2_1873 );
  twobit_invoke( 5 );
  twobit_label( 1873, compiled_block_2_1873 );
  twobit_load( 0, 0 );
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 4 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 1 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 5 );
  twobit_op2_58( 4 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 6 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 7 );
  twobit_op2_58( 4 ); /* cons */
  twobit_pop( 8 );
  twobit_return();
  twobit_label( 1866, compiled_block_2_1866 );
  twobit_load( 1, 8 );
  twobit_pop( 8 );
  twobit_branch( 1519, compiled_block_2_1519 );
  twobit_label( 1864, compiled_block_2_1864 );
  twobit_load( 1, 8 );
  twobit_pop( 8 );
  twobit_branch( 1519, compiled_block_2_1519 );
  twobit_label( 1861, compiled_block_2_1861 );
  twobit_load( 1, 8 );
  twobit_pop( 8 );
  twobit_branch( 1519, compiled_block_2_1519 );
  twobit_label( 1859, compiled_block_2_1859 );
  twobit_load( 1, 8 );
  twobit_pop( 8 );
  twobit_branch( 1519, compiled_block_2_1519 );
  twobit_label( 1856, compiled_block_2_1856 );
  twobit_load( 1, 8 );
  twobit_pop( 8 );
  twobit_branch( 1519, compiled_block_2_1519 );
  twobit_label( 1854, compiled_block_2_1854 );
  twobit_load( 1, 8 );
  twobit_pop( 8 );
  twobit_branch( 1519, compiled_block_2_1519 );
  twobit_label( 1852, compiled_block_2_1852 );
  twobit_load( 1, 8 );
  twobit_pop( 8 );
  twobit_branch( 1519, compiled_block_2_1519 );
  twobit_label( 1850, compiled_block_2_1850 );
  twobit_load( 1, 8 );
  twobit_pop( 8 );
  twobit_branch( 1519, compiled_block_2_1519 );
  twobit_label( 1847, compiled_block_2_1847 );
  twobit_branch( 1519, compiled_block_2_1519 );
  twobit_label( 1845, compiled_block_2_1845 );
  twobit_branch( 1519, compiled_block_2_1519 );
  twobit_label( 1843, compiled_block_2_1843 );
  twobit_branch( 1519, compiled_block_2_1519 );
  twobit_label( 1841, compiled_block_2_1841 );
  twobit_branch( 1519, compiled_block_2_1519 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_10( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_reg( 1 );
  twobit_op1_branchf_611( 1893, compiled_block_2_1893 ); /* internal:branchf-pair? */
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1895, compiled_block_2_1895 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1897, compiled_block_2_1897 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1899, compiled_block_2_1899 ); /* internal:branchf-pair? */
  twobit_save( 6 );
  twobit_store( 0, 0 );
  twobit_store( 1, 6 );
  twobit_store( 3, 2 );
  twobit_store( 4, 1 );
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 1 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_setreg( 2 );
  twobit_global( 1 ); /* equal? */
  twobit_setrtn( 1900, compiled_block_2_1900 );
  twobit_invoke( 2 );
  twobit_label( 1900, compiled_block_2_1900 );
  twobit_load( 0, 0 );
  twobit_branchf( 1902, compiled_block_2_1902 );
  twobit_stack( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1904, compiled_block_2_1904 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 1 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_setreg( 2 );
  twobit_global( 1 ); /* equal? */
  twobit_setrtn( 1905, compiled_block_2_1905 );
  twobit_invoke( 2 );
  twobit_label( 1905, compiled_block_2_1905 );
  twobit_load( 0, 0 );
  twobit_branchf( 1907, compiled_block_2_1907 );
  twobit_stack( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1909, compiled_block_2_1909 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 1 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_setreg( 2 );
  twobit_global( 1 ); /* equal? */
  twobit_setrtn( 1910, compiled_block_2_1910 );
  twobit_invoke( 2 );
  twobit_label( 1910, compiled_block_2_1910 );
  twobit_load( 0, 0 );
  twobit_branchf( 1912, compiled_block_2_1912 );
  twobit_stack( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_op1_branchf_610( 1914, compiled_block_2_1914 ); /* internal:branchf-null? */
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
  twobit_setrtn( 1915, compiled_block_2_1915 );
  twobit_invoke( 5 );
  twobit_label( 1915, compiled_block_2_1915 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 5 );
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
  twobit_setrtn( 1916, compiled_block_2_1916 );
  twobit_invoke( 5 );
  twobit_label( 1916, compiled_block_2_1916 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 4 );
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
  twobit_setrtn( 1917, compiled_block_2_1917 );
  twobit_invoke( 5 );
  twobit_label( 1917, compiled_block_2_1917 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_stack( 2 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 1 );
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
  twobit_setrtn( 1918, compiled_block_2_1918 );
  twobit_invoke( 5 );
  twobit_label( 1918, compiled_block_2_1918 );
  twobit_load( 0, 0 );
  twobit_load( 3, 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 4 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 5 );
  twobit_op2_58( 4 ); /* cons */
  twobit_pop( 6 );
  twobit_return();
  twobit_label( 1914, compiled_block_2_1914 );
  twobit_load( 1, 6 );
  twobit_pop( 6 );
  twobit_branch( 1890, compiled_block_2_1890 );
  twobit_label( 1912, compiled_block_2_1912 );
  twobit_load( 1, 6 );
  twobit_pop( 6 );
  twobit_branch( 1890, compiled_block_2_1890 );
  twobit_label( 1909, compiled_block_2_1909 );
  twobit_load( 1, 6 );
  twobit_pop( 6 );
  twobit_branch( 1890, compiled_block_2_1890 );
  twobit_label( 1907, compiled_block_2_1907 );
  twobit_load( 1, 6 );
  twobit_pop( 6 );
  twobit_branch( 1890, compiled_block_2_1890 );
  twobit_label( 1904, compiled_block_2_1904 );
  twobit_load( 1, 6 );
  twobit_pop( 6 );
  twobit_branch( 1890, compiled_block_2_1890 );
  twobit_label( 1902, compiled_block_2_1902 );
  twobit_load( 1, 6 );
  twobit_pop( 6 );
  twobit_branch( 1890, compiled_block_2_1890 );
  twobit_label( 1899, compiled_block_2_1899 );
  twobit_branch( 1890, compiled_block_2_1890 );
  twobit_label( 1897, compiled_block_2_1897 );
  twobit_branch( 1890, compiled_block_2_1890 );
  twobit_label( 1895, compiled_block_2_1895 );
  twobit_branch( 1890, compiled_block_2_1890 );
  twobit_label( 1893, compiled_block_2_1893 );
  twobit_branch( 1890, compiled_block_2_1890 );
  twobit_label( 1887, compiled_block_2_1887 );
  twobit_reg( 1 );
  twobit_op1_branchf_611( 1930, compiled_block_2_1930 ); /* internal:branchf-pair? */
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1932, compiled_block_2_1932 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1934, compiled_block_2_1934 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1936, compiled_block_2_1936 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1938, compiled_block_2_1938 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1940, compiled_block_2_1940 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 31 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_op1_branchf_610( 1942, compiled_block_2_1942 ); /* internal:branchf-null? */
  twobit_save( 6 );
  twobit_store( 0, 0 );
  twobit_store( 2, 2 );
  twobit_store( 3, 3 );
  twobit_store( 31, 1 );
  twobit_const( 2 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 9 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1943, compiled_block_2_1943 );
  twobit_invoke( 5 );
  twobit_label( 1943, compiled_block_2_1943 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 6 );
  twobit_const( 6 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 9 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1944, compiled_block_2_1944 );
  twobit_invoke( 5 );
  twobit_label( 1944, compiled_block_2_1944 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 5 );
  twobit_const( 7 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 9 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1945, compiled_block_2_1945 );
  twobit_invoke( 5 );
  twobit_label( 1945, compiled_block_2_1945 );
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
  twobit_stack( 3 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 2 );
  twobit_const( 8 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 9 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 1946, compiled_block_2_1946 );
  twobit_invoke( 5 );
  twobit_label( 1946, compiled_block_2_1946 );
  twobit_load( 0, 0 );
  twobit_load( 3, 2 );
  twobit_op2_58( 3 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 4 );
  twobit_op2_58( 4 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 5 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 6 );
  twobit_op2_58( 4 ); /* cons */
  twobit_pop( 6 );
  twobit_return();
  twobit_label( 1942, compiled_block_2_1942 );
  twobit_global( 10 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1940, compiled_block_2_1940 );
  twobit_global( 10 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1938, compiled_block_2_1938 );
  twobit_global( 10 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1936, compiled_block_2_1936 );
  twobit_global( 10 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1934, compiled_block_2_1934 );
  twobit_global( 10 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1932, compiled_block_2_1932 );
  twobit_global( 10 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1930, compiled_block_2_1930 );
  twobit_global( 10 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 1888, compiled_block_2_1888 );
  twobit_reg( 1 );
  twobit_op1_branchf_611( 1955, compiled_block_2_1955 ); /* internal:branchf-pair? */
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1957, compiled_block_2_1957 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1959, compiled_block_2_1959 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1961, compiled_block_2_1961 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1963, compiled_block_2_1963 ); /* internal:branchf-pair? */
  twobit_save( 8 );
  twobit_store( 0, 0 );
  twobit_store( 1, 8 );
  twobit_store( 2, 2 );
  twobit_store( 3, 3 );
  twobit_store( 4, 1 );
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 1 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_setreg( 2 );
  twobit_global( 1 ); /* equal? */
  twobit_setrtn( 1964, compiled_block_2_1964 );
  twobit_invoke( 2 );
  twobit_label( 1964, compiled_block_2_1964 );
  twobit_load( 0, 0 );
  twobit_branchf( 1966, compiled_block_2_1966 );
  twobit_stack( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1968, compiled_block_2_1968 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_store( 3, 1 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_op1_branchf_610( 1970, compiled_block_2_1970 ); /* internal:branchf-null? */
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
  twobit_setrtn( 1971, compiled_block_2_1971 );
  twobit_invoke( 5 );
  twobit_label( 1971, compiled_block_2_1971 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 7 );
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
  twobit_setrtn( 1972, compiled_block_2_1972 );
  twobit_invoke( 5 );
  twobit_label( 1972, compiled_block_2_1972 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 6 );
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
  twobit_setrtn( 1973, compiled_block_2_1973 );
  twobit_invoke( 5 );
  twobit_label( 1973, compiled_block_2_1973 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 5 );
  twobit_const( 8 );
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
  twobit_setrtn( 1974, compiled_block_2_1974 );
  twobit_invoke( 5 );
  twobit_label( 1974, compiled_block_2_1974 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 4 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_stack( 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_stack( 2 );
  twobit_op2_58( 2 ); /* cons */
  twobit_setreg( 2 );
  twobit_store( 2, 2 );
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
  twobit_setrtn( 1975, compiled_block_2_1975 );
  twobit_invoke( 5 );
  twobit_label( 1975, compiled_block_2_1975 );
  twobit_load( 0, 0 );
  twobit_load( 3, 2 );
  twobit_op2_58( 3 ); /* cons */
  twobit_load( 3, 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 4 );
  twobit_op2_58( 4 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 5 );
  twobit_op2_58( 4 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 6 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 7 );
  twobit_op2_58( 4 ); /* cons */
  twobit_pop( 8 );
  twobit_return();
  twobit_label( 1970, compiled_block_2_1970 );
  twobit_load( 1, 8 );
  twobit_pop( 8 );
  twobit_branch( 1887, compiled_block_2_1887 );
  twobit_label( 1968, compiled_block_2_1968 );
  twobit_load( 1, 8 );
  twobit_pop( 8 );
  twobit_branch( 1887, compiled_block_2_1887 );
  twobit_label( 1966, compiled_block_2_1966 );
  twobit_load( 1, 8 );
  twobit_pop( 8 );
  twobit_branch( 1887, compiled_block_2_1887 );
  twobit_label( 1963, compiled_block_2_1963 );
  twobit_branch( 1887, compiled_block_2_1887 );
  twobit_label( 1961, compiled_block_2_1961 );
  twobit_branch( 1887, compiled_block_2_1887 );
  twobit_label( 1959, compiled_block_2_1959 );
  twobit_branch( 1887, compiled_block_2_1887 );
  twobit_label( 1957, compiled_block_2_1957 );
  twobit_branch( 1887, compiled_block_2_1887 );
  twobit_label( 1955, compiled_block_2_1955 );
  twobit_branch( 1887, compiled_block_2_1887 );
  twobit_label( 1889, compiled_block_2_1889 );
  twobit_reg( 1 );
  twobit_op1_branchf_611( 1985, compiled_block_2_1985 ); /* internal:branchf-pair? */
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1987, compiled_block_2_1987 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1989, compiled_block_2_1989 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1991, compiled_block_2_1991 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1993, compiled_block_2_1993 ); /* internal:branchf-pair? */
  twobit_save( 6 );
  twobit_store( 0, 0 );
  twobit_store( 1, 6 );
  twobit_store( 3, 2 );
  twobit_store( 4, 1 );
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 1 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_setreg( 2 );
  twobit_global( 1 ); /* equal? */
  twobit_setrtn( 1994, compiled_block_2_1994 );
  twobit_invoke( 2 );
  twobit_label( 1994, compiled_block_2_1994 );
  twobit_load( 0, 0 );
  twobit_branchf( 1996, compiled_block_2_1996 );
  twobit_stack( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 1998, compiled_block_2_1998 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 1 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_setreg( 2 );
  twobit_global( 1 ); /* equal? */
  twobit_setrtn( 1999, compiled_block_2_1999 );
  twobit_invoke( 2 );
  twobit_label( 1999, compiled_block_2_1999 );
  twobit_load( 0, 0 );
  twobit_branchf( 2001, compiled_block_2_2001 );
  twobit_stack( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_op1_branchf_610( 2003, compiled_block_2_2003 ); /* internal:branchf-null? */
  twobit_const( 2 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 13 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 2004, compiled_block_2_2004 );
  twobit_invoke( 5 );
  twobit_label( 2004, compiled_block_2_2004 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 5 );
  twobit_const( 6 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 13 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 2005, compiled_block_2_2005 );
  twobit_invoke( 5 );
  twobit_label( 2005, compiled_block_2_2005 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 4 );
  twobit_const( 7 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 13 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 2006, compiled_block_2_2006 );
  twobit_invoke( 5 );
  twobit_label( 2006, compiled_block_2_2006 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_stack( 2 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 1 );
  twobit_const( 8 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 13 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 2007, compiled_block_2_2007 );
  twobit_invoke( 5 );
  twobit_label( 2007, compiled_block_2_2007 );
  twobit_load( 0, 0 );
  twobit_load( 3, 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 4 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 5 );
  twobit_op2_58( 4 ); /* cons */
  twobit_pop( 6 );
  twobit_return();
  twobit_label( 2003, compiled_block_2_2003 );
  twobit_load( 1, 6 );
  twobit_pop( 6 );
  twobit_branch( 1888, compiled_block_2_1888 );
  twobit_label( 2001, compiled_block_2_2001 );
  twobit_load( 1, 6 );
  twobit_pop( 6 );
  twobit_branch( 1888, compiled_block_2_1888 );
  twobit_label( 1998, compiled_block_2_1998 );
  twobit_load( 1, 6 );
  twobit_pop( 6 );
  twobit_branch( 1888, compiled_block_2_1888 );
  twobit_label( 1996, compiled_block_2_1996 );
  twobit_load( 1, 6 );
  twobit_pop( 6 );
  twobit_branch( 1888, compiled_block_2_1888 );
  twobit_label( 1993, compiled_block_2_1993 );
  twobit_branch( 1888, compiled_block_2_1888 );
  twobit_label( 1991, compiled_block_2_1991 );
  twobit_branch( 1888, compiled_block_2_1888 );
  twobit_label( 1989, compiled_block_2_1989 );
  twobit_branch( 1888, compiled_block_2_1888 );
  twobit_label( 1987, compiled_block_2_1987 );
  twobit_branch( 1888, compiled_block_2_1888 );
  twobit_label( 1985, compiled_block_2_1985 );
  twobit_branch( 1888, compiled_block_2_1888 );
  twobit_label( 1890, compiled_block_2_1890 );
  twobit_reg( 1 );
  twobit_op1_branchf_611( 2018, compiled_block_2_2018 ); /* internal:branchf-pair? */
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 2020, compiled_block_2_2020 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 2022, compiled_block_2_2022 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 2024, compiled_block_2_2024 ); /* internal:branchf-pair? */
  twobit_save( 6 );
  twobit_store( 0, 0 );
  twobit_store( 1, 6 );
  twobit_store( 3, 2 );
  twobit_store( 4, 1 );
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 1 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_setreg( 2 );
  twobit_global( 1 ); /* equal? */
  twobit_setrtn( 2025, compiled_block_2_2025 );
  twobit_invoke( 2 );
  twobit_label( 2025, compiled_block_2_2025 );
  twobit_load( 0, 0 );
  twobit_branchf( 2027, compiled_block_2_2027 );
  twobit_stack( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_store( 4, 1 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 2029, compiled_block_2_2029 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 1 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_setreg( 2 );
  twobit_global( 1 ); /* equal? */
  twobit_setrtn( 2030, compiled_block_2_2030 );
  twobit_invoke( 2 );
  twobit_label( 2030, compiled_block_2_2030 );
  twobit_load( 0, 0 );
  twobit_branchf( 2032, compiled_block_2_2032 );
  twobit_stack( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 2034, compiled_block_2_2034 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_store( 3, 1 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_op1_branchf_610( 2036, compiled_block_2_2036 ); /* internal:branchf-null? */
  twobit_const( 2 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 14 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 2037, compiled_block_2_2037 );
  twobit_invoke( 5 );
  twobit_label( 2037, compiled_block_2_2037 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 5 );
  twobit_const( 6 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 14 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 2038, compiled_block_2_2038 );
  twobit_invoke( 5 );
  twobit_label( 2038, compiled_block_2_2038 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 4 );
  twobit_const( 7 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 14 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 2039, compiled_block_2_2039 );
  twobit_invoke( 5 );
  twobit_label( 2039, compiled_block_2_2039 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_stack( 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_stack( 2 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 1 );
  twobit_const( 8 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 14 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 2040, compiled_block_2_2040 );
  twobit_invoke( 5 );
  twobit_label( 2040, compiled_block_2_2040 );
  twobit_load( 0, 0 );
  twobit_load( 3, 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 4 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 5 );
  twobit_op2_58( 4 ); /* cons */
  twobit_pop( 6 );
  twobit_return();
  twobit_label( 2036, compiled_block_2_2036 );
  twobit_load( 1, 6 );
  twobit_pop( 6 );
  twobit_branch( 1889, compiled_block_2_1889 );
  twobit_label( 2034, compiled_block_2_2034 );
  twobit_load( 1, 6 );
  twobit_pop( 6 );
  twobit_branch( 1889, compiled_block_2_1889 );
  twobit_label( 2032, compiled_block_2_2032 );
  twobit_load( 1, 6 );
  twobit_pop( 6 );
  twobit_branch( 1889, compiled_block_2_1889 );
  twobit_label( 2029, compiled_block_2_2029 );
  twobit_load( 1, 6 );
  twobit_pop( 6 );
  twobit_branch( 1889, compiled_block_2_1889 );
  twobit_label( 2027, compiled_block_2_2027 );
  twobit_load( 1, 6 );
  twobit_pop( 6 );
  twobit_branch( 1889, compiled_block_2_1889 );
  twobit_label( 2024, compiled_block_2_2024 );
  twobit_branch( 1889, compiled_block_2_1889 );
  twobit_label( 2022, compiled_block_2_2022 );
  twobit_branch( 1889, compiled_block_2_1889 );
  twobit_label( 2020, compiled_block_2_2020 );
  twobit_branch( 1889, compiled_block_2_1889 );
  twobit_label( 2018, compiled_block_2_2018 );
  twobit_branch( 1889, compiled_block_2_1889 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_11( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_reg( 1 );
  twobit_op1_branchf_611( 2054, compiled_block_2_2054 ); /* internal:branchf-pair? */
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 2056, compiled_block_2_2056 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 2058, compiled_block_2_2058 ); /* internal:branchf-pair? */
  twobit_save( 2 );
  twobit_store( 0, 0 );
  twobit_store( 1, 2 );
  twobit_store( 4, 1 );
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 1 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_setreg( 2 );
  twobit_global( 1 ); /* equal? */
  twobit_setrtn( 2059, compiled_block_2_2059 );
  twobit_invoke( 2 );
  twobit_label( 2059, compiled_block_2_2059 );
  twobit_load( 0, 0 );
  twobit_branchf( 2061, compiled_block_2_2061 );
  twobit_stack( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_op1_branchf_610( 2063, compiled_block_2_2063 ); /* internal:branchf-null? */
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
  twobit_setrtn( 2064, compiled_block_2_2064 );
  twobit_invoke( 5 );
  twobit_label( 2064, compiled_block_2_2064 );
  twobit_load( 0, 0 );
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_pop( 2 );
  twobit_return();
  twobit_label( 2063, compiled_block_2_2063 );
  twobit_load( 1, 2 );
  twobit_pop( 2 );
  twobit_branch( 2051, compiled_block_2_2051 );
  twobit_label( 2061, compiled_block_2_2061 );
  twobit_load( 1, 2 );
  twobit_pop( 2 );
  twobit_branch( 2051, compiled_block_2_2051 );
  twobit_label( 2058, compiled_block_2_2058 );
  twobit_branch( 2051, compiled_block_2_2051 );
  twobit_label( 2056, compiled_block_2_2056 );
  twobit_branch( 2051, compiled_block_2_2051 );
  twobit_label( 2054, compiled_block_2_2054 );
  twobit_label( 2051, compiled_block_2_2051 );
  twobit_reg( 1 );
  twobit_op1_branchf_611( 2071, compiled_block_2_2071 ); /* internal:branchf-pair? */
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 2073, compiled_block_2_2073 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 2075, compiled_block_2_2075 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_op1_branchf_610( 2077, compiled_block_2_2077 ); /* internal:branchf-null? */
  twobit_save( 4 );
  twobit_store( 0, 0 );
  twobit_store( 2, 3 );
  twobit_store( 3, 1 );
  twobit_const( 6 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 7 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 2078, compiled_block_2_2078 );
  twobit_invoke( 5 );
  twobit_label( 2078, compiled_block_2_2078 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 4 );
  twobit_const( 8 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 7 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 2079, compiled_block_2_2079 );
  twobit_invoke( 5 );
  twobit_label( 2079, compiled_block_2_2079 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 2 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_stack( 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 1 );
  twobit_const( 9 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 7 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 2080, compiled_block_2_2080 );
  twobit_invoke( 5 );
  twobit_label( 2080, compiled_block_2_2080 );
  twobit_load( 0, 0 );
  twobit_load( 3, 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 4 );
  twobit_op2_58( 4 ); /* cons */
  twobit_pop( 4 );
  twobit_return();
  twobit_label( 2077, compiled_block_2_2077 );
  twobit_global( 10 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 2075, compiled_block_2_2075 );
  twobit_global( 10 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 2073, compiled_block_2_2073 );
  twobit_global( 10 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 2071, compiled_block_2_2071 );
  twobit_global( 10 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_12( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_reg( 1 );
  twobit_op1_branchf_611( 2089, compiled_block_2_2089 ); /* internal:branchf-pair? */
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 2091, compiled_block_2_2091 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 2093, compiled_block_2_2093 ); /* internal:branchf-pair? */
  twobit_save( 2 );
  twobit_store( 0, 0 );
  twobit_store( 1, 2 );
  twobit_store( 4, 1 );
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 1 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_setreg( 2 );
  twobit_global( 1 ); /* equal? */
  twobit_setrtn( 2094, compiled_block_2_2094 );
  twobit_invoke( 2 );
  twobit_label( 2094, compiled_block_2_2094 );
  twobit_load( 0, 0 );
  twobit_branchf( 2096, compiled_block_2_2096 );
  twobit_stack( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_op1_branchf_610( 2098, compiled_block_2_2098 ); /* internal:branchf-null? */
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
  twobit_setrtn( 2099, compiled_block_2_2099 );
  twobit_invoke( 5 );
  twobit_label( 2099, compiled_block_2_2099 );
  twobit_load( 0, 0 );
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_pop( 2 );
  twobit_return();
  twobit_label( 2098, compiled_block_2_2098 );
  twobit_load( 1, 2 );
  twobit_pop( 2 );
  twobit_branch( 2086, compiled_block_2_2086 );
  twobit_label( 2096, compiled_block_2_2096 );
  twobit_load( 1, 2 );
  twobit_pop( 2 );
  twobit_branch( 2086, compiled_block_2_2086 );
  twobit_label( 2093, compiled_block_2_2093 );
  twobit_branch( 2086, compiled_block_2_2086 );
  twobit_label( 2091, compiled_block_2_2091 );
  twobit_branch( 2086, compiled_block_2_2086 );
  twobit_label( 2089, compiled_block_2_2089 );
  twobit_label( 2086, compiled_block_2_2086 );
  twobit_reg( 1 );
  twobit_op1_branchf_611( 2106, compiled_block_2_2106 ); /* internal:branchf-pair? */
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 2108, compiled_block_2_2108 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 2110, compiled_block_2_2110 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_op1_branchf_610( 2112, compiled_block_2_2112 ); /* internal:branchf-null? */
  twobit_save( 3 );
  twobit_store( 0, 0 );
  twobit_store( 2, 2 );
  twobit_store( 3, 1 );
  twobit_const( 6 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 7 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 2113, compiled_block_2_2113 );
  twobit_invoke( 5 );
  twobit_label( 2113, compiled_block_2_2113 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_stack( 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 1 );
  twobit_const( 8 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 7 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 2114, compiled_block_2_2114 );
  twobit_invoke( 5 );
  twobit_label( 2114, compiled_block_2_2114 );
  twobit_load( 0, 0 );
  twobit_load( 3, 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_pop( 3 );
  twobit_return();
  twobit_label( 2112, compiled_block_2_2112 );
  twobit_global( 9 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 2110, compiled_block_2_2110 );
  twobit_global( 9 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 2108, compiled_block_2_2108 );
  twobit_global( 9 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 2106, compiled_block_2_2106 );
  twobit_global( 9 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_13( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_reg( 1 );
  twobit_op1_branchf_611( 2123, compiled_block_2_2123 ); /* internal:branchf-pair? */
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 2125, compiled_block_2_2125 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 2127, compiled_block_2_2127 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 2129, compiled_block_2_2129 ); /* internal:branchf-pair? */
  twobit_save( 2 );
  twobit_store( 0, 0 );
  twobit_store( 1, 2 );
  twobit_store( 4, 1 );
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 1 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_setreg( 2 );
  twobit_global( 1 ); /* equal? */
  twobit_setrtn( 2130, compiled_block_2_2130 );
  twobit_invoke( 2 );
  twobit_label( 2130, compiled_block_2_2130 );
  twobit_load( 0, 0 );
  twobit_branchf( 2132, compiled_block_2_2132 );
  twobit_stack( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_op1_branchf_610( 2134, compiled_block_2_2134 ); /* internal:branchf-null? */
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
  twobit_setrtn( 2135, compiled_block_2_2135 );
  twobit_invoke( 5 );
  twobit_label( 2135, compiled_block_2_2135 );
  twobit_load( 0, 0 );
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_pop( 2 );
  twobit_return();
  twobit_label( 2134, compiled_block_2_2134 );
  twobit_load( 1, 2 );
  twobit_pop( 2 );
  twobit_branch( 2120, compiled_block_2_2120 );
  twobit_label( 2132, compiled_block_2_2132 );
  twobit_load( 1, 2 );
  twobit_pop( 2 );
  twobit_branch( 2120, compiled_block_2_2120 );
  twobit_label( 2129, compiled_block_2_2129 );
  twobit_branch( 2120, compiled_block_2_2120 );
  twobit_label( 2127, compiled_block_2_2127 );
  twobit_branch( 2120, compiled_block_2_2120 );
  twobit_label( 2125, compiled_block_2_2125 );
  twobit_branch( 2120, compiled_block_2_2120 );
  twobit_label( 2123, compiled_block_2_2123 );
  twobit_label( 2120, compiled_block_2_2120 );
  twobit_reg( 1 );
  twobit_op1_branchf_611( 2143, compiled_block_2_2143 ); /* internal:branchf-pair? */
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 2145, compiled_block_2_2145 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 2147, compiled_block_2_2147 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 2149, compiled_block_2_2149 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 31 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_op1_branchf_610( 2151, compiled_block_2_2151 ); /* internal:branchf-null? */
  twobit_save( 5 );
  twobit_store( 0, 0 );
  twobit_store( 2, 1 );
  twobit_store( 3, 2 );
  twobit_store( 31, 4 );
  twobit_const( 6 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 7 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 2152, compiled_block_2_2152 );
  twobit_invoke( 5 );
  twobit_label( 2152, compiled_block_2_2152 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 5 );
  twobit_const( 8 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 7 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 2153, compiled_block_2_2153 );
  twobit_invoke( 5 );
  twobit_label( 2153, compiled_block_2_2153 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_stack( 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 1 );
  twobit_const( 9 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 7 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 2154, compiled_block_2_2154 );
  twobit_invoke( 5 );
  twobit_label( 2154, compiled_block_2_2154 );
  twobit_load( 0, 0 );
  twobit_load( 3, 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 4 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 5 );
  twobit_op2_58( 4 ); /* cons */
  twobit_pop( 5 );
  twobit_return();
  twobit_label( 2151, compiled_block_2_2151 );
  twobit_global( 10 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 2149, compiled_block_2_2149 );
  twobit_global( 10 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 2147, compiled_block_2_2147 );
  twobit_global( 10 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 2145, compiled_block_2_2145 );
  twobit_global( 10 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 2143, compiled_block_2_2143 );
  twobit_global( 10 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_14( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_reg( 1 );
  twobit_op1_branchf_611( 2164, compiled_block_2_2164 ); /* internal:branchf-pair? */
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 2166, compiled_block_2_2166 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 2168, compiled_block_2_2168 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 2170, compiled_block_2_2170 ); /* internal:branchf-pair? */
  twobit_save( 2 );
  twobit_store( 0, 0 );
  twobit_store( 1, 2 );
  twobit_store( 4, 1 );
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 1 );
  twobit_imm_const( FALSE_CONST ); /* #f */
  twobit_setreg( 2 );
  twobit_global( 1 ); /* equal? */
  twobit_setrtn( 2171, compiled_block_2_2171 );
  twobit_invoke( 2 );
  twobit_label( 2171, compiled_block_2_2171 );
  twobit_load( 0, 0 );
  twobit_branchf( 2173, compiled_block_2_2173 );
  twobit_stack( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_op1_branchf_610( 2175, compiled_block_2_2175 ); /* internal:branchf-null? */
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
  twobit_setrtn( 2176, compiled_block_2_2176 );
  twobit_invoke( 5 );
  twobit_label( 2176, compiled_block_2_2176 );
  twobit_load( 0, 0 );
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_pop( 2 );
  twobit_return();
  twobit_label( 2175, compiled_block_2_2175 );
  twobit_load( 1, 2 );
  twobit_pop( 2 );
  twobit_branch( 2161, compiled_block_2_2161 );
  twobit_label( 2173, compiled_block_2_2173 );
  twobit_load( 1, 2 );
  twobit_pop( 2 );
  twobit_branch( 2161, compiled_block_2_2161 );
  twobit_label( 2170, compiled_block_2_2170 );
  twobit_branch( 2161, compiled_block_2_2161 );
  twobit_label( 2168, compiled_block_2_2168 );
  twobit_branch( 2161, compiled_block_2_2161 );
  twobit_label( 2166, compiled_block_2_2166 );
  twobit_branch( 2161, compiled_block_2_2161 );
  twobit_label( 2164, compiled_block_2_2164 );
  twobit_label( 2161, compiled_block_2_2161 );
  twobit_reg( 1 );
  twobit_op1_branchf_611( 2184, compiled_block_2_2184 ); /* internal:branchf-pair? */
  twobit_reg( 1 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 2186, compiled_block_2_2186 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 3 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 2188, compiled_block_2_2188 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 2 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_setreg( 4 );
  twobit_reg( 4 );
  twobit_op1_branchf_611( 2190, compiled_block_2_2190 ); /* internal:branchf-pair? */
  twobit_reg( 4 );
  twobit_op1_404(); /* car:pair */
  twobit_setreg( 31 );
  twobit_reg( 4 );
  twobit_op1_405(); /* cdr:pair */
  twobit_op1_branchf_610( 2192, compiled_block_2_2192 ); /* internal:branchf-null? */
  twobit_save( 5 );
  twobit_store( 0, 0 );
  twobit_store( 2, 1 );
  twobit_store( 3, 2 );
  twobit_store( 31, 4 );
  twobit_const( 6 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 7 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 2193, compiled_block_2_2193 );
  twobit_invoke( 5 );
  twobit_label( 2193, compiled_block_2_2193 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 5 );
  twobit_const( 8 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 7 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 2194, compiled_block_2_2194 );
  twobit_invoke( 5 );
  twobit_label( 2194, compiled_block_2_2194 );
  twobit_load( 0, 0 );
  twobit_setreg( 4 );
  twobit_store( 4, 3 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 3 );
  twobit_stack( 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 3 );
  twobit_store( 3, 1 );
  twobit_const( 9 );
  twobit_setreg( 1 );
  twobit_imm_const( NIL_CONST ); /* () */
  twobit_setreg( 2 );
  twobit_const( 7 );
  twobit_setreg( 3 );
  twobit_imm_const( fixnum(0) ); /* 0 */
  twobit_setreg( 4 );
  twobit_const( 4 );
  twobit_setreg( 5 );
  twobit_global( 5 ); /* ex:syntax-rename */
  twobit_setrtn( 2195, compiled_block_2_2195 );
  twobit_invoke( 5 );
  twobit_label( 2195, compiled_block_2_2195 );
  twobit_load( 0, 0 );
  twobit_load( 3, 1 );
  twobit_op2_58( 3 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 2 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 3 );
  twobit_op2_58( 4 ); /* cons */
  twobit_imm_const_setreg( NIL_CONST, 3 ); /* () */
  twobit_op2_58( 3 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 4 );
  twobit_op2_58( 4 ); /* cons */
  twobit_setreg( 4 );
  twobit_stack( 5 );
  twobit_op2_58( 4 ); /* cons */
  twobit_pop( 5 );
  twobit_return();
  twobit_label( 2192, compiled_block_2_2192 );
  twobit_global( 10 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 2190, compiled_block_2_2190 );
  twobit_global( 10 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 2188, compiled_block_2_2188 );
  twobit_global( 10 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 2186, compiled_block_2_2186 );
  twobit_global( 10 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_label( 2184, compiled_block_2_2184 );
  twobit_global( 10 ); /* ex:invalid-form */
  twobit_invoke( 1 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_3( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 0 );
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 2 ); /*  record-constructor-descriptor~1pxGHH~3324 */
  twobit_global( 1 ); /* ex:undefined */
  twobit_setglbl( 3 ); /*  record-type-descriptor~1pxGHH~3323 */
  twobit_lambda( compiled_start_2_4, 5, 0 );
  twobit_setglbl( 3 ); /*  record-type-descriptor~1pxGHH~3323 */
  twobit_lambda( compiled_start_2_5, 7, 0 );
  twobit_setglbl( 2 ); /*  record-constructor-descriptor~1pxGHH~3324 */
  twobit_global( 8 ); /* values */
  twobit_invoke( 0 );
  twobit_epilogue();
}


static RTYPE compiled_start_2_4( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_reg( 1 );
  twobit_return();
  twobit_epilogue();
}


static RTYPE compiled_start_2_5( CONT_PARAMS ) {
  twobit_prologue(); 
  twobit_argseq( 1 );
  twobit_global( 1 ); /*  preferred-cd~1pxGHH~2335 */
  twobit_invoke( 1 );
  twobit_epilogue();
}


RTYPE twobit_thunk_cbe6774606b45513e2c3c8852927d4cf_1(CONT_PARAMS) {
  RETURN_RTYPE(compiled_start_2_0(CONT_ACTUALS));
}
codeptr_t CDECL twobit_load_table[] = { 
  twobit_thunk_cbe6774606b45513e2c3c8852927d4cf_0,
  twobit_thunk_cbe6774606b45513e2c3c8852927d4cf_1,
  0  /* The table may be empty; some compilers complain */
};
