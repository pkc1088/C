#include <stdio.h>
int count_spaces( char s[])
{
	int count=0, i;
	for(i=0;s[i]!='\0';i++)
		if(s[i]==' ')
			count++;
	return count;
}
int count_spaces2( char b[])
{
	int count=0, i;
	for(i=0;b[i]!='\0';i++)
		if(b[i]==' ')
			count++;
	return count;
}
int count_spaces3( char c[], int n)
{
	int count=0, i;
	for(i=0;i<n;i++)
		if(c[i]==' ')
			count++;
	return count;
}
int count_spaces4( char *p)
{
	int count=0, i;
	for(i=0;*(p+i)!='\0';i++)	//for(;*p='\0';p++)
		if(*(p+i)==' ')			//	if(*p==' ')	¶û °°À½  
			count++;
	return count;
}
int main(void)
{
	char a[]="Hello fucking World";	
	char b[]={'w','h','o',' ','t','h','e',' ','f','u','c','k'};
	char c[100];
	int s,t,u,f;

	s=count_spaces(a);
	t=count_spaces2(b);
	gets(c);
	u=count_spaces3(c, 10);
	f=count_spaces4(a);
	printf("%d %d %d %d", s, t, u, f);
	
	return 0;
}
