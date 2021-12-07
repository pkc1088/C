#include <stdio.h>

void split_time(long total_sec, int *hr, int *min, int *sec);

int main(void)
{
	int b,c,d;
	long a;
	
	scanf("%ld", &a);
	split_time(a, &b, &c, &d);
	printf("Total seconds : %ld\n",a);
	printf("%dhour(s) %dminute(s) %dsecond(s)", b,c,d);
	
	return 0;
}

void split_time(long total_sec, int *hr, int *min, int *sec)
{
	*hr=total_sec/3600;
	*min=(total_sec%3600)/60;
	*sec=((total_sec%3600)%60);
}	


