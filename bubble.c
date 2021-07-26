#include <stdio.h>
 
void swap(int *xp, int *yp, int *count)
{   
    int temp = *xp;
    *count++;

    *xp = *yp;
    *count++;

    *yp = temp;
    *count++;
}
 
// A function to implement bubble sort
int bubbleSort(int arr[], int n)
{
   int i, j, count;

   count = 1;

   count++; //first count of going inside for loop
   for (i = 0; i < n-1; i++) 
   { 
       count++; //count when inside for loop  
       
        // Last i elements are already in place

       count++; //first count of going inside for loop
       for (j = 0; j < n-i-1; j++)
       {   
           count++;  //count when inside for loop  

           count++;  //first count of going inside if statement
           if (arr[j] > arr[j+1])
           {   
               count++; //first count of going inside swap function
               swap(&arr[j], &arr[j+1], &count);
           }
              
       }

   }     
    
    return count;
             
}
 
/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
