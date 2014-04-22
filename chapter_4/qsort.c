/* qsort : sort v[left]..v[right] into increasing ord.*/

#include <stdio.h>


void qsort(int v[], int left, int right)
{
	int i, last;
	void swap(int v[], int i, int j);

	if (left >= right)
		return;

	swap(v, left, (left + right) / 2);
	last = left;
	for (i = left + 1; i <= right; i++)
		if (v[i] < v[left])
			swap(v, ++last, i);
	swap(v, left, last);
	qsort(v, left, last-1);
	qsort(v, last+1, right);
}

/*swap : interchange v[i] and v[j]*/

void swap(int v[],int i, int j)
{
	int temp;
	temp = v[i];
	v[i] = v[j];
	v[j] = temp;
}


main()
{
	int i;
	int q[] = {9,11,23,42,1,5,87,45,30,43};
	qsort(q,0,9);
	for (i = 0; i < 10; i++)
		printf("%d ",q[i]);

	return 0;
}
