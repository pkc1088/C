#include <stdio.h>

int main(void)
{
	char n[20]={0};
	int i=0,c;
	while(n[i] != '\n')
	{
	scanf("%c", &n[i]);
	i++;
	}		
	printf("%d",i);
//	scanf("%c", n);
	
/*	while(n[i] != '\0')
	{
		printf("%c", n[i]);
		i++;
	}
	*/
	return 0;
}
