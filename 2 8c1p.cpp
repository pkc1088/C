#include <stdio.h>
#include <stdbool.h>
#define SIZE ((int) ( sizeof(display) / sizeof(display[0]) ) )
int main(void)
{
	int i=0, ch;
	long long disNum[10]={0}, repNum[10]={0}; 
	
	printf("Enter a number : ");
	while( (ch = getchar()) != '\n' )
	 {
		repNum[ch-48]++; 
		if(repNum[ch-48] == 2)
		{
			disNum[i]=ch-48;
			i++;
		}
	 }
	printf("Repeated digit(s) : ");
	
	for(i=0; i<10; i++)	
	{
	 if (disNum[i]>0)
		printf("%lld " , disNum[i]);
	}
	
	return 0;
}
//ch로 숫자받으면 그 숫자의 아스키코드값이 출력되는거라 48을 빼줘야함
//그래서 이 방법은 좋은 방법이 아님... 

