#include "tree_struct_dec.h" 
#include <string.h>
#include <stdlib.h>
char *strdup1(char *s)
{
		char *p;

		p = (char *) malloc(strlen(s)+1);
		if (p != NULL)
				strcpy(p,s);
		return p;
}
