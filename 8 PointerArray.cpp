#include <stdio.h>
int main(void)
{
	int a[10]={1,2,3,4,5,6,7,8,9,10}, sum, *p;
	
	sum=0;
	
	for(p=&a[0]; p<&a[10];p++)
	{
	 sum+=*p;
	 printf("%d\n", *p);
	}
	
	printf("%d", sum);
	
	return 0;
 } 
