#include <stdio.h>
#define SIZE ( (int)(sizeof(encrysen)/sizeof(encrysen[0])) )

int main(void)
{
	char ch, originsen[80], encrysen[80], termchar[80];
	int overgap,shift, count=0, i=0;
	
	printf("Enter message to be encrypted : ");
	while( (ch=getchar()) != '\n' )
	{
	 if(ch==' '||ch=='!'||ch=='.'||ch=='?'||ch==',')
	 	termchar[i]=ch;
	 originsen[i++]=ch;	
	 count++;
	}
	
	printf("Enter shift amount (1-25) : ");
	scanf("%d", &shift);
	
	printf("Encrypted message : ");

	for(i=0;i<count;i++)
  {
  	if(originsen[i]+shift-48>74) 			//소문자 중에 오버사이즈 
  	{
		overgap=originsen[i]+shift-48-74;
		printf("%c", overgap+'a'-1);
	}	
  	else if(originsen[i]+shift-48>42 && originsen[i]+shift-48<49) 	//대문자 중에 오버사이즈 
	{
		overgap=originsen[i]+shift-48-42;
		printf("%c", overgap+'A'-1);
	}		
	else if(originsen[i]-48>=49 && originsen[i]-48<=74) 
	{
		encrysen[i]=originsen[i]+shift;
		printf("%c", encrysen[i]);			//여기에는 -48 안해줘도 되는 이유? 프린팅을 char하니까? 
	}
	else if(originsen[i]-48>=17 && originsen[i]-48<=42)
	{
		encrysen[i]=originsen[i]+shift;
		printf("%c", encrysen[i]);
	}	
 	else printf("%c", termchar[i]);
  }

	return 0;
}
