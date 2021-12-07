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
//위에 define을 해줘도 처음에 a[5]라고 설정해둬야함 
