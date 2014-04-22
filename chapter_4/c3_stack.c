#include <stdio.h>
#include "cal.h"
#define MAXVAL 100

int sp = 0;
double val[MAXVAL];
//push
void push(double f)
{
	if (sp < MAXVAL )
		val[sp++] = f;
	else
		printf("error : stack full\n");
}
//pop
double pop(void)
{
	if (sp > 0)
		return val[--sp];	
	else {
		printf("error: stack empty\n");
		return 0.0;
	}
}

