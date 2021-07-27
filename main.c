#include "SystemManagers.c"
#define SMALL_DATA_N 10
int data[MAX_N];

int main (){
	int count = 0;
	int smallData[SMALL_DATA_N] = {10, -1, 3, 2, 5, 0, 1, 221, 31, -31};
	
	printf("Generating Data...\n");
	generateData(data, MAX_N);
	
	printf("Unsorted Array:\n");
	//printArray(data, MAX_N);
	
	printf("Sorting Data...\n");
	count = quicksort(data, 0, MAX_N - 1);
	
	printf("Sorted Array:\n");
	//printArray(data, MAX_N);
	
	printf("\ncount = %d", count);
	return 0;
}
