#include <stdio.h>
#include <ctype.h>
#define MAXLINE 100

double atof(char s[])
{
	double val, power, to;
	int i, sign, f;

	for (i = 0; isspace(s[i]);i++)
		;
	sign = (s[i] == '-') ? -1 : 1;
	if (s[i] == '+' || s[i] == '-')
		i++;
	for (val = 0.0;isdigit(s[i]);i++)
		val = 10.0 * val + (s[i] - '0');
	if (s[i] == '.')
		i++;
	for ( power = 1.0;isdigit(s[i]);i++) {
		val = 10.0 * val + (s[i] - '0');
		power *= 10.0;
	}
	if (s[i] == 'e')
		i++;
	if (s[i] == '+') {
		f = 1;
	}
	else {
		f = 0;
	}
	i++;
	for (to = 0.0;isdigit(s[i]);i++) {
		to = 10.0 * to + (s[i] - '0');
	}
	if (f == 1) {
		while (to > 0) {
			val *= 10;
			to--;
		}
	}
	else {
		while (to > 0) {
			val /= 10;
			to--;
		}
	}
	return sign * val / power;
}


int getaline(char s[], int lim)
{
	
	int i, c;
	i = 0;
	while ((c = getchar()) != EOF && c != '\n') {
		s[i++] = c; 
	}
	if (c == '\n') {
		s[i++] = '\n';
	}
	s[i] = 0;
	return i;
}


main()
{
	double sum, atof(char []);
	char line[MAXLINE];
	int getaline(char line[], int max);

	sum = 0;
	while (getaline(line, MAXLINE) > 0)
		printf("\t%g\n", sum += atof(line));
	return 0;
}
