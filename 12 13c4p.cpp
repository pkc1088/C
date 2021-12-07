 #include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
	int i,j,k,n,w,x,y,z;
	char a[8][8]={"twenty", "thirty", "fourty", "fifty",
				"sixty","seventy", "eighty", "ninety"};	
	char b[9][6]={"one","two","three","four","five",
			   "six","seven","eight","nine"};
	char c[9][10]={"eleven","twelve","thirteen",
				"fourteen","fifteen","sixteen",
				"seventeen","eighteen","nineteen"};
	char *p=&a[0][0], *q=&b[0][0], *r=&c[0][0];
	printf("Enter a two-digit number : ");
	scanf("%d", &n);
	if(n<20)
	{
	 k=n%10-1;
	 z=k*10;
	 for(w=0;w<9;w++,*r++)
	   printf("%c", *(r+z));
	}
	if(n>=20)
	{
	 i=n/10;	
	 j=n%10;	
	 x=(i-2)*8;
	 y=(j-1)*6;
	 
	for(w=0;w<7;w++,*p++)
	   printf("%c", *(p+x));
	  
 	printf("-");
	
	for(w=0;w<5;w++,*q++)
	  printf("%c", *(q+y));
	
	}
	
	
	return 0;
}

