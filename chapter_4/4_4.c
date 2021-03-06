#include <stdio.h>
#include <stdlib.h>
#define MAXOP 100
#define NUMBER '0'
#include <math.h>
int getop(char []);
void push(double);
double pop(void);
void clear(void);
main()
{
	int type;
	double op2, op3;
	int op4;
	char s[MAXOP];

	while ((type = getop(s)) != EOF) {
		switch (type) {
		case NUMBER:
			op3 = atof(s);
			push(op3);
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
			if (op2 != 0) {
				push(pop() / op2);
			}
			else
				printf("error : zero division\n");
			break;
		case '%':
			op2 = pop();
			if (op2 != 0) {
				push(fmod(pop(), op2));
			}
			else
				printf("error : zero modulo division\n");
			break;
		case '#'://stack top
			op2 = pop();
			printf("\tTop element is : %.8g\n", op2);
			push(op2);
			break;
		case '^'://swap
			op2 = pop();
			op3 = pop();
			push(op2);
			push(op3);
			break;			
			
		case 'd'://duplicate
			op2 = pop();
			push(op2);
			push(op2);
			break;
		case 'c'://clear
			clear();
			break;	
		case '\n':
			printf("\t%.8g\n", pop());
			break;
		default:
			printf("error : unknown command %s/n", s);
			break;
		}
	}
	return 0;
}

#define MAXVAL 100

int sp = 0;
double val[MAXVAL];
//push
void push(double f)
{
	if (sp < MAXVAL )
		val[sp++] = f;
	else
		printf("error : stack full\n");
}
//pop
double pop(void)
{
	if (sp > 0)
		return val[--sp];	
	else {
		printf("error: stack empty\n");
		return 0.0;
	}
}

#include <ctype.h>

int getch(void);
void ungetch(int);

//getop

int getop(char s[])
{
	int i, c;
	int n;

	while ((s[0] = c = getch()) == ' ' || c == '\t')
		;
	s[1] = '\0';
	i = 0;

	if (!isdigit(c) && c != '.' && c != '-')
		return c;
	
	if (c == '-') {
		if (isdigit(c = getch()) || c == '.')
			s[++i] = c;
		else {
			if ( c != EOF)
				ungetch(c);
			return '-';
		}
	}
	if (isdigit(c))
		while (isdigit(s[++i] = c = getch()))
			;
	if (c == '.')
		while (isdigit(s[++i] = c = getch()))
			;
	s[i] = 0;
	if (c != EOF)
		ungetch(c);
	return NUMBER;
}

#define BUFSIZE 100

char buf[BUFSIZE];
int bufp = 0;

//getch
int getch(void)
{
	return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c)
{
	if (bufp >= BUFSIZE)
		printf("ungetch : too many characters\n");
	else
		buf[bufp++] = c;
}

void clear(void)
{
	sp = 0;
}
