#include <stdio.h>
#define ON  1
#define OFF 0
main()
{
	int c , i, l, j;
	int a[10];
	l = j = 0; 
	int state;
	for (i = 1; i <= 10; ++i)
		a[i] = 0;

//	state = ON;

	while ((c = getchar()) != EOF) {
		++l;
		if (c == ' ' || c == '\n') {
			state = OFF;
			--l;
			}
		if (state == OFF) {
			++a[l];
			
			state = ON;
			l = 0;
		}
	for (i = 1; i <= 10; ++i)
		printf(" %d|",i);
		for (j = 0; j < a[i];++j)
			putchar('=');
		putchar('\n');
	}
}
