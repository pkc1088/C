#include <stdio.h>
#include <string.h>

int main(void)
{
char ch, sen[100], sen2[100], sen3[100];
int len,len2,len3;

scanf("%s", sen);
printf("%s\n", sen);
len=strlen(sen);
printf("%d\n", len);
/*
fgets(sen2, sizeof(sen2), stdin);
gets(sen3);
len2=strlen(sen2);
printf("%d\n", len2);
len3=strlen(sen3);
printf("%d\n", len3);*/
return 0;
}
