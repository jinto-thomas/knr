#include <stdio.h>

int lower(int c)
{
	return (c >= 'A' && c <= 'Z')?(c+('a'-'A')):c ;
}
main()
{
	printf("%c\n",lower('I'));
	return 0;
}

