#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<malloc.h>
void GetMyString_(char(*ptr)[3][5]);
int main(void)
{
	char arr_[2][3][5] = {  {"hihi", 
							 "hehe", 
							 "haha"},
							
							{"abcd", 
							 "efgh", 
							 "ijkl"} };
	
	char(*ptr)[3][5] = arr_;	//ptr = arr_;
    
	printf("%s\n%s\n%s\n%s\n%s\n\n", ptr, *ptr, *ptr+1, ptr+1, *(ptr+1));
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++)
			printf("%s\n", *(*(ptr + i) + j)+0);//printf("%s\n", *(ptr + i) + j);도 동일결과
		printf("\n");
	}
	printf("\n\nGetMyString_출력결과:\n");
	GetMyString_(arr_);

	return 0;
}
void GetMyString_(char(*ptr)[3][5])
{
	for (unsigned int i = 0; i < 2; i++) {
		for (unsigned int j = 0; j < 3; j++)
			printf("%s\n", *(*(ptr + i) + j) + 0);//printf("%s\n", *(ptr + i) + j);도 동일결과
		printf("\n");
	}
}

