/* recursive version of printd of itoa*/

#include <stdio.h>
//#include <string.h>
#include <math.h>
/*char s[10];
int j = 0;
void printd2(int i)
{
	if (i == 0)
		s[j] = '\0';
	else {
		s[j++] = i % 10 + '0';
		printd2(i / 10);
	}	
}

*/

void itoa(int n, char s[])
{
	static int i;
	if (n / 10)
		itoa(n/10,s);
	else {
		i = 0;
		if (n < 0)
			s[i++] = '-';
	}
	s[i++] = abs(n) % 10 + '0';
	s[i] = '\0';
}
 

	
int main()
{
	char s[10];
	itoa(1234,s);
	
	printf("%s",s);
	return 0;
}

