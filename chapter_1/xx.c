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
	for (i = 0; i < MAX-1 && (c = getchar()) != EOF && c!= '\n'; ++i) {
		if(c == '\t') {
			j = 0; 
			for (j = 0; j < n ; ++j) {
				s[i] = '#';
				++i;
			}
			--i;
		}
		else {
			s[i] = c;
		}
	}
	s[i] = '\0';
}





