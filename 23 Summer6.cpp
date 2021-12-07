#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main(void)
{
	int num, candi, i, selnum, selcnt, nocon=0, draw=0;
	int arr[1000]={false};
	float rate;
	
	scanf("%d", &num);

	for(i=1;i<num+1;i++)
	{
		scanf("%d", &candi);
		if(candi==0)
			nocon++;
		arr[candi]++;
	}	
	
	selnum=1; selcnt=arr[1];
	
	for(i=2;i<1000;i++)
	{
	 if(selcnt<arr[i])
 	 {
		selnum=i;
		selcnt=arr[i];		
	 }
	}
	
	for(i=1; i<1000; i++)
	{
	 if(selnum!=i)
	 	if(selcnt==arr[i])
		 {
	 	draw++;
	 	}
	}
	
	if(draw==0)
	{
	printf("=======\n");
	printf("%d\n", selnum);	
	rate= (float)(selcnt) / (float)(num-nocon);
	printf("%.2f%%\n", rate*100);
	return 0;
	}
	if(draw!=0)
	{
	printf("=======\n");
	printf("DRAW %d\n", draw+1);	
	rate= (float)(selcnt) / (float)(num-nocon);
	printf("%.2f%%\n", rate*100);
	return 0;				
	}
}
