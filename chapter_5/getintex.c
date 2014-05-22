#include <stdio.h>
#include "cal.h"
#include <ctype.h>
#define SIZE 7

int getch(void);
void ungetch(int);

/*getint : get next int from input into *pn */

int getint(int *pn)
{
	int c, sign;
	while (isspace(c = getch()))
		;
	if (!isdigit(c) && c != EOF && c != '+' && c != '-') {
			ungetch(c);
			return 0;
	}
	sign = (c == '-') ? -1 : 1;
	if (c == '+' || c == '-')	
		c = getch();
	
	for (*pn = 0;isdigit(c); c = getch())
		*pn = 10 * *(pn) + (c - '0');
	*pn *= sign;
	if ( c != EOF)
		ungetch(c);
	return c;
}

main()
{
	int n, d;
	d = getint(&n);
        printf("%d\n", n);
//	printf("%d\n",d);
	//int i, n, array[SIZE], getint(int *);

	//for (n = 0; n < SIZE && getint(&array[n]) != EOF; n++)
//		;
//	array[n] = '\0';

//	for (i = 0; i < n;i++)
	//	printf("%d",array[i]);

	return 0;
}


