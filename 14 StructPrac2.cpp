#include <stdio.h>
#include <string.h>
//part라는 type 만듦 
struct part{
		int number;
		char name[80];
		int on_hand;
		}part1, part2={2, "hey", 20};
//part1이란 parameter를 p라는 argument로 받음		
void print_part(struct part p)
{
	printf("%d\n", p.number);
	printf("%s\n", p.name);
	printf("%d\n", p.on_hand);
}
//part라는 type을 가진 build_part함수고 3개의 argument가짐 
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
	//part타입의 part3라는 variable 만듦 
	struct part part3={3, "hello", 30};
	part1=part2;
	
	print_part(part1);
	build_part(part3.number, part3.name, part3.on_hand);	
	
	return 0;
}



