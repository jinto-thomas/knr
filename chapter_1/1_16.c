#include <stdio.h>
#define MAXLINE 10

int get_line(char line[], int maxline);
void copy(char to[], char from[]);

main()
{
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];
	int c,l = 0;		
	max = 0;

	while ((len = get_line(line, MAXLINE)) > 0) {
		if (line[len - 1] != '\n')
			while ((c = getchar()) != EOF && c != '\n')
				++len;
			if (c == '\n')
				++len;
		if (len > max) {
			max = len;
			copy(longest, line);
			}
		
	if (max > 0)
		printf("The longest line is : %s \tlength is %d \n", longest, max);
		
	return 0;
	}
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
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}
