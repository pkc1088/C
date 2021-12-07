#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(void)
{
	char arr[100], *brr[10];
	int p,q;
	fgets(arr,sizeof(arr),stdin);
	fgets(*brr,sizeof(*brr),stdin);
	p=strlen(arr);
	q=strlen(*brr);
	printf("%d\n", p);
	printf("%d", q);
	return 0;
}
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void) 
{

    int i,j,len;
    char tmp[30], *sen[10];
    
  	for(i=0;i<10;i++)	
	{
	fgets(sen[i],sizeof(sen[i]),stdin);
	}	
 	
 	for(j=i-1;j>=0;j--)
	 printf("%s ", sen[j]);	

	return 0;
}*/
