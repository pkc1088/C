#include <stdio.h>

void reverse(char *message)
{
	int cnt=0;
	for(*message; *message!='\0'; message++)
		cnt++;

	for(*message--; cnt>=0; message--)	
	{
		printf("%c", *message);
		cnt--;
	}
}

int main(void)
{
char ch,msg[100]; 
int i=0;

printf("Enter a message : ");

//while( (ch=getchar()) != '\n')
//	msg[i++]=ch;
gets(msg);
printf("Reversal is : ");
reverse(msg);

return 0;
}
