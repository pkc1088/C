#include <stdio.h>

void find_two_largest(int *a, int n, int *largest, int *second_largest)
{
  int *p=a;

  if (*p > *p+1) 
  {
    *largest = *p;
    *second_largest = *p+1;
  } 
  else 
  {
    *largest = *p+1;
    *second_largest = *p;
  }

  for (p=p+2; p<a+n; p++)
  {
	if (*p > *largest) 
	{
      *second_largest = *largest;
      *largest = *p;
    } 
	else if (*p > *second_largest)
      *second_largest = *p;
  }
}

int main(void)
{
	int arr[5],a,b;
	int lg, slg;
	
	printf("Enter the size of array : ");
	scanf("%d", &a);
	printf("Enter the elements of array : ");
	for(b=0;b<a;b++)
		scanf("%d", &arr[b]);
	printf("The largest and the second largest : ");
	
	find_two_largest(arr, a, &lg, &slg);
	printf("%d %d", lg, slg);
	return 0;
}
