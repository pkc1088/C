#include <stdio.h>
#include <string.h>

int main(void)
{
	struct{
		int number;
		char name[80];
		int on_hand;
		}part1, part2={36, "Disk drive", 10}, part3, part4;
	
	scanf("%d", &part1.number);
//	part1.name="sup"; error
	scanf("%s", part1.name);
	gets(part3.name);	//위에서 엔터치면 안되고 스페이스후 읽음 
	strcat(part1.name, " bye");	
	printf("%d\n", part1.number);
	printf("%s\n", part1.name);
	printf("%d %s %d\n", part1.number+part2.number, part2.name, part2. on_hand);
	printf("%s\n", part3.name);

	return 0;
}





















































