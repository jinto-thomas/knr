#include "6_2.h"

int compare (char *s,struct tnode *p, int num, int *found)
{
		int i;
		char *t = p->word;

		for (i = 0; *s == *t;i++,s++,t++)
				if (*s == '\0')
						return 0;
		if (i >= num) {
				*found = YES;
				p->match = YES;
		}
		printf("s :%c   t :%c\n",*s,*t);
		return *s - *t;
}

//treexprint


void treexprint(struct tnode *p)
{
		if (p != NULL) {
				treexprint(p->left);
				if (p -> match)
						printf("%s\n",p->word);
				treexprint(p->right);
		}
}
