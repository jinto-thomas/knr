#include <stdio.h>

unsigned rightrot(unsigned x, int n)
{
	while (n > 0) {
		if (x & 1 == 1) {
			x = (x >> 1) | ~(~0 >> 1);
		}
		else {
			x = x >> 1;
		}
		n--;
	}
	return x;
	
}

main()
{
	printf("%u\n",rightrot(17, 3));
	return 0;
}

