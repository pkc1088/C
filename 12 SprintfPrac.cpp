#include <stdio.h> 
#include <string.h>
#include <stdlib.h>

int main(void)
{
	int j, i;
	char hey[20]="your age is ", a[20];
 	for(i=0; i<5; i++) 
	{
		scanf("%d", &j);
		sprintf(a, "%d", j);
		strcat(hey, a);
	}
	printf("%s", hey);
	return 0;
}
/*
#include <stdio.h> 
#include <string.h>
#include <stdlib.h>

int main(void)
{
	int j;
 	char a[20], b[20];
 	
	scanf("%d", &j);
	sprintf(b, "%d", j);
	a[0]=j;
	
	printf("%c\n", a[0]);
	printf("%c", b[0]);
	return 0;
}	*/
