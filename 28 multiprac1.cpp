#include <stdio.h>
/*
int main(void)
{
	
	int board[2][3]={1,2,3,
					 4,5,6};
	int i, j, s, cnt=0, n=2, m=3;

	for(i=0; i<n*m; i++)
	{
		scanf("%d", &s);
		board[0][i]=s;
	}
	
	for(i=0; i<2*3; i++)
	{
		board[1][i]=7;
	}
	
	printf("%d %d\n", board[0][4], board[0][5]);
	
	
	for(i=0;i<2;i++)
		for(j=0; j<3; j++)
			printf("%d", board[i][j]);
	
    return 0;
}
int main(void)
{
	char board[2][3]={'a','b','c','d','e','f'};
	int i, j;
	
	for(i=0;i<2;i++)
		for(j=0; j<3; j++)
			if(board[i][j]=='\0')
				printf("NULL\n");
					
	return 0;
}*/
int main(void)
{
	char verb[][6]={"watch",
					"cast",
					"dig"};
	
	printf("%s\n", verb[1]);
	printf("%c\n", verb[1][2]);
	printf("%c\n", verb[0][9]);
	
	for(int i=0;i<3;i++)
		for(int j=0; j<6; j++)
			if(verb[i][j]=='\0')
				printf("NULL\n");	//널(+빈공간)이 총 6개니까  
	return 0;
}	
//즉 int 나 char는 널이 없지만 string은 널을 생성함 
