#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct node{
	int value;
	struct node *next;
};

struct node *first=NULL;
struct node *new_node;

int main(void)
{
	char arr[4]="hey";
	char *p=arr;
	int n=100;
	p=(char *)malloc(n+1);
	void *q=malloc(1000);
	strcpy(p, "abc");
	printf("%s", p);
	free(p); 
	
	new_node = malloc(sizeof(struct node));
	(*new_node).value=10;
	new_node -> value =12;
	
	return 0;
}

