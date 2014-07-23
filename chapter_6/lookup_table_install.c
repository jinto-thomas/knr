#include "lookup_table_struct.h"

struct nlist *lookup(char *);
char *strdup1(char *);
unsigned hash(char *);

struct nlist *install(char *name, char *defn)
{
		struct nlist *np;
		unsigned hashval;

		if ((np = lookup(name)) == NULL) {
				np = (struct nlist *) malloc(sizeof(*np));
				if (np == NULL || (np->name = strdup1(name)) == NULL)
						return NULL;
				hashval = hash(name);
				hashval = hash(name);
				np->next = hashtab[hashval];
				hashtab[hashval] = np;
		}
		else
				free((void *) np->defn);
		if ((np->defn = strdup1(defn)) == NULL)
				return NULL;
		return np;

}
