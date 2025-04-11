%{
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
%}

%union 
{
		float fvalue;
        int number;
        char string[1009];
}

%token <number> NUM
%token <string> VAR 
%type <string> VARNAME
%token <string> IF ELIF ELSE FUNCTION INT FLOAT DOUBLE CHAR SBS SBE JOG BIYOG GUN VAG POW FACT asgn
 				FOR COLON WHILE BREAK DEFAULT CASE SWITCH CLASS TRY CATCH ARRAY ASSIGNPLUS ASSIGNMINUS ASSIGNMUL
  				ASSIGNDIV PRINTF SCANF SQRT ODDEVEN MAIN SC INC DEC NEQ DefaultGrammer EQ GEQ LEQ MOD CONTINUE
   				RETURN LOGICALOPERATOR import HEADER LT GT
%type <string> statement
%type <number> expression
%token<fvalue> NUMBERF
%nonassoc IFX
%nonassoc ELIF
%nonassoc ELSE
%left LT GT EQ
%left JOG BIYOG
%left GUN VAG
%left FACT
%left POW

%type <string> start
%type <string> codestart
%type <string> statementstart
%type <string> declarestart
%type <string> type
%type <string> SwitchCase
%type <string> SwitchGrammer
%type <string> CaseGrammer
%type <string> casenumber
%type <string> ClassCase
%type <string> if_stmt
%type <string> else_part
%type <string> simple_if
%type <string> if_else
%type <string> if_elif_else

%%
start: '#' import LT HEADER GT codestart 
     { 
         printf("\nHeader found\n");
         strcpy($$, "start");
     }
     ;

codestart: MAIN '(' ')' SBS statementstart SBE 
         { 
             printf("\nSuccessful compilation\n");
             strcpy($$, "main");
         }
         ;

statementstart: /* empty */
              { 
                  strcpy($$, ""); 
              }
              | declarestart 
              { 
                  strcpy($$, $1); 
              }
              | statementstart statement
              {
                  strcpy($$, "statement");
              }
              ;

declarestart:	type VARNAME SC	
            { 
                printf("\nvalid declaration\n");
                strcpy($$, $1);
            }
            ;
			
type : INT
     | FLOAT
     | CHAR
	 | DOUBLE
     ;

VARNAME  : VARNAME ',' VAR	{
						if(isDeclared($3))
						{
							printf("%s is already declared\n", $3 );
						}
						else
						{
							
							addDatainData(cnt,$3,cnt);
							cnt++;
							
						}
			}

     |VAR	{
				if(isDeclared($1))
				{
					printf("%s is already declared\n", $1 );
				}
				else
				{
					
					addDatainData(cnt,$1, cnt);
					cnt++;
				}
			}
	| VAR asgn NUMBERF	{
				if(isDeclared($1))
				{
					printf("%s is already declared\n", $1 );
				}
				else
				{
					// addData(&data[cnt],$1, $3);
					addDatainData(cnt,$1, $3);
					cnt++;		
				}
							
						}
	| VAR asgn NUM	{
				if(isDeclared($1))
				{
					printf("%s is already declared\n", $1 );
				}
				else
				{
					//addData(&data[cnt],$1, $3);
					addDatainData(cnt,$1, $3);
							cnt++;
				}
							
	}
     ;

