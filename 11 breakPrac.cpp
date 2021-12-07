#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void)
{
	int i=5, trash=0;
	for(i=5;i<10;i++)
	{
		if(i>2)
	{
			trash++;
			break;	//아래 if에 안들어가는걸 보아 
	}				//여기서 break뜨면 for문 나가는거임 
		if(i>3)		//if를 나가는게 아님 
	{
			trash++;
			break;
	 } 
	printf("unbreak");	
	}

	printf("%d %d", i, trash);
    return 0;
}
