#include <stdio.h>
#include <stdbool.h>

double inner_product(double *a, double *b, int n);

int main(void)
{
	double arr[3]={1.1, 2.2, 3.3}, k=3, w;
	double brr[3]={1.11, 2.22, 3.33};
	w=inner_product(arr, brr, k);
	printf("%.3f", w);
	return 0;
}

double inner_product(double *a, double *b, int n)
{
	double *p, *q, sum=0;
	p=a; q=b;
	for(;p<a+n;p++,q++)
		sum+=(*p)*(*q);
	
	return sum;
}		//답지 풀이랑 다름  
