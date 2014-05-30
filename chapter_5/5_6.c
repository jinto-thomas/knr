/*re write basic functions with pointers rathe than array indexing*/
#include <stdio.h>
#include <string.h>
//getline chapter 1

int my_getline(char *s,int lim)
{
	int c = 0;
	for (;lim > 0 && (*s = getchar()) != EOF && *s != '\n';lim--,s++)
		c++;
	if (*s == '\n')
		*s++ = '\n';
	*s = '\0'; 
	return c;
}

//atoi chapter 2
int atoi(char *s)
{
	int n = 0;
	for (;*s >= '0' && *s <= '9';s++)
		n = 10 * n + (*s - '0');
	return n;
}

//reverse chapter 3

void reverse(char *s)
{
	char *lp;
	int temp;
	
//	lp = s;
//	s = temp;
	lp = s + (strlen(s)-1);
	for (;s < lp;s++,lp--) { 
		temp = *s;
		*s = *lp;
		*lp = temp;
	}

}

//strindex chapter 4
int strindexx(char *s, char *t)
{
	char *i = s;
	char *j, *k;
	for(;*s != '\0';s++) {
		for (j = s,k = t;*k != '\0' && *k == *j;k++,j++);	
		if (k > 0 && *k == '\0')
			return s-i;
	}
	return -1;
}
	




main()
{
	int x;
	char p[15];
//	x = my_getline(p,10);
//	x = atoi("13");
	char q[10] = "olleh";
	char r[10] = "eh";
//	reverse(q);
	x = strindexx(q,r);
	printf("%d\n",x);
	return 0;
}
