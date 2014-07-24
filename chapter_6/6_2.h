#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define MAXWORD 100
#define YES 1
#define NO 0

struct tnode {
		char *word;
		int match;
		struct tnode *left;
		struct tnode *right;
};

char *strdup1(char *);
int getword(char *, int);
