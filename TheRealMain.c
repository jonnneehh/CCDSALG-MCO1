#include "SystemManagers.c"
#define SMALL_DATA_N 10

int main (){
	int data[MAX_N];
	int dataToBeSorted[MAX_N];
	
	double sum = 0;
	double add = 1;
	long int count = 0;
	
	string30 sCount;
	string30 sortingAlgo;
	
	int totalCount;
	double totalTime;
	
	int i, r;
	
	generateData(data, MAX_N);
	
	printf("MAX_N: %d\n\nSorting Algo: r   %-15s %-25s\n", MAX_N, "Count", "Time in milliseconds");
	
	for(i = 0; i < 6 /*6 is the number of sorting algos*/; i++){
		totalCount = 0;
		totalTime = 0;
		for(r = 0; r < 10; r++){
			struct timespec begin, end; 
			
			//#if CPU_TIME
			clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &begin);
			
			//#else
			clock_gettime(CLOCK_REALTIME, &begin);
			
			//#endif 
			copyArray(data, dataToBeSorted);
			
			if(i == 0) {
				count = selectionSort(dataToBeSorted, MAX_N);
				strcpy(sortingAlgo, "Selection");
			}
			else if(i == 1){
				count = insertionSort(dataToBeSorted, MAX_N);
				strcpy(sortingAlgo, "Insertion");
			}
			else if(i == 2){
				count = bubbleSort(dataToBeSorted, MAX_N);
				strcpy(sortingAlgo, "Bubble");
			}
			else if(i == 3){
				count = heapSort(dataToBeSorted, MAX_N);
				strcpy(sortingAlgo, "Heap");
			}
			else if(i == 4){
				count = mergeSort(dataToBeSorted, 0, MAX_N - 1);
				strcpy(sortingAlgo, "Merge");
			}
			else if(i == 5){
				count = quicksort(dataToBeSorted, 0, MAX_N - 1);
				strcpy(sortingAlgo, "Quick");
			}
			
			
			//#if CPU_TIME 
			clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &end); 
			
			//#else
			clock_gettime(CLOCK_REALTIME, &end);
			
			//#endif
				
			long seconds = end.tv_sec - begin.tv_sec;
			long nanoseconds = end.tv_nsec - begin.tv_nsec;
			double elapsed = seconds + nanoseconds*1e-9;
			
			//totalCount += count;
			totalTime += elapsed * 1000;
			
			convertToCommaFormat(count, sCount);
			printf("%-15s%-3d %-15d", sortingAlgo, r, count);
			printf(" %-25lf\n", elapsed * 1000);	
		}
		
		printf("\n\n%-15s%-3s %-15d", sortingAlgo, "AVE", count);
		printf(" %-25lf\n\n", totalTime / r);
		printf("----------------------------------------\n");
	}
		
	return 0;
}
