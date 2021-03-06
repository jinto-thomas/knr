#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define MAXOP 100
#define NUMBER '0'
#define FUNCTIONS 'F'
int getop(char []);
void push(double);
double pop(void);
void math_fun(char []);
main()
{
	int type, var;
	double op2, v;
	char s[MAXOP];
	double new[26];
	int i;
	for (i = 0; i < 26;i++)
		new[i] = 0.0;

	while ((type = getop(s)) != EOF) {
		
		switch (type) {
		case NUMBER:
			push(atof(s));
			break;
		case FUNCTIONS:
			math_fun(s);
			break;
		case '+':
			push(pop() + pop());
			break;
		case '*':
			push(pop() * pop());
			break;
		case '-':
			op2 = pop();
			push(pop() - op2);
			break;
		case '/':
			op2 = pop();
			if (op2 != 0.0) {
				push(pop() / op2);
			}
			else
				printf("ERROR : Zero Division\n");
			break;
		case '%':
			op2 = pop();
			if (op2 != 0.0)
				push(fmod(pop(),op2));
			else
				printf("ERROR : Zero Modulo Division\n");
			break;	
		case '=':
			pop();
			if (var >= 'A' && var <= 'Z'){
				new[var-'A'] = pop();
			}
			else
				printf("ERROR : Invalid Variable Name\n");
			break;
		case 'v':
			push(v);
			break;
		case '\n':
		//	op2 = pop();
			v = pop();	
			printf("\t%.8g\n",v);
			break;
		default : 
			if (type >= 'A' && type <= 'Z')
				push(new[type-'A']);
			else if (type == 'v')
				push(v);
			else
				printf("ERROR : Unknown Command : %s \n", s);
			break;
		}
		var = type;
	}
	
	return 0;
}


// STACK PUSH AND POP

#define MAXSIZE 100
int sp = 0;
double stack[MAXSIZE];

void push(double f)
{
	if (sp < MAXSIZE) {
		stack[sp++] = f;
	}
	else
		printf("ERROR : STACK FULL\n");
}

double pop(void)
{
	if (sp > 0)
		return stack[--sp];
	else {
		printf("ERROR : STACK EMPTY\n");
		return 0.0;
	}
}

void math_fun(char s[])
{
	double op2;
	if (strcmp(s,"sin") == 0)
		push(sin(pop()));
	
	if (strcmp(s,"exp") == 0)
		push(exp(pop()));

	if (strcmp(s,"cos") == 0)
		push(cos(pop()));

	if (strcmp(s,"pow") == 0) {
		op2 = pop();
		push(pow(pop(),op2));
	}
}



#include <ctype.h>

int getch(void);
void ungetch(int);

int getop(char s[])
{
	int i, next;
	
	while ((s[0] = next = getch()) == ' ' || next == '\t')
		;
	s[1] = '\0';
	i = 0;

	if (islower(next)) {
		while (islower(s[++i] = next = getch()));
			s[i] = '\0';
			if (next != EOF)
				ungetch(next);
			if (strlen(s) == 3)
				return FUNCTIONS;
			else
				return s[--i];
	}


	if (!isdigit(next) && next != '-' && next != '.')
		return next;

	if (next == '-') {
		if (isdigit(next = getch()) || next == '.')
			s[++i] = next;
		else {
			if (next != EOF)
				ungetch(next);
			return '-';
			}		
	}
	if (isdigit(next)) {
		while (isdigit(s[++i] = next = getch()));
	}

	if (next == '.') {
		while (isdigit(s[++i] = next = getch()));
	}
	s[i] = '\0';

	if (next != EOF)
		ungetch(next);
	return NUMBER;
}

//UNGETCH and GETCH

#define BUFSIZE 100

char buf[BUFSIZE];
int bufp = 0;

int getch(void)
{
        return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c)
{
        if (bufp >= BUFSIZE)
		printf("ungetch error : too many characters\n");
	else
		buf[bufp++] = c;
}


