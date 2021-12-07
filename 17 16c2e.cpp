#include <stdio.h>
#include <string.h>

struct {
		double real;
		double imaginary;
	}c1={0.0, 1.0}, c2={1.0, 0.0}, c3;
	
int main(void)
{
	c1=c2;
	c3.real=c1.real+c2.real;
	printf("%.2f", c3.real);
	
	return 0;
}

