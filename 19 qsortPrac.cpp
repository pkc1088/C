#include <stdio.h>
#include <stdlib.h> //qsort ����Ǿ����� 
int cmp(const void *a, const void *b)
{
	int x= *(int *)a, y= *(int *)b;
	return x-y; //x���� y�����ζ�� �ǹ��ε� 
}/*
int cmp(const void *a, const void *b)
{
	const int *p=(const int*)a, *q=(const int*)b;
	return *q-*p;
}c�ƴ϶� cpp�ϱ� a�� b�տ� ĳ���� �������*/
void printf(int a[], int n)
{
	for(int i=0; i<n; i++)
		printf("%d ", a[i]);
}
int main(void)
{
	int a[]={5,1,0,3,5,1,8};
	int size=sizeof a/sizeof *a;
	printf(a, size);
	printf("\n");
//	qsort(a, size, sizeof *a, cmp);
//	printf(a, size);
//	printf("\n");		
	qsort(&a[3], 4, sizeof *a, cmp);	//a[3] ���� 4�� element ���� 
	printf(a, size);
	printf("\n");	
	return 0;
}
