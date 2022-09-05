#include <string.h> 
#include <stdio.h> 
#include <stdbool.h>
#include <stdlib.h>
#include <malloc.h>

int main(void)
{
	int board2[2][2]={0};
	int i, j, m, n, pm, pn, p, cnt=0;
	char board1[2][2]={};
    char s;
	scanf("%d %d", &m, &n);
	
	for(i=0; i<m*n; i++)
	{
		scanf(" %c", &s);
		board1[0][i]=s;
	}
    /*
    1 2
    3 4
    */
	printf("%c %c\n", board1[0][2], board1[1][1]);
	
    for(i=0;i<m;i++)
		for(j=0; j<n; j++)
			printf("%c", board2[i][j]);
    
    char *parr[] = {"one", "two", "three"};
    printf("%c %c\n", parr[1][2], parr[1][4]);	//string이니깐 [1][4]면 널이나오고 그 외 string 아닌 int나 charac은 연달아 나옴
    return 0;			
}

/////////

int main(void)
{
	int board1[5][5]={0},board2[5][5]={0};
	int i, j, m, n, pm, pn, p, s, cnt=0;
	
	scanf("%d%d", &m, &n);
//	scanf("%d%d%d", &pm, &pn, &p);
	
	for(i=0; i<m*n; i++)
	{
		scanf("%d", &s);
		board1[0][i]=s;
	}

	printf("%d %d\n", board1[0][3], board1[1][1]);
/*	for(i=0;i<m;i++) 
		for(j=0; j<n; j++)
			scanf("%d", &board2[i][j]);


	for(i=0;i<m;i++)
		for(j=0; j<n; j++)
			printf("%d", board1[i][j]);
	printf("\n===========\n");*/
	for(i=0;i<m;i++)
		for(j=0; j<n; j++)
			printf("%d", board2[i][j]);


	return 0;			
}
