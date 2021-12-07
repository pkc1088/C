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

struct rectangle move(struct rectangle *r, int x1, int y1)
{
	r->lower_right.x +=x1;
	r->upper_left.x +=x1;
	r->lower_right.y +=y1;
	r->upper_left.y +=y1;
	 
	return *r;
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
	
	struct point check={9, 7.1}; 
	TorF=within(rec1, check);
	printf("%d\n", TorF);
	
	struct rectangle rec2;
	rec2.upper_left={5,10};
	rec2.lower_right={10,5};
	move(&rec2, 10, 10);
	printf("%d %d\n", rec2.lower_right.x, rec2.lower_right.y);
 
	return 0;
}
