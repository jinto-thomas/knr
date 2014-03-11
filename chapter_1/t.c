#include <stdio.h>
#define IN  1
#define OUT 0
main()
{
	int c, i, count, length;
	int state;
	int arr[10];

	for (i = 0; i < 10; ++i)
		arr[i] = 0;
	
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n')
			state = OUT;
		else
			state = IN;
			++length;
		if (state == IN)
			arr[i] = count;	
			
			
