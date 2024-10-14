#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> //για τη bool
#include <ctype.h> //για την isdigit()
#include <string.h>//για την strlen()

#define STR_SIZE 2000000 //το μέγιστο επιτρεπόμενο

int intAfterCheck(char *msg)
{
	char temp[STR_SIZE];
	int i, arith;
	bool flag;
	
	do
	{
		flag=1;
		
		printf("%s", msg);
		gets(temp);
		
		if(strlen(temp)==0)	//Αν πατήσει αμέσως ENTER
			flag=0;	//η flag γίνεται false ώστε να ξαναζητήσει input
		
		else if((temp[0]=='+' || temp[0]=='-') && strlen(temp)==1)
			flag=0;
		
		else if(temp[0]!='+' && temp[0]!='-') //Αν ΔΕΝ πατήσει πρώτα + ή/και - να το δεχτεί ως επιτρεπτό
		{
			for(i=0; i<strlen(temp); i++)
			{
				if(isdigit(temp[i])!=0) //αν κάθε πλήκτρο είναι από 0 ώς και 9 τότε η flag να παραμείνει true
					flag = flag & 1;//bitwise and (κάνει and bit προς bit)
				else				//αλλιώς να γίνει false
					flag = flag & 0;//bitwise and (κάνει and bit προς bit)
			}
		}
		
		//Αν δώσει ++3 ή +-3 ή -+3 ή --3 να μην επιτραπεί
		else if((temp[0]=='+'&&temp[1]=='+')|| (temp[0]=='+'&&temp[1]=='-') || (temp[0]=='-'&&temp[1]=='+') || (temp[0]=='-'&&temp[1]=='-')) //Αν πατήσει πρώτα + ή/και - να το δεχτεί ως επιτρεπτό
			flag = 0; //η flag να γίνει false
		
		//Αν δώσει + ή - στην αρχή αλλά το δεύτερο πλήκτρο δεν είναι ούτε + ούτε -	
		else if((temp[0]=='+'&&temp[1]!='+')|| (temp[0]=='+'&&temp[1]!='-')||(temp[0]=='-'&&temp[1]!='+') || (temp[0]=='-'&&temp[1]!='-')) //Αν πατήσει πρώτα + και δεν πατήσει μετά - (ή το ανάποδο) να το δεχτεί ως επιτρεπτό 
		{	
			for(i=1; i<strlen(temp); i++)
			{
				if(isdigit(temp[i])!=0) //αν κάθε πλήκτρο είναι από 0 ώς και 9 τότε η flag να παραμείνει true
					flag = flag & 1;//bitwise and (κάνει and bit προς bit)
				else				//αλλιώς να γίνει false
					flag = flag & 0;//bitwise and (κάνει and bit προς bit)
			}
		}		
		
		if(flag==0) //Αν η flag έγινε false, τότε θα ζητήσει εκ νέου αριθμό
		{
			printf("\n\nΔεν δώσατε αριθμό!\a\nΠαρακαλώ προσπαθήστε ξανά!\n\n");
			system("pause");
			system("cls");
		}
	}while(flag==0); //Όσο η flag παραμένει false το πρόγραμμα θα ζητάει εκ νέου αριθμό
	
	return atoi(temp);//Μόλις βγει από τη while σίγουρα θα έχει πάρει αριθμούς σε όλο το string, 
					  //οπότε μετατρέπουμε το string σε αριθμό	
}

