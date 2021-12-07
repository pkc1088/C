#include <stdio.h> 
#include <string.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
char *duplicate(char *p)
{
	char q[]="bye";
	
    strcpy(q, p);
    return q;
}
	// 17.2 보고 하기 
int main(void)
{
	char s1[10], s2[]="Hello";
	duplicate(s2);
	
	printf("%s", s1);
	return 0;
 } 
