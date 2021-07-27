/* C program for Merge Sort */
#include <stdio.h>
#include <stdlib.h>
 
// Merges two subarrays of arr[].
// First subarray is arr[l..m]
// Second subarray is arr[m+1..r]
long int merge(int arr[], int l, int m, int r)
{
    long int count = 0;
    
	int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
 
    /* create temp arrays */
    int L[n1], R[n2];
 
    /* Copy data to temp arrays L[] and R[] */
    count++; //For loop conditions
	for (i = 0; i < n1; i++){
		count++; //Line below
		L[i] = arr[l + i];
	}
        
    
    count++; //For loop conditions
	for (j = 0; j < n2; j++){
		count++; //Line below
		R[j] = arr[m + 1 + j];
	}
        
 
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    
    count++; //While loop conditions
	while (i < n1 && j < n2) {
        count++; //If statement conditions
		if (L[i] <= R[j]) {
            count++; //Line below
			arr[k] = L[i];
			
			count++; //Line below
            i++;
        }
        else {
            count++; //Adds a count when the else statement was chosen
            
			count++; //Line below
			arr[k] = R[j];
			
			count++; //Line below
            j++;
        }
        count++; //Line below
		k++;
    }
 
    /* Copy the remaining elements of L[], if there
    are any */
    count++; //While loop conditions
	while (i < n1) {
        count++; //Line below
		arr[k] = L[i];
		
		count++; //Line below
		i++;
        
		count++; //Line below
		k++;
    }
 
    /* Copy the remaining elements of R[], if there
    are any */
    count++; //While loop conditions
	while (j < n2) {
        count++; //Line below
		arr[k] = R[j];
        
        count++; //Line below
		j++;
        
		count++; //Line below
		k++;
    }
}

/* l is for left index and r is right index of the
sub-array of arr to be sorted */
long int mergeSort(int arr[], int l, int r)
{
    long int count = 1;
    
	count++; //If statement conditions
	if (l < r) {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        count++; //Line below
		int m = l + (r - l) / 2;
 
        // Sort first and second halves
        count++; //Line below
		count += mergeSort(arr, l, m);
        
        count++; //Line below
		count += mergeSort(arr, m + 1, r);
 		
 		count++; //Line below
        count += merge(arr, l, m, r);
    }
    
    return count;
}
