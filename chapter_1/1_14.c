#include <stdio.h>
#define IN  1
#define OUT 0
main()
{
	int c, i, j, count;
	int state,box[26];
	count = 0;
	int k;

	for (i = 0; i < 26; ++i)
		box[i] = 0;

	state = OUT;
	
	while ((c = getchar()) != EOF) {
		if((c >= 'a') && (c <= 'z'))
			state = IN;
			++box[c-'a'];
		if (c == ' ' || c == '\n')
			state = OUT;
		if (state == OUT)
			;
 	 	}
	for (k = 1 ; k <= 26 ; ++k) {
		printf("%12d |",k);
		for (j = 0; j < box[k-1]; ++j){
			putchar('=');
			}
		putchar('\n');
	}
}


