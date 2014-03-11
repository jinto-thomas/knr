#include <stdio.h>
#define MAX 50
int getaline2(char d[]);
main()
{
	char line[MAX];
	int len = 0;

	len = getaline2(line);
	printf("%s\n%d\n",line, len);
	
	return 0;
}

/*int getaline(char s[])
{
	int i, c;
	i = 0;
	for (i = 0; i < MAX-1 && (c=getchar())!=EOF && c!= '\n';++i) {
		s[i] = c;
	}
	s[i] = 0;

	return i;
}
*/

int getaline2(char s[])
{
	int i, c;
	i = 0;
	while ((c = getchar()) != EOF) {
		if( i < MAX-1) {
			if (c != '\n') {
				s[i] = c;
				++i;
			}
		}
	}
	s[i] = 0;
	return i;
}
		
		
