#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAXWORD 100
#define NDISTINCT 1000
#include "6_4.h"
/*struct tnode {
		char *word;
		int count;
		struct tnode *left;
		struct tnode *right;
};
*/

//struct tnode *addtree(struct tnode *,char *w);
//int getword(char *,int);
void sortlist(void);
void treestore(struct tnode *);

static int ntn = 0;
struct tnode *list[NDISTINCT];

//struct tnode *list[NDISTINCT];
//int ntn = 0;

main()
{
		struct tnode *root;
		char word[MAXWORD];
		int i;

		root = NULL;
		while (getword (word,MAXWORD) != EOF)
				if (isalpha(word[0]))
						root = addtree(root, word);
		treestore(root);
		sortlist();
		for (i = 0;i < ntn; i++)
				printf("%2d : %20s\n",list[i]->count,list[i]->word);
		return 0;
}

//#include "6_4.h"
//treestore
void treestore(struct tnode *p)
{
		if (p != NULL) {
				treestore(p->left);
				if (ntn < NDISTINCT)
					list[ntn++] = p;
				treestore(p->right);
		}
}



//sortlist
void sortlist(void)
{
		int gap, i , j;
		struct tnode *temp;

		for (gap = ntn/2; gap > 0; gap /= 2)
				for (i = gap; i < ntn;i++)
						for (j = i-gap; j >= 0; j-= gap) {
								if ((list[j]->count) >= (list[j+gap]->count))
										break;
								temp = list[j];
								list[j] = list[j+gap];
								list[j+gap] = temp;
						}
}

