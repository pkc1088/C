#include <stdio.h>
#include <string.h>
#define ARRAY_LEN(x) ((int) (sizeof((x)) / sizeof((x)[0])))
struct time{
	int depart_time;
	int arrive_time;
};

const struct time schedule[]
{	{480, 616},	{583, 712},
	{679, 811}, {767, 900},
	{840, 968},	{945, 1075},
	{1140, 1280},{1305, 1438}	};
	

int main(void)
{
	int i,j,n,m,t,answerT;
	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &n, &m);
	n*=60;
	t=n+m;
	
	for(i=0; t>schedule[i].depart_time; i++)
		j=i;
	
	if( (t-schedule[j-1].depart_time) < (schedule[j].depart_time-t) )
	{
		printf("Closest departure time is %d, arriving at %d", 
		schedule[j-1].depart_time, schedule[j-1].arrive_time);
	}
	else
	{
		printf("Closest departure time is %d, arriving at %d", 
		schedule[j].depart_time, schedule[j].arrive_time);
	}
		
	return 0;	
}						   
