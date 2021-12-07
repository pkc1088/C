#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int main(void)
{
	char ch;
	char st[17] = "In BIFF-speak : ";
	int i=10, n=9;
	printf("Enter message : ");
	
	while ( (ch=getchar()) != '\n' )
	{
		
	 if(i>n)
	 {
	  printf("%s", st);
	  n=n+10;
	 }
	 
	 if ('a' <= ch && ch <= 'z')
	 ch=ch-'a'+'A';
	 
	 switch(ch-48)
	 {
		case 17 : printf("4");		break;
		case 18	: printf("8");		break;
		case 21	: printf("3");		break;
		case 25 : printf("1");		break;
		case 31 : printf("0");		break;
		case 35	: printf("5");		break;
		default : printf("%c", ch);	break;
	 }
	}
	 
	printf("!!!!!!!!!!!!");
	return 0;
}
