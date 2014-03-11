#include <stdio.h>

int binary_search(int x, int v[], int n)
{
	int low, high, mid;

	low = 0;
	high = n-1;
	
	mid = (low+high)/2;

	while (low <= high && x != v[mid]) {
		if (x < v[mid]) {
			high = mid-1;
		}
		else {
			low = mid+1;
		}
		mid = (low+high)/2;
	}
	if (v[mid] == x) {
		return mid;
	}
	else {
		return -1;
	}
}



main()
{
	int x[10] = {1,2,4,5,6,3,0,7,8,9};
	int y;
	int a = 9;
	y = binary_search(a,x,10);
	printf("%d is found at %d\n",a,y);
	return 0;
}
