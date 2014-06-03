#include <stdio.h>
#include <ctype.h>
#define NUMBER '0'

int getch(void);
void ungetch(int);

int my_getop(char *s)
{
	int c;
	

	while ((*s = c = getch()) == ' ' || c == '\t')
		;
	*(s+1) = '\0';
	
	
	if (!isdigit(c) && c != '.')
		return c;

	if (isdigit(c))
		while (isdigit((*++s) = c = getch()))
			;
	if (c == '.')
		while (isdigit((*++s) = c = getch()))
			;
	*s = '\0';
	if (c != EOF)
		ungetch(c);
	return NUMBER;
}
