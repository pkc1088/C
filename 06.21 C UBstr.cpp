#include <pthread.h> 
#include <string.h> 
#include <unistd.h> 
#include <stdio.h> 
#include <stdlib.h>

void fn(char *string[]) {  
    printf("string[0] - %p %s\n", string[0], string[0]);
    printf("string[1] - %p %s\n", string[1], string[1]);
    printf("string[2] - %p %s\n", string[2], string[2]);
    printf("string[3] - %p %s\n", string[3], string[3]);
}

int main(int argc, char *argv[]) {
    char *str1 = "AAAAA";
    char *str2 = "XXXXX";
    char *str3 = (char*)malloc(sizeof(char) * strlen(str1) + 1);
    strcpy(str3, "BBBBB");  //str3�� ���������̴� ������ ���� �������� �����ε�?
    char *str4 = "CCCCC";   //str3 ���� �޸� ������ str1<str2<str4 �� �±���

    //fn(&str1);
    //fn(&str2);
    fn(&str3);


    return 0;
}

