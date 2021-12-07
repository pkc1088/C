#include <stdio.h>

int main()
{
	char ch;
	ch=getchar();
	if(ch-48>=49 && ch-48<=74)
		printf("lower");
	else if(ch-48>=17 && ch-48<=42) 
		printf("upper");
	else printf("nothing");
	return 0;
}
