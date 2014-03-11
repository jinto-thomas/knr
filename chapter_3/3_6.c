#include <stdio.h>
#include <string.h>


void reverse(char a[])
{
	int i, j, c;
	for (i = 0, j = strlen(a)-1;i < j;i++,j--) {
		c = a[i], a[i] = a[j], a[j] = c;
	}
}


void itoa(int n, char s[], int w)
{
	int sign, i;
	int j;
	if ((sign = n) < 0) {
		n = -n;
	}
	i = 0;
	do {
		s[i++] = n%10 + '0';
	} while((n /= 10) != 0);

	if (sign < 0) {
		s[i++] = '-';
	}

	
	j = strlen(s);
	printf("%d\n",j);
	while (i < w) {
		s[i++] = ' ';
		j++;
	}
	s[i] = 0;		
	reverse(s);
}

main()
{
	char box[20];

	itoa(87389, box, 8);
	printf("%s\n",box);
	return 0;
}
