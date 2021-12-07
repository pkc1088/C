#include <stdio.h>
#include <memory.h>

int main(void)
{
	int arr[1000];
	char brr[1000]={'z'};
	
	memset(arr, 't', sizeof(arr));
	
	printf("%c %c %c %c", arr[0], arr[200], brr[0], brr[100]); 

    return 0;
}

