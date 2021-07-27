#include<stdio.h>
long int quicksort(int number[],int first,int last){
   int i, j, pivot, temp;
   long int count = 1;
   
   count++; //Check if statement
   if(first<last){  
	  count++; //pivot = first
	  pivot=first;
	  
	  count++; //i = first
      i=first;
      
      count++; //j = last
      j=last;
	  
	  count++; //Checking while loop conditions
      while(i<j){
         count++; //Check while loop conditions
		 while(number[i]<=number[pivot]&&i<last){
			i++;
		 	count++; //i increment
		 }
            
         
         count++; //Check while loop conditions
		 while(number[j]>number[pivot]){	
			j--;
		 	count++; //j decrement
		 }
		 
         count++; ////Check if statement
		 if(i<j){
            count++; //For the line below
			temp=number[i];
			
			count++; //For the line below
            number[i]=number[j];
            
            count++; //For the line below
            number[j]=temp;
         }
      }
	  
	  count++; //For the line below
      temp=number[pivot];
      
      count++; //For the line below
      number[pivot]=number[j];
      
      count++; //For the line below
      number[j]=temp;
      
      count++; //For the line below
      quicksort(number,first,j-1);
      
      count++; //For the line below
      quicksort(number,j+1,last);
      
   }
   
   return count;
}

