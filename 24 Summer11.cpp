#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int n, i=0;
	scanf("%d", &n);
	char inp[100], arr[n];
	
	while( i<n )
	{
		scanf("%s", inp);
		
		if(isdigit(inp[0]) || inp[0]=='-' || inp[0]=='+')
			{
			int num=atoi(inp);
			arr[i]=num*num;
			printf("%d ", arr[i]);
			}
			
		else
		{
			arr[i]=inp[0];
			printf("%c%c ", arr[i], arr[i]);
		}
		
		i++;
	}
	return 0;
 } 
