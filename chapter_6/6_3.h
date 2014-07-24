#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#define MAXWORD 100


char *strdup1(char *);

struct linklist {
		int lnum;
		struct linklist *ptr;
};

struct tnode {
		char *word;
		struct linklist *lines;
		struct tnode *left;
		struct tnode *right;
};

struct tnode *addtreex(struct tnode *,char *, int);
int getword(char *,int);
int noiseword(char *);
void treexprint(struct tnode *);

