#include <stdio.h>

int main(void)
{
    char s[] = "Hsjodi", *p;

    for (p = s; *p; p++)
        --*p;
    puts(s);
    return 0;
}
//--*p�� ö�� �ϳ��� ���� -1��Ű�°Ű� �迭���� ������
//�ϳ� �������� --p���ǰ� �׷��� \0�����ϱ� �ƹ��͵�
//����Ʈ �ȵ� 
