#include <stdio.h>
#include <string.h>

struct fraction{
	int num;
	int denom;
};

struct fraction reduce(struct fraction f)
{
	int temp;
	int n=f.num, d=f.denom;

	while(n%d!=0)
	{
		temp=d;
		d=n%d;
		n=temp;
	}
 	f.num /= d;
    f.denom /= d;
    
    return f;
}
struct fraction add(struct fraction f1, struct fraction f2) 
{
    return reduce( (struct fraction) {f1.num*f2.denom+f2.num*f1.denom 
      	   ,f1.denom*f2.denom} );
}
int main(void)
{
	int a,b,c,d;
	scanf("%d %d", &a, &b);
	scanf("%d %d", &c, &d);
	struct fraction p={a,b};
	struct fraction q={c,d};
	struct fraction answer=add(p,q);

	printf("%d %d", answer.num, answer.denom);
	
	return 0;
}
