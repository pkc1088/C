#include <stdio.h>
#include <string.h>
//part��� type ���� 
struct part{
		int number;
		char name[80];
		int on_hand;
		}part1, part2={2, "hey", 20};
//part1�̶� parameter�� p��� argument�� ����		
void print_part(struct part p)
{
	printf("%d\n", p.number);
	printf("%s\n", p.name);
	printf("%d\n", p.on_hand);
}
//part��� type�� ���� build_part�Լ��� 3���� argument���� 
struct part build_part(int number, const char *name, int on_hand)
{
	struct part q;
	q.number=number;
	strcpy(q.name, name);
	q.on_hand=on_hand;
	printf("%d", q.number);

	return q;
}

int main(void)
{
	//partŸ���� part3��� variable ���� 
	struct part part3={3, "hello", 30};
	part1=part2;
	
	print_part(part1);
	build_part(part3.number, part3.name, part3.on_hand);	
	
	return 0;
}



