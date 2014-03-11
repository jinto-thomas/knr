#include <stdio.h>
#include <limits.h>
#include <float.h>

main()
{
	printf("%15d int max\n", INT_MAX);
	printf("%15d int min\n", INT_MIN);
	
	printf("%15ld long max\n", LONG_MAX);
	printf("%15ld long min\n", LONG_MIN);

	printf("%15d short int max\n", SHRT_MAX);
	printf("%15d short int min\n", SHRT_MIN);

	printf("%15lu unsigned long\n", ULONG_MAX);
	printf("%15u unsigned char\n",UCHAR_MAX);
}
