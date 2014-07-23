#include "tree_struct_dec.h" 
//treeprint
void treeprint(struct tnode *p)
{
		if (p != NULL) {
				treeprint(p->left);
				printf("%4d %s\n",p->count, p->word);
				treeprint(p->right);
		}
}
