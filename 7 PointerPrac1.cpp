#include <stdio.h>

int main(void)
{
	int i=10, j=15;
	int *ptr1, *ptr2;
	
	ptr1=&i;
	ptr2=ptr1;
//	*ptr2=15;	//1. ptr1 ptr2 ��� 15
				//ptr2�� ����Ű�� ptr1�� ����Ű�� i�� ���� 15�� ���� 
//	ptr2=&j;	//2. ptr1�� �״�� 10 ptr2�� 15
				//ptr2�� �ּҷ� j�� �ּҸ� �� 
	
	printf("%d  %d", *ptr1, *ptr2);
	
	
	
/*	
	int i;
	int* ptr;

	scanf("%d", &i);
	ptr=&i;
	*ptr+=1;
	*ptr=3;
	printf("%d  %d  %d  %d", i, &i, ptr, *ptr);
	i��, i�ּҰ�, ptr�ּҰ�, ptr�� 
*/

	return 0;
}
