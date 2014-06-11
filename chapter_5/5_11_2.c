#include <stdio.h>
#include <stdlib.h>
main(int argc, char *argv[])
{
	int c, pos, nb, tab, flag;
	nb = 0;
	pos = 1;
	//tab = 5;
	flag = 0;
	if (--argc > 0) {
		tab = atoi(*++argv);
	}
	else
		tab = 5;
	while ((c = getchar()) != EOF) {
		if (c == '\t') {
			nb = tab - (pos-1)%tab;
			while (nb-- > 0) {
				putchar('#');
				++pos;
			}
		}
		else if(c == '\n') {
			nb = 0;
			pos = 1;
		}
		else {
			++pos;
			putchar(c);
		}
	}
	
	return 0;
}

		
