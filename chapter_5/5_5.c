/* library versions of strcpy,strcmp,strcat using pointers*/

#include <stdio.h>

void my_strcpy(char *s, char *t, int n)
{
//	while ((n > 0) && (*s++ = *t++ ))
//		n--;
//	*s = '\0';
	while (*t && n-- > 0)
		*s++ = *t++;
	while (n-- > 0)
		*s++ = '\0';
}

void my_strcat(char *s, char *t,int n)
{
	while (*s)
		s++;
	while (n-- > 0 && (*t))
		*s++ = *t++;
	*s = '\0';
}

int my_strcmp(char *s,char *t,int n)
{
	for (;*s == *t && n > 0;s++,t++,n--)
		if (*s == '\0' || n == 0)
			return 0;
	return *s - *t;
}
main()
{
	char p[10] = "hello";
	char q[10] = "hel";
	int i;
	i = my_strcmp(p,q,5);
	printf("%d\n",i);
//	printf("%s\n",q);
	return 0;
}
