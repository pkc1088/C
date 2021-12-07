#include <stdio.h>
#include <stdbool.h>
bool search( int a[], int n, int key) {

    int *p;

    for (p = a; p < a + n; p++) {
        if (*p == key)
            return true;
    }
    return false;
}
int main(void)
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10}, k=10, i=8, w;
	w=search(arr, k, i);
	printf("%d", w);
	return 0;
}
