#include <stdio.h>
#define TAB 3

main()
{
	int c, nb, pos;
	nb = 0;
	pos = 1;

	while ((c = getchar())!= EOF) {
		if (c == '\t') {
			nb = TAB - (pos-1) % TAB;
			while (nb-- > 0){
				putchar('#');
				++pos;
			}
		}
		else if (c == '\n') {
			pos = 1;
			nb = 0;
		}
		else {
			putchar(c);
			++pos;
		}
	}
}
