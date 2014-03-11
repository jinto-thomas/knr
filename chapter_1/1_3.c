#include <stdio.h>
main()
{
	float fahr,cel;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	printf("CONVERSION FROM FAHR TO CEL\n");
	printf("***************************\n");
	while(fahr <= upper) {
		cel = 5.0/9 * (fahr - 32);
		printf("%3.0f\t%6.2f\n",fahr,cel);
		fahr += step;
	}
}
