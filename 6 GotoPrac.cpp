#include <stdio.h>
int main(void)
{
	int i=4,n,x,y;
	
	if(i==4)
	  goto ok;

	if(i!=4)
	  printf("ssssssss\n");
	 
	
	ok:
	 	printf("printed by goto\n");  

	return 0;
}
