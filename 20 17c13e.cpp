#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node{
	int value;
	struct node *next;
};
struct node *insert_into_ordered_list(struct node *list, struct node *new_node)
{
    struct node **pp = &list;
    while (list != NULL) {
        if (list->value >= new_node->value)
            break;
        pp = &list->next;
        list = list->next;
    }
    *pp = new_node;
	new_node = list; 
}
// list를 참조하면서 **pp로 읽어들이다가 new node보다 큰 값이 보이면
// 빠져나와서 그 노드를 new node로 만들고삽입. 
// 마지막 문장이 return list; 아닐까?
// 이 코드 완전 틀렸음 !!! 
int main(void)
{
		
	return 0;
}

