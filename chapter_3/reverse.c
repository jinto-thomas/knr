#include <stdio.h>
#include <string.h>

void reverse(char s[])
{
	int c, i, j;
	
	for (i = 0,j = strlen(s)-1;i < j; i++,j--) {
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}


main()
{
	char st[] = "olleh";
	reverse(st);
	printf("%s\n",st);
	return 0;
}
