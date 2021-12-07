#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *duplicate(char *str) 
{
	strlen(str);
    char *q=(char *)malloc(sizeof(strlen(str)+1));
	if(*q==NULL)
    {
	    printf("Error: malloc failed.\n");
        exit(EXIT_FAILURE);
    }
	strcpy(q,str);
    return q;
}

int main(void)
{
	char str[]="Hello";
	char *p;
	p=duplicate(str);
	printf("%s", p);
	return 0;
}
