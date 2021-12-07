#include <stdio.h>
#include <string.h>

void printSeperateArr(char str[][20]);

int main(void)
{
   char word_list[10][20];
   printSeperateArr(word_list);
   return 0;
}

void printSeperateArr(char str[][20])
{
	char ch; int space=1, i=0, j=0;
   	printf("문자열을 입력하시오 : ");
   	while(	(ch=getchar()) != '\n' )
	{
		if(ch==' ')
		{
			str[j][i]=NULL;
			space++;	j++;	i=0;
			continue; 
		}
		str[j][i]=ch;
		i++;	
	}
	
    for (int i = 0; i < space; i++)
    {
      printf("word_list[%d] -> ", i);
      for (int j = 0; str[i][j]!=NULL; j++)
      {
         printf("%c", str[i][j]);
      }
      printf("\n");
    }
}
