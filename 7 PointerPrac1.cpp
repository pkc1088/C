#include <stdio.h>

int main(void)
{
	int i=10, j=15;
	int *ptr1, *ptr2;
	
	ptr1=&i;
	ptr2=ptr1;
//	*ptr2=15;	//1. ptr1 ptr2 모두 15
				//ptr2가 가르키는 ptr1이 가르키는 i의 값을 15로 만듦 
//	ptr2=&j;	//2. ptr1은 그대로 10 ptr2만 15
				//ptr2의 주소로 j의 주소를 줌 
	
	printf("%d  %d", *ptr1, *ptr2);
	
	
	
/*	
	int i;
	int* ptr;

	scanf("%d", &i);
	ptr=&i;
	*ptr+=1;
	*ptr=3;
	printf("%d  %d  %d  %d", i, &i, ptr, *ptr);
	i값, i주소값, ptr주소값, ptr값 
*/

	return 0;
}
