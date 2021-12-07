#include <stdio.h>
#include <string.h>
double compute_average_word_length(const char *sentence)
{
	double len, pplen, wordnum, space=0; 
	len=strlen(sentence); //공백포함 글자 
	 
	while(*sentence++)
		if(*sentence==' ')
			space++;
	
	wordnum=space+1;
	pplen=len-space;
	
	return pplen/wordnum;
}

int main(void)
{
char sen[100];

gets(sen);	//scanf %s 안되는이유 %sprac에서 보기 

printf("%.1f", compute_average_word_length(sen));

return 0;
}
