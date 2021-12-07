#include <stdio.h>
#include <string.h>
#define RECTANGLE 0
#define CIRCLE 1
struct point{
	int x;
	int y;
};
struct shape{
	int shape_kind;
	struct point center;
	union{
		
		struct{
			int height, width;
		} rectangle;
			
		struct{
			float radius;
		} circle;

	} u;
} s,s1,s2;

double area(struct shape s)
{
	if(s.shape_kind==RECTANGLE)
		return s.u.rectangle.height*s.u.rectangle.width;
	else
		return s.u.circle.radius*s.u.circle.radius*3.14;
}/*	 
struct point move(struct shape *s, int x1, int y1)
{
	return (struct point){s->center.x+=x1, s->center.y+=y1};
}*/
struct shape shape_move(struct shape *s, int x1, int y1)
{
	s->center.x+=x1;
	s->center.y+=y1;
	return *s;
}

struct shape shape_scale(struct shape *s, double c) {
    if (s->shape_kind == RECTANGLE) {
        s->u.rectangle.height *= c;
        s->u.rectangle.width *= c;
    } else
        s->u.circle.radius *= c;
    return *s;
}
int main(void)
{
	s1.shape_kind=0;
	s1.u.rectangle.height=3;
	s1.u.rectangle.width=5;
	s2.shape_kind=1;
	s2.u.circle.radius=2; 
	int p=area(s1);
	double q=area(s2);
	printf("%d\n", p);
	printf("%.2lf\n", q);
	
	s.center={1,1};
//	move(&s,10,10);
	shape_move(&s,10,10);
	printf("%d,%d\n", s.center.x, s.center.y);
	
	shape_scale(&s2,3.2);
	printf("%.2f\n", s2.u.circle.radius);
	shape_scale(&s1,4);
	printf("%d, %d", s1.u.rectangle.height, s1.u.rectangle.width);
	return 0;
}
