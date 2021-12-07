#define _CRT_SECURE_NO_WARNINGS   
#include <stdio.h>
#include <string.h>  
#include <stdlib.h>   

struct Person {  
    char name[20];       
    int age;             
    char address[100];   
};

int main()
{
    struct Person *p1 = (struct Person *)malloc(sizeof(struct Person));   
    //cpp로 저장할꺼면 (struct Person *) 처럼 캐스팅 해주거나
	//캐스팅 안할꺼면 .c로 저장해야함!!! 
    strcpy(p1->name, "홍길동");
    p1->age = 30;
    strcpy(p1->address, "서울시 용산구 한남동");

    printf("이름: %s\n", p1->name);     
    printf("나이: %d\n", p1->age);        
    printf("주소: %s\n", p1->address);    
    free(p1);   

    return 0;
}
