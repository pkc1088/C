#include <stdio.h>

int main(void)
{
	char ch1, ch2, a[10], b[10];
	int i=0, j=0, x=0, p;
	
	printf("Enter a first and last name : ");
	while((ch1=getchar())!=' ')
	{
		a[i]=ch1;
		i++;	
	}
	while((ch2=getchar())!=' ')
	{
		b[j]=ch2;
		p=j;
		j++;		
	}
	
	for(j=0;j<=p;j++)
{	
	if(x==0)
	printf("You enetered the name : ");
	x++;
	printf("%c", b[j]);
}
	printf(", ");
	printf("%c.", a[0]);
	
	
	return 0;
}
