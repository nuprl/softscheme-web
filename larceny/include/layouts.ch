/* DO NOT EDIT THIS FILE.  Edit "src/Rts/layouts.cfg" and rerun "config". */

#define TAG_MASK 7
#define TYPETAG_MASK 28
#define FIX1_TAG 0
#define FIX2_TAG 4
#define IMM1_TAG 2
#define IMM2_TAG 6
#define PAIR_TAG 1
#define VEC_TAG 3
#define BVEC_TAG 5
#define PROC_TAG 7
#define RES_HDR 130
#define VEC_HDR 162
#define BV_HDR 194
#define PROC_HDR 254
#define TRUE_CONST 6
#define FALSE_CONST 2
#define NIL_CONST 10
#define MISC_CONST 22
#define UNSPECIFIED_CONST 278
#define EOF_CONST 534
#define UNDEFINED_CONST 790
#define FASL_CONST 1046
#define IMM_CHAR 38
#define VEC_SUBTAG 0
#define CONT_SUBTAG 0
#define RECT_SUBTAG 4
#define RAT_SUBTAG 8
#define SYM_SUBTAG 12
#define STRUCT_SUBTAG 20
#define BVEC_SUBTAG 0
#define STR_SUBTAG 4
#define FLO_SUBTAG 8
#define COMP_SUBTAG 12
#define BIG_SUBTAG 16
#define USTR_SUBTAG 20
#define COMPNUM_HDR 206
#define FLONUM_HDR 202
#define BIGNUM_HDR 210
#define RATNUM_HDR 170
#define RECTNUM_HDR 166
#define STR_HDR 198
#define USTR_HDR 214
#define BYTEVECTOR_HDR 194
#define VECTOR_HDR 162
#define PROCEDURE_HDR 254
#define SYMBOL_HDR 174
#define PORT_HDR 178
#define STRUCT_HDR 182
#define WORDSIZE 4
#define VEC_HEADER_WORDS 1
#define BVEC_HEADER_WORDS 1
#define BVEC_HEADER_BYTES 4
#define MOST_NEGATIVE_FIXNUM -536870912
#define MOST_POSITIVE_FIXNUM 536870911
#define HC_HEADER 0
#define HC_RETOFFSET 1
#define HC_DYNLINK 2
#define HC_PROC 3
#define HC_SAVED 3
#define HC_OVERHEAD 3
#define STK_CONTSIZE 1
#define STK_RETADDR 0
#define STK_DYNLINK 2
#define STK_PROC 3
#define STK_REG0 3
#define STK_SAVED 3
#define STK_OVERHEAD 3
#define SCE_BUFFER 64
#define PROC_HEADER_WORDS 1
#define PROC_OVERHEAD 2
#define IDX_PROC_CODE 0
#define IDX_PROC_CONST 1
#define IDX_PROC_REG0 2
#define PROC_CODEPTR 1
#define PROC_CONSTANTS 2
#define PROC_REG0 3