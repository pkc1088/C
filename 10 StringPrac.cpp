#include <stdio.h>
int main(void)
{
	char date[]={'J','u','l','y',' ','2','9'};
	char date2[]="July 29"; 
	char *date3="July 29", *p;
	
	printf("%s %s\n", date, date2);
	printf("%c %c\n", date[0], *date3);
	
	p=date3;
	for(p=date3; p<date3+8;p++)
		printf("%c", *p);
	

	return 0;
}











/*int main(void)
{
	char *p, q;
		
	p="abc";
	q="abc"[1];	
	printf("%c %c\n", *p, q);
	return 0;
 } */
