#include "SystemManagers.c"
#define SMALL_DATA_N 10
int data[MAX_N];
double sum = 0;
double add = 1;
long int count = 0;

string30 sCount;

int main (){
	int i;
	printf("MAX_N: %d\n\ni   %-15s %-25s\n", MAX_N, "Count", "Time in milliseconds");
	
	for(i = 0; i < 5; i++){
		struct timespec begin, end; 
		
		#if CPU_TIME
		clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &begin);
		
		#else
		clock_gettime(CLOCK_REALTIME, &begin);
		
		#endif 
		generateData(data, MAX_N);
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
		printf("%-3d %-15s", i, sCount);
		printf(" %-25lf\n", elapsed * 1000);	
	}
	return 0;
}
