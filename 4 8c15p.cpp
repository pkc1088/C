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
  	if(originsen[i]+shift-48>74) 			//�ҹ��� �߿� ���������� 
  	{
		overgap=originsen[i]+shift-48-74;
		printf("%c", overgap+'a'-1);
	}	
  	else if(originsen[i]+shift-48>42 && originsen[i]+shift-48<49) 	//�빮�� �߿� ���������� 
	{
		overgap=originsen[i]+shift-48-42;
		printf("%c", overgap+'A'-1);
	}		
	else if(originsen[i]-48>=49 && originsen[i]-48<=74) 
	{
		encrysen[i]=originsen[i]+shift;
		printf("%c", encrysen[i]);			//���⿡�� -48 �����൵ �Ǵ� ����? �������� char�ϴϱ�? 
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
