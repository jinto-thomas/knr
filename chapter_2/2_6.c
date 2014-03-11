#include <stdio.h>


unsigned setbits(unsigned x, int p,int n, unsigned y)
{
	int a,b;
	a = (y & ~(~0 << n)) << p+1-n;
	b = ~(~(~0 << n) << p+1-n);
	return (x & b) | a;
}

main()
{
	printf("%u\n", setbits(55, 4, 3, 12));
	return 0;
}
