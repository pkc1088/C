#include <stdio.h>

int main(void)
{
	char word[80], ect[80], *p=word, *q=ect, ch;
	int c, i=0,j=0,trash=0;

	
	while( (ch=getchar()) != '\n')
	{
		if(ch>='a'&&ch<='z')
		{
			*p++=ch;
			i++;
		}
		else
		{
			j=i;
			i++;
		}
	}
	c=i;
		
	for(i=0,p=word;p<word+c;p++,i++)
{
	
		if(i==j)
		{
			printf("\n");
			*p--;
			goto here;
		}	
		printf("%c", *p);
		here:
			trash++;
}
	
	return 0;
}
