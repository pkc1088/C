#include <stdio.h>
#include <stdbool.h>
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
	printf("Repeated digit(s) : ");
	
	for(digit=0;digit<10;digit++)
	{
	 if (digit_seen[digit]>=2)
		printf("%lld ", digit);
	}
	
	return 0;
}
