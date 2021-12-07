#include <stdio.h>

int *find_largest(int *a, int n)		//*a는 a[]와 같고 a[i]는 *(a+i)와 같음 
{
	int i, *max;
	max=a;
	for(i=1;i<n;i++)
		if(*(a+i)>*max)
			*max=*(a+i);
	return max;
}

int main(void)
{
	int arr[5]={1,2,3,4,8},k=5, p;
	
	p=*find_largest(arr, k);	
	printf("The largest element is %d\n", p);  
	return 0;	
}	//arr은 어레이인데 포인터로 인식되니 &*상쇄이고 k의 경우 &k로 할거면
	//위에 *n으로 다 맞춰주면됨 근데 k자체를 건드릴일 없으니그냥 k로 해도 노상관 
