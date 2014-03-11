/* itob concersion */

#include <stdio.h>
#include <string.h>

void reverse(char from[])
{
	int i, j, c;
	for (i = strlen(from)-1,j = 0;i > j;i--,j++) {
		c = from[j] , from[j] = from[i] , from[i] = c;  	
	}
}
void itob(int n, char s[], int b)
{
	int sign;
	int j , i;

	if ((sign = n) < 0) {
		n = -n;
	}
	i = 0;
	do {
		j = n%b;
		s[i++] = (j <= 9)? j +'0':j +'a'-10;
	} while ((n /= b) != 0);

	if (sign < 0) {
		s[i++] = '-';
	}
	s[i] = 0;
	reverse(s);
}

main()
{
	int i = 0;
	char store[10];
	itob(15, store, 16);
	printf("%s\n",store);
	return 0;
}
	
