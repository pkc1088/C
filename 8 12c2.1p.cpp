#include <stdio.h>
#include <ctype.h>
int main(void)
{
char msg1[100], ch, *p=msg1, *q=msg1; 
int i=0,j=0;

printf("Enter a message : ");

while ((ch=getchar()) != '\n')
{
	if('a'<=ch && ch<='z')
		ch=ch-'a'+'A';
	if(	ch>='A' && ch<='Z' )
	{
		*p++=ch;
	}
}

/*
while ((ch = toupper(getchar())) != '\n') 
{
    if (isalpha(ch))
		msg1[i++]=ch;		
}
*/
p--;
if(*p%2==0)
 {
	for(; q!=p; q++,p--)	//위치 비교 
	{
		if(*q!=*p) //값 비교 
			{
			printf("Not a palindrome");		
			return EOF;
			}
	}
	printf("Palindrome");
	return EOF;
 }
	
if(*p%2==1)
 {
	for(; q<p; q++,p--)
	{
		if(*q!=*p) 
		{
			printf("Not a palindrome");	
			return EOF;
		}
	}
	printf("Palindrome");
	return EOF;
 }

return 0;
}
