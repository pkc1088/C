#include <stdio.h>
#include <string.h>
int main(void)
{
	char *name[10]={"ABC", "ABCDEF"};
	char arr[10], brr[10];
	char *add="hey";
	
	printf("%s\n", name[0]);
	
	name[0]=add;

	printf("%s\n", name[0]);
/*	for(int i=0; i<10; i++)
	{
		arr[i]=name[0][i];
	}
	
	for(int i=0; i<3; i++)
		printf("%c", arr[i]);
*/		
    return 0;
}

