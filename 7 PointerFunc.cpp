
#include <stdio.h>

int *max(int *a, int *b);

int main(void)
{
	int *p, i=5,j=10;
	p=max(&i, &j); //�̰͵� *p=&*max(&i,&j)�� ���� ���Ȱ��� 
	printf("%d", *p);
	return 0;
}

int *max(int *a, int *b)
{
	if(*a>*b)
		return a;	//�Լ��� �����ͷ� �����ϱ� a�� ������ 
	else
		return b;	 
}	


/*
#include <stdio.h>

int max(int *a, int *b);

int main(void)
{
	int *p, i=5,j=10;
	max(&i, &j);
	printf("%d %d", i, j);
	return 0;
}

int max(int *a, int *b)
{
	if(*a>*b)
	{	
		*a=100;
		return *a;		//�Լ��� �����ͷ� �޴°� �ƴ� ��Ȳ���� ��ó�� 
	}					//*���� ������ ���� 
	else
	{
		*b=105;
		return *b;
	}	
*/
	
/*
#include <stdio.h>

int max(int *a, int *b);

int main(void)
{
	int *p, i=5,j=10;
	max(&i, &j);
	return 0;
}

int max(int *a, int *b)
{
	if(*a>*b)
		printf("%d", *a);
	else
		printf("%d", *b); //������ �ѱ�� ������� 
}
*/
