/* Auto-generated by Tools/scripts/generate_opcode_h.py from Lib/opcode.py */
#ifndef Py_OPCODE_H
#define Py_OPCODE_H
#ifdef __cplusplus
extern "C" {
#endif


/* Instruction opcodes for compiled code */
#define POP_TOP                           1
#define ROT_TWO                           2
#define ROT_THREE                         3
#define DUP_TOP                           4
#define DUP_TOP_TWO                       5
#define ROT_FOUR                          6
#define NOP                               9
#define UNARY_POSITIVE                   10
#define UNARY_NEGATIVE                   11
#define UNARY_NOT                        12
#define UNARY_INVERT                     15
#define BINARY_SUBSCR                    25
#define GET_LEN                          30
#define MATCH_MAPPING                    31
#define MATCH_SEQUENCE                   32
#define MATCH_KEYS                       33
#define PUSH_EXC_INFO                    35
#define POP_EXCEPT_AND_RERAISE           37
#define WITH_EXCEPT_START                49
#define GET_AITER                        50
#define GET_ANEXT                        51
#define BEFORE_ASYNC_WITH                52
#define BEFORE_WITH                      53
#define END_ASYNC_FOR                    54
#define STORE_SUBSCR                     60
#define DELETE_SUBSCR                    61
#define GET_ITER                         68
#define GET_YIELD_FROM_ITER              69
#define PRINT_EXPR                       70
#define LOAD_BUILD_CLASS                 71
#define YIELD_FROM                       72
#define GET_AWAITABLE                    73
#define LOAD_ASSERTION_ERROR             74
#define LIST_TO_TUPLE                    82
#define RETURN_VALUE                     83
#define IMPORT_STAR                      84
#define SETUP_ANNOTATIONS                85
#define YIELD_VALUE                      86
#define POP_EXCEPT                       89
#define HAVE_ARGUMENT                    90
#define STORE_NAME                       90
#define DELETE_NAME                      91
#define UNPACK_SEQUENCE                  92
#define FOR_ITER                         93
#define UNPACK_EX                        94
#define STORE_ATTR                       95
#define DELETE_ATTR                      96
#define STORE_GLOBAL                     97
#define DELETE_GLOBAL                    98
#define ROT_N                            99
#define LOAD_CONST                      100
#define LOAD_NAME                       101
#define BUILD_TUPLE                     102
#define BUILD_LIST                      103
#define BUILD_SET                       104
#define BUILD_MAP                       105
#define LOAD_ATTR                       106
#define COMPARE_OP                      107
#define IMPORT_NAME                     108
#define IMPORT_FROM                     109
#define JUMP_FORWARD                    110
#define JUMP_IF_FALSE_OR_POP            111
#define JUMP_IF_TRUE_OR_POP             112
#define JUMP_ABSOLUTE                   113
#define POP_JUMP_IF_FALSE               114
#define POP_JUMP_IF_TRUE                115
#define LOAD_GLOBAL                     116
#define IS_OP                           117
#define CONTAINS_OP                     118
#define RERAISE                         119
#define COPY                            120
#define JUMP_IF_NOT_EXC_MATCH           121
#define BINARY_OP                       122
#define LOAD_FAST                       124
#define STORE_FAST                      125
#define DELETE_FAST                     126
#define GEN_START                       129
#define RAISE_VARARGS                   130
#define CALL_FUNCTION                   131
#define MAKE_FUNCTION                   132
#define BUILD_SLICE                     133
#define MAKE_CELL                       135
#define LOAD_CLOSURE                    136
#define LOAD_DEREF                      137
#define STORE_DEREF                     138
#define DELETE_DEREF                    139
#define CALL_FUNCTION_KW                141
#define CALL_FUNCTION_EX                142
#define EXTENDED_ARG                    144
#define LIST_APPEND                     145
#define SET_ADD                         146
#define MAP_ADD                         147
#define LOAD_CLASSDEREF                 148
#define MATCH_CLASS                     152
#define FORMAT_VALUE                    155
#define BUILD_CONST_KEY_MAP             156
#define BUILD_STRING                    157
#define LOAD_METHOD                     160
#define CALL_METHOD                     161
#define LIST_EXTEND                     162
#define SET_UPDATE                      163
#define DICT_MERGE                      164
#define DICT_UPDATE                     165
#define CALL_METHOD_KW                  166
#define BINARY_OP_ADAPTIVE                7
#define BINARY_OP_ADD_INT                 8
#define BINARY_OP_ADD_FLOAT              13
#define BINARY_OP_ADD_UNICODE            14
#define BINARY_OP_INPLACE_ADD_UNICODE    16
#define BINARY_OP_MULTIPLY_INT           17
#define BINARY_OP_MULTIPLY_FLOAT         18
#define BINARY_OP_SUBTRACT_INT           19
#define BINARY_OP_SUBTRACT_FLOAT         20
#define BINARY_SUBSCR_ADAPTIVE           21
#define BINARY_SUBSCR_GETITEM            22
#define BINARY_SUBSCR_LIST_INT           23
#define BINARY_SUBSCR_TUPLE_INT          24
#define BINARY_SUBSCR_DICT               26
#define STORE_SUBSCR_ADAPTIVE            27
#define STORE_SUBSCR_LIST_INT            28
#define STORE_SUBSCR_DICT                29
#define CALL_FUNCTION_ADAPTIVE           34
#define CALL_FUNCTION_BUILTIN_O          36
#define CALL_FUNCTION_BUILTIN_FAST       38
#define CALL_FUNCTION_LEN                39
#define CALL_FUNCTION_ISINSTANCE         40
#define CALL_FUNCTION_PY_SIMPLE          41
#define JUMP_ABSOLUTE_QUICK              42
#define LOAD_ATTR_ADAPTIVE               43
#define LOAD_ATTR_INSTANCE_VALUE         44
#define LOAD_ATTR_WITH_HINT              45
#define LOAD_ATTR_SLOT                   46
#define LOAD_ATTR_MODULE                 47
#define LOAD_GLOBAL_ADAPTIVE             48
#define LOAD_GLOBAL_MODULE               55
#define LOAD_GLOBAL_BUILTIN              56
#define LOAD_METHOD_ADAPTIVE             57
#define LOAD_METHOD_CACHED               58
#define LOAD_METHOD_CLASS                59
#define LOAD_METHOD_MODULE               62
#define LOAD_METHOD_NO_DICT              63
#define STORE_ATTR_ADAPTIVE              64
#define STORE_ATTR_INSTANCE_VALUE        65
#define STORE_ATTR_SLOT                  66
#define STORE_ATTR_WITH_HINT             67
#define LOAD_FAST__LOAD_FAST             75
#define STORE_FAST__LOAD_FAST            76
#define LOAD_FAST__LOAD_CONST            77
#define LOAD_CONST__LOAD_FAST            78
#define STORE_FAST__STORE_FAST           79
#define DO_TRACING                      255
#ifdef NEED_OPCODE_JUMP_TABLES
static uint32_t _PyOpcode_RelativeJump[8] = {
    0U,
    0U,
    536870912U,
    16384U,
    0U,
    0U,
    0U,
    0U,
};
static uint32_t _PyOpcode_Jump[8] = {
    0U,
    0U,
    536870912U,
    34586624U,
    0U,
    0U,
    0U,
    0U,
};
#endif /* OPCODE_TABLES */

#define HAS_CONST(op) (false\
    || ((op) == 100) \
    )

