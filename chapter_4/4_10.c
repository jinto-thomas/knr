#include <stdio.h>
#include <stdlib.h>
#define MAXOP 100
#define NUMBER '0'
#include <math.h>
int getop(char []);
void push(double);
double pop(void);
int main()
{
        int type;
        double op2;
        
        char s[MAXOP];
       	while ((type = getop(s)) != '\0') {
	//	printf("%s\n",s);
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
                       	printf("error : unknown command %s\n", s);
                       	break;
                	}
        	}
	
        return 0;
}

#define MAXVAL 100

int sp = 0;
double val[MAXVAL];
//push
void push(double f)
{
	//printf("push called\n");
        if (sp < MAXVAL )
                val[sp++] = f;
        else
                printf("error : stack full\n");
}
//pop
double pop(void)
{
	//printf("pop called\n");
        if (sp > 0)
                return val[--sp];       
        else {
                printf("error: stack empty\n");
                return 0.0;
        }
}

#include <ctype.h>
#define MAXLINE 100
int getaline(char [],int);

char line[MAXLINE];
int j = 0;
int getop(char s[])
{
        int i, c;
	//printf("getop called\n");
        //printf("getop ip :%s\n",line);
	if (line[j] == '\0') {
		if (getaline(line, MAXLINE) == 0)
			return EOF;
		else
			j = 0;
	}

	while ((s[0] = c = line[j++]) == ' ' || c == '\t')
		;
	s[1] = '\0';
	if (!isdigit(c) && c != '.') {
		//printf("value of c if !isdig && != . : %d\n",c);	
                return c;
	}
	i = 0;

        if (isdigit(c))
        	while (isdigit(s[++i] = c = line[j++]))
                                ;
        if (c == '.')
                while (isdigit(s[++i] = c = line[j++]))
                                ;
        s[i] = '\0';
       	j--;
        return NUMBER;
        
}


int getaline(char line[],int lim)
{
	int i,c;
	//printf("getaline called\n");
	for (i = 0;i < lim && (c = getchar()) != EOF && c != '\n' ;i++)
		line[i] = c;
	if (c == '\n')
		line[i++] = '\n';
	line[i] = '\0';
	//printf("getaline op :%s\n",line);
	return i;
}
