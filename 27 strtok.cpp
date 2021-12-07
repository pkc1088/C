#include <stdio.h>
#include <string.h>
int main(void)
{
	char arr[]="hello world";
	char brr[]="what the fuck";
	strtok(arr, "o");
	printf("%s\n", arr);
	strtok(brr, " ");
	printf("%s\n", brr);
	
	return 0;
}
