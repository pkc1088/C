#include <stdio.h>

int main(void)
{
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	int *low, *middle, *high;
	
	low=a;
	high=a+9;
	
	middle=low + (high-low)/2;
	
	printf("%d", *middle);
	
	return 0;
 } 
