#include <stdio.h>
#include <ctype.h>
int compute_vowel_count(const char *sentence)
{
 int count=0;
 int vowel[]={1,0,0,0,1,0,0,0,1,0,0,0,0,
			0,1,0,0,0,0,0,1,0,0,0,0,0};
	
 while(*sentence)
	count+=vowel[toupper(*sentence++)-'A'];
	
 return count; 
}
int main(void)
{
char sentence[100];

printf("Enter a sentence : ");
scanf("%s", sentence);
printf("Your sentence contains %d vowels.", compute_vowel_count(sentence));
return 0;
}

