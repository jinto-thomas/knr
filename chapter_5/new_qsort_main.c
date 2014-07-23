#include <stdio.h>
#include <string.h>

#define MAXLINES 5000
char *linesptr[MAXLINES];

int readlines(char *linesptr[], int nlines);
void writelines(char *linesptr[], int nlines);

void qsort(void *linesptr[], int left, int right, int (*comp)(void *, void *));
int numcmp(char *, char *);

//dor ip lines

main(int argc, char *argv[])
{
	int nlines;
	int numeric = 0;

	if (argc > 1 && strcmp(argv[1],"-n") == 0)
		numeric = 1;
	if ((nlines = readlines(linesptr, MAXLINES)) >= 0) {
		qsort((void **) linesptr, 0, nlines-1,(int (*)(void*,void*))(numeric ? numcmp : strcmp));
		writelines(linesptr, nlines);
		return 0;
	} else {
		printf("input too big to sort\n");
		return 1;
	}
}

