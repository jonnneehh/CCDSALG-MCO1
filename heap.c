// Heap Sort in C
#include <stdio.h>
  
// Function to swap the the position of two elements
void swap(int *a, int *b, int *count) 
{
    int temp = *a;
    (*count)++;

    *a = *b;
    (*count)++;

    *b = temp;
    (*count)++;
}
  
void heapify(int arr[], int n, int i, int *count) 
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
        swap(&arr[i], &arr[largest], count);

        (*count)++;
        heapify(arr, n, largest, count);
    }

}
  
// Main function to do heap sort
int heapSort(int arr[], int n) 
{
    // Build max heap
    int count = 1;
    
    count++;
    for (int i = n / 2 - 1; i >= 0; i--)
    {   
        count++; //counts when it cycles the loop again

        heapify(arr, n, i, &count);
        count++; //counts heapify funcitons

    }
      
  
    // Heap sort
    count++;
    for (int i = n - 1; i >= 0; i--) 
    {   
        count++;
        
        swap(&arr[0], &arr[i], &count);
        count++;
        
        // Heapify root element to get highest element at root again
        heapify(arr, i, 0, &count);
        count++;
    }

    return count;

}
  
// Print an array
void printArray(int arr[], int n) 
{
    for (int i = 0; i < n; ++i)
      printf("%d ", arr[i]);
    printf("\n");
}
  
 

