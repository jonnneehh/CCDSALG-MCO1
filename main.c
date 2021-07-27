#include "SystemManagers.c"
#define SMALL_DATA_N 10
int data[MAX_N];

int main (){
	long int count = 0;
	int smallData[SMALL_DATA_N] = {10, -1, 3, 2, 5, 0, 1, 221, 31, -31};
	
	printf("Generating Data...\n");
	generateData(data, MAX_N);
	
	printf("Unsorted Array:\n");
	//printArray(data, MAX_N);
	
	printf("Sorting Data...\n");
	count = selectionSort(data, MAX_N);
	
	printf("Sorted Array:\n");
	//printArray(data, MAX_N);
	
	printf("\ncount = %ld", count);
	return 0;
}
