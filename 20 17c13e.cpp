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
// list�� �����ϸ鼭 **pp�� �о���̴ٰ� new node���� ū ���� ���̸�
// �������ͼ� �� ��带 new node�� ��������. 
// ������ ������ return list; �ƴұ�?
// �� �ڵ� ���� Ʋ���� !!! 
int main(void)
{
		
	return 0;
}

