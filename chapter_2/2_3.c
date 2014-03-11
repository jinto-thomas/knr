#include <stdio.h>
#include <ctype.h>
#define MAX 5
int htoi(char k[]);
main()
{
	char sss[] = "ff";
	int s;
	s = htoi(sss);
	printf("%d\n",s);
	return 0;
}

int htoi(char s[])
{
	int i = 0;
	int k = 0;
	int h = 0;
	int sum = 0;
	for (i = 0 ; (s[i] >= '0' && s[i] <= '9') || (s[i] >= 'a' && s[i] <= 'z') ; ++i) {
		if (s[i] >= 'a' && s[i] <= 'f') {
			sum = sum * 16 + s[i]-'a' + 10;
			}
		if (s[i] >= '0' && s[i] <= '9') {
			sum = sum * 16 + s[i]-'0';
		}
	}
	return sum;
}
			
					
			
			
			
