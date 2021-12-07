#include <stdio.h>
#include <stdbool.h>
int sum_array( int *a, int n)
{
	int *p,sum;
	sum=0;
	for(p=a;p<a+n;p++)
		sum+=*p;
	return sum;
}

int main(void)
{
	int arr[5]={1,2,3,4,5},k=5,w;
	
	w=sum_array(arr,k);
	printf("%d", w);
	
	return 0;
}

