/*#include <stdio.h>
#include <string.h>

void swapchar(char *a, char *b)
{
	char temp=*a;
	*a=*b;
	*b=temp;
}
void revstr(char str[])
{
	for(int i=0, j=strlen(str)-1; i<=j; ++i, --j)
		swapchar(&str[i], &str[j]);
	
}
int main(void)
{
	char str[256];
	fgets(str, sizeof(str)+1, stdin);
	if(str[strlen(str)-1] == '\n')
		str[strlen(str)-1] = '\0';  //뉴라인  걸러내기 
	revstr(str);
	printf("%s", str);
	return 0;
}




*/

#include <stdio.h>

int main(void)
{
	char arr[256], ch;
	int i,cnt=0;
	char *p=arr;
	
	while( (ch=getchar()) != '\n')
	{
		*p=ch;
		p++;
		cnt++;
	}
	
	for(p--; cnt>=0; cnt--, p--)
		printf("%c", *p);
		
	return 0;
}

