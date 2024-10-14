#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int binarySearchArray(float *sorted_array, const int size, float element)
{
	int low = 0;
	int high = size-1;
	int middle;
    
	while (low <= high)
    {
        middle = low + (high - low)/2;
        
		if (element > sorted_array[middle])
            low = middle + 1;
        else if (element < sorted_array[middle])
            high = middle - 1;
        else
            return middle;
    }
    return -1;
}

int lineaSearchArray(float *A, const int size, float element)
{
	int pos = -1;
	
	for(int i=0; i<size; i++)
	{
		if(element == A[i]) //An vrethei to stoixeio
		{
			pos = i;  //apothikeuse ti THESI toy stoixeiou sto pos
			break; //tha ipologistei i 1i thesi poy vrethike
		}
	}
	return pos;
}

void printArray(float *array, const int size, const char *msg)
{
	printf("\n%s\n", msg);
	for (int i=0; i<size; i++)
		printf("%.2f\t", array[i]);
	printf("\n");
}

void swapTwoValues(float *x, float *y)
{
	float temp = *x;
	*x = *y;
	*y = temp;
}

void quickSortArray(float *array, int first, int last)
{
   int i, j, pivot;

   if(first < last)
   {
      pivot = first;
      i = first;
      j = last;

      while(i<j)
	  {
         while(array[i] <= array[pivot] && i < last) //GIA FTHINOYSA GRAFOYME Pin[i]>=Pin[pivot] && i < last
            i++;
         
		 while(array[j] > array[pivot]) //GIA FTHINOYSA GRAFOYME Pin[j]<Pin[pivot] 
            j--;
            
         if(i<j)
            swapTwoValues(&array[i], &array[j]);
      }
	  
	  swapTwoValues(&array[pivot], &array[j]);
      
      quickSortArray(array, first, j-1);
      quickSortArray(array, j+1 ,last);
   }
}

void bubbleSortArray(float *array, const int size)
{
	//AYKSOYSA TAKSNINOMHSH 
	for (int i=0; i<size; i++)
		for (int j=0; j<size-i-1; j++)
			if (array[j] > array[j+1]) //GIA FTHINOYSA GRAFOYME Pin[j]<Pin[j+1]
				swapTwoValues(&array[j], &array[j+1]);//antallagi stoixeiwn
}

int main()
{
	float A[SIZE], stoixeio;
	int thesi=-1;
	
	//DATA INPUT
	for (int i=0; i<SIZE; i++)
	{
		printf("Dwse to %do stoixeio: ", i+1);
		scanf("%f", &A[i]);
	}
	system("CLS");
	
	printArray(A, SIZE, "UNSORTED ARRAY\n----------------");		
	
	//TAKSINOMHSE PINAKA
	//bubbleSortArray(A, SIZE);
	quickSortArray(A, 0, SIZE-1);
	
	printArray(A, SIZE, "SORTED ARRAY\n----------------");
		
	printf("\n\nPoio stoixeio psaxneis?? ");
	scanf("%f", &stoixeio);
	
	//thesi = lineaSearchArray(A, SIZE, stoixeio);
	thesi = binarySearchArray(A, SIZE, stoixeio);
	
	if(thesi==-1)
		printf("\nDen iparxei to %.2f ston pinaka.\n", stoixeio);
	else
		printf("\nTo %.2f iparxei sti thesi %d.\n", stoixeio, thesi+1);
	
	printf("\n\n");
	
	system("PAUSE");
	return 0;
}
