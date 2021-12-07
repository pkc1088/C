#include <stdio.h>
#include <stdlib.h> //qsort 저장되어있음 
int cmp(const void *a, const void *b)
{
	int x= *(int *)a, y= *(int *)b;
	return x-y; //x에서 y순으로라는 의미인듯 
}/*
int cmp(const void *a, const void *b)
{
	const int *p=(const int*)a, *q=(const int*)b;
	return *q-*p;
}c아니라 cpp니까 a랑 b앞에 캐스팅 해줘야함*/
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
	qsort(&a[3], 4, sizeof *a, cmp);	//a[3] 부터 4개 element 정렬 
	printf(a, size);
	printf("\n");	
	return 0;
}