statement: if_stmt
        | SC
        | ClassCase statement
        | SwitchCase statement
        | PRINTF '(' expression ')' SC {printf("\nPrint Expression %d\n",$3);}
        | expression SC 			{ printf("\nvalue of expression: %d\n", ($1)); }
        |'sin' '(' expression ')' SC     
    			{
    			  float e=sin($3 * 3.14/180);
    			  printf("sin(%d) is %.5f\n",$3,e);
    			}     
    |'cos' '(' expression ')' SC     
    			{
    			float e=cos($3* 3.14/180);
    			  printf("cos(%d) is %.5f\n",$3,e);
    			}            			   
    |'tan' '(' expression ')' SC     
    			{
    			 float e=tan($3* 3.14/180);
    			  printf("tan(%d) is %.5f\n",$3,e);
    			}  
    |'log' '(' expression ')' SC     
    			{
    			  float e=log($3);
    			  printf("log(%d) is %.5f\n",$3,e);
    			}   
    |SQRT '(' expression ')' SC  
    			{
    			   float e=sqrt($3);
    			   printf("square root of %d is %f\n",$3,e);

    			} 
	| ODDEVEN '(' NUM ')' SC {
		printf("Odd Even Number detection \n");

		if($3 %2 ==0){
			printf("Number : %d is -> Even\n",$3);
		}
		else{
			printf("Number is :%d is -> Odd\n",$3);
		}
		}
	|'gcd' '(' expression ',' expression ')' SC  
    			{
    			   int i,n1,n2,gcd;
					n1=$3;
					n2=$5;
				for(i=1; i <= n1 && i <= n2; ++i)
    			  {
        
        			if(n1%i==0 && n2%i==0)
            		gcd = i;
    			   }
    			 printf("G.C.D of %d and %d is %d\n", n1, n2, gcd);
    			}  	
    |'prime' '(' expression ')' SC
    			{int i, n=$3,flag=0;
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
    				} 
    | VAR asgn expression SC 		{
							if(isDeclared($1)){
								int i = isDeclaredAgain($1);
								if (!i){
									//addData(&symbol[c2], $1, $3);
									addDataInSymbol(c2,$1,$3);
									c2++;
								}
								symbol[i].value = $3;
								printf("\n(%s) Value of the variable: %d\t\n",$1,$3);
							}
							else {
								printf("%s not declared yet\n",$1);
							}
							
						}

	| IF '(' expression ')' SBS expression SC SBE %prec IFX {
								if($3)
								{
									printf("\nvalue of expression in IF: %d\n",($6));
								}
								else
								{
									printf("\ncondition value zero in IF block\n");
								}
							}

	| IF '(' expression ')' SBS expression SC SBE ELSE SBS expression SC SBE {
								 	if($3)
									{
										printf("\nvalue of expression in IF: %d\n",$6);
									}
									else
									{
										printf("\nvalue of expression in ELSE: %d\n",$11);
									}
								   }
	| IF '(' expression ')' SBS IF '(' expression ')' SBS expression SC SBE ELSE SBS expression SC SBE expression SC SBE ELSE SBS expression SC SBE %prec IFX {
								 	if($3)
									{
										if($8)
											printf("\nvalue of expression middle IF: %d\n",$11);
										else
											printf("\nvalue of expression middle ELSE: %d\n",$16);
										printf("\nvalue of expression in first IF: %d\n",$19);
									}
									else
									{
										printf("\nvalue of expression in else: %d\n",$24);
									}
								   }
	| IF '(' expression ')' SBS expression SC SBE ELIF '(' expression ')' SBS expression SC SBE ELSE SBS expression SC SBE {
								 	if($3)
									{
										printf("\nvalue of expression in IF: %d\n",$6);
									}
									else if($11)
									{
										printf("\nvalue of expression in ELIF: %d\n",$14);
									}
									else
									{
										printf("\nvalue of expression in ELSE: %d\n",$19);
									}
								   }							   
	
	| FOR '(' NUM COLON 'to' NUM ')' SBS expression SC SBE     {
	   int i=0;
	   for(i=$3;i<$6;i++){
	   printf("for loop statement in %d no. execution\n",i);
	   }
	}
	| WHILE '(' NUM GT NUM ')' SBS expression SBE   {
										int i;
										printf("While LOOP: %d %d\n", $3,$5);
										for(i=$3;i>=$5;i--)
										{
											printf("%d \n",i);
										}
										printf("\n");
										printf("value of the expression: %d\n",$8);

	}
	| FUNCTION VAR '(' expression ')' SBS statement SBE {
		printf("FUNCTION found :  \n");
		printf("Function Parameter : %d\n",$4);
	}
	;


