/*4.8 Suppose there will be only one charatcer push back.Modify getch and ungetch accordingly.*/

#include <stdio.h>
#define BUFSIZE 100
char buf = 0;


int getch(void)
{
	int c;
	if (buf != 0)
		c = buf;
	else
		c = getchar();
	buf = 0;	
	return c;
}

void ungetch(int c)
{
	if(buf == 0)
		buf = c;
	else
		printf("ERROR : Too Many Characters!!\n");
}		
