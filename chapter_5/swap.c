#include <stdio.h>

void swap(int *p, int *q)
{
	int temp;
	temp = *p;
	*p = *q;
	*q = temp;
}

main()
{
	int a = 10;
	int b = 25;
	swap(&a,&b);
	printf("a : %d , b : %d\n",a,b);
	return 0;
}
