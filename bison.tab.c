
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "bison.y"

	#include<stdio.h>
	#include<string.h>
	#include <math.h>
	int yyparse();
    int yylex();
    int yyerror();
	//extern FILE *yyin,*yyout;
	int cnt=1,c2=1;
	typedef struct begin {
    	char tkn[109];
    	int value;
	}save;
	save data[1000],symbol[1000];
	int isDeclared(char *check)
	{
		int i = 1;
    	while (i<=cnt) 
		{
        	char* vari_name = data[i].tkn;
			
        	if(vari_name==NULL) break;
        	if (strcmp(vari_name, check) == 0){
				
            	return data[i].value;
			}
        	i++;
    	}
    	return 0;
	}
	int isDeclaredAgain(char *check)
	{
		
    	int i = 1;
		while (i<=c2)
		{
    		char *vari_name = symbol[i].tkn;
			
			if (vari_name == NULL) break;
        	if (strcmp(vari_name, check) == 0){
            	
				return i;
			}
			i++;
    	}
    	return 0;
	}

	void addDatainData(int idx, char *s, int n)
	{
		printf("add data %s %d\n",s,n);
		strcpy(data[idx].tkn,s);
		data[idx].value = n;
		// printf("add data save %s %d\n", p->tkn, p->value);
	} 
	void addDataInSymbol(int idx, char *s, int n)
	{
		printf("add data %s %d\n",s,n);
		strcpy(symbol[idx].tkn,s);
		symbol[idx].value = n;
		// printf("add data save %s %d\n", p->tkn, p->value);
	} 


/* Line 189 of yacc.c  */
#line 138 "bison.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     NUM = 258,
     VAR = 259,
     IF = 260,
     ELIF = 261,
     ELSE = 262,
     FUNCTION = 263,
     INT = 264,
     FLOAT = 265,
     DOUBLE = 266,
     CHAR = 267,
     SBS = 268,
     SBE = 269,
     JOG = 270,
     BIYOG = 271,
     GUN = 272,
     VAG = 273,
     POW = 274,
     FACT = 275,
     asgn = 276,
     FOR = 277,
     COLON = 278,
     WHILE = 279,
     BREAK = 280,
     DEFAULT = 281,
     CASE = 282,
     SWITCH = 283,
     CLASS = 284,
     TRY = 285,
     CATCH = 286,
     ARRAY = 287,
     ASSIGNPLUS = 288,
     ASSIGNMINUS = 289,
     ASSIGNMUL = 290,
     ASSIGNDIV = 291,
     PRINTF = 292,
     SCANF = 293,
     SQRT = 294,
     ODDEVEN = 295,
     MAIN = 296,
     SC = 297,
     INC = 298,
     DEC = 299,
     NEQ = 300,
     DefaultGrammer = 301,
     EQ = 302,
     GEQ = 303,
     LEQ = 304,
     MOD = 305,
     CONTINUE = 306,
     RETURN = 307,
     LOGICALOPERATOR = 308,
     import = 309,
     HEADER = 310,
     LT = 311,
     GT = 312,
     NUMBERF = 313,
     IFX = 314
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 66 "bison.y"

		float fvalue;
        int number;
        char string[1009];



