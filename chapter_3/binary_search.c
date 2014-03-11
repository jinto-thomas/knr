#include <stdio.h>

int binsearch(int x, int v[], int n)
{
	int low,high,mid;

	low = 0;
	high = n-1;
	while (low <= high) {
		mid = (low+high)/2;
		if (x < v[mid]) {
			high = mid-1;
		}
		else if (x > v[mid]) {
			low = mid+1;
		}
		else {
			return mid;
		}
	}
	return -1;
}


main()
{
	int y;
	
	int x[11] = {1,3,4,5,2,5,7,9,11,15,10};
	y = binsearch(1,x,8);
	printf("%d\n",y);
	return 0;
}




