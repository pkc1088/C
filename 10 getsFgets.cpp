#include <stdio.h>
int main(void)
{
	char str[]="what are you doing?", str2[10]; 
	char *p, *q;
	
	p=str;
	
	printf("%c %s\n", *p, p);
			     //������,��Ʈ��(���) 
	puts(str); 
	
	gets(str2);
	puts(str2);	//���� �������ص� �Ǽ� ���ϱ��ϳ� ���� 
	
	fgets(str2, sizeof(str2), stdin);	//���������� ��µ� 
	puts(str2);
	
	
	
	return 0;
}

