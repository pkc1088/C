#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void) 
{

    int i,j,len;
    char tmp[30], *sen[10];
    
  	for(i=0;i<10;i++)	
	{
	if(scanf("%s", tmp)==EOF)
		break;
	//scanf("%s", tmp); 
	len = strlen(tmp) + 1;
    sen[i] = (char*)malloc(sizeof(char) * len); 
    strcpy(sen[i], tmp);
	}	
 	
 	for(j=i-1;j>=0;j--)
	 printf("%s ", sen[j]);	
	
	for(i=0;i<10;i++)
		free(sen[i]);

	return 0;
}
//%s는 white space를 다 읽고 스킵하기때문에 \n이 포함될 수 없음 
