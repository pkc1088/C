#include <stdio.h>
#include <string.h>

int main(void)
{
	const char *str1="wow another world"; 
	const char *str2="Hello World";
	char str3[100];
	char str4[]="hey";
	char str5[]="bye";
	int len;
	 
	strcpy(str3, "Hey");
	printf("%s\n", str3);	
	strcpy(str3, str2);	//	strcpy(str1,str2); 불가.. 
	printf("%s\n", str3);	//포인터로 스트링을 받으니까.. 
	len=strlen("abcd");
	printf("%d\n", len);
	strcpy(str3, str1);
	len=strlen(str3);
	printf("%d\n", len);
	strcpy(str4, str5);
	printf("%s\n", str4);
	
	return 0;
}
