#include <stdio.h>

main()
{
	char a[] = "hello";
	char b[] = "world";
	char c[20];
	sprintf(c,"%s%s",a,b);
	printf("%s",c);
}
