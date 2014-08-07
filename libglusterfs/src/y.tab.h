/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison interface for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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

#ifndef YY_GRAPHYY_Y_TAB_H_INCLUDED
# define YY_GRAPHYY_Y_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int graphyydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     VOLUME_BEGIN = 258,
     VOLUME_END = 259,
     OPTION = 260,
     NEWLINE = 261,
     SUBVOLUME = 262,
     ID = 263,
     WHITESPACE = 264,
     COMMENT = 265,
     TYPE = 266,
     STRING_TOK = 267
   };
#endif
/* Tokens.  */
#define VOLUME_BEGIN 258
#define VOLUME_END 259
#define OPTION 260
#define NEWLINE 261
#define SUBVOLUME 262
#define ID 263
#define WHITESPACE 264
#define COMMENT 265
#define TYPE 266
#define STRING_TOK 267



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE graphyylval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int graphyyparse (void *YYPARSE_PARAM);
#else
int graphyyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int graphyyparse (void);
#else
int graphyyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_GRAPHYY_Y_TAB_H_INCLUDED  */
