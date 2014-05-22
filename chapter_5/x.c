#include <stdio.h>

main()
{
	int i = 0;
	char s[10];
	while(i < 10) {
		s[i++] = getchar();
	}
	printf("%s\n",s);
}
