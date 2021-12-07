#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)
int main() {
   char ch[101], a[10][100],tmp[100]; //문자형 배열과 변수 선언
   int i,j=0,k=0,t=0, min, cnt=0; //정수형 변수 선언
   gets(ch); //문자열 ch를 입력받음

   for (i = 0; i < strlen(ch)+1; i++) { //문자열의 길이 +1만큼 반복문 수행
      if (ch[i]!=' ' && ch[i]!='\0') { //문자가 공백과 문자열의 끝이 아니면
         a[j][k] = ch[i]; //이중배열에 문자를 저장
         k++; //변수 k 1씩 증가
      }
      if (ch[i] == ' '|| ch[i]=='\0') { //문자가 공백 또는 문자열의 끝이면
         a[j][k] ='\0'; //문자열의 끝 지정(단어를 끝맺음)
         j++; //변수 j 1씩 증가시켜 다음 단어가 다음의 배열에 저장되도록 함
         k=0; //k를 0으로 초기화
      }
   }
   for (i = 0; i < j; i++) { //단어의 갯수만큼 반복문 구현
      puts(a[i]); //단어 출력
   }
   
   for (i = 0; i < j-1; i++) 
   { 
    
	if ( (a[i][0],a[i+1][0])==0 ) 
        goto here;
        	
	if (strcmp(a[i], a[i+1]) > 0)  
    {
	strcpy(tmp, a[i]); 
    strcpy(a[i], a[i+1]);     
	strcpy(a[i+1], tmp);  
	}

	here:;
   }
   
   for (i = 0; i < j; i++) { //단어의 갯수만큼 반복문 구현
      puts(a[i]); //단어 출력
   }
   return 0; //메인함수 종료
}