SwitchCase   : SWITCH '(' NUM ')' SBS SwitchGrammer SBE 
          {
              printf("\nSWITCH CASE Declaration\n");
              printf("\nFinally Choose Case number :-> %d\n",$3);
              strcpy($$, "switch");
          }
          ;


SwitchGrammer: CaseGrammer
             { 
                 strcpy($$, $1); 
             }
             | CaseGrammer DefaultGrammer
             {
                 strcpy($$, "switch");
             }
             ;
ClassCase: CLASS VAR SBS statement SBE {
	printf("class declared %s\n", $2);
}
;
CaseGrammer: /* empty */
           { 
               strcpy($$, ""); 
           }
           | CaseGrammer casenumber
           {
               strcpy($$, "case");
           }
           ;

 casenumber: CASE NUM COLON statement {printf("Case No : %d\n",$2);}
			| DEFAULT COLON statement {
 				printf("\nDefault case & expression value");
 			}
 		;
	
	
expression: NUM				{ $$ = $1; 	}

	| VAR				{ int idx = isDeclaredAgain($1); 
	if(idx==0){
		$$ = isDeclared($1);
	}else{
		$$ = symbol[idx].value;
	}
	printf("Variable value: %s %d\n",$1,$$);
	
	}

	| expression EQ expression	{ 
		if($1==$3){
			$$ = 1;
		}
		else{
			$$ = 0;
		}
		//printf("check me %d %d %d\n", $1, $3, $$);
		
	 }

	| expression JOG expression	{ $$ = $1 + $3; }

	| expression BIYOG expression	{ $$ = $1 - $3; }

	| expression GUN expression	{ $$ = $1 * $3; }

	| expression VAG expression	{ 	if($3) 
				  		{
				     			$$ = $1 / $3;
				  		}
				  		else
				  		{
							$$ = 0;
							printf("\ndivision by zero\t");
				  		} 	
				    	}
	| expression POW expression { $$ = pow($1,$3); }

	| expression FACT {
						int mult=1 ,i;
						for(i=$1;i>0;i--)
						{
							mult=mult*i;
						}
						$$=mult;
						
					 }	

	| expression LT expression	{ $$ = $1 < $3; }

	| expression GT expression	{ $$ = $1 > $3; }

	| '(' expression ')'		{ $$ = $2;	}
	
	| INC expression        { $$=$2+1; printf("inc: %d\n",$$);}

	| DEC expression         { $$=$2-1; printf("dec: %d\n",$$);}

	| NEQ expression  {
						if($2 != 0)
						{
							$$ = 0; printf("not: %d\n",$$);
						}
						else{
							$$ = 1 ; printf("aff: %d\n",$$);
						}
					}
	;

// Add if_stmt to your statement rule options
if_stmt: simple_if
       | if_else
       | if_elif_else
       ;

simple_if: IF '(' expression ')' SBS statement SBE %prec IFX
        {
            if($3) {
                printf("\nvalue of expression in IF: %d\n",$6);
            }
            strcpy($$, "if");
        }
        ;

if_else: IF '(' expression ')' SBS statement SBE ELSE SBS statement SBE
       {
           if($3) {
               printf("\nvalue of expression in IF: %d\n",$6);
           } else {
               printf("\nvalue of expression in ELSE: %d\n",$10);
           }
           strcpy($$, "if-else");
       }
       ;

if_elif_else: IF '(' expression ')' SBS statement SBE ELIF '(' expression ')' SBS statement SBE else_part
           {
               if($3) {
                   printf("\nvalue of expression in IF: %d\n",$6);
               } else if($10) {
                   printf("\nvalue of expression in ELIF: %d\n",$13);
               }
               strcpy($$, "if-elif-else");
           }
           ;

// Define else_part rules
else_part: ELSE SBS statement SBE 
        { 
            strcpy($$, "else"); 
        }
        | /* empty */ 
        { 
            strcpy($$, ""); 
        }
        ;

%%

int yyerror(char *s){
    fflush(stdout);
	printf("error");
 	printf("EEK, parse error!  Message: %s\n",s);
}

