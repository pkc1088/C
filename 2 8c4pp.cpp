#include <stdio.h>
#include <stdbool.h>
#define SIZE ((long) sizeof(digit_seen)/sizeof(digit_seen[0]))
int main(void)
{
	long digit_seen[10] = {0};
	long long digit; 
	long long n;
	
	printf("Enter a number : ");
	scanf("%lld", &n);
	while(n>0)
	{
	 digit = n%10;
	 digit_seen[digit]++;
     n/=10;
	}
	printf("Digit :             0 1 2 3 4 5 6 7 8 9");
	printf("\nRepeated digit(s) : ");
	
	for(digit=0;digit<SIZE;digit++)
	{
		printf("%ld ", digit_seen[digit]);
	}
	
	return 0;
}
