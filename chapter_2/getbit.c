#include <stdio.h>

unsigned getbits(unsigned x, int p, int n)
{
	return (x >> (p+1-n)) & ~(~0 << n);
}

main()
{
	unsigned x;
	x = getbits(17, 4, 3);
	printf("%u\n",x);
	return 0;
}
