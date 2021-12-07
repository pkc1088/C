#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int i,j;
	int sen[4]={1,2,3,4};
	int sen2[3][4]={ {1,2,3,4}, {5,6,7,8}, {9,10,11,12} };

	int (*arrptr)[4]=&sen;
	int (*arrptr2)[4]=sen2;			//4로 사이즈 맞춰줘야함 	
	printf("%d\n", (*arrptr)[3]);	
	printf("%d\n", (*arrptr2)[6]);	
											//배열포인터 
////////////////////////////////////////////////////////////////////////////	
											//포인터배열
											 
	const char *arr[3];    		    //포인터 배열 선언.
    arr[0] = "BlockDMask";     	    //arr[0]은 -> 문자열 주소를 가리킵니다.
    arr[1] = "C Programming";       //arr[1]은 -> 문자열 주소를 가리킵니다.
    arr[2] = "point_arr";       
	printf("%s\n", arr[2]);		 
						
						
	int num1 = 100;
    int num2 = 200;
    int num3 = 300;
    int	*brr[3] = { &num1, &num2, &num3 };
    printf("%p, %d\n", brr[2], *brr[2]);		
    					
	const char *tens[] = {"twenty", "thirty", "forty", "fifty"};
	printf("%s\n", tens[3]);						
	
	
	return 0;
}
