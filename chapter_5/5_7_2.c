#include <stdio.h>
#include <string.h>
#define MAXLEN 1000
#define MAXSTOR 2000
int my_getline(char *,int);

//readlines : read input lines

int readlines(char *linesptr[],char *linest,int maxlines)
{
	int len, nlines;
	char line[MAXLEN];
	char *p = linest;
	char *linestop = linest + MAXSTOR;

	nlines = 0;
	while ((len = my_getline(line,MAXLEN)) > 0)
		if (nlines >= maxlines || (p + len)> linestop) 
			return -1;
		else {
			line[len-1] = '\0';
			strcpy(p,line);
			linesptr[nlines++] = p;
			p += len;
		}
	return nlines;
}


//writelines : write output lines

void writelines(char *linesptr[], int nlines)
{
	int i;
	for(i = 0; i < nlines; i++) {
	//	printf("i = %d \n",i);
		printf("%s\n",linesptr[i]);
	}
}
