#include <stdio.h>
#include <ctype.h>
int main(void)
{
char msg1[100], ch; 
int i=0,j=0;

printf("Enter a message : ");

while ((ch=getchar()) != '\n')
{
	if('a'<=ch && ch<='z')
		ch=ch-'a'+'A';
	if(	ch>='A' && ch<='Z' )	// ch-48>=17 && ch-48<=42로 바꿀수 있음 
	{
		msg1[i++]=ch;
	}
}

/*
while ((ch = toupper(getchar())) != '\n') 
{
    if (isalpha(ch))
		msg1[i++]=ch;		
}
*/
if(i%2==0)
 {
	for(; j!=i; j++,i--)
	{
		if(msg1[j]!=msg1[i-1]) 
			{
			printf("Not a palindrome");		
			return EOF;
			}
	}
	printf("Palindrome");
 }
	
if(i%2==1)
 {
	for(; j<i; j++,i--)
	{
		if(msg1[j]!=msg1[i-1]) 
		{
			printf("Not a palindrome");	
			return EOF;
		}
	}
	printf("Palindrome");
 }

return 0;
}
