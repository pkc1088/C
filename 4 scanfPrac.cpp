#include <stdio.h>

int main(void)
{
	int i=0;
	char n[20];
	
	while(n[i] != '\n')
	scanf("%c", n[i]);	
	
	i=0;
	while (n[i] != '\0')
{
	printf("%c", n[i]);
	i++;
}
		
	return 0;
}