#define NB_ADD                            0
#define NB_AND                            1
#define NB_FLOOR_DIVIDE                   2
#define NB_LSHIFT                         3
#define NB_MATRIX_MULTIPLY                4
#define NB_MULTIPLY                       5
#define NB_REMAINDER                      6
#define NB_OR                             7
#define NB_POWER                          8
#define NB_RSHIFT                         9
#define NB_SUBTRACT                      10
#define NB_TRUE_DIVIDE                   11
#define NB_XOR                           12
#define NB_INPLACE_ADD                   13
#define NB_INPLACE_AND                   14
#define NB_INPLACE_FLOOR_DIVIDE          15
#define NB_INPLACE_LSHIFT                16
#define NB_INPLACE_MATRIX_MULTIPLY       17
#define NB_INPLACE_MULTIPLY              18
#define NB_INPLACE_REMAINDER             19
#define NB_INPLACE_OR                    20
#define NB_INPLACE_POWER                 21
#define NB_INPLACE_RSHIFT                22
#define NB_INPLACE_SUBTRACT              23
#define NB_INPLACE_TRUE_DIVIDE           24
#define NB_INPLACE_XOR                   25

#define HAS_ARG(op) ((op) >= HAVE_ARGUMENT)

/* Reserve some bytecodes for internal use in the compiler.
 * The value of 240 is arbitrary. */
#define IS_ARTIFICIAL(op) ((op) > 240)

#ifdef __cplusplus
}
#endif
#endif /* !Py_OPCODE_H */
