#include <stdio.h>

int main(void)
{
	int i=0, a[10]={1,2,3,4,5,6,7,8,9,10};
	int *p=&a[0], *q=&a[9], temp;
	
	while(*p==1)
	{
		temp = *p;
		printf("%d %d %d\n", temp,*p,*q);
		*p++=*q//+100;	���� �� ���� ���൵ *p �� 1���� ++�޾Ƽ� 2 �Ǵ°��� 
		printf("%d %d %d\n", temp,*p,*q);
		*q--=temp//+1200;
		printf("%d %d %d\n", temp,*p,*q);
	}
	
/*	printf("%d %d %d\n", *p, *q, temp);
	for(i=0;i<10;i++)
		printf("%d", a[i]);*/
	return 0;
}
