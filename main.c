#include <stdio.h>
#include "y.tab.h"

YYSTYPE yylval;

int yywrap(void) 
{
 return 1;
}

int yylex();

int main(int argc, char* argv[])
{
	//yyin = fopen(argv[1], "r");

	int token;
	do
	{
		token = yylex();
		printf("next token: ");
		switch (token)
		{
		case NUMBER: 
			printf("NUMBER (%d)\n", yylval.num);
			break;
		case IDENT: 
			printf("IDENTIFIER (%d)\n", yylval.name);
			break;
		case WHILE: 
			printf("WHILE\n");
			break;
		case GE: 
			printf("GE\n");
			break;
		case LE:
			printf("LE\n");
			break;
		case ET:
			printf("ET\n");
			break;
		case NEV:
			printf("NEV\n");
			break;
		case NEVT:
			printf("NEVT\n");
			break;
		case INC:
			printf("INC\n");
			break;
		case BREAK:
			printf("BREAK\n");		
			break;
		case CASE:	
			printf("CASE\n");		
			break;
		case CATCH:	
			printf("CATCH\n");		
			break;
		case CLASS:	
			printf("CLASS\n");		
			break;
		case CONST:	
			printf("CONST\n");		
			break;
		case CONTINUE:	
			printf("CONTINUE\n");		
			break;
		case DEBUGGER:	
			printf("DEBUGGER\n");		
			break;
		case DEFAULT:	
			printf("DEFAULT\n");		
			break;
		case DELETE:	
			printf("DELETE\n");		
			break;
		case DO:	
			printf("DO\n");		
			break;
		case ELSE:	
			printf("ELSE\n");		
			break;
		case EXPORT:	
			printf("EXPORT\n");		
			break;
		case EXTENDS:	
			printf("EXTENDS\n");		
			break;
		case FINALLY:	
			printf("FINALLY\n");		
			break;
		case FOR:	
			printf("FOR\n");		
			break;
		case FUNCTION:	
			printf("FUNCTION\n");		
			break;
		case IF:	
			printf("IF\n");		
			break;
		case IMPORT:	
			printf("IMPORT\n");		
			break;
		case IN:	
			printf("IN\n");		
			break;
		case INSTANCEOF:	
			printf("INSTANCEOF\n");		
			break;
		case NEW:	
			printf("NEW\n");		
			break;
		case RETURN:	
			printf("RETURN\n");		
			break;
		case SUPER:	
			printf("SUPER\n");		
			break;
		case SWITCH:	
			printf("SWITCH\n");		
			break;
		case THIS:	
			printf("THIS\n");		
			break;
		case THROW:	
			printf("THROW\n");		
			break;
		case TRY:	
			printf("TRY\n");		
			break;
		case TYPEOF:	
			printf("TYPEOF\n");		
			break;
		case VAR:	
			printf("VAR\n");		
			break;
		case VOID:	
			printf("VOID\n");		
			break;
		case WITH:	
			printf("WITH\n");		
			break;
		case YIELD:	
			printf("YIELD\n");		
			break;
		default: 
			printf("'%c'\n", token);
			break;
		}
	}
	while (token != EOF);

	return 0;
}
