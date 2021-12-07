#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char ch1, ch2, save1[26]={0}, save2[26]={0};
	int i=0, x=0;
	
	printf("Enter first word : ");
	while( (ch1=getchar()) != '\n')
	{
		if('a'<=ch1 && ch1<='z')
			ch1=ch1-'a'+'A';		
		for(x=0;x<26;x++)
		{
			if(ch1=='A'+x)
			 {
			  save1[x]++;
			  break;		 
			 }
		}
	}
	
	printf("Enter second word : ");
	while( (ch2=getchar()) != '\n')
	{
		if('a'<=ch2 && ch1<='z')
			ch2=ch2-'a'+'A';		
		for(x=0;x<26;x++)
		{
			if(ch2=='A'+x)
			 {
			  save2[x]++;
			  break;		 
			 }
		}
	}	
	
	for(x=0;x<26;x++)
	{
		if(save1[x]==save2[x])	
		{
		 if(x==25)	
		 {
		 printf("The words are anagrams.");
		 break;
		 }
		}
		 
		else 
		{
		 printf("The words are not anagrams.");
		 return EOF;		
	    }
	}
	
	return 0;
}
