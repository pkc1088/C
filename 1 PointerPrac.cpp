#include <stdio.h>
#include <stdbool.h>

int func(int a, int b)
{	
int sum=a+b;
return sum;
}
bool func2(int a, int b)
{
if(a<b)
	return true;	
return false;
}
int main(void)
{
	int i=5,j=8;
	printf("%d\n", func(i, j));
	if(func2(i,j))
		printf("i > j");
	return 0;
}

