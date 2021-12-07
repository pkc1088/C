#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct point{
	int x;
	int y;
};

struct rectangle {
	struct point upper_left;
	struct point lower_right;
};

int area(struct rectangle r)
{
	int rx=r.lower_right.x - r.upper_left.x;
	int ry=r.upper_left.y - r.lower_right.y;
	
	return rx*ry;
}

struct point center(struct rectangle r)
{
	return (struct point)  {(r.lower_right.x+r.upper_left.x)/2,
							(r.lower_right.y+r.upper_left.y)/2};
}

struct rectangle move(struct rectangle r, int x1, int y1)
{
	r.lower_right.x +=x1;
	r.upper_left.x +=x1;
	r.lower_right.y +=y1;
	r.upper_left.y +=y1;
	
	printf("%d", r.lower_right.x);
	//포인터 안쓸거면 여기서 프린트해야지 
	return r;
}

bool within(struct rectangle r, struct point p)
{
	if(r.upper_left.x < p.x && p.x < r.lower_right.x
	&& r.lower_right.y < p.y && p.y < r.upper_left.y)
		return true;
									
	else 
		return false;	
}

int main(void)
{
	int size, TorF; 
	struct point cent;
	struct rectangle movedCord;
	struct rectangle rec1;
	rec1.upper_left={5,10};
	rec1.lower_right={10,5};
	
	size=area(rec1);
	printf("%d\n", size);
	
	cent=center(rec1);
	printf("%d %d\n", cent.x, cent.y);
	
	movedCord=move(rec1, 10, 10);
//	printf("%d %d\n", rec1.lower_right.x, rec1.lower_right.y);
// 이거 쓸라면 포인터 써야되는듯 

	struct point check={9,7.1}; 
	TorF=within(rec1, check);
	printf("\n%d", TorF);
	
	return 0;
}
