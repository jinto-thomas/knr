#include <stdio.h>
#define YES 1
#define NO 0
//detab

void detab(char *tab)
{
	int c, pos = 1;

	while ((c = getchar()) != EOF) {
		if (c == '\t') {
			do
				putchar(' ');
			while (tabpos(pos++,tab) != YES);
		}
		else if (c == '\n') {
			putchar(c);
			pos = 1;
		}
		else
			putchar(c);
			++pos;
		}
}
			
