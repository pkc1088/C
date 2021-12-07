#include <stdio.h>
int main(void)
{
	int i=0;
	char sen[5]={'a','b','c','d','e'};
	char *p;
	p=sen;
	printf("%c\n", sen[4]);
	printf("%c\n", *p);
	printf("%c\n", *(p+1) );
	p=sen+1;
	printf("%c\n", *p);
	printf("%c\n", *p++);
	printf("%c\n", *p);
	p=p+1;
	if(p+1>0)
		printf("hey\n");
	printf("%c\n", *p);
	for(*p--; ; p--)	
	{
		printf("%c\n", *p);
		break;
	}
	//printf("%s\n", *p+1);	//error 
	
	return 0;
}
