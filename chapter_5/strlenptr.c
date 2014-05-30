#include <stdio.h>

int strlen(char *d)
{
	int n;
	for (n = 0; *d != 0;d++)
		n++;
	return n;
}

main()
{
	int a = strlen("hello");
	printf("%d\n",a);
	return 0;
}
