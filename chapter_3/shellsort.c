#include <stdio.h>

void shellsort(int v[], int n)
{
	int gap, i, j, temp;

	for(gap = n/2; gap > 0; gap /= 2) {
		//printf("%d\n", gap);
		for (i = gap; i < n; i++)
//			printf("%d\n",i);
			for (j = i-gap; j >= 0 && v[j] > v[j+gap]; j-=gap) {
//				printf("%d\n",j);
				temp = v[j];
				v[j] = v[j+gap];
				v[j+gap] = temp;
			}
	}
}

main()
{
	int v[10] = {3,4,5,2,7,9,11,24,61,0};
	int n = 10;
	int i;
	shellsort(v, n);
	for (i = 0; i < n; ++i) 
		printf("%d\n",v[i]);

	return 0;
}
