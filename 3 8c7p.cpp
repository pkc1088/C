#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int a[10]={0}, b[8]={0}, c[8]={0}, d[8]={0}, e[8]={0};
	int i=0, ch;
	
	printf("Enter row 1 : ");
	scanf("%d %d %d %d %d", &a[0],&a[1],&a[2],&a[3],&a[4]);
	printf("Enter row 2 : ");
	scanf("%d %d %d %d %d", &b[0],&b[1],&b[2],&b[3],&b[4]);
	printf("Enter row 3 : ");
	scanf("%d %d %d %d %d", &c[0],&c[1],&c[2],&c[3],&c[4]);
	printf("Enter row 4 : ");
	scanf("%d %d %d %d %d", &d[0],&d[1],&d[2],&d[3],&d[4]);
	printf("Enter row 5 : ");
	scanf("%d %d %d %d %d", &e[0],&e[1],&e[2],&e[3],&e[4]);
	
	printf("Row totals : ");
	printf("%d", a[0]+a[1]+a[2]+a[3]+a[4]);
	printf("Colum totals : ");
	printf("%d", b[0]+b[0]+b[0]+b[0]+b[0]);
//식 알아서 만들면됨.. 
	return 0;
}
