
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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

/* Line 1676 of yacc.c  */
#line 66 "bison.y"

		float fvalue;
        int number;
        char string[1009];



/* Line 1676 of yacc.c  */
#line 119 "bison.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


