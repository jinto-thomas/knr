#include <stdio.h>
/* print Fahrenheit - Celsius table
   for fahr = 0, 20, ....., 300 */
main()
{
	float fahr, celsius;// lower, upper, step;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	while (fahr <= upper) {
		celsius = 5.0/9.0  * (fahr-32);
		printf("%3.0f\t%6.2f\n", fahr, celsius);
		fahr = fahr + step;
	}
}
