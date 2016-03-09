%{
#include <stdlib.h>
#include <stdio.h>
#include <y.tab.h>
%}

digit	[0-9]
letter [a-zA-Z]
 
%%

while							{ return WHILE; }

{letter}({letter}|{digit})*		{ yylval.name = yytext; return IDENT; }

{digit}+						{ yylval.num = atoi(yytext); return NUMBER; }


,								{ return ','; }		

>=								{ return GE; }	

>								{ return '>'; }	

[ \r\n\t]						/* skip whitespace */

.								{ fprintf(stderr, "invalid character '%c'\n", *yytext); exit(0); }

%%

