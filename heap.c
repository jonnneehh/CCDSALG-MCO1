// Heap Sort in C
#include <stdio.h>
  
// Function to swap the the position of two elements
void swapHeap(int *a, int *b, long int *count) 
{
    int temp = *a;
    (*count)++;

    *a = *b;
    (*count)++;

    *b = temp;
    (*count)++;
}
  
void heapify(int arr[], int n, int i, long int *count) 
{
    // Find largest among root, left child and right child
   

    int largest = i;
    (*count)++;

    int left = 2 * i + 1;
    (*count)++;

    int right = 2 * i + 2;
    (*count)++;
    
    (*count)++;
    if (left < n && arr[left] > arr[largest])
    {   
        (*count)++;
        largest = left;
    }
      
    (*count)++;
    if (right < n && arr[right] > arr[largest])
    {
        (*count)++;
        largest = right;

    }
      
  
    // Swap and continue heapifying if root is not largest
    (*count)++;
    if (largest != i) 
    {
        (*count)++;
        swapHeap(&arr[i], &arr[largest], count);

        (*count)++;
        heapify(arr, n, largest, count);
    }

}
  
// Main function to do heap sort
long int heapSort(int arr[], int n) 
{
    // Build max heap
    int i;
    long int count = 1;
    
    count++;
    for (i = n / 2 - 1; i >= 0; i--)
    {   
        count++; //counts when it cycles the loop again

        heapify(arr, n, i, &count);
        count++; //counts heapify funcitons

    }
      
  
    // Heap sort
    count++;
    for (i = n - 1; i >= 0; i--) 
    {   
        count++;
        
        swapHeap(&arr[0], &arr[i], &count);
        count++;
        
        // Heapify root element to get highest element at root again
        heapify(arr, i, 0, &count);
        count++;
    }

    return count;

}
 

