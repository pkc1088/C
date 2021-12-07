#include <stdio.h>
#include <string.h>
int main(void)
{
	char str1[257], str2[257];
	
	scanf("%[^\n]s", str1);
	scanf("%s", str2);
	
	int a=strlen(str1);
	int b=strlen(str2);
	
	printf("%s   %d\n", str1,a);
	printf("%s   %d", str2,b);
	return 0;
}
