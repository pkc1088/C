#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char str1[100]="wow another world "; 
	char str2[100]="hello World";
	char str3[100];
	char str4[100];
	
	strcpy(str3, "whats up");
	
	strcat(str1, str2);
	strcat(str4, str3);
	
	printf("%s\n", str1);
	printf("%s %s\n", str3, str4);
	
	if(strcmp(str1, str2) > 0)	//str1,str2비교해서 true면 1인거임 
		printf("str2 is bigger than str1");
	else
		printf("No");
	
	
	return 0;
}