/* Line 214 of yacc.c  */
#line 241 "bison.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 253 "bison.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   680

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  70
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  19
/* YYNRULES -- Number of rules.  */
#define YYNRULES  68
/* YYNRULES -- Number of states.  */
#define YYNSTATES  235

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   314

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,    60,     2,     2,     2,     2,
      61,    62,     2,     2,    63,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    65,
       2,     2,     2,    68,     2,     2,     2,     2,    67,     2,
       2,     2,    69,     2,     2,    64,    66,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,    10,    17,    18,    20,    23,    27,    29,
      31,    33,    35,    39,    41,    45,    49,    51,    53,    56,
      59,    65,    68,    74,    80,    86,    92,    98,   104,   112,
     118,   123,   132,   146,   173,   195,   207,   217,   226,   234,
     236,   239,   245,   246,   249,   254,   258,   260,   262,   266,
     270,   274,   278,   282,   286,   289,   293,   297,   301,   304,
     307,   310,   312,   314,   316,   324,   336,   352,   357
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      71,     0,    -1,    60,    54,    56,    55,    57,    72,    -1,
      41,    61,    62,    13,    73,    14,    -1,    -1,    74,    -1,
      73,    77,    -1,    75,    76,    42,    -1,     9,    -1,    10,
      -1,    12,    -1,    11,    -1,    76,    63,     4,    -1,     4,
      -1,     4,    21,    58,    -1,     4,    21,     3,    -1,    84,
      -1,    42,    -1,    80,    77,    -1,    78,    77,    -1,    37,
      61,    83,    62,    42,    -1,    83,    42,    -1,    64,    61,
      83,    62,    42,    -1,    65,    61,    83,    62,    42,    -1,
      66,    61,    83,    62,    42,    -1,    67,    61,    83,    62,
      42,    -1,    39,    61,    83,    62,    42,    -1,    40,    61,
       3,    62,    42,    -1,    68,    61,    83,    63,    83,    62,
      42,    -1,    69,    61,    83,    62,    42,    -1,     4,    21,
      83,    42,    -1,     5,    61,    83,    62,    13,    83,    42,
      14,    -1,     5,    61,    83,    62,    13,    83,    42,    14,
       7,    13,    83,    42,    14,    -1,     5,    61,    83,    62,
      13,     5,    61,    83,    62,    13,    83,    42,    14,     7,
      13,    83,    42,    14,    83,    42,    14,     7,    13,    83,
      42,    14,    -1,     5,    61,    83,    62,    13,    83,    42,
      14,     6,    61,    83,    62,    13,    83,    42,    14,     7,
      13,    83,    42,    14,    -1,    22,    61,     3,    23,    66,
       3,    62,    13,    83,    42,    14,    -1,    24,    61,     3,
      57,     3,    62,    13,    83,    14,    -1,     8,     4,    61,
      83,    62,    13,    77,    14,    -1,    28,    61,     3,    62,
      13,    79,    14,    -1,    81,    -1,    81,    46,    -1,    29,
       4,    13,    77,    14,    -1,    -1,    81,    82,    -1,    27,
       3,    23,    77,    -1,    26,    23,    77,    -1,     3,    -1,
       4,    -1,    83,    47,    83,    -1,    83,    15,    83,    -1,
      83,    16,    83,    -1,    83,    17,    83,    -1,    83,    18,
      83,    -1,    83,    19,    83,    -1,    83,    20,    -1,    83,
      56,    83,    -1,    83,    57,    83,    -1,    61,    83,    62,
      -1,    43,    83,    -1,    44,    83,    -1,    45,    83,    -1,
      85,    -1,    86,    -1,    87,    -1,     5,    61,    83,    62,
      13,    77,    14,    -1,     5,    61,    83,    62,    13,    77,
      14,     7,    13,    77,    14,    -1,     5,    61,    83,    62,
      13,    77,    14,     6,    61,    83,    62,    13,    77,    14,
      88,    -1,     7,    13,    77,    14,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   108,   108,   115,   123,   126,   130,   136,   143,   144,
     145,   146,   149,   163,   175,   188,   203,   204,   205,   206,
     207,   208,   209,   214,   219,   224,   229,   235,   245,   258,
     275,   292,   303,   313,   327,   342,   348,   359,   366,   375,
     379,   384,   389,   392,   398,   399,   405,   407,   417,   428,
     430,   432,   434,   444,   446,   456,   458,   460,   462,   464,
     466,   478,   479,   480,   483,   492,   503,   515,   520
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUM", "VAR", "IF", "ELIF", "ELSE",
  "FUNCTION", "INT", "FLOAT", "DOUBLE", "CHAR", "SBS", "SBE", "JOG",
  "BIYOG", "GUN", "VAG", "POW", "FACT", "asgn", "FOR", "COLON", "WHILE",
  "BREAK", "DEFAULT", "CASE", "SWITCH", "CLASS", "TRY", "CATCH", "ARRAY",
  "ASSIGNPLUS", "ASSIGNMINUS", "ASSIGNMUL", "ASSIGNDIV", "PRINTF", "SCANF",
  "SQRT", "ODDEVEN", "MAIN", "SC", "INC", "DEC", "NEQ", "DefaultGrammer",
  "EQ", "GEQ", "LEQ", "MOD", "CONTINUE", "RETURN", "LOGICALOPERATOR",
  "import", "HEADER", "LT", "GT", "NUMBERF", "IFX", "'#'", "'('", "')'",
  "','", "'s'", "'c'", "'t'", "'l'", "'g'", "'p'", "$accept", "start",
  "codestart", "statementstart", "declarestart", "type", "VARNAME",
  "statement", "SwitchCase", "SwitchGrammer", "ClassCase", "CaseGrammer",
  "casenumber", "expression", "if_stmt", "simple_if", "if_else",
  "if_elif_else", "else_part", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
      35,    40,    41,    44,   115,    99,   116,   108,   103,   112
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    70,    71,    72,    73,    73,    73,    74,    75,    75,
      75,    75,    76,    76,    76,    76,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    78,    79,
      79,    80,    81,    81,    82,    82,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    84,    84,    84,    85,    86,    87,    88,    88
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     6,     6,     0,     1,     2,     3,     1,     1,
       1,     1,     3,     1,     3,     3,     1,     1,     2,     2,
       5,     2,     5,     5,     5,     5,     5,     5,     7,     5,
       4,     8,    13,    26,    21,    11,     9,     8,     7,     1,
       2,     5,     0,     2,     4,     3,     1,     1,     3,     3,
       3,     3,     3,     3,     2,     3,     3,     3,     2,     2,
       2,     1,     1,     1,     7,    11,    15,     4,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     0,     0,     0,     2,
       0,     0,     4,     8,     9,    11,    10,     0,     5,     0,
      46,    47,     0,     0,     3,     0,     0,     0,     0,     0,
       0,     0,    17,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     6,     0,     0,     0,    16,    61,    62,
      63,    13,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    47,    58,    59,    60,     0,     0,     0,
       0,     0,     0,     0,    19,    18,     0,     0,     0,     0,
       0,    54,    21,     0,     0,     0,     0,     7,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    57,
       0,     0,     0,     0,     0,     0,    49,    50,    51,    52,
      53,    48,    55,    56,    15,    14,    12,    30,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    42,    41,    20,
      26,    27,    22,    23,    24,    25,     0,    29,     0,     0,
       0,     0,     0,     0,     0,    39,     0,     0,    64,     0,
       0,     0,     0,    38,     0,     0,    40,    43,    28,     0,
       0,     0,    31,    37,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    36,    45,     0,     0,     0,     0,
       0,     0,     0,    44,     0,     0,    65,     0,     0,    35,
       0,     0,     0,     0,    31,     0,     0,    32,     0,    68,
       0,     0,     0,    66,     0,     0,     0,     0,     0,     0,
       0,    32,    67,     0,     0,     0,     0,     0,     0,    34,
       0,     0,     0,     0,    33
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     9,    17,    18,    19,    52,   149,    44,   154,
      45,   155,   167,    46,    47,    48,    49,    50,   213
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -59
static const yytype_int16 yypact[] =
{
     -58,   -47,    13,   -21,   -59,   -33,     5,    16,     7,   -59,
       8,    58,     0,   -59,   -59,   -59,   -59,    55,   -59,    71,
     -59,    59,    15,    77,   -59,    21,    24,    25,    83,    27,
      28,    32,   -59,    29,    29,    29,    29,    35,    41,    43,
      44,    46,    48,   -59,   143,   143,   483,   -59,   -59,   -59,
     -59,    70,   -34,    29,    29,    49,   103,   105,   108,    99,
      29,    29,   110,   -59,   623,   623,   623,   224,    29,    29,
      29,    29,    29,    29,   -59,   -59,    29,    29,    29,    29,
      29,   -59,   -59,    29,    29,    29,    -2,   -59,   111,   489,
     231,    29,    91,    60,    56,   143,   257,   279,    63,   -59,
     290,   312,   338,   345,   207,   361,    47,    47,     6,     6,
     -59,     1,     1,     1,   -59,   -59,   -59,   -59,   113,   394,
      62,   126,   117,   119,    89,   100,   101,   112,   114,   116,
     120,    29,   122,   192,   132,   147,    90,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,   410,   -59,    92,   141,
     495,   143,   104,   157,   159,   -12,   133,    29,    30,   160,
     165,   176,    29,   -59,   167,   189,   -59,   -59,   -59,   417,
     137,   181,    38,   -59,    29,   121,   143,   179,   190,    29,
     143,   144,   193,   501,   -59,   -59,   143,   192,   428,   199,
      29,    29,   201,   -59,   544,   204,   -59,   476,   550,   -59,
     205,   143,   215,   216,    45,   219,    29,   -59,   225,   211,
     556,    29,   232,   -59,   238,   562,   143,   248,   251,   252,
     249,    29,   -59,    29,   605,   611,   253,   254,   262,   -59,
     266,    29,   617,   268,   -59
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -59,   -59,   -59,   -59,   -59,   -59,   -59,   -17,   -59,   -59,
     -59,   -59,   -59,   -30,   -59,   -59,   -59,   -59,   -59
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      43,   114,     1,    64,    65,    66,    67,     3,    87,    13,
      14,    15,    16,     4,   164,   165,    76,    77,    78,    79,
      80,    81,     6,    89,    90,    80,    81,    74,    75,    88,
      96,    97,    20,    63,   166,     5,   170,   171,   100,   101,
     102,   103,   104,   105,   181,   182,   106,   107,   108,   109,
     110,   181,   208,   111,   112,   113,   115,     8,    20,    21,
      22,   119,     7,    23,    78,    79,    80,    81,    10,    24,
      11,    12,    33,    34,    35,    51,    54,    25,   123,    26,
      53,    55,    56,    27,    28,    57,    58,    59,    60,    61,
      36,    86,    29,    62,    30,    31,    68,    32,    33,    34,
      35,   146,    69,   150,    70,    71,    92,    72,    93,    73,
      91,    94,    95,    98,   120,   116,    36,   121,   122,    37,
      38,    39,    40,    41,    42,   126,   133,   169,   135,   136,
     137,   139,   175,   138,   160,   184,    76,    77,    78,    79,
      80,    81,   140,   141,   183,   151,    20,    21,    22,   188,
     152,    23,   153,   157,   142,   158,   143,   194,   144,   185,
     197,   198,   145,   189,   147,    25,   161,    26,    83,   193,
     162,    27,    28,   163,   172,   168,   210,    84,    85,   173,
      29,   215,    30,    31,   205,    32,    33,    34,    35,   174,
     176,   224,   177,   225,   180,    20,    21,   148,   179,   219,
      23,   232,   186,   187,    36,   190,   191,    37,    38,    39,
      40,    41,    42,   196,    25,   199,    26,   201,   212,   204,
      27,    28,    76,    77,    78,    79,    80,    81,   206,    29,
     207,    30,    31,   209,    32,    33,    34,    35,   211,    76,
      77,    78,    79,    80,    81,   216,    76,    77,    78,    79,
      80,    81,   217,    36,    83,   220,    37,    38,    39,    40,
      41,    42,   223,    84,    85,   221,   222,   228,   229,   230,
     131,    83,    76,    77,    78,    79,    80,    81,    83,   231,
      84,    85,   234,     0,     0,     0,    99,    84,    85,     0,
       0,     0,     0,   118,    76,    77,    78,    79,    80,    81,
       0,     0,     0,     0,    83,    76,    77,    78,    79,    80,
      81,     0,     0,    84,    85,     0,     0,     0,     0,   124,
       0,     0,     0,     0,     0,     0,    83,    76,    77,    78,
      79,    80,    81,     0,     0,    84,    85,    83,     0,     0,
       0,   125,     0,     0,     0,     0,    84,    85,     0,     0,
       0,     0,   127,    76,    77,    78,    79,    80,    81,    83,
      76,    77,    78,    79,    80,    81,     0,     0,    84,    85,
       0,     0,     0,     0,   128,     0,    76,    77,    78,    79,
      80,    81,     0,     0,     0,    83,     0,     0,     0,     0,
       0,     0,    83,     0,    84,    85,     0,     0,     0,     0,
     129,    84,    85,     0,     0,     0,     0,   130,    83,    76,
      77,    78,    79,    80,    81,     0,     0,    84,    85,     0,
       0,     0,     0,   132,     0,    76,    77,    78,    79,    80,
      81,     0,    76,    77,    78,    79,    80,    81,     0,     0,
       0,    83,     0,    76,    77,    78,    79,    80,    81,     0,
      84,    85,     0,     0,     0,     0,   134,    83,     0,     0,
       0,     0,     0,     0,    83,     0,    84,    85,     0,     0,
       0,     0,   156,    84,    85,    83,     0,     0,     0,   178,
       0,     0,     0,     0,    84,    85,     0,     0,     0,     0,
     195,    76,    77,    78,    79,    80,    81,     0,    76,    77,
      78,    79,    80,    81,    76,    77,    78,    79,    80,    81,
      76,    77,    78,    79,    80,    81,    76,    77,    78,    79,
      80,    81,     0,    83,     0,    82,     0,     0,     0,     0,
      83,   117,    84,    85,     0,     0,    83,   159,   202,    84,
      85,     0,    83,   192,     0,    84,    85,     0,    83,     0,
       0,    84,    85,     0,     0,     0,     0,    84,    85,    76,
      77,    78,    79,    80,    81,    76,    77,    78,    79,    80,
      81,    76,    77,    78,    79,    80,    81,    76,    77,    78,
      79,    80,    81,     0,     0,     0,   200,     0,     0,     0,
       0,    83,   203,     0,     0,     0,     0,    83,   214,     0,
      84,    85,     0,    83,   218,     0,    84,    85,     0,    83,
       0,     0,    84,    85,     0,     0,     0,     0,    84,    85,
      76,    77,    78,    79,    80,    81,    76,    77,    78,    79,
      80,    81,    76,    77,    78,    79,    80,    81,    76,    77,
      78,    79,    80,    81,     0,     0,     0,   226,     0,     0,
       0,     0,    83,   227,     0,     0,     0,     0,    83,   233,
       0,    84,    85,     0,    83,     0,     0,    84,    85,     0,
      83,     0,     0,    84,    85,     0,     0,     0,     0,    84,
      85
};

