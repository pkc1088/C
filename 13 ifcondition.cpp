#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void) 
{
    int i=2,j=0,len;
    
	if(scanf("%d", &i)==EOF)
		j++;

	printf("%d %d", i, j);
	return 0;
}
