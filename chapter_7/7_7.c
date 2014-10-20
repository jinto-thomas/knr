#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 1000

//find : print lines that match patter fro 1st argument

main(int argc, char **argv)
{
	char pattern[MAX];
	int c, except = 0, number = 0;
	FILE *fp;

	void fpat(FILE *fp, char *fname, char *pattern, int except, int number);

	while (--argc > 0 && (*++argv)[0] == '-')
		while (c = *++argv[0])
			switch (c) {
				case 'x':
					except = 1;
					break;
				case 'n':
					number = 1;
					break;
				default:
					printf("illegal operation in find %c\n",c);
					argc = 0;
					break;
			}
	if (argc >= 1)
		strcpy(pattern,*argv);
	else {
		printf("usage find [-x] [-n] pattern\n");
		exit(1);
	}
	if (argc == 1)
		fpat(stdin,"",pattern,except,number);
	else
		while (--argc > 0)
			if ((fp = fopen(*++argv, "r")) == NULL) {
				fprintf(stderr,"cant open %s\n",*argv);
				exit(1);
			}
			else {
				fpat(fp, *argv,pattern,except,number);
				fclose(fp);
			}
	return 0;
}


void fpat(FILE *fp,char *fname,char *pattern, int except, int number)
{
	char line[MAX];
	long lineno = 0;

	while (fgets(line,MAX,fp) != NULL) {
		++lineno;
		if ((strstr(line,pattern) != NULL) != except) {
			if (*fname)
				printf("%s  ",fname);
			if (number)
				printf("%ld : ",lineno);
			printf("%s",line);
		}
	}
}


