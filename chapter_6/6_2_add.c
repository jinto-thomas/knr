#include "6_2.h"
struct tnode *talloc(void);
int compare (char *, struct tnode *, int, int*);


//addtreex

struct tnode *addtreex(struct tnode *p,char *w,int num,int *found)
{
		int cond;

		if (p == NULL) {
				p = talloc();
				p->word = strdup(w);
				p->match = *found;
				p->left = p->right = NULL;
		}
		else if ((cond = compare(w, p, num,found)) < 0)
				p->left = addtreex(p->left, w, num, found);
		else if (cond > 0)
				p->right = addtreex(p->right, w, num, found);

		return p;
}
