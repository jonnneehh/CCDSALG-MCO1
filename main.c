#include "SystemManagers.c"

int main (){
	int count = 0;
	int data[MAX_N];
	
	printf("Generating Data...\n");
	generateData(data, 1024);
	
	printf("Unsorted Array:\n");
	printArray(data, 1024);
	
	printf("Sorting Data...\n");
	count = quicksort(data, 0, 1023);
	
	printf("Sorted Array:\n");
	printArray(data, 1024);

	printf("\ncount = %d", count);
	
	return 0;
}
