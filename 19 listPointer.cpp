#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct student{
	char name[20];
}; 

int main(void)
{
	int i=0;
	struct student s[20];
	struct student *ps[20];
	
	strcpy(s[i].name, "Tom");
	ps[i]=&s[i];
	printf("%s\n", s[i].name);
	printf("%s\n", ps[i]->name);
	i++;
	strcpy(s[i].name, "Max");
	printf("%s\n", s[i].name);
	return 0;
}
