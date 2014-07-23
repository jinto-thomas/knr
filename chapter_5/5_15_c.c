#include <stdio.h>
#include <string.h>

int my_getline(char *s,int lim, int f)
{
    int c;
	char *p = s;
		
        for (;lim > 0 && (c = getchar()) != EOF && c != '\n';lim--,s++) { 
        	if (f) {
				if (c >= 'A' && c <= 'Z')
					c += 32;
			}
			*s = c;
		}
		
        if (c == '\n')
                *s++ = '\n';
        *s = '\0'; 
        return s - p;
}

