#include <stdio.h>
#include <string.h>

struct time{
	int hours;
	int minutes;
	int seconds;
};

struct time split_time(long total_seconds)
{
	struct time t;
	t.hours=total_seconds/3600;
	t.minutes=(total_seconds%3600)/60;
	t.seconds=(total_seconds%3600)%60;
	printf("%d %d %d\n", t.hours, t.minutes, t.seconds);
	return t;
}

int main(void)
{
	long n;
	scanf("%ld", &n);
	struct time t=split_time(n);
	printf("%d %d %d", t.hours, t.minutes, t.seconds);	
		
	return 0;
}
