#include <pthread.h> 
#include <string.h> 
#include <unistd.h> 
#include <stdio.h> 
#include <stdlib.h>

void fn(char *str[]) {   //��� char **�� �� ����Ű�� ���� 8����Ʈ ���� char*��
       
    printf("%s\n", str[1]);
}

int main(int argc, char *argv[]) {
    char *s_strs[] = {"hello","world","how"};
    char cc[3][6] = {"abcd", "efghi", "jklmn"};
    printf("%s\n", s_strs[0]);
    printf("%s\n", cc[1]);//��� char(*)[6]�� �� ����Ű�� ���� 6����Ʈ ���� char[6]��
        
    fn(s_strs);
    fn((char**)cc); // �̷��� seg fault ��
    
    return 0;
}

/*
char *a[5]   // declare a as array 5 of pointer to char // array of 5 char pointers.
char a[5][]  // declare a as array 5 of array of char
char (*a)[5] // declare a as pointer to array 5 of char// pointer to array of 5 chars.
char a[][5]  // declare a as array of array 5 of char

char *a[5];
create an array of 5 pointers to char

printf("%c",*a[5])
a is an array of pointers
so this expression means print the sixth element character value a[5] is pointing to.

char (*a)[5]
create an array of 5 char and assign a the address of the first element of this created array

printf("%c",(*a)[5])
a points to the first element of an array of character
So this expression means print the sixth char element value of the array that a is pointing to.
*/

