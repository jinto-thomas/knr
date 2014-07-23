#include <stdio.h>
#define min(a,b) ((a) < (b) ? (a) : (b))
#define max(a,b) ((a) > (b) ? (a) : (b))
struct point {
	int x;
	int y;
};

struct point pt;
struct point maxpt = {320,300};
//struct point pt1 = {1,2};
//struct point pt2 = {3,4};

struct rect {
	struct point p1;
	struct point p2;
};

//struct rect screen;

struct point makept (int x, int y)
{
	struct point temp;
	temp.x = x;
	temp.y = y;
	return temp;
}

struct point addpoint(struct point p1,struct point p2)
{
	p1.x += p2.x;
	p1.y += p2.y;
	return p1;
}

//pt in rect
int ptinrect (struct point p,struct rect r)
{
	return (p.x >= r.p1.x && p.x < r.p2.x && p.y >= r.p1.y && p.y < r.p2.y);
}

//canonical on rect
struct rect canonrect(struct rect r)
{
	struct rect temp;

	temp.p1.x = min(r.p1.x, r.p2.x);
	temp.p1.y = min(r.p1.y, r.p2.y);
	temp.p2.x = max(r.p1.x, r.p2.x);
	temp.p2.y = max(r.p1.y, r.p2.y);
	return temp;
}

main()
{
//	struct rect screen;
//	struct point middle;
//	struct point makept(int, int);
//	screen.p1 = makept(0,0);
//	screen.p2 = makept(10,10);
//	middle = makept((screen.p1.x + screen.p2.x)/2,(screen.p1.y + screen.p2.y)/2);
//	struct point addpoint(struct point a,struct point b);
	struct point newpt;
	struct point pt1 = {1,2};
	struct point pt2 = {3,4};
	struct rect r = {{0,5},{5,0}};
	struct point addpoint(struct point pt1,struct point pt2);
	int ptinrect(struct point,struct rect);
	struct rect canonrect(struct rect);
	newpt = addpoint(pt1,pt2);
	printf("%d  ,  %d\n",newpt.x,newpt.y);
	printf("pt in rect %d\n",ptinrect(pt1,r));
	struct rect new;
	new = canonrect(r);
	printf("new\t %d %d,%d %d\n",new.p1.x,new.p1.y,new.p2.x,new.p2.y);
	return 0;
}
