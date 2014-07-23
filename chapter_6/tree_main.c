#include "tree_struct_dec.h"
#include <ctype.h>
struct tnode *addtree(struct tnode *,char *);
void treeprint(struct tnode *);
int getword(char *,int);

main()
{
		struct tnode *root;
		char word[MAXWORD];

		root = NULL;
		while (getword(word,MAXWORD) != EOF)
				if (isalpha(word[0]))
								root = addtree(root,word);
		treeprint(root);
		return 0;
}
