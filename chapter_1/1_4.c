#include <stdio.h>
main()
{
	float cel, fahr;
	float lower, upper, step;

	lower = 0;//-17.78;
	upper = 200;//148.89;
	step = 20;//11.11;

	cel = lower;
	printf("CEL TO FAHR\n");
	printf("***********\n");
	while (cel <= upper) {
		fahr = cel * 9.0 / 5.0 + 32;
		printf("%6.0f\t%.2f\n",cel,fahr);
		cel += step;
	}
}
