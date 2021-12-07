#include <stdio.h>

int main(void)
{
	char ch1, ch2, a[20], b[20];
	int i=0, j=0, x=0, p;
	
	printf("Enter a sentence : ");
	scanf("%s %s", a, b);
	printf("You enetered the name : ");
	printf("%s, %c.", b, a[0]);
	
	return 0;
}
