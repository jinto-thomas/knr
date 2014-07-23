#include "6_2.h"

int getword(char *,int);

main(int argc, char *argv[])
{
		struct tnode *root;
		char word[MAXWORD];
		int found = NO;
		int stop;

		stop = (--argc && (*++argv)[0] == '-') ? atoi(argv[0]+1) : 6;

		root = NULL;
		while (getword(word,MAXWORD) != EOF) {
				if (isalpha(word[0]) && strlen(word) >= stop)
						root = addtreex(root, word, stop, &found);
				found = NO;
		}
		treexprint(root);
		return 0;
}
						






