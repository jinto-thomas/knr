#include <stdio.h>
#include <math.h>
main() 
{
	double i = 9.8349;
	double j = 2.723;
//	double fmod(double, double);
	printf("%.g",fmod(i, j));
	return 0;
}
