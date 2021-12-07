#include <stdio.h>

int main(void)
{
    char s[] = "Hsjodi", *p;

    for (p = s; *p; p++)
        --*p;
    puts(s);
    return 0;
}
//--*p는 철자 하나의 값을 -1시키는거고 배열상의 순서를
//하나 물릴려면 --p가되고 그러면 \0만나니까 아무것도
//프린트 안됨 
