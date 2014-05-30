#include <stdio.h>

void strcatp(char *s, char *t)
{
	while (*s)
		s++;
	while (*s++ = *t++);
}

main()
{
	char p[100] = "hello";
	char q[100] = "world";
	strcatp(p,q);
	printf("%s\n",p);
	return 0;
}
