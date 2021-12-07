#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node{
	int value;
	struct node *next;
};
void display(struct node *list)
{
	while(list)
	{
	printf("%d ", list->value);
	list=list->next;
	}
	printf("\n");
}
struct node* insert(struct node *list)
{	
	int i;	struct node *curr = NULL, *prev = NULL;

	printf("Enter ID : ");	scanf("%d", &i);
		
	curr = (struct node *)malloc(sizeof(struct node));
	curr->value= i;
	curr->next = NULL;

	if(prev == NULL)
		list = curr; 
	else 
		prev->next = curr;

	prev = curr;
	
	return list;
}
int main(void)
{
	struct node *list=NULL;
	struct node *answer;
	
	answer=insert(list);
	answer=insert(list);
	display(answer);
	return 0;
}
