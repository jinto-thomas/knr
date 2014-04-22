#include <stdio.h>
#include <string.h>
void reverse(char s[])
{
	void rev(char [], int, int);
	rev(s,0,strlen(s));
}

void rev(char s[],int i,int len)
{
	int j, c;
	j = len - (i+1);
	if (i < j) {
		c = s[i];
		s[i] = s[j];
		s[j] = c;
		rev(s,++i,len);
	}
}
	
main()
{
	char s[] = "hello";
	reverse(s);
	
	printf("%s\n",s);
	return 0;
}

	
