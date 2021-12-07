#include <stdio.h>

int main(void)
{
	double c, f;
	
	scanf("%lf", &f);
	
	c=5.0/9.0 * (f-32.0);
	printf("%.2lf", c);
	
	return 0;
}
