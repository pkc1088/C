#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void)
{
	int i=5, trash=0;
	for(i=5;i<10;i++)
	{
		if(i>2)
	{
			trash++;
			break;	//�Ʒ� if�� �ȵ��°� ���� 
	}				//���⼭ break�߸� for�� �����°��� 
		if(i>3)		//if�� �����°� �ƴ� 
	{
			trash++;
			break;
	 } 
	printf("unbreak");	
	}

	printf("%d %d", i, trash);
    return 0;
}
