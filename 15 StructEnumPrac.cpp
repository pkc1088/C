#include <stdio.h>
#include <string.h>

struct person_name {
	char first[31];
	char middle_initial;
	char last[31];
};
struct student{
	struct person_name name;
	int id, age;
	char sex;
}student1, student2;

enum suit {CLUB=1,DIAMONDS=2,HEARTS=3,SPADES=4} s1,s2;
 
int main(void)
{
	strcpy(student1.name.first, "Freddie");
	strcpy(student1.name.last, "Murcuray");
	printf("%s\n", student1.name.first);
	student2=student1;
	printf("%s\n", student2.name.last);
	return 0;
}
