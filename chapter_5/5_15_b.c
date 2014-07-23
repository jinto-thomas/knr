#include <stdio.h>
#include <string.h>
#define MAXLEN 1000
int my_getline(char *,int, int);
char *alloc(int);

//readlines : read input lines

int readlines(char *linesptr[],int maxlines, int f)
{
	int len, nlines;
	char *p,line[MAXLEN];

	nlines = 0;
	while ((len = my_getline(line,MAXLEN,f)) > 0)
		if (nlines >= maxlines || (p = alloc(len)) == NULL)
			return -1;
		else {
			line[len-1] = '\0';
			strcpy(p,line);
			linesptr[nlines++] = p;
		}
	return nlines;
}


//writelines : write output lines

void writelines(char *linesptr[], int nlines, int rev)
{
	int i;
	if (rev == 0)
		for(i = 0; i < nlines; i++) {
	//	printf("i = %d \n",i);
			printf("%s\n",linesptr[i]);
		}
	else {
		for (i = nlines-1;i >= 0;i--)
			printf("%s\n",linesptr[i]);
		}
}
