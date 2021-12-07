#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int g(int x)
{
	return x*10;
}

int sum(int (*f)(int), int start, int end)
{
	int result=0;
	
	while(start <= end)
	{
	 result +=(*f)(start);
	 start++;	
	}

	return result;
}

int main(void)
{	
	int i=1, j=10;
	
	printf("%d", sum(g, i ,j) );
	return 0;
}
