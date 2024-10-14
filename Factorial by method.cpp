#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

double factorial(double number)
{
	double value = 1;
	
	for(int i=1; i<=number; i++)
	{
		value = value*i;
	}
	return value;
}

int main()
{
	system("CHCP 1253>nul");
	system("color E");
	
	double number1, fact;
	
	printf("\tGive a number to find its factorial\n\n");
	printf("Your Number: ");
	scanf("%lf",&number1);
	
	fact = factorial(number1);
	
	printf("\n\t%.0lf! = %.0lf\n\n",number1,fact);
	
	system("pause");
	return 0;
}
