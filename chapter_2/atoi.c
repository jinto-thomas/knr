#include <stdio.h>
int atoi(char d[]);
main()
{
	int x;
	char line[] = "12";

	x = atoi(line);
	printf("%d\n",x);
	
	return 0;

}

int atoi(char s[])
{
	int i, n;

	n = 0;
	for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
		n = 10 * n + (s[i] - '0');
	return n;
}
