#include "lookup_table_struct.h"
#include <string.h>
unsigned hash(char *);

void undef (char *s)
{
		int h;
		struct nlist *prev, *np;

		prev = NULL;
		h = hash(s);
		for (np = hashtab[h];np != NULL; np = np->next) {
				if (strcmp(s, np->next) == 0)
						break;
				prev = np;
		}
		if (np != NULL) {
				if (prev == NULL)
						hashtab[h] = np->next;
				else
						prev->next = np->next;
				free((void *) np->name);
				free((void *) np->defn);
				free((void *) np);
		}
}
		
