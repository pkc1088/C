#include <stdio.h>

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones)
{
	*twenties=dollars/20;
	*tens=(dollars%20)/10;
	*fives=((dollars%20)%10)/5;
	*ones=((dollars%20)%10)%5;
}
int main(void)
{
	int doll, tw, te, fi, on;
	
	printf("Enter a dollar amount : ");
	scanf("%d", &doll);
	pay_amount(doll, &tw, &te, &fi, &on);
	printf("$20 bills: %d\n", tw);
	printf("$10 bills: %d\n", te);	
	printf("$5 bills: %d\n", fi);	
	printf("$1 bills: %d", on);	
	return 0;
}
