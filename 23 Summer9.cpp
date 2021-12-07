#include <stdio.h>

int main(void)
{
	int board[100][100]={0};
	int i, j, m, n, pm, pn, p, s, cnt=0;
	
	scanf("%d%d", &m, &n);
	scanf("%d%d%d", &pm, &pn, &p);
/*	for(i=0; i<m*n; i++)
	{
		scanf("%d", &s);
		board[0][i]=s;
	}
	
	printf("%d %d %d", board[0][6], board[0][7],board[0][8]);
	for(i=0; i<m*n; i++)
	{
		printf("%d", board[0][i]);	}*/
	for(i=0;i<m;i++)
		for(j=0; j<n; j++)
			scanf("%d", &board[i][j]);

	for(i=0;i<n;i++)
	{
		if(board[pm][i]!=0 && board[pm][i] <= p)
			cnt++;
	}
	for(i=0;i<m;i++)
	{
		if(board[i][pn]!=0 && board[i][pn] <= p)
			cnt++;
	}
	
	if(board[pm][pn]!=0 && board[pm][pn] <= p)
		cnt--;
		
	printf("%d", cnt);
	
	return 0;
}
