#include <stdio.h> 
#include <string.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

void censor(char *str) 
{
    char *c= str;
    while (*c != '\0') {
        if (*c == 'f' && *(c+1) == 'o' && *(c+2) == 'o')
            *c = *(c+1) = *(c+2) = 'x';
        c++;
    }
}

int main(void)
{
	char str[]="Hello foo";	//char *str="~"; 스트링을 포인터로 받으면 
	censor(str);			//수정이 불가능해서 안됨 
	printf("%s\n", str);
	
return 0;	
}
//char *str="~"의 경우 포인터가 가리키는 곳은 바꿀수가 없지만
//포인터 변수에 들어가는 주소값은 변경이 가능.
 
