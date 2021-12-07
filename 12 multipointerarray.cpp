#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
	int i,j,k,n;
	char *a[]={"twenty", "thirty", "fourty", "fifty",
				"sixty","seventy", "eighty", "ninety"};	
	char b[8][8]={"twenty", "thirty", "fourty", "fifty",
				    "sixty","seventy", "eighty", "ninety"};
	char *p=&b[0][0]; 
	

	for(i=0;i<7;i++)
	printf("%c", *(p+i));
		
    return 0;
}//실패작임 MULTIPOINTERARRAY2 참고하기 
