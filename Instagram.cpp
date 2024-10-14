#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#define SIZE_OF_STRING 50

int main ()
{
	system("CHCP 1253>nul");
	system("Color E");
	
	char email[SIZE_OF_STRING],password[SIZE_OF_STRING],counter;
	char correct_email[SIZE_OF_STRING],correct_password[SIZE_OF_STRING];
	unsigned user,pass;
	
	strcpy(correct_email,"eliastetrimidas1999@gmail.com");  //  <==== Email/Username
	strcpy(correct_password,"Hello"); // (H) κεφαλαίο!          <==== Password

	do
	{
		system("CLS");		
		printf("\tINSTAGRAM\n\n");
		printf("Enter your Email address: ");
		gets(email);
		printf("Enter your Password: ");
		gets(password);		
		
		user = strcmp(correct_email , email);
		pass = strcmp(correct_password , password);

		if(user==0 && pass==0 && counter<3)
		{
			system("CLS");
			printf("\tWelcome Elias Tetrimidas\n\n");
			printf("You can scroll for the rest of your life\n\n\n\n\n\n");
			break;
		}

		else
		{
			counter++;
			printf("\n\tIncorrect Email or Password\n");
			sleep(2);
		}
		
	}while(counter<3);
	
	if(counter==3)
	{
		system("CLS");
		printf("Too many incorrect attempts \n\n");
		printf("Your account has been temporarily locked!\n\n");
		printf("We've sent a security code to your mobile number.");
		sleep(5);
		exit(1);
	}
	
	system("PAUSE");
	return 0;
	
}
