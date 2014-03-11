#include <stdio.h>

unsigned invert(unsigned x, int p, int n)
{
	return (~(~0 << n) << p+1-n) ^ x; 
}

main()
{
	printf("%u\n",invert(17, 3, 2));
	return 0;
}	
	
