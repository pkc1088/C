#include <stdio.h>
#define SIZE ((int)(sizeof(a)/sizeof(a[0])))

int main(void)
{
	int i,a[5];
	
	for(i=0;i<SIZE;i++)
		scanf("%d", &a[i]);
		
	for(i=0;i<SIZE;i++)
		printf("%d ", a[i]);

	return 0;
}
//���� define�� ���൵ ó���� a[5]��� �����ص־��� 
