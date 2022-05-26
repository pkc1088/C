#include <stdio.h>
#include <stdlib.h>

void f(char **a) {
	char *tmp = (char *)malloc(sizeof(char) * 5);
	strcpy(tmp, "1234");
	
	*a = "hey";
	printf("%s %s\n", *a, tmp);
	
	*a = tmp;
	printf("%s %s\n", *a, tmp);
}

int main(void) {
	
	char *a = "99";
	f(&a);
	printf("%s %c", a, *a);
	
	return 0;
}
