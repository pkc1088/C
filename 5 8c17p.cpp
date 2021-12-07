#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void)
{
	char board[99][99];
	int i=1,n,x,y;
			
	printf("Enter size of magic square : ");
	scanf("%d", &n);
	
	for(x=0;x<n;x++)
		for(y=0;y<n;y++)
			board[x][y]='.';
	
	x=0; y=n/2;
	board[x][y]=1;
	
	for(;i<n*n;)
{
	i++; x--; y++;
	
	if(x<0)
	   x=n-1;	
	if(y==n)
	   y=0;
	 
	if(board[x][y]=='.')
	 {
	 board[x][y]=i;  
	 }
	 
	else
	 {
		x=x+2;
		y=y-1;
		if(x>n)
	   		x=x-n;	
		if(y<0)
	   		y=y+n;
		board[x][y]=i;
	 } 	
}
	
	for(x=0;x<n;x++)
	{
		for(y=0;y<n;y++)
			printf(" %d ",board[x][y]);		
		printf("\n");
	}	
	return 0;
}

