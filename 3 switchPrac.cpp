#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int main(void)
{
	char ch;
	
	printf("Enter message : ");
	while ( (ch=getchar()) != '\n' )
	{
	/* if ('a' <= ch && ch <= 'z')
	 ch=ch-'a'+'A'; */
	
	 switch(ch-48)
	 {
		case 17 : printf("4");	break;
		default : printf("%c", ch);	break;
	 }
	}
	
	return 0;
}
