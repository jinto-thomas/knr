#include <stdio.h>
#define MAXLEN 100

int getaline(char st[],int li);
void filter(char to[], char x[]);
int my_isspace(int k);
main()
{
	char line[MAXLEN];
	int len;
	char box[MAXLEN];
	//	while ((len = getaline(line, MAXLEN)) > 0)
		len = getaline(line, MAXLEN);
//		printf("%s", line);
		filter(line, box);
		printf("%s",box);
		printf("%s",line);					
	return 0;
}


int getaline(char s[],int lim)
{
	int c, i;
	for(i = 0; i < lim-1 && (c = getchar()) != EOF ; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}


int my_isspace(int c)
{
	return (c == ' ') || (c == '\t') || (c == '\n');
}
   
void filter(char t[], char new[])
{
	int i = 0;
	int j = 0;
		
	while ((new[i] = t[i])!='\0')
		++i;
	for (i = i - 1; (i >= 0) && my_isspace(t[i]); i--) ;
	
	new[i+1] = 0;
}
