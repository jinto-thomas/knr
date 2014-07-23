#include "6_3.h"

main()
{
		struct tnode *root;
		char word[MAXWORD];
		int linenum = 1;

		root = NULL;
		while (getword(word,MAXWORD) != EOF)
				if (isalpha(word[0]) && noiseword(word) == -1)
						root = addtreex(root, word, linenum);
				else if(word[0] == '\n')
						linenum++;
		treexprint(root);
		return 0;
}
