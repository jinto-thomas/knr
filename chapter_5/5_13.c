#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAXLINE 100 
#define MAXLEN 100
int my_getline(char *,int);
main(int argc, char *argv[])
{
	char *lines[MAXLINE];
	char line[MAXLEN];
	int len;
	int lim, i, first, j, k;
	char *p;
//	char *bufstart;
	char *bufend;
	char *cm;

	
	for (i = 0;i < MAXLINE; i++)
		lines[i] = NULL;

/*	if ((p = bufstart = malloc(MAXLINE * MAXLEN)) == NULL) {
		printf("Error : Buffer Overflow!\n");
		exit(1);
	}
*/	
//	bufend = bufstart + MAXLINE * MAXLEN;
	j = 0;
	k = 0;
	while ((len = my_getline(line,MAXLEN-1)) > 0 ) {
		p = malloc(len + 1); //mine
//		if ((p + len + 1) >= bufend)	//rolling back
//			p = bufstart;
		//if ((p + len + 1) >= MAXLEN)
		//	p = bufstart;
		lines[j] = p;
		strcpy(lines[j],line);
		
		if (++j >= MAXLINE) // ptrs rolling back to that start of array
			j = 0;
//		p += len + 1;
		k++;//line
		
	}
	
	if (argc == 2) {
		lim = atoi(*++argv);
	}
	else if (argc == 1) {
		lim = 10;
	}
	else {
		printf("Too many or Few arguments!\n");
		exit(1);
	}
	if (lim > k)
		lim = k;
	if (lim <= 0 ) {
		printf("limit does not exist\n");
		exit(1);
	}
	first = j - lim;
	
	if (first < 0)
		first += MAXLINE;

	i = first;
	while(lim-- > 0 && i < k) {
	printf("%s",lines[i]);
		i++;
	}

	return 0;
}
			
