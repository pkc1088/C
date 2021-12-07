#include <stdio.h>
#include <string.h>
#include <stdbool.h>

char match_check(char *p, char *q, int wordlength)
{	
	int i;
	
	for(i=0; i<wordlength; i++)
		if( *(p+i)!=*(q+i) )
			return false;
			
	return true;
	
}
int main(void)
{
	char ch, word[50], sen[300];
	char *p=word, *q=sen;
	int loc, wordlength;

	scanf("%s\n", word);
	wordlength=strlen(word);
	
	here: ;
	sen[300]={false};
	gets(sen);
	p=word; loc=0;
	
	for(q=sen; q<sen+300; q++, loc++)
		if( *p==*q )
			if( match_check(p, q, wordlength) == true )
				{	
				printf("%s (%d)\n", sen, loc);
				break;
				}
				
	goto here;
	
	return 0;
}
/*  "strstrÇÔ¼ö"
 
char *strstr(const char *str1, const char *str2) {
  char *cp = (char *)str1;
  char *s1, *s2;
  if (!*str2) return (char *)str1;
  while (*cp) {
    s1 = cp;
    s2 = (char *)str2;
    while (*s1 && *s2 && !(*s1 - *s2)) s1++, s2++;
    if (!*s2) return cp;
    cp++;
  }
  return NULL;
}*/
