#include<stdio.h>
#include<malloc.h>
#include<string.h>

int main(void)
{
   char *p[5];
   char imsi[100];
   int i, size;

   for (i = 0; i < 5; i++)
   {
      printf(" %d 번째 문자열 : ", i + 1);
      fgets(imsi,100,stdin);
      size = strlen(imsi);
      p[i] = (char*)calloc((sizeof(char) * size), 1);

      strcpy(p[i], imsi);
   }

   printf("\n - 입력과 반대로 출력(포인터) -\n");
   for (i = 4; i >= 0; i--)
   {
      printf(" %d :%s\n", i + 1, p[i]);
   }

   for (i = 0; i < 5; i++)
      free(p[i]);

   return 0;
}

