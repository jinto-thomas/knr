#include <stdio.h>

int bitcount(unsigned x)
{
	int b;
	for (b = 0; x != 0; x >>= 1) {
		if (x & 1) {
			b++;
		}
	}
	return b;
}

main()
{
	int a;
	a = bitcount(20);
	printf("count :%d\n",a);
	return 0;
}
