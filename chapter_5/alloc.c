#include <stdio.h>

#define ALLOCSIZE 10000

static char allocbuffer[ALLOCSIZE];
static char *allocp = allocbuffer;

char *alloc(int n)
{
	if (allocbuffer + ALLOCSIZE - allocp >= n) {
		allocp += n;
		return allocp - n;
	}else
		return 0;
}

void afree(char *p) 
{
	if (p >= allocbuffer && p < allocbuffer + ALLOCSIZE)
		allocp = p;
}



