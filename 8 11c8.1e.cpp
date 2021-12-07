#include <stdio.h>

int find_largest(int a[], int n)
{
	int i, max;
	max=a[0];
	for(i=1;i<n;i++)
		if(a[i]>max)
			max=a[i];
	return max;
}
int main(void)
{
	int arr[5]={1,2,3,4,8},k=5, p;
	
	p=find_largest(arr, k);	
	printf("The largest element is %d\n", p);
	return 0;
}

