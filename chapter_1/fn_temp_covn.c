/*Temperature conversion using function*/
#include <stdio.h>
float ftoc(int f);
float ctof(int c);
main()
{
	int i, j;
	printf("\t  F TO C\n");
	for (i = 0; i <= 300; i += 20)
		printf("%8d %12.2f\n",i,ftoc(i));
	printf("**************************\n");


	printf("\t  C TO F\n");
	for (j = 0; j <= 300; j += 20)
		printf("%8d %12.0f\n",j,ctof(j));

	return 0;
}
float ftoc(int t)
{
	float c;
	c = (5.0/9.0) * (t - 32);
	return c;
}
float ctof(int c)
{
	float t;
	t = (c * 9.0/5.0) + 32;
	return t;
}
