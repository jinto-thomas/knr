#include <stdio.h>

int any(char s1[],char s2[])
{
	int i,j;
	int state = 0;
	int pos = -1;

	for (j = 0; s2[j] != '\0' ; j++) {
		for (i = 0; s1[i] != '\0' ; i++) {
			if (s1[i] == s2[j] && pos == -1) {
				pos = i;
			}
		}
	}
	return pos;
}

					
main()
{
	char a[] = "qweiqwdhkjabxkjaxbkahxmbasasdpq";
	char b[] = "e";

	int n;
	n = any(a, b);
	printf("%d\n",n);
}	
