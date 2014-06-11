#include <stdio.h>
#include <stdlib.h>
#define MAXOP 100
#define NUMBER '0'

int getop(char []);
void ungets(char []);
void push(double);
double pop(void);
main(int argc, char *argv[])
{
	char s[MAXOP];
	double op;
	
	while (--argc > 0 ) {
		ungets(" ");
		ungets(*++argv);
		switch(getop(s)) {
			case NUMBER:
				push(atof(s));
				break;
			case '+':
				push(pop()+pop());
				break;
			case '*':
				push(pop()*pop());
				break;
			case '-':
				op = pop();
				push(pop() - op);
				break;
			case '/':
				op = pop();
				if (op == 0.0)
					printf("Zero Division Error!\n");
				else 
					push(pop() / op);

				break;
//			case '\n':
//				printf("\t ==> %8g\n",pop());
//				break;
			default:
				printf("Invalid operand!!! : %s\n",s);
				argc = 1;
				break;
			}
		}
	printf("\t==> %.8g\n",pop());
	return 0;
}
		
