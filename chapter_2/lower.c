#include <stdio.h>
int lower(int d);
main()
{

	printf("%c\n",lower('Z'));
	return 0;
}


int lower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return c + 'a' - 'A';
	else
		return c;
}
