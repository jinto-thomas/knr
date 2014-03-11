/*Alternative version of squeeze(s1, s2) that deletes each char in s1 that matches any char in s2 */
#include <stdio.h>
void squeeze(char d[], char f[]);
main()
{
	char in[] = "manchester united football";
	char check[] = "che";
	printf("original : %s\n",in);
	printf("to be replaced : %s\n",check); 
	squeeze(in, check);
	printf("%s\n",in);

	return 0;
}
void squeeze(char s1[], char s2[])
{
	int i, j , k;
	int a;
	for (k = 0; s2[k] != '\0' ;++k) {
		for(i = j = 0; s1[i] != '\0';i++) {
			a = s2[k];
			if (s1[i] != a) {
				s1[j++] = s1[i];
			}
		}
		s1[j] = 0;
	}
}
				
		
