#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *create_array(int n, int initial_value)
{
	int *p;
	p=(int *)malloc( (sizeof(initial_value) * n) );
	if(p==NULL)
		return NULL;
	return p;
}	//내 방식 
int *create_array2(int n, int initial_value) 
{
    int *a, *p;
	a = (int *) malloc(n * sizeof(int));
	if(a==NULL)
		return NULL;
	for (p = a; p < a + n; p++)
        *p = initial_value;
    return a;
}	//답지 
int main(void)
{
	int len=5;
	int arr[len];
	int *answer=create_array(len, *arr);
	int *answer2=create_array2(len, *arr);
	printf("%d %d", answer, answer2);
	return 0;
}
