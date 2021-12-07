#include <stdio.h>
#include <string.h>

int main(void)
{
	const char *month[]={"Janurary", "Feburary","March",   "April",
						 "May",		 "June",    "July",	   "August",
						 "September","October", "November","December"};
	int mon, day, year;
	
	printf("Enter a date (mm/dd/yyy) : ");
	scanf("%d/%d/%d", &mon,&day,&year);
	printf("You enetered the date ");
	
	printf("%s %.2d, %d", month[mon-1], day, year);
	
	return 0;
}