static const yytype_int16 yycheck[] =
{
      17,     3,    60,    33,    34,    35,    36,    54,    42,     9,
      10,    11,    12,     0,    26,    27,    15,    16,    17,    18,
      19,    20,    55,    53,    54,    19,    20,    44,    45,    63,
      60,    61,     3,     4,    46,    56,     6,     7,    68,    69,
      70,    71,    72,    73,     6,     7,    76,    77,    78,    79,
      80,     6,     7,    83,    84,    85,    58,    41,     3,     4,
       5,    91,    57,     8,    17,    18,    19,    20,    61,    14,
      62,    13,    43,    44,    45,     4,    61,    22,    95,    24,
      21,     4,    61,    28,    29,    61,    61,     4,    61,    61,
      61,    21,    37,    61,    39,    40,    61,    42,    43,    44,
      45,   131,    61,   133,    61,    61,     3,    61,     3,    61,
      61,     3,    13,     3,    23,     4,    61,    57,    62,    64,
      65,    66,    67,    68,    69,    62,    13,   157,    66,     3,
      13,    42,   162,    14,   151,    14,    15,    16,    17,    18,
      19,    20,    42,    42,   174,    13,     3,     4,     5,   179,
       3,     8,    62,    61,    42,    14,    42,   187,    42,   176,
     190,   191,    42,   180,    42,    22,    62,    24,    47,   186,
      13,    28,    29,    14,    14,    42,   206,    56,    57,    14,
      37,   211,    39,    40,   201,    42,    43,    44,    45,    13,
      23,   221,     3,   223,    13,     3,     4,     5,    61,   216,
       8,   231,    23,    13,    61,    61,    13,    64,    65,    66,
      67,    68,    69,    14,    22,    14,    24,    13,     7,    14,
      28,    29,    15,    16,    17,    18,    19,    20,    13,    37,
      14,    39,    40,    14,    42,    43,    44,    45,    13,    15,
      16,    17,    18,    19,    20,    13,    15,    16,    17,    18,
      19,    20,    14,    61,    47,     7,    64,    65,    66,    67,
      68,    69,    13,    56,    57,    14,    14,    14,    14,     7,
      63,    47,    15,    16,    17,    18,    19,    20,    47,    13,
      56,    57,    14,    -1,    -1,    -1,    62,    56,    57,    -1,
      -1,    -1,    -1,    62,    15,    16,    17,    18,    19,    20,
      -1,    -1,    -1,    -1,    47,    15,    16,    17,    18,    19,
      20,    -1,    -1,    56,    57,    -1,    -1,    -1,    -1,    62,
      -1,    -1,    -1,    -1,    -1,    -1,    47,    15,    16,    17,
      18,    19,    20,    -1,    -1,    56,    57,    47,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    -1,    56,    57,    -1,    -1,
      -1,    -1,    62,    15,    16,    17,    18,    19,    20,    47,
      15,    16,    17,    18,    19,    20,    -1,    -1,    56,    57,
      -1,    -1,    -1,    -1,    62,    -1,    15,    16,    17,    18,
      19,    20,    -1,    -1,    -1,    47,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    -1,    56,    57,    -1,    -1,    -1,    -1,
      62,    56,    57,    -1,    -1,    -1,    -1,    62,    47,    15,
      16,    17,    18,    19,    20,    -1,    -1,    56,    57,    -1,
      -1,    -1,    -1,    62,    -1,    15,    16,    17,    18,    19,
      20,    -1,    15,    16,    17,    18,    19,    20,    -1,    -1,
      -1,    47,    -1,    15,    16,    17,    18,    19,    20,    -1,
      56,    57,    -1,    -1,    -1,    -1,    62,    47,    -1,    -1,
      -1,    -1,    -1,    -1,    47,    -1,    56,    57,    -1,    -1,
      -1,    -1,    62,    56,    57,    47,    -1,    -1,    -1,    62,
      -1,    -1,    -1,    -1,    56,    57,    -1,    -1,    -1,    -1,
      62,    15,    16,    17,    18,    19,    20,    -1,    15,    16,
      17,    18,    19,    20,    15,    16,    17,    18,    19,    20,
      15,    16,    17,    18,    19,    20,    15,    16,    17,    18,
      19,    20,    -1,    47,    -1,    42,    -1,    -1,    -1,    -1,
      47,    42,    56,    57,    -1,    -1,    47,    42,    62,    56,
      57,    -1,    47,    42,    -1,    56,    57,    -1,    47,    -1,
      -1,    56,    57,    -1,    -1,    -1,    -1,    56,    57,    15,
      16,    17,    18,    19,    20,    15,    16,    17,    18,    19,
      20,    15,    16,    17,    18,    19,    20,    15,    16,    17,
      18,    19,    20,    -1,    -1,    -1,    42,    -1,    -1,    -1,
      -1,    47,    42,    -1,    -1,    -1,    -1,    47,    42,    -1,
      56,    57,    -1,    47,    42,    -1,    56,    57,    -1,    47,
      -1,    -1,    56,    57,    -1,    -1,    -1,    -1,    56,    57,
      15,    16,    17,    18,    19,    20,    15,    16,    17,    18,
      19,    20,    15,    16,    17,    18,    19,    20,    15,    16,
      17,    18,    19,    20,    -1,    -1,    -1,    42,    -1,    -1,
      -1,    -1,    47,    42,    -1,    -1,    -1,    -1,    47,    42,
      -1,    56,    57,    -1,    47,    -1,    -1,    56,    57,    -1,
      47,    -1,    -1,    56,    57,    -1,    -1,    -1,    -1,    56,
      57
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    60,    71,    54,     0,    56,    55,    57,    41,    72,
      61,    62,    13,     9,    10,    11,    12,    73,    74,    75,
       3,     4,     5,     8,    14,    22,    24,    28,    29,    37,
      39,    40,    42,    43,    44,    45,    61,    64,    65,    66,
      67,    68,    69,    77,    78,    80,    83,    84,    85,    86,
      87,     4,    76,    21,    61,     4,    61,    61,    61,     4,
      61,    61,    61,     4,    83,    83,    83,    83,    61,    61,
      61,    61,    61,    61,    77,    77,    15,    16,    17,    18,
      19,    20,    42,    47,    56,    57,    21,    42,    63,    83,
      83,    61,     3,     3,     3,    13,    83,    83,     3,    62,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    83,     3,    58,     4,    42,    62,    83,
      23,    57,    62,    77,    62,    62,    62,    62,    62,    62,
      62,    63,    62,    13,    62,    66,     3,    13,    14,    42,
      42,    42,    42,    42,    42,    42,    83,    42,     5,    77,
      83,    13,     3,    62,    79,    81,    62,    61,    14,    42,
      77,    62,    13,    14,    26,    27,    46,    82,    42,    83,
       6,     7,    14,    14,    13,    83,    23,     3,    62,    61,
      13,     6,     7,    83,    14,    77,    23,    13,    83,    77,
      61,    13,    42,    77,    83,    62,    14,    83,    83,    14,
      42,    13,    62,    42,    14,    77,    13,    14,     7,    14,
      83,    13,     7,    88,    42,    83,    13,    14,    42,    77,
       7,    14,    14,    13,    83,    83,    42,    42,    14,    14,
       7,    13,    83,    42,    14
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 109 "bison.y"
    { 
         printf("\nHeader found\n");
         strcpy((yyval.string), "start");
     ;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 116 "bison.y"
    { 
             printf("\nSuccessful compilation\n");
             strcpy((yyval.string), "main");
         ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 123 "bison.y"
    { 
                  strcpy((yyval.string), ""); 
              ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 127 "bison.y"
    { 
                  strcpy((yyval.string), (yyvsp[(1) - (1)].string)); 
              ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 131 "bison.y"
    {
                  strcpy((yyval.string), "statement");
              ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 137 "bison.y"
    { 
                printf("\nvalid declaration\n");
                strcpy((yyval.string), (yyvsp[(1) - (3)].string));
            ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 149 "bison.y"
    {
						if(isDeclared((yyvsp[(3) - (3)].string)))
						{
							printf("%s is already declared\n", (yyvsp[(3) - (3)].string) );
						}
						else
						{
							
							addDatainData(cnt,(yyvsp[(3) - (3)].string),cnt);
							cnt++;
							
						}
			;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 163 "bison.y"
    {
				if(isDeclared((yyvsp[(1) - (1)].string)))
				{
					printf("%s is already declared\n", (yyvsp[(1) - (1)].string) );
				}
				else
				{
					
					addDatainData(cnt,(yyvsp[(1) - (1)].string), cnt);
					cnt++;
				}
			;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 175 "bison.y"
    {
				if(isDeclared((yyvsp[(1) - (3)].string)))
				{
					printf("%s is already declared\n", (yyvsp[(1) - (3)].string) );
				}
				else
				{
					// addData(&data[cnt],$1, $3);
					addDatainData(cnt,(yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].fvalue));
					cnt++;		
				}
							
						;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 188 "bison.y"
    {
				if(isDeclared((yyvsp[(1) - (3)].string)))
				{
					printf("%s is already declared\n", (yyvsp[(1) - (3)].string) );
				}
				else
				{
					//addData(&data[cnt],$1, $3);
					addDatainData(cnt,(yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].number));
							cnt++;
				}
							
	;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 207 "bison.y"
    {printf("\nPrint Expression %d\n",(yyvsp[(3) - (5)].number));;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 208 "bison.y"
    { printf("\nvalue of expression: %d\n", ((yyvsp[(1) - (2)].number))); ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 210 "bison.y"
    {
    			  float e=sin((yyvsp[(3) - (5)].number) * 3.14/180);
    			  printf("sin(%d) is %.5f\n",(yyvsp[(3) - (5)].number),e);
    			;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 215 "bison.y"
    {
    			float e=cos((yyvsp[(3) - (5)].number)* 3.14/180);
    			  printf("cos(%d) is %.5f\n",(yyvsp[(3) - (5)].number),e);
    			;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 220 "bison.y"
    {
    			 float e=tan((yyvsp[(3) - (5)].number)* 3.14/180);
    			  printf("tan(%d) is %.5f\n",(yyvsp[(3) - (5)].number),e);
    			;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 225 "bison.y"
    {
    			  float e=log((yyvsp[(3) - (5)].number));
    			  printf("log(%d) is %.5f\n",(yyvsp[(3) - (5)].number),e);
    			;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 230 "bison.y"
    {
    			   float e=sqrt((yyvsp[(3) - (5)].number));
    			   printf("square root of %d is %f\n",(yyvsp[(3) - (5)].number),e);

    			;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 235 "bison.y"
    {
		printf("Odd Even Number detection \n");

		if((yyvsp[(3) - (5)].number) %2 ==0){
			printf("Number : %d is -> Even\n",(yyvsp[(3) - (5)].number));
		}
		else{
			printf("Number is :%d is -> Odd\n",(yyvsp[(3) - (5)].number));
		}
		;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 246 "bison.y"
    {
    			   int i,n1,n2,gcd;
					n1=(yyvsp[(3) - (7)].number);
					n2=(yyvsp[(5) - (7)].number);
				for(i=1; i <= n1 && i <= n2; ++i)
    			  {
        
        			if(n1%i==0 && n2%i==0)
            		gcd = i;
    			   }
    			 printf("G.C.D of %d and %d is %d\n", n1, n2, gcd);
    			;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 259 "bison.y"
    {int i, n=(yyvsp[(3) - (5)].number),flag=0;
    			for (i = 2; i <= n / 2; ++i) {
    					if (n % i == 0) {
      							flag = 1;
     							 break;
    								}
  						}

  					if (n == 1) {
    					printf("1 is neither prime nor composite.\n");} 
  					else {
    					if (flag == 0)
      					printf("%d is a prime number.\n", n);
   						 else
      					printf("%d is not a prime number.\n", n);}
    				;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 275 "bison.y"
    {
							if(isDeclared((yyvsp[(1) - (4)].string))){
								int i = isDeclaredAgain((yyvsp[(1) - (4)].string));
								if (!i){
									//addData(&symbol[c2], $1, $3);
									addDataInSymbol(c2,(yyvsp[(1) - (4)].string),(yyvsp[(3) - (4)].number));
									c2++;
								}
								symbol[i].value = (yyvsp[(3) - (4)].number);
								printf("\n(%s) Value of the variable: %d\t\n",(yyvsp[(1) - (4)].string),(yyvsp[(3) - (4)].number));
							}
							else {
								printf("%s not declared yet\n",(yyvsp[(1) - (4)].string));
							}
							
						;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 292 "bison.y"
    {
								if((yyvsp[(3) - (8)].number))
								{
									printf("\nvalue of expression in IF: %d\n",((yyvsp[(6) - (8)].number)));
								}
								else
								{
									printf("\ncondition value zero in IF block\n");
								}
							;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 303 "bison.y"
    {
								 	if((yyvsp[(3) - (13)].number))
									{
										printf("\nvalue of expression in IF: %d\n",(yyvsp[(6) - (13)].number));
									}
									else
									{
										printf("\nvalue of expression in ELSE: %d\n",(yyvsp[(11) - (13)].number));
									}
								   ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 313 "bison.y"
    {
								 	if((yyvsp[(3) - (26)].number))
									{
										if((yyvsp[(8) - (26)].number))
											printf("\nvalue of expression middle IF: %d\n",(yyvsp[(11) - (26)].number));
										else
											printf("\nvalue of expression middle ELSE: %d\n",(yyvsp[(16) - (26)].number));
										printf("\nvalue of expression in first IF: %d\n",(yyvsp[(19) - (26)].number));
									}
									else
									{
										printf("\nvalue of expression in else: %d\n",(yyvsp[(24) - (26)].number));
									}
								   ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 327 "bison.y"
    {
								 	if((yyvsp[(3) - (21)].number))
									{
										printf("\nvalue of expression in IF: %d\n",(yyvsp[(6) - (21)].number));
									}
									else if((yyvsp[(11) - (21)].number))
									{
										printf("\nvalue of expression in ELIF: %d\n",(yyvsp[(14) - (21)].number));
									}
									else
									{
										printf("\nvalue of expression in ELSE: %d\n",(yyvsp[(19) - (21)].number));
									}
								   ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 342 "bison.y"
    {
	   int i=0;
	   for(i=(yyvsp[(3) - (11)].number);i<(yyvsp[(6) - (11)].number);i++){
	   printf("for loop statement in %d no. execution\n",i);
	   }
	;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 348 "bison.y"
    {
										int i;
										printf("While LOOP: %d %d\n", (yyvsp[(3) - (9)].number),(yyvsp[(5) - (9)].number));
										for(i=(yyvsp[(3) - (9)].number);i>=(yyvsp[(5) - (9)].number);i--)
										{
											printf("%d \n",i);
										}
										printf("\n");
										printf("value of the expression: %d\n",(yyvsp[(8) - (9)].number));

	;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 359 "bison.y"
    {
		printf("FUNCTION found :  \n");
		printf("Function Parameter : %d\n",(yyvsp[(4) - (8)].number));
	;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 367 "bison.y"
    {
              printf("\nSWITCH CASE Declaration\n");
              printf("\nFinally Choose Case number :-> %d\n",(yyvsp[(3) - (7)].number));
              strcpy((yyval.string), "switch");
          ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 376 "bison.y"
    { 
                 strcpy((yyval.string), (yyvsp[(1) - (1)].string)); 
             ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 380 "bison.y"
    {
                 strcpy((yyval.string), "switch");
             ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 384 "bison.y"
    {
	printf("class declared %s\n", (yyvsp[(2) - (5)].string));
;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 389 "bison.y"
    { 
               strcpy((yyval.string), ""); 
           ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 393 "bison.y"
    {
               strcpy((yyval.string), "case");
           ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 398 "bison.y"
    {printf("Case No : %d\n",(yyvsp[(2) - (4)].number));;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 399 "bison.y"
    {
 				printf("\nDefault case & expression value");
 			;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 405 "bison.y"
    { (yyval.number) = (yyvsp[(1) - (1)].number); 	;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 407 "bison.y"
    { int idx = isDeclaredAgain((yyvsp[(1) - (1)].string)); 
	if(idx==0){
		(yyval.number) = isDeclared((yyvsp[(1) - (1)].string));
	}else{
		(yyval.number) = symbol[idx].value;
	}
	printf("Variable value: %s %d\n",(yyvsp[(1) - (1)].string),(yyval.number));
	
	;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 417 "bison.y"
    { 
		if((yyvsp[(1) - (3)].number)==(yyvsp[(3) - (3)].number)){
			(yyval.number) = 1;
		}
		else{
			(yyval.number) = 0;
		}
		//printf("check me %d %d %d\n", $1, $3, $$);
		
	 ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 428 "bison.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) + (yyvsp[(3) - (3)].number); ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 430 "bison.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) - (yyvsp[(3) - (3)].number); ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 432 "bison.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) * (yyvsp[(3) - (3)].number); ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 434 "bison.y"
    { 	if((yyvsp[(3) - (3)].number)) 
				  		{
				     			(yyval.number) = (yyvsp[(1) - (3)].number) / (yyvsp[(3) - (3)].number);
				  		}
				  		else
				  		{
							(yyval.number) = 0;
							printf("\ndivision by zero\t");
				  		} 	
				    	;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 444 "bison.y"
    { (yyval.number) = pow((yyvsp[(1) - (3)].number),(yyvsp[(3) - (3)].number)); ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 446 "bison.y"
    {
						int mult=1 ,i;
						for(i=(yyvsp[(1) - (2)].number);i>0;i--)
						{
							mult=mult*i;
						}
						(yyval.number)=mult;
						
					 ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 456 "bison.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) < (yyvsp[(3) - (3)].number); ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 458 "bison.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) > (yyvsp[(3) - (3)].number); ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 460 "bison.y"
    { (yyval.number) = (yyvsp[(2) - (3)].number);	;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 462 "bison.y"
    { (yyval.number)=(yyvsp[(2) - (2)].number)+1; printf("inc: %d\n",(yyval.number));;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 464 "bison.y"
    { (yyval.number)=(yyvsp[(2) - (2)].number)-1; printf("dec: %d\n",(yyval.number));;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 466 "bison.y"
    {
						if((yyvsp[(2) - (2)].number) != 0)
						{
							(yyval.number) = 0; printf("not: %d\n",(yyval.number));
						}
						else{
							(yyval.number) = 1 ; printf("aff: %d\n",(yyval.number));
						}
					;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 484 "bison.y"
    {
            if((yyvsp[(3) - (7)].number)) {
                printf("\nvalue of expression in IF: %d\n",(yyvsp[(6) - (7)].string));
            }
            strcpy((yyval.string), "if");
        ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 493 "bison.y"
    {
           if((yyvsp[(3) - (11)].number)) {
               printf("\nvalue of expression in IF: %d\n",(yyvsp[(6) - (11)].string));
           } else {
               printf("\nvalue of expression in ELSE: %d\n",(yyvsp[(10) - (11)].string));
           }
           strcpy((yyval.string), "if-else");
       ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 504 "bison.y"
    {
               if((yyvsp[(3) - (15)].number)) {
                   printf("\nvalue of expression in IF: %d\n",(yyvsp[(6) - (15)].string));
               } else if((yyvsp[(10) - (15)].number)) {
                   printf("\nvalue of expression in ELIF: %d\n",(yyvsp[(13) - (15)].string));
               }
               strcpy((yyval.string), "if-elif-else");
           ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 516 "bison.y"
    { 
            strcpy((yyval.string), "else"); 
        ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 520 "bison.y"
    { 
            strcpy((yyval.string), ""); 
        ;}
    break;



/* Line 1455 of yacc.c  */
#line 2382 "bison.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 525 "bison.y"


int yyerror(char *s){
    fflush(stdout);
	printf("error");
 	printf("EEK, parse error!  Message: %s\n",s);
}


