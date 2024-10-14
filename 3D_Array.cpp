#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define size 1
#define view 3
#define unseen 5

int main()
{
	system("CHCP 1253>nul");
	system("COLOR E");
	
	int A[size][view][unseen],B[size][view][unseen],C[size][view][unseen],sum[size][view][unseen];
	
	printf("Πίνακας 1:\n\n");
	
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<view;j++)
		{
			for(int k=0;k<unseen;k++)
			{
				printf("Μεταβλιτές [%d] [%d] [%d] ==> ",i,j,k);
				scanf("%d",&A[i][j][k]);	
			}
			printf("\n");	
		}	
	}
	printf("\n");
	printf("Πίνακας 2:\n\n");
	
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<view;j++)
		{
			for(int k=0;k<unseen;k++)
			{
				printf("Μεταβλιτές [%d] [%d] [%d] ==> ",i,j,k);
				scanf("%d",&B[i][j][k]);	
			}
			printf("\n");	
		}	
	}
	printf("\n");
	printf("Πίνακας 3:\n\n");
	
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<view;j++)
		{
			for(int k=0;k<unseen;k++)
			{
				printf("Μεταβλιτές [%d] [%d] [%d] ==> ",i,j,k);
				scanf("%d",&C[i][j][k]);	
			}
			printf("\n");	
		}
	}
	printf("\n");
	
	for(int i=0;i<size;i++)
		for(int j=0;j<view;j++)
			for(int k=0;k<unseen;k++)
				sum[i][j][k]=A[i][j][k]+B[i][j][k]+C[i][j][k];
	
	system("CLS");
	printf("\tΑΠΟΤΕΛΕΣΜΑ:");
	printf("\n\n");
	
	printf(" A [%d] [%d] [%d] \n-----------------\n",size,view,unseen);
	for( int i=0;i<size;i++)
	{
		for(int j=0;j<view;j++)
		{
			for(int k=0;k<unseen;k++)
			{
				printf("\t%2d",A[i][j][k]);
				
			}
			printf("\n");
		}
		printf("\n");
	}
	printf(" B [%d] [%d] [%d] \n-----------------\n",size,view,unseen);
	for( int i=0;i<size;i++)
	{
		for(int j=0;j<view;j++)
		{
			for(int k=0;k<unseen;k++)
			{
				printf("\t%2d",B[i][j][k]);
				
			}
			printf("\n");
		}
		printf("\n");
	}
	printf(" C [%d] [%d] [%d] \n-----------------\n",size,view,unseen);
	for( int i=0;i<size;i++)
	{
		for(int j=0;j<view;j++)
		{
			for(int k=0;k<unseen;k++)
			{
				printf("\t%2d",C[i][j][k]);
				
			}
			printf("\n");
		}
		printf("\n");
	}
	printf(" Sum [A(%d)]+[B(%d)]+[C(%d)] \n-----------------------------\n",size,view,unseen);
	for( int i=0;i<size;i++)
	{
		for(int j=0;j<view;j++)
		{
			for(int k=0;k<unseen;k++)
			{
				printf("\t%2d",sum[i][j][k]);
				
			}
			printf("\n");
		}
		printf("\n");
	}
	
	
	
	system("PAUSE");
	return 0;
	
}
