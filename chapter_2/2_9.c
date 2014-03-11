#include <stdio.h>

int fast_bitcount(unsigned x)
{
	int count;
	for (count = 0; x != 0; x &= x-1) {
		count++;
	}
	return count;
}

main()
{
	int a;
	a = fast_bitcount(178);
	printf("count is %d\n",a);
	return 0;
}
