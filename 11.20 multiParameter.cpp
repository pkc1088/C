#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void func(int (*arr)[3],int a, int b)
{
	for(int i=0; i<a; i++)
	{
		for(int j=0; j<b; j++)
			arr[i][j]+=10;
	}
}

int main(void)
{
	int arr[3][3]={1,2,3,4,5,6,7,8,9};
	func(arr, 3, 3);
	
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
			printf("%d ", arr[i][j]);
		printf("\n");
	}    
	
	return 0;
}

