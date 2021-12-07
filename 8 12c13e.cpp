#include <stdio.h>
#define T 5
void init_ident(int n, int ident[T][T]) //2차원 넘길때 사이즈 정헤줘야함 
{
    int *p = ident[0];
    int c=0, zeros = n;

    while (p++ < ident[0] + n *n)	
	{
		if(c%T==0)
			printf("\n");
		
        if (zeros == n) 
		{
            *p = 1;
            zeros = 0;
        } 
		else 
		{
            *p = 0;
            zeros++;
	    }
	    c++;
 		printf("%d", *p);
    }
}
int main(void)
{
	int k=5, arr[5][5];
	init_ident(k, arr);
	return 0;
}
