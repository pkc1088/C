#include <stdio.h>
#define LEN 4

int sum_two_dimensional(int a[][LEN], int n)
{
	int sum=0, *p=&a[0][LEN]; // int *p=*a; 가능 그게 결국  
	for(p=a[0]; p<a[0]+n*LEN; p++) //p=a[0]가 되는거임 p=*a 가능 
		sum+=*p;
	
	return sum;
} 

int main(void)
{
	int arr[3][LEN]={1,2,3,4,5,6,7,8,9,10,11,12}, k=3, w;
	w=sum_two_dimensional(arr, k);
	printf("%d", w);
	return 0;
}

