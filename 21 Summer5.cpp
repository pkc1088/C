#include <stdio.h>

struct Rational{
	int num;
	int denom;
};
int main(void) {

	struct Rational r1;
	struct Rational r2;
	
    int n, m, r;

    scanf("%d%d", &r1.num, &r1.denom);
	scanf("%d%d", &r2.num, &r2.denom);
	printf("==============\n");
    m = r1.num*r2.num;
    n = r1.denom*r2.denom;
	
    while (n != 0) {
        r = m % n;
        m = n;
        n = r;
    }

    printf("%d/%d", r1.num*r2.num / m, r1.denom*r2.denom / m);

    return 0;
}
