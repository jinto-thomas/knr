#include <stdio.h>

int strendp(char *s, char *t)
{
	char *i ,*j;
	i = s;
	j = t;
	while (*s)
		s++;
	while (*t)
		t++;
	for (;*s == *t;--s,--t)
		if (t == j || s == i)
			break;
	if (*s == *t && t == j && *s != '\0')
		return 1;
	else
		return 0;
}

main()
{
	char p[10] = "hello";
	char q[10] = "o";
	int x;
	x = strendp(p,q);
	printf("%d\n",x);
	return 0;
} 
