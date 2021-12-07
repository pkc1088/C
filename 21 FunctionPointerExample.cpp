#include<stdio.h>
typedef int (*FP)(int, int);			//int형 반환값 1개 , int형 매개변수 2개인 함수포인터 별칭 FP
int add(int a, int b)		//add함수
{
	return a + b;
}	

int sub(int a, int b)		//sub함수
{
	return a - b;
}	

struct Calc {				//구조체 Calc
	FP fp[2];		//함수포인터 배열 fp
};

int exe(FP fp, int a, int b)	//매개변수로 함수를 받음 --> 함수포인터로 받기
{
	return fp(a, b);
}

FP getFunc(struct Calc *c,int index)
{
	return c->fp[index];			//c의 멤버로 fp[ ]가 있음을 알 수있다.
}

int main()
{
	struct Calc c = { {add, sub} };	//구조체 c의 멤버의 첫번째 add 두번째 sub
	
	printf("%d\n", exe(getFunc(&c, 0), 10, 20));	//30
	printf("%d\n", exe(getFunc(&c, 1), 10, 20));	//-10
}



