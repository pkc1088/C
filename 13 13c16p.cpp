#include <stdio.h>

void reverse(char *message)
{
	int cnt=0;
	for(*message; *message!='\0'; message++)
		cnt++;

	for(*(message-1); cnt>=0 ; message--)	
	{
		printf("%c", *(message-1) );
		cnt--;
	}
}
//조건식에 *message>0 이 방식도 운이 좋아서 그런거임 
// *message-- 는 *(message--)이고 감소한번 일어난걸 포인터로 가리키는거임
//초기화때는 10을 가리켜도 printf때는 9를 출력함. 
//조건식에는 cnt를 사용해야하는것이 맞고. 
//저처럼 조건식 *message>0 혹은 message-1>0 이런식으로 
//하면 끼워맞춘다해도 다른 메모리를 건드려 오류가 
//생길수도 있고. message-1이 줄어들다보면 결국 
//msg[0]을 가리키겠지 했는데. 애초에 배열상 0번지인건 
//내가 인식하고 있는것 뿐이고 그걸 그냥 정수 0이랑 
//비교하다는건 말이 안됨.  *message--로 초기화하는 이유는 
//초기화당시에는 널을 가리켜도 print될 때는 배열상 
//감소받은 자리의 값 즉 마지막 문자부터를 출력하기에 
//좋다는것이고. 그게 싫어서 *(message-1)로 초기화시켜 
//바로 널 앞에 문자를 가리킬꺼면 print할때도 저 형태로
//맞춰줘야함. 
int main(void)
{
char ch,msg[100]; 
int i=0;

printf("Enter a message : ");

gets(msg);
printf("Reversal is : ");
reverse(msg);

return 0;
}
    
