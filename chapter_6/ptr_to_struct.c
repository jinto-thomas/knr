#include <stdio.h>

struct point {
	int x;
	int y;
};

struct rect {
	struct point p1;
	struct point p2;
};

main()
{
	struct point p, *pp;
	
	struct point q = {1,2};
	p = q;
	pp = &p;
	printf("%d %d\n",(*pp).x,(*pp).y);
	printf("%d %d\n",pp->x,pp->y);
	return 0;
}
