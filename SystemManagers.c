#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#include "quick.c"
#include "merge.c"
#include "insertion.c"
#include "selection.c"
#include "bubble.c"
//#include "heap.c"

#define MAX_N 1048576

void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%-6d ", arr[i]);
    printf("\n\n");
}

int generateData(int data[MAX_N], int numOfData){
	int i;
	
	srand(time(NULL));
	
	for(i = 0; i < numOfData; i++){
		data[i] = rand();
	}
	
	return data;
}

