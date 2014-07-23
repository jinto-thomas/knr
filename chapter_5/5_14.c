#include <stdio.h>
#include <string.h>
#define NUMERIC 1
#define REVERSE 2
#define MAXLINES 5000

char *linesptr[MAXLINES];

int readlines(char *linesptr[], int nlines);
void writelines(char *linesptr[], int nlines, int r);

void qsort(void *linesptr[], int left, int right, int (*comp)(void *, void *));
int numcmp(char *, char *);

//dor ip lines
static char check = 0;
main(int argc, char *argv[])
{
	int nlines;
	int c;
	int rt = 0;
	while (--argc > 0 && (*++argv)[0] == '-') {
		c = (*argv)[1];
		switch(c) {
			case 'n':
				check |= NUMERIC;
				break;
			case 'r':
				check |= REVERSE;
				break;
			default:
				printf("invalid option -%c\n",c);
				argc = 1;
				break;
		}
	}
	if ((nlines = readlines(linesptr, MAXLINES)) >= 0) {
		if (check & NUMERIC) {
			qsort((void **) linesptr, 0, nlines-1,(int (*)(void*,void*))(numcmp));
//			writelines(linesptr, nlines);
		}
		else 
			qsort((void **) linesptr, 0, nlines-1,(int (*)(void*,void*))(strcmp));
		writelines(linesptr, nlines,(check & REVERSE));
	
	} else {
		printf("input too big to sort\n");
		rt = 1;
	}
	return rt;
}

