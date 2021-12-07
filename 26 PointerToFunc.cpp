/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

double integrate (double (*f)(double), double a, double b)
{
	
	return (*f)(a) + (*f)(b);
}

int main(void)
{
	double x, y;		
	double result=integrate(sin, 1.00, 0.50 );	
	
	printf("%.2lf\n", result);
	return 0;
}
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

double func(double x)		//sin은 이게 이미 라이브러리에 있으니 
{							//굳이 정의할 필요없었던거임 
	return 2.00*x;
}
double integrate(double (*f)(double), double a, double b)
{
	
	return (*f)(a) + (*f)(b);
}
int main(void)
{ 
	double x, y;	
	double result=integrate(func, 2.00, 3.00 );	
	
	printf("%.2lf\n", result);
	return 0;
}
