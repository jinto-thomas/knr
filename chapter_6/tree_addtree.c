#include "tree_struct_dec.h"

struct tnode *talloc(void);
char *strdup1(char *);
//addtree

struct tnode *addtree(struct tnode *p,char *w)
{
		int cond;

		if (p == NULL) {
				p = talloc();
				p->word = strdup1(w);
				p->count = 1;
				p->left = p->right = NULL;
		}
		else if ((cond = strcmp(w,p->word)) == 0)
				p->count++;
		else if (cond < 0)
				p->left = addtree(p->left,w);
		else
				p->right = addtree(p->right,w);
		return p;
}
