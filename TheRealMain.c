#include "SystemManagers.c"
#define SMALL_DATA_N 10
int data[MAX_N];
double sum = 0;
double add = 1;
long int count = 0;

string30 sCount;

int main (){
	
	struct timespec begin, end; 
	
	#if CPU_TIME
	clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &begin);
	
	#else
	clock_gettime(CLOCK_REALTIME, &begin);
	
	#endif 
	printf("Generating Data...\n");
	generateData(data, MAX_N);
	
	printf("Sorting Data...\n");
	count = heapSort(data, MAX_N);
	
	#if CPU_TIME 
	clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &end); 
	
	#else
	clock_gettime(CLOCK_REALTIME, &end);
	
	#endif
	
	long seconds = end.tv_sec - begin.tv_sec;
    long nanoseconds = end.tv_nsec - begin.tv_nsec;
    double elapsed = seconds + nanoseconds*1e-9;
    
    convertToCommaFormat(count, sCount);
	printf("\nMAX_N: %d\nCount = %s\n", MAX_N, sCount);
	printf("CPU Time measured: %lf in milliseconds.\n", elapsed * 1000);
	return 0;
}
