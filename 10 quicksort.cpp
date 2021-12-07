#include <stdio.h>
#define N 10
int main(void)
{
	int a[N], b[N], j=0, i, temp;
	printf("Enter 5 numbers to be sorted : ");
	
	for(i=0;i<N;i++)
		scanf("%d", &a[i]);
	
	there: ;
	
	for(i=1;i<N-j;i++) //가장 큰 수를 맨 뒤로 보내고 a배열 줄이면서 비교 
	{				   //b[i]에 저장하는 내 방식임 
		here: ;
		
		if(a[i-1]>a[i])
		{
		temp=a[i-1];
	 	a[i-1]=a[i];
	    a[i]=temp;
	    goto here;
		}
	}
	
	b[j]=a[N-1-j];
	j++;
	if(j!=N)
		goto there;
	
	printf("In sorted order : ");
	for(i=N-1;i>=0;i--)
		printf("%d ", b[i]);
	return 0;
 } 
