#include <stdio.h>
#define MAX 100
int my_isword(int k);
int gtline(char f[],int h);
void trim(char d[], char g[] , int k);
main()
{
	char line[MAX];
	char ko[MAX];
	int lim = 10;
	gtline(line, lim);
	trim(line, ko, lim);
	printf("%s\n", ko);

	return 0;
}


int gtline(char s[], int lim)
{
	int i, c;
	int count  = 0;
	i = 0;
	while (i < MAX-1 && (c=getchar())!=EOF && c!= '\n') {
		s[i] = c;
		++i;
	}
	s[i] = 0;

	return i;
}


void trim(char s[], char t[], int lim)
{
	int count = 0;
	int i = 0;
	int j = 0;
	while (s[i] != '\0') {
		if (i < lim && s[i] != ' ') {
			t[j] = s[i];
			++i;
			++j;
		}
	}
}
int my_isword(int i)
{
	return i == ' ' || i =='\t';
}
