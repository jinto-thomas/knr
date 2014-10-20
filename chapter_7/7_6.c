#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 1024

void filecomp(FILE *,FILE *);

int main(int argc,char **argv)
{
	FILE *one, *two;
	int max = 256;
	char a[max],b[max];
	int i;
	if (argc != 3) {
		printf("usage : %s <file1> <file2>\n",*argv);
		exit(1);
	}
	if ((one = fopen(*++argv,"r")) == NULL) {
		fprintf(stderr,"error occured while opening file one\n");
		exit(1);
	}
	if ((two = fopen(*++argv,"r")) == NULL) {
		fprintf(stderr,"error opening file 2\n");
		exit(1);
	}
	filecomp (one,two);
	fclose(one);
	fclose(two);
	exit(0);
}


void filecomp(FILE *fp1, FILE *fp2)
{

	char line1[MAX], line2[MAX];
	char *lp1, *lp2;

	do {
		lp1 = fgets(line1,MAX,fp1);
		lp2 = fgets(line2,MAX,fp2);

		if (lp1 == line1 && lp2 == line2) {
			if (strcmp(line1,line2) != 0) {
				printf("1st diff is in line\n %s\n",line1);
				lp1 = lp2 = NULL;
			}
		}
			else if (lp1 != line1 && lp2 == line2)
				printf("1st file ended at \n%s\n",line2);
			else if (lp1 == line1 && lp2 != line2)
				printf("2nd file ended at \n%s\n",line1);
		}while (lp1 == line1 && lp2 == line2);
}
