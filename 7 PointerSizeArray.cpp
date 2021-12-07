#include <stdio.h>
//8c6e 다른 버전.. 
void find_two_largest(int a[], int *n, int *largest, int *second_largest);

int main(void)
{
	int arr[5],a,b,k;
	int lg, slg;
	k=sizeof(arr)/sizeof(arr[0]); //5이라는 소리 
	
	printf("Enter the elements of array : ");
	for(b=0;b<k;b++)
		scanf("%d", &arr[b]);
	printf("The largest and the second largest : ");
	
	find_two_largest(arr, &k, &lg, &slg); //&k로 해주면 *n으로 받아서 나중에 k건들일 수 있음 
	printf("%d %d", lg, slg);
	return 0;
}

void find_two_largest(int a[], int *n, int *largest, int *second_largest)
{
  int i;

  if (a[0] > a[1]) 
  {
    *largest = a[0];
    *second_largest = a[1];
  } 
  else 
  {
    *largest = a[1];
    *second_largest = a[0];
  }

  for (i = 2; i < *n; i++)
  {
	if (a[i] > *largest) 
	{
      *second_largest = *largest;
      *largest = a[i];
    } 
	else if (a[i] > *second_largest)
      *second_largest = a[i];
  }
}
