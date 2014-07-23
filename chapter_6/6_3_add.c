#include "6_3.h"

struct tnode *talloc(void);
struct linklist *lalloc(void);
void addln(struct tnode *, int);

//addtreex

struct tnode *addtreex(struct tnode *p,char *w,int linenum)
{
		int cond;

		if (p == NULL) {
				p = talloc();
				p->word = strdup1(w);
				p->lines = lalloc();
				p->lines->lnum = linenum;
				p->lines->ptr = NULL;
				p->left = p->right = NULL;
		}
		else if((cond = strcmp(w,p->word)) == 0)
				addln(p,linenum);
		else if (cond < 0)
				p->left = addtreex(p->left, w, linenum);
		else
				p->right = addtreex(p->right, w, linenum);
		return p;
}


//addln

void addln(struct tnode *p,int linenum)
{
		struct linklist *temp;

		temp = p->lines;

		while ((temp->ptr) != NULL && (temp->lnum) != linenum)
				temp = temp->ptr;
		if ((temp->lnum) != linenum) {
				temp->ptr = lalloc();
				temp->ptr->lnum = linenum;
				temp->ptr->ptr = NULL;
		}
}

//treexprint

void treexprint(struct tnode *p)
{
		struct linklist *temp;

		if (p != NULL) {
				treexprint(p->left);
				printf("%10s: ",p->word);
				for (temp = p->lines;temp != NULL;temp = temp->ptr)
						printf("%4d ",temp->lnum);
		printf("\n");
		treexprint(p->right);
	}
}

//lalloc

struct linklist *lalloc(void)
{
		return (struct linklist *) malloc(sizeof(struct linklist));
}

//noiseword

int noiseword(char *w)
{
		static char *nw[] = {
				"a",
				"an",
				"and",
				"the",
				"to",
		};
		int cond, mid;
		int low = 0;
		int high = sizeof(nw) / sizeof(char *) - 1;

		while (low <= high) {
				mid = (low+high)/2;
				if ((cond = strcmp(w, nw[mid])) < 0)
						high = mid - 1;
				else if (cond > 0)
						low = mid + 1;
				else 
						return mid;
		}
		return -1;
}


