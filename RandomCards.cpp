#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

int main ()
{
	system("CHCP 1253>nul");
	
	int card,space;
	char symbol_of_card;
	
	do
	{

			symbol_of_card= 3+ rand()%'\4';
			card=1+rand()%13;
			srand(time(NULL));
		switch(card)
		{
			case 1:
				{
					if(symbol_of_card=='\3'||symbol_of_card=='\4')
						system("Color 7C");
					else if (symbol_of_card=='\5'||symbol_of_card=='\6')
						system("Color 70");
					printf(" __________________\n");
					printf("|                  |\n");
					printf("|  A               |\n");
					printf("|  %c               |\n",symbol_of_card);
					printf("|                  |\n");
					printf("|                  |\n");
					printf("|                  |\n");
					printf("|        %c         |\n",symbol_of_card);
					printf("|                  |\n");
					printf("|                  |\n");
					printf("|                  |\n");
					printf("|              A   |\n");
					printf("|              %c   |\n",symbol_of_card);
					printf("|__________________|\n\n");
					
					printf("Repeat(1)\tExit(2)\n\n");
					scanf("%d",&space);
					system("CLS");
				break;
				}
			case 12:
				{
					if(symbol_of_card=='\3'||symbol_of_card=='\4')
						system("Color 7C");
					else if (symbol_of_card=='\5'||symbol_of_card=='\6')
						system("Color 70");
					printf(" __________________\n");
					printf("|                  |\n");
					printf("|  Q               |\n");
					printf("|  %c               |\n",symbol_of_card);
					printf("|                  |\n");
					printf("|                  |\n");
					printf("|                  |\n");
					printf("|        %c         |\n",symbol_of_card);
					printf("|                  |\n");
					printf("|                  |\n");
					printf("|                  |\n");
					printf("|              Q   |\n");
					printf("|              %c   |\n",symbol_of_card);
					printf("|__________________|\n\n");
					
					printf("Repeat(1)\tExit(2)\n\n");
					scanf("%d",&space);
					system("CLS");
				break;
				}
			case 13:
				{
					if(symbol_of_card=='\3'||symbol_of_card=='\4')
						system("Color 7C");
					else if (symbol_of_card=='\5'||symbol_of_card=='\6')
						system("Color 70");
					printf(" __________________\n");
					printf("|                  |\n");
					printf("|  J               |\n");
					printf("|  %c               |\n",symbol_of_card);
					printf("|                  |\n");
					printf("|                  |\n");
					printf("|                  |\n");
					printf("|        %c         |\n",symbol_of_card);
					printf("|                  |\n");
					printf("|                  |\n");
					printf("|                  |\n");
					printf("|              J   |\n");
					printf("|              %c   |\n",symbol_of_card);
					printf("|__________________|\n\n");
					
					printf("Repeat(1)\tExit(2)\n\n");
					scanf("%d",&space);
					system("CLS");
				break;
				}	
			case 10:	
				{
					if(symbol_of_card=='\3'||symbol_of_card=='\4')
						system("Color 7C");
					else if (symbol_of_card=='\5'||symbol_of_card=='\6')
						system("Color 70");
					printf(" __________________\n");
					printf("|                  |\n");
					printf("|  10              |\n");
					printf("|  %c               |\n",symbol_of_card);
					printf("|                  |\n");
					printf("|                  |\n");
					printf("|                  |\n");
					printf("|        %c         |\n",symbol_of_card);
					printf("|                  |\n");
					printf("|                  |\n");
					printf("|                  |\n");
					printf("|              10  |\n");
					printf("|              %c   |\n",symbol_of_card);
					printf("|__________________|\n\n");
					
					printf("Repeat(1)\tExit(2)\n\n");
					scanf("%d",&space);
					system("CLS");
				break;
				}
			case 11:
				{
					if(symbol_of_card=='\3'||symbol_of_card=='\4')
						system("Color 7C");
					else if (symbol_of_card=='\5'||symbol_of_card=='\6')
						system("Color 70");
					printf(" __________________\n");
					printf("|                  |\n");
					printf("|  K               |\n");
					printf("|  %c               |\n",symbol_of_card);
					printf("|                  |\n");
					printf("|                  |\n");
					printf("|                  |\n");
					printf("|        %c         |\n",symbol_of_card);
					printf("|                  |\n");
					printf("|                  |\n");
					printf("|                  |\n");
					printf("|              K   |\n");
					printf("|              %c   |\n",symbol_of_card);
					printf("|__________________|\n\n");
					
					printf("Repeat(1)\tExit(2)\n\n");
					scanf("%d",&space);
					system("CLS");
				break;
				}	
			default:
				{
					if(symbol_of_card=='\3'||symbol_of_card=='\4')
						system("Color 7C");
					else if (symbol_of_card=='\5'||symbol_of_card=='\6')
						system("Color 70");
					
					printf(" __________________\n");
					printf("|                  |\n");
					printf("|  %d               |\n",card);
					printf("|  %c               |\n",symbol_of_card);
					printf("|                  |\n");
					printf("|                  |\n");
					printf("|                  |\n");
					printf("|        %d         |\n",card);
					printf("|                  |\n");
					printf("|                  |\n");
					printf("|                  |\n");
					printf("|               %d  |\n",card);
					printf("|               %c  |\n",symbol_of_card);
					printf("|__________________|\n\n");
					
					printf("Repeat(1)\tExit(2)\n\n");
					scanf("%d",&space);
					system("CLS");
				}
		}	
	
	}while (space==1);
	
	while(space==2)
	{
		system("CLS");
		system("Color 70");
		printf("Επέλεξες (2) Για έξοδο!\n\n");
		sleep(2);
		printf("Τερματισμός Προγράμματος!\n\n");
		sleep(2);
		exit(1);
	}
				
	system("PAUSE");
	return 0;
}
