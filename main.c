/* 
  Reference: 8 Ways to Measure Execution Time in C/C++
             by Chauluo Ferreira
             https://levelup.gitconnected.com/8-ways-to-measure-execution-time-in-c-c-48634458d0f9
 
   
  The following shows an example program from the cited Reference on METHOD 6, with two little 
  modifications:
    1. Output is CPU time (not wall time).
    2. The displayed output shows 6 digits after the decimal point.
*/ 

#define CPU_TIME  (1)
#include "SystemManagers.c"

int main () {
    double sum = 0;
    double add = 1;
    long int count = 0;
	int data[MAX_N];
	
    // Start measuring time
    struct timespec begin, end; 

#if CPU_TIME

    // get start CPU time
    clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &begin);

#else

    clock_gettime(CLOCK_REALTIME, &begin);

#endif    

    /* NOTE: the next 5 lines are the computations being timed.  These lines should be replaced a line that calls a sorting function. */
    generateData(data, MAX_N);
	count = quicksort(data, 0, MAX_N-1);
    
    // Stop measuring time and calculate the elapsed time
#if CPU_TIME 

    // get end CPU time
    clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &end);   

#else

   clock_gettime(CLOCK_REALTIME, &end);

#endif

    long seconds = end.tv_sec - begin.tv_sec;
    long nanoseconds = end.tv_nsec - begin.tv_nsec;
    double elapsed = seconds + nanoseconds*1e-9;
    
    printf("\nCount = %ld\n", count);
    
    printf("CPU Time measured: %lf in seconds.\n", elapsed);
    printf("CPU Time measured: %lf in milliseconds.\n", elapsed * 1000); // multiply seconds by 1000 to get milliseconds
    
    return 0;
}
