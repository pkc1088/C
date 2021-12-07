#include <stdio.h>

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
