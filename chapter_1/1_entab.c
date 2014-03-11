#include <stdio.h>
#define MAX  100
#define TAB 4

int make_line(char one[], int h);

main()
{
	int l;
	char line[MAX];
	l = make_line(line, MAX);
	printf("%s\n",line);

	return 0;
}



int make_line(char s[],int lim)
{
	int c, i;
	for (i = 0; i < lim-1 && (c = getchar()) != EOF && c!= '\n'; ++i) {
		s[i] = c;
		}
	s[i] = '\0';

	return i;
}

void replace_line(char new[], char old[], int n)
{
	int i,j;
	int count = 0;
	for (i = 0; i < n; ++i) {
		if (old[i] == ' ') {
			++count;
		}
		if (old[i] != ' ') {
			count = 0;
		}
		
		if (count >	




	
