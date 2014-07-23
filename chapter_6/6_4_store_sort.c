#include "6_4.h"
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
