#include <stdio.h>

int main(void)
{
	char termchar, ch, sentence[100];
	int i=0,j=0, count=0;
	
	printf("Enter a sentence : ");
	
	while(ch=getchar()) 
	{
		sentence[i++]=ch;
		count++;
		if(ch=='.'||ch=='!'||ch=='?')
		{
			termchar = ch;
			break;
		}
	}
	
	printf("Reversal of sentence :");
	
	for(i-1;i>=0;i--)
		printf("%c", a[i]);
		
		
	//|| (ch=getchar())!='?'||
	// (ch=getchar())!='.'|| (ch=getchar())!='!')	
		
	return 0;
}
