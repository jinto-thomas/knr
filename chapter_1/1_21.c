#include <stdio.h>
#define MAX 100
#define TAB 3 


void entab(char one[], int d);
//void put_char(char f[], int j, int k);

main()
{
	int i;
	char line[MAX];
	
	entab(line, TAB);
	printf("%s\n",line);

	return 0;
} 




void entab(char s[], int n)
{
	int c, i;
	int count = 0;
	int j, r, y, z ,w;
	float q;
	for(i = 0; i < MAX-1 && (c = getchar())!= EOF && c!= '\n' ; ++i) {
		if (c == ' ') {
			++count;

			while ((c = getchar()) == ' ') {
				++count;
			}

			if (count < n) {
				y = count;
	                       	while (y > 0) {
        	              	       	s[i] = '*';
                                	++i;
	                               	--y;
                       		}
			//	put_char(s,i,y);
			}
			if (count == n) {
				z = n;
				while (z > 0) {
					s[i] = '#';
					++i;
					--z;
				}
			}
				
                	if (count > n) {
                        	r = count % n;  // space
                        	q = count / n;  // tab
				w = q*n;
				while (w > 0) {
					s[i] = '&';
					++i;
					--w;
				}
                        	while (r > 0) {
                                	s[i] = '*';
					++i;
					--r;
                        	}	
                	}	
		}
		if (c != ' ') {
			count = 0;
			s[i] = c;
		}
	
 
	
	}
	s[i] = '\0';

} 		


void put_char(char xx[], int i, int n)
{
	while (n > 0) {
		xx[i] = '*';
		++i;
		--n;
	}
} 


		
