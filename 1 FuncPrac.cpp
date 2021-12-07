#include <stdio.h>
#include <stdbool.h>

double decompose(double x, int intPart, double fracPart)
{
	intPart=(int)x;
	fracPart=x-intPart;
	printf("%.2f\n", fracPart);
	return 5; 	
}
int main(void)
{
	int i; double d;
	decompose(3.14,i,d);
	printf("%d", decompose(3.14,i,d));
	return 0;
}

