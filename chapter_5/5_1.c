#include <stdio.h>
#include "cal.h"
#include <ctype.h>
#define SIZE 7

int getch(void);
void ungetch(int);

/*getint : get next int from input into *pn */

int getint(int *pn)
{
        int c, sign, a;
        while (isspace(c = getch()))
                ;
        if (!isdigit(c) && c != EOF && c != '+' && c != '-') {
                        ungetch(c);
                        return 0;
        }
        sign = (c == '-') ? -1 : 1;
        if (c == '+' || c == '-')
                a = getch();
		if (!isdigit(c = getch())) {
			if (c != EOF)
				ungetch(c);
			ungetch(a);
			return a;
		}
	
        for (*pn = 0;isdigit(c); c = getch())
                *pn = 10 * *(pn) + (c - '0');
        *pn *= sign;
        if ( c != EOF)
                ungetch(c);
        return c;
}

main()
{
        int n;
        getint(&n);
        printf("%d\n", n);
}
