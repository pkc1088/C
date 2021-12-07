#include <stdio.h>
int main(void)
{
	char str[]="what are you doing?", str2[10]; 
	char *p, *q;
	
	p=str;
	
	printf("%c %s\n", *p, p);
			     //포인터,스트링(어레이) 
	puts(str); 
	
	gets(str2);
	puts(str2);	//공간 설정안해도 되서 편하긴하나 위험 
	
	fgets(str2, sizeof(str2), stdin);	//공간까지만 출력됨 
	puts(str2);
	
	
	
	return 0;
}

