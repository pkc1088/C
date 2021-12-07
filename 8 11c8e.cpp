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
	
	p=find_largest(arr, k);		//7pointerfunc 이랑 다른점, 배열을 넘긴거임 
	printf("The largest element is %d\n", *p); 			//&arr &k 불가 
	return 0;			//*p=&(*find_largest(arr,k)) 인거임 상쇄된거임 
}
*/	
int main(void)
{
	int arr[5]={1,2,3,4,8},k=5, p;
	
	p=*find_largest(arr, k);	//p를 그냥 선언하면 함수에 *달아주고
	printf("The largest element is %d\n", p); // 위의 main경우는 7pointerfunc랑 같음 
	return 0;	//find_largest의 주소가 가리키는 값을 p에 주는거임. 
}

