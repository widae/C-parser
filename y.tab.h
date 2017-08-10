#define IDENTIFIER 257
#define CONSTANT 258
#define STRING_LITERAL 259
#define SIZEOF 260
#define DEFINE 261
#define LINE 262
#define INCLUDE 263
#define ERROR 264
#define PRAGMA 265
#define UNDEF 266
#define PRE 267
#define MACRO 268
#define PTR_OP 269
#define INC_OP 270
#define DEC_OP 271
#define LEFT_OP 272
#define RIGHT_OP 273
#define LE_OP 274
#define GE_OP 275
#define EQ_OP 276
#define NE_OP 277
#define AND_OP 278
#define OR_OP 279
#define MUL_ASSIGN 280
#define DIV_ASSIGN 281
#define MOD_ASSIGN 282
#define ADD_ASSIGN 283
#define SUB_ASSIGN 284
#define LEFT_ASSIGN 285
#define RIGHT_ASSIGN 286
#define AND_ASSIGN 287
#define XOR_ASSIGN 288
#define OR_ASSIGN 289
#define TYPE_NAME 290
#define TYPEDEF 291
#define EXTERN 292
#define STATIC 293
#define AUTO 294
#define REGISTER 295
#define CHAR 296
#define SHORT 297
#define INT 298
#define LONG 299
#define SIGNED 300
#define UNSIGNED 301
#define FLOAT 302
#define DOUBLE 303
#define CONST 304
#define VOLATILE 305
#define VOID 306
#define STRUCT 307
#define UNION 308
#define ENUM 309
#define ELLIPSIS 310
#define CASE 311
#define DEFAULT 312
#define IF 313
#define ELSE 314
#define SWITCH 315
#define WHILE 316
#define DO 317
#define FOR 318
#define GOTO 319
#define CONTINUE 320
#define BREAK 321
#define RETURN 322
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union{
    char val[1000];
    int line_no;
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
extern YYSTYPE yylval;
