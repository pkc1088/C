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
	char str[]="Hello foo";	//char *str="~"; ��Ʈ���� �����ͷ� ������ 
	censor(str);			//������ �Ұ����ؼ� �ȵ� 
	printf("%s\n", str);
	
return 0;	
}
//char *str="~"�� ��� �����Ͱ� ����Ű�� ���� �ٲܼ��� ������
//������ ������ ���� �ּҰ��� ������ ����.
 
