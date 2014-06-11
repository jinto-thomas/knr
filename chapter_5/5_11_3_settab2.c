#include <stdlib.h>
#define MAXLEN 100
#define YES 1
#define NO 0
#define TABINC 8

//settab : set tab stop in array tab

void settab(int argc, char *argv[], char *tab)
{
	int i, pos;
	if (argc <= 1) {
		for (i = 1; i < MAXLEN; i++) {
			if (i%TABINC == 0)
				tab[i] = YES;
			else
				tab[i] = NO;
			}
	}
	else {
		for(i = 1;i < MAXLEN;i++)
			tab[i] = NO;
		while (--argc > 0) {
			pos = atoi(*++argv);
			if (pos > 0 && pos < MAXLEN)
				tab[pos] = YES;
		}
	}
}
	
/*	}
		for (i = 1;i < MAXLEN; i++) {
		if (i%pos == 0)
			tab[i] = YES;
		else
			tab[i] = NO;
		}
	}
}
*/

