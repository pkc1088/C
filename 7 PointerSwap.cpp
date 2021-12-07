#include <stdio.h>

void swap(int *a, int *b);

int main(void)
{
	int i=5,j=10;
	
	printf("%d %d\n", i, j);
	swap(&i, &j);
	printf("%d %d", i, j);
	
	return 0;
}

void swap(int *a, int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
