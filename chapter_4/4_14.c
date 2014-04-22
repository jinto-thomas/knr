#include <stdio.h>
#define swap(t,x,y) { 	t a;  \
			a = y;\
			y = x;\
			x = a;\
		    }

main()
{
	int c, d;
	c = 100;
	d = 1;

	swap(int,c,d);
	printf("c : %d , d : %d\n",c,d);
	return 0;
}
