#include <stdio.h>
#define MAX 100
#include <string.h>

int getaline(char s[], int lim)
{
	int i, c;
	i = 0;
	while (--lim > 0 && (c=getchar())!= EOF && c != '\n') {
		s[i++] = c;
	}
	if (c == '\n') {
		s[i++] = c;
	}
	s[i] = 0;
	return i;
}

int strindex2(char in[], char it[])
{
	int i, j, k;
	int pos = -1;
	for (i = 0;in[i] != '\0'; i++) {
		for (j = i, k = 0; it[k] != 0 && in[j] == it[k];j++,k++)
			;			
		if (k > 0 && it[k] == '\0') {
			pos = j-1;
		}
	}
	return pos;
}


main()
{
	char line[MAX];
	char check[] = "in";
	int found = 0;
	int m;
	while ((getaline(line, MAX)) > 0) {
		if ((m = strindex2(line, check)) >= 0) {	
			printf("%s\n%d\n",line, m);
			found++;
		}
	}

	return found;
}
			
		
