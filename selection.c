// C program for implementation of selection sort
#include <stdio.h>
 
void swapSelection(int *xp, int *yp, long int *count)
{
    int temp = *xp;
    count++; // add count when line above is executed
    
    *xp = *yp;
    count++; // add count when line above is executed
    
    *yp = temp;
    count++; // add count when line above is executed
}
 
long int selectionSort(int arr[], int n)
{
    int i, j, min_idx;
	long int count;
    
    count = 1;
 
    // One by one move boundary of unsorted subarray
    count++; // enter loop
    for (i = 0; i < n-1; i++)
    {
    	count++; // count per loop run
    	
        // Find the minimum element in unsorted array
        min_idx = i;
        count++; // add to count when min_idx is assigned
        
        count++; // add count when loop is entered
        for (j = i+1; j < n; j++){
        	count++; // count per loop run
        
        	count++;// add count when if statement is checked
        	if (arr[j] < arr[min_idx]){
        		min_idx = j;
				count++; // count per successful if
			}
		}
        // Swap the found minimum element with the first element
        swapSelection(&arr[min_idx], &arr[i],&count);
        count++; // add count when swap is called
    }
    
    return count; // returns final value for count
}
