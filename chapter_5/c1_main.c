#include <stdio.h>
#include <stdlib.h>
#include "cal.h"
#define MAXOP 100
#include <math.h>

main()
{
	int type;
	double op2, op3;
	int op4;
	char s[MAXOP];

	while ((type = getint(s)) != EOF) {
//		printf("\t\t%s\n",s);
		switch (type) {
		case NUMBER:
			push(atof(s));
			break;
		case '+':
			push(pop() + pop());
			break;
		case '*':
			push(pop() * pop());
			break;
		case '-':
			op2 = pop();
			push(pop() - op2);
			break;
		case '/':
			op2 = pop();
			if (op2 != 0) {
				push(pop() / op2);
			}
			else
				printf("error : zero division\n");
			break;
		case '%':
			op2 = pop();
			if (op2 != 0) {
				push(fmod(pop(), op2));
			}
			else
				printf("error : zero modulo division\n");
			break;
		case '\n':
			printf("\t%.8g\n", pop());
			break;
		default:
			printf("error : unknown command %s/n", s);
			break;
		}
	}
	return 0;
}
