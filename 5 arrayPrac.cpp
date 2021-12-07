#include <stdio.h>

int main(void)
{
	char ch, save[26]={0}, count[26]={0};
	int i=0, x=0;
	
	scanf("%c", &save[0]);
	save[0]++;
	printf("%c", save[0]);
	
	return 0;
}
