#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int x, rate, year;
	double jegop,calRate,firstLow[4]={0}, fyinvest;
	printf("Enter interest rate : ");
	scanf("%d", &rate);
	printf("Ener number of years : ");
	scanf("%d", &year);
	calRate=(100+rate);
	jegop=calRate/100;
	printf("jegop is %.2lf", jegop);
	for(x=0;x<12;x++)
		
	fyinvest=100.00*jegop;
	printf("\n%.2lf", fyinvest);
/*	firstLow[0]=fyinvest;
	for(x=1;x<4;x++)	
		firstLow[x]=fyinvest+x;
	
	for(x=0;x<5;x++)
	printf("%.2f\t", firstLow[x]);	*/
	return 0;
}
