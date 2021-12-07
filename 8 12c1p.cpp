#include <stdio.h>

int main(void)
{
char msg[100], ch, *p=msg; 

printf("Enter a message : ");
while ((ch=getchar()) != '\n' && p<msg+100)
{
	*p=ch;
	*p++;
}

printf("Reversal is : ");
for(p--;p>=msg;p--)
	printf("%c", *p);
	
return 0;
}
