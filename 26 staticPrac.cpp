#include <stdio.h>

int i=2;		//static storage

void f1(void)
{
//	int i;				//automatic storage
	printf("%d\n", i);
	extern int i;
	printf("%d\n", i);
}

int main(void)
{
/*	extern*/ int i;
	printf("%d\n", i);
	i=10;
	printf("%d\n", i);
	
	f1();
	
	return 0;
}
