#include <stdio.h> 
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char a[20+1], b[20+1], c[20+1], large[20+1], small[20+1];
	int i,j,k;
	
	printf("Enter word : ");
	scanf("%s", a);		
	printf("Enter word : ");
	scanf("%s", b);
	
	if(strcmp(a,b) > 0)
	{
	strcpy(large, a);	
	strcpy(small, b);	
	}
	else //strcpy(small, strcpy(large, a));이게 편함 
	{
	strcpy(large, b);	
	strcpy(small, a);	
	}
	
	for(;;)
	{
	printf("Enter word : ");
	scanf("%s", c);
	 
	if(strcmp(c, large) > 0)
	 	strcpy(large, c);
	if(strcmp(small, c) > 0)
	 	strcpy(small, c);
		 	
	if(strlen(c)==4)
		break;
	}
	
	printf("\nSmallest word: %s\n", small);
	printf("Largest word: %s", large);	
	
	
	return 0;
}
