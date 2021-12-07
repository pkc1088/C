#include <stdio.h>
int main(void)
{
	char n[20];
	int i=0;
	while(i<20)
{
	scanf("%c", n[i]);
	i++;
}
	while(i>0)
{
	printf("%c", n[i]);
	i--;
}
	return 0;
}
