#include <stdio.h>
#include <stdarg.h>

//minprintf

void minprintf(char *fmt, ...)
{
	va_list ap;
	char *p, *sval;
	int ival;
	double dval;

	va_start(ap, fmt);
	for (p = fmt; *p; p++) {
		if (*p != '%') {
			putchar(*p);
			continue;
		}
		switch(*++p) {
			case 'd':
				ival = va_arg(ap, int);
				printf("%d", ival);
				break;
			case 'f':
				dval = va_arg(ap, double);
				printf("%f", dval);
				break;
			case 's':
				for (sval = va_arg(ap, char *) ; *sval;sval++)
					putchar(*sval);
				break;
			default:
				putchar(*p);
				break;
		}
	}
	va_end(ap);
}


main()
{
	char a[] = "hello";
	int b = 10;
	double c = 10.4;
	minprintf("1.%s %d\n",a,b);
	minprintf("2.%xd\n",b);
	minprintf("3.%f\n",c);
}
