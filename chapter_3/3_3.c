#include <stdio.h>
#include <string.h>
#define MAX 100

/*void expand(char s1[],char s2[])
{
	int i, j, k, d, e;
	
	i = j = 0;
	d = strlen(s1);
	if (s1[i] != '\0') {
		if(s1[i] == '-') {
			k = s1[i+1];
		}
		else {
			k = s1[i];
		}
		if (s1[d-1] == '-') {
			s1[d-1] = s1[d-2];
			}
		printf("%c\n",s1[d-1]);
	
		while (k <= s1[d-1]) {
			s2[j++] = k++;
			
			}
	}
	s2[j] = 0;
}
*/

void expand(char s1[], char s2[])
{
	int i, j;
	char temp;
	i = j = 0;
	while ((temp = s1[i++]) != '\0') {
		
		if (s1[i] == '-' && s1[i+1] >= temp) {
			i++;
			while (s1[i] > temp) {
				s2[j++] = temp++;
			}
		}
		else {
			s2[j++] = temp;
		}
		s2[j] = 0;
	}
}





main()
{
	char in[] = "-a-z0-9";
	char out[MAX];

	expand(in, out);
	printf("%s\n", out);
	
	return 0;
}

