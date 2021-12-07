#include <stdio.h>
#include <string.h>
#include <ctype.h> /* isalpha, toupper */
#include <stdbool.h>
#define MAX_LEN 100

bool is_palindrome(const char *message)
{
	const char *p, *q;

	for(p=message;*p;p++) 
		;	
     //���ǽĿ� p<=message�ȵǴ� ������ p�� �����ϸ�
	 //message�� ���� ������..
	p--;
	
	for(q=message; q < p; q++, p--) 
	{
     if (*p != *q) 
	 {
     return false;
     }
    }
    return true;	
}

int main(void) {

    char msg[MAX_LEN];
    char ch,i=0;

    printf("Enter a message: ");

    while ((ch = toupper(getchar())) != '\n' & i<MAX_LEN) 
	{
        if (isalpha(ch))
            msg[i++] = ch;
    }
    
    msg[i]='\0';
    
	if(is_palindrome(msg))
	{
		printf("Palindrome");
		return 0;
	}
		printf("Not a palindrome");
    	return 0;
}
