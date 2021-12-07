#include <stdio.h>

int main(void)
{
	int x,y,a[]={5,15,34,54,14,2,52,72};
	int *p,*q;
	p=&a[1]; q=&a[5];
	
	x=q-p;
	y=*q-*p;
	printf("%d %d", x, y);
	
	return 0;
 } 
