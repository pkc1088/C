#include <stdio.h>
#include <stdlib.h>
int main()
{
int *p; // pointer to the dynamically allocated block 
int n, i;
printf("How many integers? ");
scanf("%d", &n);
p = (int *) malloc(n * sizeof(int));
printf("Enter %d integers:\n", n);
for (i = 0; i < n; ++i)
scanf("%d", &p[i]);
printf("Integers in reverse order:\n");
for (i = n-1; i >= 0; --i)
printf("%d ", p[i]);
printf("\n");
return 0;
}
