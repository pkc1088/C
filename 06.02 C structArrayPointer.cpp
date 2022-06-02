
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct temp* ptr;
typedef struct temp {
    char en[22];
    char ko[11];
    ptr next = 0;
} word;

//temp* words = (temp*)malloc(sizeof(temp));
ptr words = (ptr)malloc(sizeof(word));
//vsc에서는 words를 전역에 놓고 할당을 메인에서 해야됨.. 
int N;

void add(ptr now) {
    if (now->next != 0) {
        add(now->next);
    }
    else {
        now->next = (ptr)malloc(sizeof(word));
        now->next->next = 0;
        scanf("%[^,], %[^\n]", now->next->en, now->next->ko);
    }
}

void prnt(ptr now) {
    printf("%s\n%s\n\n", now->en, now->ko);
    if (now->next != 0) {
        return prnt(now->next);
    }
}

int main() {
    words->next = 0;

    scanf("%d", &N);
    scanf("%[^,], %[^\n]", words->en, words->ko);
    for (int i = 0; i < N - 1; i++) {
        add(words);
    }

    prnt(words);

    return 0;
}
/*
#include <stdio.h>
#include <stdlib.h>
typedef struct temp* ptr;
typedef struct temp {
	char en[22];
	char ko[11];
	ptr next;
} word;

int N;

ptr words;

void add(ptr now) {
	if (now->next == 0) {
		now->next = (ptr)malloc(sizeof(word));
		scanf("%[^,], %[^\n]", now->next->en, now->next->ko);
	} else {
		add(now->next);
	}
}

void prnt(ptr now) {
	printf("%s\n%s\n\n", now->en, now->ko);
	if (now->next != 0) {
		prnt(now->next);
	}
}

int main() {
	scanf("%d", &N);
    ptr words = (ptr)malloc(sizeof(N) * sizeof(word));
	scanf("%[^,], %[^\n]", words->en, words->ko);
    
	for (int i = 0; i < N - 1 ; i++) {
		add(words);
	}

	prnt(words);

	printf("%s, %s\n", words->en, words->ko);

	printf("%s, %s\n", words->next->en, words->next->ko);

	printf("%s, %s\n", words->next->next->en, words->next->next->ko);
	return 0;

}
*/
