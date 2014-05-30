#include <stdio.h>
#include <string.h>
//#include <stdlib.h>
#define MAXLINES 5000

char *linesptr[MAXLINES];

int readlines(char *linesptr[], int nlines);
void writelines(char *linespatr[], int nlines);
/*

int compare (const void * a, const void * b ) {
  return strcmp(*(char **)a, *(char **)b);
}
*/
void qsort(char *linesptr[], int left, int right);

/*sort input lines*/
main()
{
	int nlines;
	if ((nlines = readlines(linesptr, MAXLINES)) >= 0) {
		printf("%d\n",nlines);
		printf("#########################\n");
		printf("before qsort\n");
		writelines(linesptr,nlines);
		printf("#########################\n");
		printf("afer qsort!!!\n");
//		qsort(linesptr,nlines,sizeof(char *),compare);
		qsort(linesptr,0,nlines-1);
		printf("*******************************\n");
		printf("*******************************\n");
		writelines(linesptr,nlines);
		return 0;
	}else {
		printf("eroor : input too big to sort\n");
		return 1;
	}
}



