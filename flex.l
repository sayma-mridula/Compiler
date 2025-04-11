%{
	#include "bison.tab.h"
	#include<stdio.h>
	#include<string.h>
	#include<math.h>
	#include<stdlib.h>
	int yyparse();
    int yylex();  
    int yyerror();
	FILE *flexo;
%}

single_line_comment [/][/].*
multiple_line_comment [/][*][A-Za-z0-9. \n]*[*][/]
User_Datatype "intg"|"float"|"charac"|"long"
variable "Var_"[a-zA-Z]([a-zA-Z0-9])*[?]
logical_operator "&&"|"||"|"!!"
digit [0-9]
IDENTIFIER [a-zA-Z]([a-zA-Z0-9])*



%%  

{single_line_comment} {
	fprintf(flexo,"This is single line comment %s\n", yytext);
}
{multiple_line_comment} {
	fprintf(flexo,"This is multiple line comment %s\n", yytext);
}

":="      {fprintf(flexo,"31 %s\n", yytext);return asgn;}
"intg"	{fprintf(flexo,"32 %s\n", yytext);return INT; } 
"float"	{fprintf(flexo,"33 %s\n", yytext);return FLOAT; }
"charac"	{fprintf(flexo,"34 %s\n", yytext);return CHAR; }
"long"	{fprintf(flexo,"35 %s\n", yytext);return DOUBLE; }
"Assignplus"	{fprintf(flexo,"36 %s\n", yytext);return ASSIGNPLUS; }
"Assignminus"	{fprintf(flexo,"37 %s\n", yytext);return ASSIGNMINUS; }
"Assignmul"	{fprintf(flexo,"38 %s\n", yytext);return ASSIGNMUL; }
"Assigndiv"	{fprintf(flexo,"39 %s\n", yytext);return ASSIGNDIV; }
"show"	{fprintf(flexo,"40 %s\n", yytext);return PRINTF; }
"in"	{fprintf(flexo,"41 %s\n", yytext);return SCANF; }
"inc"  {fprintf(flexo,"42 %s\n", yytext);return INC; }
"dec"  {fprintf(flexo,"43 %s\n", yytext);return DEC; }
"Gt" {fprintf(flexo,"44 %s\n", yytext);return GT; }
"Lt" {fprintf(flexo,"45 %s\n", yytext);return LT; }
"eq" {fprintf(flexo,"46 %s\n", yytext);return EQ; }
"neq" {fprintf(flexo,"47 %s\n", yytext);return NEQ; }
"Geq" {fprintf(flexo,"48 %s\n", yytext);return GEQ; }
"Leq" {fprintf(flexo,"49 %s\n", yytext);return LEQ; }
{logical_operator} {fprintf(flexo,"50 %s\n", yytext);return LOGICALOPERATOR; }
"ARRAY"	{fprintf(flexo,"51 %s\n", yytext);return ARRAY; }
"(" {fprintf(flexo,"52 %s\n", yytext);return *yytext; }
")" {fprintf(flexo,"53 %s\n", yytext);return *yytext; }
"Begin" {fprintf(flexo,"54 %s\n", yytext);return SBS; }
"End" {fprintf(flexo,"55 %s\n", yytext);return SBE; }
"[" {fprintf(flexo,"56 %s\n", yytext);return *yytext; }
"]" {fprintf(flexo,"57 %s\n", yytext);return *yytext; }
"jog" {fprintf(flexo,"58 %s\n", yytext);return JOG; }
"biyog" {fprintf(flexo,"59 %s\n", yytext);return BIYOG; }
"gun" {fprintf(flexo,"60 %s\n", yytext);return GUN; }
"vag"  {fprintf(flexo,"61 %s\n", yytext);return VAG; }
"mod" {fprintf(flexo,"62 %s\n", yytext);return MOD; }
"power"  {fprintf(flexo,"63 %s\n", yytext);return POW; }
"facto"  {fprintf(flexo,"64 %s\n", yytext);return FACT; }
"forl"  {fprintf(flexo,"65 %s\n", yytext);return FOR; }
"switchto"  {fprintf(flexo,"66 %s\n", yytext);return SWITCH; }
"case" {fprintf(flexo,"67 %s\n", yytext);return CASE; }
"Builtin" {fprintf(flexo,"68 %s\n", yytext);return DEFAULT; }
"go_out" {fprintf(flexo,"69 %s\n", yytext);return BREAK; }
"isit" {fprintf(flexo,"70 %s\n", yytext);return IF; }
"orisit" {fprintf(flexo,"71 %s\n", yytext);return ELIF; }
"or" {fprintf(flexo,"72 %s\n", yytext);return ELSE; }
"sin" {fprintf(flexo,"73 %s\n", yytext);return *yytext; }
"cos" {fprintf(flexo,"74 %s\n", yytext);return *yytext; }
"tan" {fprintf(flexo,"75 %s\n", yytext);return *yytext; }
"log" {fprintf(flexo,"76 %s\n", yytext);return *yytext; }
"gcd" {fprintf(flexo,"76.1 %s\n", yytext);return *yytext; }
"prime" {fprintf(flexo,"76.2 %s\n", yytext);return *yytext; }
"squaroot"	{fprintf(flexo,"77 %s\n", yytext);return SQRT; }
"ODDEVEN"	{fprintf(flexo,"78 %s\n", yytext);return ODDEVEN; }
"next"    {fprintf(flexo,"79 %s\n", yytext);return CONTINUE; }
"start" {fprintf(flexo,"80 %s\n", yytext);return MAIN; }
"ret" {fprintf(flexo,"81 %s\n", yytext);return RETURN; }
"try"	{fprintf(flexo,"82 %s\n", yytext);return TRY; }
"catch"	{fprintf(flexo,"83 %s\n", yytext);return CATCH; }
"while"	{fprintf(flexo,"96 %s\n", yytext);return WHILE; }
"func"	{fprintf(flexo,"96 %s\n", yytext);return FUNCTION; }
"class" {fprintf(flexo,"84 %s\n", yytext);return CLASS; }
"IMPORT" {fprintf(flexo,"85 %s\n", yytext);return import; }
{IDENTIFIER}".h" {fprintf(flexo,"86 %s\n", yytext); return HEADER; }

[+-]?[0-9]+ {fprintf(flexo,"87 %s\n", yytext); 
	int n = atoi(yytext);
	yylval.number = n;
	return NUM;
}
[-+]?{digit}*"."{digit}+	{fprintf(flexo,"88 %s\n", yytext);
	yylval.fvalue=atof(yytext);
	return NUMBERF;
}

"," {fprintf(flexo,"89 %s\n", yytext);return *yytext;}
"#" {fprintf(flexo,"90 %s\n", yytext);return *yytext; }
"::" {fprintf(flexo,"91 %s\n", yytext);return COLON;}
";;" {fprintf(flexo,"92 %s\n", yytext);return SC;}
{variable} {fprintf(flexo,"93 %s\n", yytext);
	char* a=strdup(yytext);
    char s[50];
    int j = 0;
    for(int i = 4 ; a[i] != '?' ; i++){
        s[j++] = a[i];
    }
    s[j] = '\0';
	strcpy(yylval.string,s);
	fprintf(flexo,"check var %s\n", s);
	return VAR;
}
"to" {fprintf(flexo,"93.1 %s\n", yytext);return *yytext; }
[ \t\n]*	

.	{fprintf(flexo,"94 %s\n", yytext);}



%%


int yywrap(){
	return 1;
}
int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout); 
	flexo = fopen("lex_out.txt","w");
	yyparse();
}
