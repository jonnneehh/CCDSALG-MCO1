#include <stdio.h>
#include "insertion.c"

void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main (){
	int count = 0;
	
	int a[10] = {9, 8, 7, 5, 6, 3, 2, 1, -2, 9};
	printArray(a, 10);
	printf("\ncount = %d\n\n\n", count);
	
	count = insertionSort(a, 10);
	printArray(a, 10);
	printf("\ncount = %d", count);
	
	return 0;
}
