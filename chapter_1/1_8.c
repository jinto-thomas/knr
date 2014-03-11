#include <stdio.h>
main()
{
	int c, nl, tab, s;
	nl = 0;
	tab = 0;
	s = 0;
	while ((c = getchar()) != EOF) {
		if (c == ' ')
			++s;
		if (c == '\t')
			++tab;
		if (c == '\n')
			++nl;
		}
	printf("%d is the space count\n", s);
	printf("%d is the tab count\n", tab);
	printf("%d is the newline count\n", nl);
}

