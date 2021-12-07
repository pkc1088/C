#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
#define FILLER '.'

int main(void)
{
	char word='A', board[10][10];
	int i=0, x, y, up, down, left, right;
	for(x=0;x<10;x++)
		for(y=0;y<10;y++)
			board[x][y]=FILLER;

	board[0][0]=word;
	srand((unsigned)time(NULL));
	
	while(board[x][y]=FILLER && i<26)
	{
	if( (rand() % 4) == 1 )
	board[x][y]=board[x+1][y];	//right
	if( (rand() % 4) == 2 )
	board[x][y]=board[x-1][y];	//left
	if( (rand() % 4) == 3 )
	board[x][y]=board[x][y-1];	//down
	if( (rand() % 4) == 4 )
	board[x][y]=board[x][y+1];	//up

	i++;
	word++;
	printf("%c", word);
	}
	
	return 0;
}
