#include <stdio.h>
int main(void) 
{

    int n;
    char *tens[] = {"twenty", "thirty", "forty", "fifty",
                    "sixty", "seventy", "eighty", "ninety"};
//  char hey[5]={"one", "two", "three", "four", "five"};  
	printf("%s\n", tens[3]);	
	printf("%c%c %c\n", *tens[3], *(tens[3]+1), *tens[4]);
//	printf("%s\n", hey[2]);	//불가 
	return 0;
}
// *tens[3]=ten[3][0]을 말함 
