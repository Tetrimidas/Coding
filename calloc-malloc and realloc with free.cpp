#include <stdio.h> 
#include <conio.h> 
#include <stdlib.h>
#include <time.h> 
  
int main() 
{ 
    // This pointer will hold the 
    // base address of the block created 
    float *array;
	int i, size; 
	
  
    ////////////////////////MALLOC/CALLOC MODE//////////////////////////////
    // Give the number of elements for the array 
    printf("Enter number of elements:"); 
    scanf("%d", &size);
  	
    // Dynamically allocate memory using malloc(), or calloc() 
    //array = (float *)malloc(size * sizeof(float));
	array = (float *)calloc(size, sizeof(float)); 
  
    // Check if the memory has been successfully 
    // allocated by malloc/calloc or not 
    if (array == NULL || size<=0 || size != (int)size) 
	{ 
        printf("Memory not allocated.\n"); 
        exit(1); //return 1; 
    } 
    else 
	{
        // Memory has been successfully allocated 
        printf("Memory successfully allocated using MALLOC/CALLOC.\nPress any key when ready..");
		getch(); 
  
        // Calculate random elements of the array (1 -> 9)
		srand(time(0)); 
        for (i = 0; i < size; i++) 
            array[i] = 1+rand()%9; 
  
        // Print the elements of the array 
        printf("\n\nThe elements of the array are:\n-----------------------------------\n"); 
        for (i = 0; i < size; i++) 
             printf("Array[%d]: %.2f RAM_Block[%d]\n",i,array[i], &array[i]); 
    }
    
    ////////////////////////REALLOC MODE////////////////////////////////////
    // Give the new number of elements for the array 
     printf("\n\nEnter NEW number of elements:"); 
     scanf("%d", &size);
  	
	// Dynamically allocate memory using realloc()
    array = (float *)realloc(array, size*sizeof(float));
    
    // Check if the memory has been successfully 
    // allocated by malloc or not 
    if (array == NULL || size==0 || size != (int)size) 
	{ 
        printf("Memory not allocated.\n"); 
        exit(1); 
    } 
    else 
	{
        // Memory has been successfully allocated 
        printf("Memory successfully allocated using REALLOC.\nPress any key when ready..");
		getch();
  
        // Calculate random elements of the array (1 -> 9)
		srand(time(0)); 
        for (i = 0; i < size; i++) 
            array[i] = 1+rand()%9; 
  
        // Print the elements of the array 
        printf("\n\nThe elements of the NEW array are:\n-----------------------------------\n"); 
        for (i = 0; i < size; i++) 
            printf("Array[%d]: %.2f RAM_Block[%d]\n",i,array[i], &array[i]); 
    }
  	printf("\n");
  	
  	free(array);
  	system("PAUSE");
    return 0; 
} 
