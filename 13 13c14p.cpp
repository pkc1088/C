#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

bool are_anagrams(const char *word1, const char *word2)
{
	bool set1[27]={0}, set2[27]={0};
	int i=0;
	while(*word1)
	{
	set1[*word1-'a']++;	// [*(word1-48)]�ƴ� ����. *word1�� ���ĺ� 
	word1++;			//����Ŵ �� 'h'-'a' ������ �����°��� 
	}					//			56-49=7 �� set1[7]�� ++ 
	while(*word2)
	{
	set2[*word2-'a']++;
	word2++;
	}
	for(i=0;i<27;i++)
		{
		if(set1[i]!=set2[i])
			return false;
		}
	return true;
	
/*	while(*word1)
		if(*word1++!=*word2++)
			return false;
	return true;	*/
}
int main(void)
{
	char wrd1[26], wrd2[26];
	
	printf("Enter first word : ");
	scanf("%s", wrd1);
	printf("Enter second word : ");
	scanf("%s", wrd2);
	if(are_anagrams(wrd1, wrd2))
	{
		printf("anagrams");
		return 0;
	}
	printf("not anagrams");
	return 0;
}
