#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node{
	int value;
	struct node *next;
};
int count_occurrences(struct node *list, int n)
{
	int count=0;
	while(list != NULL)
	{
	if(list->value==n)
	 	count++;
	list=list->next;
	}
	return count;
}

int main(void)
{
	int ans;
	struct node *p={1};
	ans=count_occurrences(*p, 3);
	printf("%d", ans);
	
	return 0;
}
