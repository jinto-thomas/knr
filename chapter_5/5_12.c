#include <stdio.h>
#include <stdlib.h>
#define MAXLINE 100
#define YES 1
#define NO 0
#define TAB 8

void esetab(int argc, char *argv[], char *tab);
void entab(char *tab);

main(int argc, char *argv[])
{
	char tab[MAXLINE+1];
	esetab(argc, argv, tab);
	entab(tab);
	return 0;
}

void esetab(int argc, char *argv[], char *tab)
{
	int pos, inc, i;
	if (argc <= 1) {
		for (i = 1; i < MAXLINE;i++) {
			if (i%TAB == 0)
				tab[i] = YES;
			else
				tab[i] = NO;
		}
	}
	else if (argc == 3 && *argv[1] == '-' && *argv[2] == '+') {
		pos = atoi(&(*++argv)[1]);
		inc = atoi(&(*++argv)[1]);
		for (i = 1; i < MAXLINE;i++) {	
			if (i == pos){
				tab[i] = YES;
				pos += inc;
			}
			else
				tab[i] = NO;
		}
	}
	else {
		pos = atoi(*++argv);
		for (i = 1; i < MAXLINE;i++) {
			if (i%pos == 0)
				tab[i] = YES;
			else
				tab[i] = NO;
		}
	}
}
	
			
		
		
