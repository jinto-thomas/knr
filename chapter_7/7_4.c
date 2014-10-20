#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int minscanf(char *fmt, ...)
{
	va_list ap;
	char *p, *sval;
	int *ival,c, i;
	double *dval;
	char store[100];
	i = 0;
	va_start(ap, fmt);
	for (p = fmt; *p; p++) {
		if (*p != '%') {
			store[i++] = *p;
			continue;
		}
		store[i++] = *p; //%
		while (*(p+1) && !isalpha(*(p+1)))
			store[i++] = *++p;
		store[i++] = *(p+1); //d or c or s
		store[i] = '\0';

		switch (*++p) {
			case 'd':
				ival = va_arg(ap,int *);
				scanf(store,ival);
				break;
			case 's':
				sval = va_arg(ap,char *);
				scanf(store,sval);
				break;
			default :
				printf("unspecified format\n");
				break;
		}

	}

	va_end(ap);
}

main()
{
	int i;
	char b[10];
	minscanf("%d",&i);
	minscanf("%s",b);
	printf("%d\n",i);
	printf("%s",b);
}
