#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	bool a[5]={false};
	int n;
	
	printf("%d\n", a[0]);
	a[1]=5;
	printf("%d", a[1]);
	
	return 0;
}
