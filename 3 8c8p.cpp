#include <stdio.h>
#include <stdbool.h>

int main(void)
{
 int i,j,array[5][5],rowsum[5],colsum[5];
 
 for(i=0;i<5;i++)
 {
 	printf("Enter row %d: ", i+1);
 	for(j=0;j<5;j++)
 		scanf("%d", &array[i][j]);
  } 
	for(i=0;i<5;rowsum[i]=colsum[i]=0,i++);
	for(i=0;i<5;i++)
	for(j=0;j<5;j++)
	{
		rowsum[i]=rowsum[i]+array[i][j];
		colsum[j]=colsum[j]+array[i][j];
	}
	
	printf("\nRow totals:  ");
		for(i=0;i<5;i++)
		printf("%d\t", rowsum[i]);
		printf("\nColumn totals: ");
		for(i=0;i<5;i++)
		printf("%d\t", colsum[i]);
	
	
	return 0;
}
