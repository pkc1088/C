#include<stdio.h>
typedef int (*FP)(int, int);			//int�� ��ȯ�� 1�� , int�� �Ű����� 2���� �Լ������� ��Ī FP
int add(int a, int b)		//add�Լ�
{
	return a + b;
}	

int sub(int a, int b)		//sub�Լ�
{
	return a - b;
}	

struct Calc {				//����ü Calc
	FP fp[2];		//�Լ������� �迭 fp
};

int exe(FP fp, int a, int b)	//�Ű������� �Լ��� ���� --> �Լ������ͷ� �ޱ�
{
	return fp(a, b);
}

FP getFunc(struct Calc *c,int index)
{
	return c->fp[index];			//c�� ����� fp[ ]�� ������ �� ���ִ�.
}

int main()
{
	struct Calc c = { {add, sub} };	//����ü c�� ����� ù��° add �ι�° sub
	
	printf("%d\n", exe(getFunc(&c, 0), 10, 20));	//30
	printf("%d\n", exe(getFunc(&c, 1), 10, 20));	//-10
}



