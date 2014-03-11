#include <stdio.h>
#define MAXLEN 100
#define FILTER 8
int get_line(char line[], int maxlen);
void copy(char to[], char from[]);

main()
{
	int len;
	int max;
	char line[MAXLEN];
	char longest[1000];
	
	max = 0;
	while ((len = get_line(line, MAXLEN)) > 0)
		if (len >= FILTER)
			printf("LINE IS : %s%d\n", line, len);
	return 0;

}

int get_line(char s[], int lim) 
{
	int c, i;

	for (i = 0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
		}
	s[i] = '\0';
	return i;
}

void copy(char to[], char from[])
{
	int i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}
