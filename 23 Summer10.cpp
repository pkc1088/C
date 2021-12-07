#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
	char arr[300]={0}, brr[300]={0}, ch;
	int j=0,i=0;
	
	while( ch=getchar() )
    {	
	 
	 if(ch==' ')
	 {
	   --i;
	   while(i>=0)
	   {
	   brr[j]=arr[i];
	   j++; i--;
 	   }
	   brr[j++]=' ';
	 }
	
	 arr[i++]=ch;
	
	 if(ch=='\n')
	 {
	   --i; --i;
	   while(i>=0)
	   {
	    brr[j]=arr[i];
	    j++; i--;
 	   }
	   break;
	 }
    
	}

	for(j=0; j<300; j++)
	{
	 if(isspace(brr[j]))
		printf(" ");
	 if(isalpha(brr[j]))
		printf("%c", brr[j]);
	}
	
	return 0;
}

