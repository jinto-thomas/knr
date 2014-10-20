#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
int main(int argc,char **argv)
{

	int c;

	if (argc == 2) {
		if (strcmp(argv[1],"-l") == 0) {
			while ((c = getchar()) != EOF)
				putchar(tolower(c));
		}
		else if (strcmp(argv[1],"-u") == 0){
			while ((c = getchar()) != EOF)
				putchar(toupper(c));
		}
	}
	else
		printf("usage : l-or-u <option>\n");
	return 0;
}

