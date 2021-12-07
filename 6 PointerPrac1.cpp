#include <stdio.h>
int main(void)
{
	int j=10,*p=&j;
	int *k=p;
	
	printf("%d\n", j);
	printf("%d\n", *p);
	printf("%d\n", *k);
	
	*k=11;
	printf("%d\n", j);
	printf("%d\n", *p);
	printf("%d", *k);
	
	return 0;
}
