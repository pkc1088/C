#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct address{
	char name[20];
	int zip;
	struct address *next;
}; 

int main(void)
{
	int i=0;
	struct address *info;
	struct address *info2;
	
	info=(struct address *)malloc(sizeof(struct address));
	strcpy(info->name, "Tom");
	info->zip=123;
	
	struct address *top;
	top=info;
	
	while(top)
	{
		printf("Name: %s\n", top->name);
		printf("zip: %d\n", top->zip);
		top=top->next;
	}
	
	free(info);
	return 0;
}
