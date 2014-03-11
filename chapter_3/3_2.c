#include <stdio.h>
#define MAX 100

void tot(char t[])
{
	int c, i, j;
	
	for (i = 0; i < MAX-1 && (c = getchar()) != EOF ;i++) {
		t[i] = c;
	}
	t[i] = 0;
	
}


void escape(char s[], char t[])
{
	int i,j;
	i = j = 0;
	while (t[i] != '\0') {
		
		switch(t[i]) {
		case '\t':s[j++] = '\\' ;
			s[j] = 't';
			break;
		case '\n':s[j++] = '\\';
			s[j] = 'n';
			break;
		default:
			s[j] = t[i];
			break;
		}
		++i;
		++j;
	}
	s[j] = 0;
}	



main()
{
	char line[MAX];
	char to[MAX];
	tot(to);
	escape(line,to);
	printf("%s\n",line);
	
	return 0;
}


