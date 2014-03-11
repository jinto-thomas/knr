#include <stdio.h>
#define MAX 1000

void detab2(char one[], int l);
main()
{
	char line[MAX];
	int p;
	p = 3;	
	detab2(line, p);
	printf("%s\n", line);

	return 0;

}


void detab2(char s[],int n)
{
	int c, i ,j;
	i = 0;
	while (i < MAX-1 && (c = getchar()) != EOF && c!= '\n') {
		if(c == '\t') {
			j = 0; 
			while (j < n) {
				s[i] = '#';
				++i;
				++j;
			}
		}
		else {
			s[i] = c;
			++i;
		}
	}
	s[i] = '\0';
}





