#include <stdio.h>
#include <string.h>
#include <stdbool.h>
struct color{
	int red;
	int green;
	int blue;
};

struct color make_color(int red, int green, int blue)
{
	if(red<0)
		red=0;
	else if(red>255)
		red=255;
	if (green < 0)
        green = 0;
    else if (green > 255)
        green = 255;
    if (blue < 0)
        blue = 0;
    else if (blue > 255)
        blue = 255;
	
	return (struct color){red,green,blue};
}

int getRed(struct color c)
{
 return c.red;	
}

int main(void)
{
	struct color ans={15,-2,300};
	struct color p=make_color(ans.red, ans.green, ans.blue);
	printf("%d\n", p.red);
	printf("%d\n", p.green);
	printf("%d\n", p.blue);
//	printf("%d %d %d\n", p);
//	printf("%d %d %d\n", make_color(ans.red,ans.green,ans.blue));
//	이런건 불가능 
	printf("%d\n", getRed(p));	
	return 0;
}