float floatAfterCheck(char *msg)
{
	char temp[STR_SIZE];
	int i, count, flag=0;
	float arith;
	
	do
	{
		flag=1; //Η flag είναι αρχικά true
		count=0;
		
		printf("%s", msg);
		gets(temp);
		
		if(strlen(temp)==0)	//Αν πατήσει αμέσως ENTER
			flag=0;	//η flag γίνεται false ώστε να ξαναζητήσει input
		else
		{
			//έλεγχος αν υπάρχουν 2 ή περισσότερες τελείες
			for(i=0; i<strlen(temp)-1; i++)
				if(temp[i]=='.')
					count++;
			
			if (count>=2)//Αν υπάρξουν τελειές (.) περισσότερες της μίας, δηλαδή από 2 και πάνω,
				flag=0; //κάνε τη flag falseelse
				
			if(temp[0] == '.' || temp[strlen(temp)-1] == '.')	//έλεγχος αν η είσοδος ξεκινά ή τελειώνει με τελεία(.)
				flag=0;
			
			if((temp[0]=='+' || temp[0]=='-') && strlen(temp)==1)
				flag=0;
				
			if(temp[0]!='+' && temp[0]!='-')
			{
				//έλεγχος αν όλα τα υπόλοιπα πλήκτρα είναι αριθμοί	
				if(count<=1)//αν υπάρχει ή μία ή καμμία τελεία (.)
				{
					for(i=0; i<strlen(temp); i++)
					{
						if(temp[i]=='.')//αν δεις οποιοδήποτε πλήκτρο με τελεία (.)
							continue;   //αγνόησε το
						else
						{
							if(isdigit(temp[i])!=0) //αν κάθε πλήκτρο είναι από 0 ώς και 9 τότε η flag να παραμείνει true
								flag = flag * 1;//bitwise and (κάνει and bit προς bit)
							else					//αλλιώς να γίνει false
								flag = flag * 0;//bitwise and (κάνει and bit προς bit)
						}
					}
				}	
			}
			
			//Αν δώσει ++3 ή +-3 ή -+3 ή --3 να μην επιτραπεί
			if((temp[0]=='+'&&temp[1]=='+') || (temp[0]=='+'&&temp[1]=='-') || (temp[0]=='-'&&temp[1]=='+') || (temp[0]=='-'&&temp[1]=='-')) //Αν πατήσει πρώτα + ή/και - και μετά + ή/και - να μην το δεχτεί ως επιτρεπτό
				flag = 0; //η flag να γίνει false
			
			if((temp[0]=='+'&&temp[1]=='.') || (temp[0]=='-'&&temp[1]=='.')) //Αν πατήσει πρώτα + ή/και - και μετά . να μην το επιτρέψει
				flag = 0; //η flag να γίνει false
				
			//Αν δώσει + ή - στην αρχή αλλά το δεύτερο πλήκτρο δεν είναι ούτε + ούτε -	
			if((temp[0]=='+'&&temp[1]!='+') || (temp[0]=='+'&&temp[1]!='-') || (temp[0]=='-'&&temp[1]!='+') || (temp[0]=='-'&&temp[1]!='-')) //Αν πατήσει πρώτα + και δεν πατήσει μετά - (ή το ανάποδο) να το δεχτεί ως επιτρεπτό 
			{	
				for(i=1; i<strlen(temp); i++)
				{
					if(temp[i]=='.')//αν δεις οποιοδήποτε πλήκτρο με τελεία (.)
						continue;   //αγνόησε το
					else
					{
						if(isdigit(temp[i]) != 0) //αν κάθε πλήκτρο είναι από 0 ώς και 9 τότε η flag να παραμείνει true
							flag = flag * 1;//bitwise and (κάνει and bit προς bit)
						else					//αλλιώς να γίνει false
							flag = flag * 0;//bitwise and (κάνει and bit προς bit)
					}
				}
			}
		}
		
		if(flag==0) //Αν η flag έγινε false, τότε θα ζητήσει εκ νέου αριθμό
		{
			printf("\n\nΔεν δώσατε αριθμό! \a\nΠαρακαλώ προσπαθήστε ξανά!\n\n");
			system("pause");
			system("cls");
		}
	}while(flag==0); //Όσο η flag παραμένει false το πρόγραμμα θα ζητάει εκ νέου αριθμό
	
	return atof(temp);//Μόλις βγει από τη while σίγουρα θα έχει πάρει αριθμούς σε όλο το string, 
					  //οπότε μετατρέπουμε το string σε αριθμό
}

int main()
{
	system("chcp 1253 > nul");

	int temp1;
	float temp2;
	
	temp1 = intAfterCheck("Δώσε έναν ακέραιο: ");
	printf("Ο ακέραιος αριθμός που δώσατε είναι ο %d.\n\n", temp1);
	
	temp2 = floatAfterCheck("Δώσε έναν οποιοδήποτε αριθμό: ");
	printf("Ο αριθμός που δώσατε είναι ο %.2f.\n\n", temp2);
	
	system("pause");
	return 0;
}
