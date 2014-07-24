#include <stdio.h>
#define HASHSIZE 101


struct nlist {
		struct nlist *next;
		char *name;
		char *defn;
};

static struct nlist *hashtab[HASHSIZE];
