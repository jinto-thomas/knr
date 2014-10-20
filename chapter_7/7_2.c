#include <stdio.h>
#include <ctype.h>
#define LIMIT 15
main()
{
	int c;
	int i = 0;
	while ((c = getchar()) != EOF && c != '\n') {
		i++;
		if (i <= LIMIT) {
			if (iscntrl(c))
				printf("-%X-",c);
			else
				putchar(c);
		}
		else {
			putchar('\n'); 
			i = 0;
		}
	}
}

