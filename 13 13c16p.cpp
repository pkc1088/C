#include <stdio.h>

void reverse(char *message)
{
	int cnt=0;
	for(*message; *message!='\0'; message++)
		cnt++;

	for(*(message-1); cnt>=0 ; message--)	
	{
		printf("%c", *(message-1) );
		cnt--;
	}
}
//���ǽĿ� *message>0 �� ��ĵ� ���� ���Ƽ� �׷����� 
// *message-- �� *(message--)�̰� �����ѹ� �Ͼ�� �����ͷ� ����Ű�°���
//�ʱ�ȭ���� 10�� �����ѵ� printf���� 9�� �����. 
//���ǽĿ��� cnt�� ����ؾ��ϴ°��� �°�. 
//��ó�� ���ǽ� *message>0 Ȥ�� message-1>0 �̷������� 
//�ϸ� ����������ص� �ٸ� �޸𸮸� �ǵ�� ������ 
//������� �ְ�. message-1�� �پ��ٺ��� �ᱹ 
//msg[0]�� ����Ű���� �ߴµ�. ���ʿ� �迭�� 0�����ΰ� 
//���� �ν��ϰ� �ִ°� ���̰� �װ� �׳� ���� 0�̶� 
//���ϴٴ°� ���� �ȵ�.  *message--�� �ʱ�ȭ�ϴ� ������ 
//�ʱ�ȭ��ÿ��� ���� �����ѵ� print�� ���� �迭�� 
//���ҹ��� �ڸ��� �� �� ������ ���ں��͸� ����ϱ⿡ 
//���ٴ°��̰�. �װ� �Ⱦ *(message-1)�� �ʱ�ȭ���� 
//�ٷ� �� �տ� ���ڸ� ����ų���� print�Ҷ��� �� ���·�
//���������. 
int main(void)
{
char ch,msg[100]; 
int i=0;

printf("Enter a message : ");

gets(msg);
printf("Reversal is : ");
reverse(msg);

return 0;
}
    
