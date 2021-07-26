// C program for insertion sort
#include <math.h>
#include <stdio.h>
 
/* Function to sort an array using insertion sort*/
int insertionSort(int arr[], int n)
{
    int i, key, j, count;
    
    count = 1;
    
    count++; // enter loop
    for (i = 1; i < n; i++) {
    	count++; // adds to counter per run of loop
    	
        key = arr[i];
        j = i - 1;
 
        /* Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
        count++; // enter while loop
        while (j >= 0 && arr[j] > key) {
        	count++; // adds to count per run of loop
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        
        arr[j + 1] = key;
        count++; // adds to count when new key is assigned
    }
    
    return count; // returns final value for count
}
 
// A utility function to print an array of size n
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
