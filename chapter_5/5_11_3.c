#include <stdio.h>
#define YES 1
#define NO 0
#define MAXLINE 100
#define TABINC 8

void settab(int argc, char *argv[], char *tab);
void entab(char *tab);
int tabpos(int pos, char *tab);

main(int argc, char *argv[])
{
	char tab[MAXLINE];

	settab(argc, argv, tab);
	entab(tab);
	return 0;
}
