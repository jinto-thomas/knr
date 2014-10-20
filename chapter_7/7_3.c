#include <stdio.h>
#include <stdarg.h>

//minprintf

void minprintf(char *fmt, ...)
{
	va_list ap;
	char *p, *sval;
	int ival, i;
	double dval;
	unsigned xval;
	char arr[10];

	va_start(ap, fmt);
	for (p = fmt; *p; p++) {
		if (*p != '%') {
			putchar(*p);
			continue;
		}
		i = 0;
		arr[i++] = '%';
		while (*(p+1) && !isalpha(*(p+1)))
			arr[i++] = *++p;
		arr[i++] = *(p+1);
		arr[i] = '\0';

		switch(*++p) {
			case 'd':
				ival = va_arg(ap, int);
				printf(arr, ival);
				break;
			case 'f':
				dval = va_arg(ap, double);
				printf(arr, dval);
				break;
			case 's':
				for (sval = va_arg(ap, char *) ; *sval;sval++)
					putchar(*sval);
				break;
			case 'x':
				xval = va_arg(ap, unsigned);
				printf(arr, xval);
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
	unsigned d = 0xa;
	double c = 10.4;
	minprintf("1.%s %d\n",a,b);
	minprintf("2.%d\n",d);
//	minprintf("3.%f\n",c);
}
