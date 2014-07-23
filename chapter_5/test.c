#include <stdio.h>
#include <string.h>

int my_getline(char *,int);
main()
{
	char s[10];
	printf("%d",my_getline(s,10));
	return 0;
}
