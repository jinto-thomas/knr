//#include <stdio.h>
//#include <string.h>
//#include <ctype.h>

//#define MAXWORD 100
//#define NDISTINCT 1000

struct tnode {
		char *word;
		int count;
		struct tnode *left;
		struct tnode *right;
};


struct tnode *addtree(struct tnode *,char *w);
int getword(char *,int);
//void sortlist(void);
//void treestore(struct tnode *);

//static int ntn = 0;
//struct tnode *list[NDISTINCT];
