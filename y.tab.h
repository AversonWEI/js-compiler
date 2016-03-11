enum yytokentype 
{
    WHILE = 258,
    NUMBER = 259,
	IDENT = 260,
	GE = 261,
	LE = 262,
	ET = 263,
	NEV = 264,
	NEVT = 265,
	INC = 266,
	BREAK = 267,
	CASE = 268,
	CATCH = 269,
	CLASS = 270,
	CONST = 271,
	CONTINUE = 272,
	DEBUGGER = 273,
	DEFAULT = 274,
	DELETE = 275,
	DO = 276,
	ELSE = 278,
	EXPORT = 279,
	EXTENDS = 280,
	FINALLY = 281,
	FOR = 282,
	FUNCTION = 283,
	IF = 284,
	IMPORT = 285,
	IN = 286,
	INSTANCEOF = 287,
	NEW = 288,
	RETURN = 289,
	SUPER = 290,
	SWITCH = 291,
	THIS = 292,
	THROW = 293,
	TRY = 294,
	TYPEOF = 295,
	VAR = 296,
	VOID = 297,
	WITH = 299,
	YIELD = 300
};

typedef union YYSTYPE
{
  char* name;
  int num;
} YYSTYPE;

extern YYSTYPE yylval;