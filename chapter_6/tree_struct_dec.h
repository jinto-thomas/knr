#include <stdio.h>
#define MAXWORD 100

struct tnode {
		char *word;
		int count;
		struct tnode *left;
		struct tnode *right;
};
