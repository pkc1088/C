#include <stdio.h>

int *find_largest(int a[], int n)
{
	int i, *max;
	max=&a[0];
	for(i=1;i<n;i++)
		if(a[i]>*max)
			*max=a[i];
	return max;
}
/*
int main(void)
{
	int arr[5]={1,2,3,4,8},k=5, *p;
	
	p=find_largest(arr, k);		//7pointerfunc �̶� �ٸ���, �迭�� �ѱ���� 
	printf("The largest element is %d\n", *p); 			//&arr &k �Ұ� 
	return 0;			//*p=&(*find_largest(arr,k)) �ΰ��� ���Ȱ��� 
}
*/	
int main(void)
{
	int arr[5]={1,2,3,4,8},k=5, p;
	
	p=*find_largest(arr, k);	//p�� �׳� �����ϸ� �Լ��� *�޾��ְ�
	printf("The largest element is %d\n", p); // ���� main���� 7pointerfunc�� ���� 
	return 0;	//find_largest�� �ּҰ� ����Ű�� ���� p�� �ִ°���. 
}

