#include <stdio.h>

int main(void)
{
	int a[5][5], *p, (*q)[5], i=2, j=3, x, y;
	
	for(x=0;x<5;x++)
		for(y=0;y<5;y++)
			a[x][y]=0;
	
	
	for(p=a[i]; p<a[i]+5; p++)			//for row
		*p=8;
	
	for(q=&a[0]; q<&a[5]; q++)			//for column
		(*q)[j]=8;				//for(q=a;q<a+5;q++) µµ °¡´É 
	
	
	for(x=0;x<5;x++)
		{	
		for(y=0;y<5;y++)
			printf("%d ", a[x][y]);
		printf("\n");
		} 
		
	return 0;
}
