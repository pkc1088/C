#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct account{
	int val;
	struct account *next;
};

int main(void)
{
	struct account *p;
	struct account **q;
	*q=&(*p);
	p=(struct account *)malloc(sizeof(struct account));
	p->val=10;
	p=p->next;
	p=(struct account *)malloc(sizeof(struct account));
	p->val=20;
	p->next=NULL;
	
	printf("%d\n", p->val);
//	printf("%d\n", *q->val);
	return 0;
}
