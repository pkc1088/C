/*#include <ctype.h>
#include <stdio.h>
int compute_scrabble_value(const char *word)	
{
	char ch;
	word=&ch;
	int scrabble=0;
	
	while ((ch = getchar()) != '\n')
    switch (toupper(ch)) {
      case 'D': case 'G':
        scrabble += 2; break;
      case 'B': case 'C': case 'M': case 'P':
        scrabble += 3; break;
      case 'F': case 'H': case 'V': case 'W': case 'Y':
        scrabble += 4; break;
      case 'K':
        scrabble += 5; break;
      case 'J': case 'X':
        scrabble += 8; break;
      case 'Q': case 'Z':
        scrabble += 10; break;
      default:
        scrabble++; break;
	}
    return scrabble;
}
int main(void)
{
  int i=0, hey;
  char *p;

  printf("Enter a word: ");
  hey=compute_scrabble_value(p);		

  printf("Scrabble value: %d\n", hey);

  return 0;
}*/
#include <stdio.h>
#include <ctype.h>

int compute_scrabble_value(const char *word);

int main(void) {

    int sum;
    char word[81];

    printf("Enter a word: ");
    scanf("%s", word);

    printf("Scrabble value: %d\n", compute_scrabble_value(word));
    return 0;
}

int compute_scrabble_value(const char *word) {

    int sum = 0, values[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3,
                             1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    while (*word)
        sum += values[toupper(*word++) - 'A'];
    return sum;
}
