#include <stdio.h>
#define IN  1
#define OUT 0
main()
{
	int c, i, j, length, state;
	int a[10];
	for (i = 0;i < 10; ++i)
		a[i] = 0;

        length = 0;
	state = OUT;
	while ((c = getchar()) != EOF) {
		++length;

		if (c == ' ' || c == '\n') {
			state = IN;
			--length;
			}
		if (state == IN) {
			if (length != 0 && length < 10)
				++a[length];
			state = OUT;
			length = 0;
			} 
		}

	for (i = 1; i < 10; ++i){
		printf("%d :",i);
		for (j = 0;j < a[i]; ++j)
			putchar('*');

		putchar('\n');
		}
	}			 
