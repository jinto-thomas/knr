#include <stdio.h>
#include <string.h>
#define abs(x) 	((x) < 0 ? -(x) : (x))

void reverse(char a[])
{
	int i, j, c;
	for (i = 0, j = strlen(a)-1; i < j; i++, j--) {
		c = a[i];
		a[i] = a[j];
		a[j] = c;
	}
}

void itoa(int n, char s[])
{
	int i, sign;

	sign = n;
	i = 0;
	do {
	s[i++] = abs(n % 10) +'0';

	} while ((n /= 10) != 0);
	if (sign < 0)
		s[i++] = '-';
	s[i] = 0;
	reverse(s);
}

main()
{
	char new[10];
	int i;
	int k = 1;

	itoa(-2147483648, new);
	printf("%s\n", new);
	return 0;
}


//2**32-1 == 2147483648
