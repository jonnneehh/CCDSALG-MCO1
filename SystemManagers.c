#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#include "quick.c"
#include "merge.c"
#include "insertion.c"
#include "selection.c"
#include "bubble.c"
#include "heap.c"

#define MAX_N 32768

typedef char string30[31];

void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%-6d ", arr[i]);
    printf("\n\n");
}

void generateData(int data[MAX_N], int numOfData){
	int i;
	
	srand(time(NULL));
	
	for(i = 0; i < numOfData; i++){
		data[i] = rand();
	}
}

void copyArray(int A[MAX_N], int B[MAX_N]){
	int i;
	
	for(i = 0; i < MAX_N; i++)
		B[i] = A[i];
}

void convertToCommaFormat(int value, string30 stringOutput){
	int c1, v1, len;
	string30 vstring = " ";
	
	sprintf(vstring,"%d",value);	/* Convert number to string */
	
	len = strlen(vstring);	/* Use this to determine where commas go */
	c1 = v1 = 0;		/* Indexes for both strings
						   c1 follows commas
						   v1 follows values */
	/* loop until the last character in the original string*/
	while(vstring[v1])
	{
		if(len % 3)		/* = !0 then no comma is needed */
		{
			stringOutput[c1] = vstring[v1];	/* Copy the number */
		}
		else					/* A comma is necessary */
		{
			if(c1 != 0)			/* avoid starting output with a comma */
			{
				stringOutput[c1] = ',';	/* insert comma */
				c1++;				/* Adjust index */
			}
			stringOutput[c1] = vstring[v1];	/* copy next number */
		}
		c1++;
		v1++;
		len--;
	}
	stringOutput[c1] = '\0';
}

