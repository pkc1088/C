#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int f(char *s, char *t)
{
    char *p1, *p2;

    for (p1 = s; *p1; p1++) {
        for (p2 = t; *p2; p2++)
            if (*p1 == *p2) break; //���� for���� �����°��� 
        if (*p2 == '\0') break;			
    }
    return p1 - s;		//p1�� s+3�̵� 
}
int main(void)
{
	int t;
	t=f("abcd", "babc");	    
	printf("%d", t);
    return 0;
}
