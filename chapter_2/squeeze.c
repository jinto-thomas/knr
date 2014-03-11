#include <stdio.h>
void squeeze(char d[], int g);
main()
{
	char string[] = "abcdecfe";
	int i = 97;
	squeeze(string, i);
	printf("%s\n",string);
	return 0;
}
void squeeze(char s[], int c)
{
	int i, j;

	for (i = j = 0; s[i] != '\0' ; i++)
		if (s[i] != c)
			s[j++] = s[i];
	s[j] = '\0';
}
