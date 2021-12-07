
#include <stdio.h>

int *max(int *a, int *b);

int main(void)
{
	int *p, i=5,j=10;
	p=max(&i, &j); //이것도 *p=&*max(&i,&j)랑 같음 상쇄된거임 
	printf("%d", *p);
	return 0;
}

int *max(int *a, int *b)
{
	if(*a>*b)
		return a;	//함수를 포인터로 받으니까 a만 리턴함 
	else
		return b;	 
}	


/*
#include <stdio.h>

int max(int *a, int *b);

int main(void)
{
	int *p, i=5,j=10;
	max(&i, &j);
	printf("%d %d", i, j);
	return 0;
}

int max(int *a, int *b)
{
	if(*a>*b)
	{	
		*a=100;
		return *a;		//함수를 포인터로 받는거 아닌 상황에선 이처럼 
	}					//*변수 리턴이 맞음 
	else
	{
		*b=105;
		return *b;
	}	
*/
	
/*
#include <stdio.h>

int max(int *a, int *b);

int main(void)
{
	int *p, i=5,j=10;
	max(&i, &j);
	return 0;
}

int max(int *a, int *b)
{
	if(*a>*b)
		printf("%d", *a);
	else
		printf("%d", *b); //변수만 넘기는 기존방식 
}
*/
