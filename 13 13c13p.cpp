#include <stdio.h>
#include <string.h>
#define MAX_VALUE 80
void encrypt(char *message, int shift)
{
	for (int i = 0; i < MAX_VALUE; i++) 
    {    
		if (*(message+i) >= 'A' && *(message+i) <= 'Z')
           *(message+i) = ((*(message+i) - 'A') + shift) % 26 + 'A';
        else if (*(message+i) >= 'a' && *(message+i) <= 'z')
            *(message+i) = ((*(message+i) - 'a') + shift) % 26 + 'a';
        
        putchar( *(message+i) );
    }
    printf("\n");
	
}

int main(void) 
{
    char c, sentence[MAX_VALUE] = {0};

    int i, n;

    printf("Enter message to be encrypted: ");
    
	for (i = 0; (c = getchar()) != '\n' && i < MAX_VALUE; i++) 
  	  sentence[i] = c;

    printf("Enter shift amount (1-25): ");
    scanf("%d", &n);
	printf("Encrypted message: ");
	encrypt(sentence, n);

    return 0;
}

