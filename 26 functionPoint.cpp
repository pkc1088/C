#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void new_cmd(void)
{
	printf("new cmd");
}
void open_cmd(void)
{
	printf("open cmd");	
}
void close_cmd(void)
{
	printf("close cmd");
}

void (*file_cmd[])(void)={new_cmd, open_cmd, close_cmd};

int main(void)
{
	
	(*file_cmd[2])();
	
	return 0;	
}
