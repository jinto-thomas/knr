#include <stdio.h>
#define MAXLEN 100
int getlen(char from[], int len);
void my_reverse(char one[], char two[], int n);
main()
{
	char line[MAXLEN];
	int size;
	char new[MAXLEN];
	
	while((size = getlen(line, MAXLEN)) > 0) {
		my_reverse(new, line, size);
		printf("%s\n",new);	
	}

	return 0;
}

int getlen(char s[], int maxlen)
{
	int c;
	int i;
	for (i = 0; i < maxlen-1 && (c = getchar())!= '\n' ; ++i)
		s[i] = c;
	s[i] = 0;
	
	return i;
}

void my_reverse(char to[], char from[], int l)
{
	int i;
	int j = 0;
	for(i = l-2; i >= 0 ; --i) {
		to[j] = from[i];
		++j;
	}
	to[j] = 0;
}
