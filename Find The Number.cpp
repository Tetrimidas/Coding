#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

int main ()
{
	system("CHCP 1253>nul");
	system("COLOR E");
	
	int A,counter,random,Start;
		
	printf("Βρές τον τυχαίο ακέραιο αριθμό 'X' που κρύβεται ανάμεσα στο 1 και το 1000!\n\n");
	printf("Δίνονται 10 προσπάθειες\n\n");
	printf("Τα Σύμβολα (<) και (>) θα σε βοηθήσουν να βρείς τον τυχαίο αριθμό Χ!\n\n");
	printf("Μετά τις 10 Προσπάθειες Χάνεις !\n\n");
	printf("Αν Δώσεις Αριθμούς εκτός του διαστήματος 1 και 1000, Χάνεις κατευθείαν!\n\n\n");
	printf("\t\tΓια να ξεκινησεις Δώσε  (1)\n\n");
	printf("\t\tΓια Έξοδο Δώσε  (2)\n\n");
	printf("====>");
	scanf("%d",&Start);
	
	while(Start!=1&&Start!=2)
	{
		
		do
		{
				system("CLS");
				printf("Επέλεξε: 1 ή 2\n\n");
				sleep(2);
				system("CLS");
				printf("Βρές τον τυχαίο ακέραιο αριθμό 'X' που κρύβεται ανάμεσα στο 1 και το 1000!\n\n");
				printf("Δίνονται 10 προσπάθειες\n\n");
				printf("Τα Σύμβολα (<) και (>) θα σε βοηθήσουν να βρείς τον τυχαίο αριθμό Χ!\n\n");
				printf("Μετά τις 10 Προσπάθειες Χάνεις !\n\n");
				printf("Αν Δώσεις Αριθμούς εκτός του διαστήματος 1 - 1000, Χάνεις κατευθείαν!\n\n\n");
				printf("\t\tΓια να ξεκινησεις Δώσε  (1)\n\n");
				printf("\t\tΓια Έξοδο Δώσε  (2)\n\n");
				printf("====>");
				scanf("%d",&Start);
				
				
					
		}while(Start!=1&&Start!=2);
	}
	while(Start==2)
	{
		do
		{
			system("CLS");
			printf("Επέλεξες (2) για Έξοδο!\n\n");
			sleep(2);
			printf("Τερματισμός του Προγράμματος!");
			sleep(3);
			exit (1);
		}while(Start==2);
	}
	do
		{
			system("CLS");
			printf("(Ανακάλυψε τον τυχαίο αριθμό με 10 προσπάθειες)\n\n");
			printf("Δίνονται 10 προσπάθειες\n\n");
			printf("====>");
			scanf("%d",&A);
			break;
		}while(Start==1);

			for (counter=1;counter<11;counter++)
			{		
				srand(time(NULL));
				random=1+rand()%1000;
					
				do
				{
					system("CLS");
					printf("(Ανακάλυψε τον τυχαίο αριθμό με 10 προσπάθειες)\n\n");
					
					if (A>1000||A<1)
					{
						system("Color C");
						printf("\aΤο Παιχνίδι Ζητάει ακέραιους αριθμούς ανάμεσα στο 1 και στο 1000!\n\n");
						printf("\tΠαραβίασες Κανόνα Παιχνιδιού!\n\n");
						printf("\t\tΕχασες!\n\n");
						sleep(6);
						exit(1);
					}	
					else if (A>random) //αντικατάσταση του (Χ) με (%d) Για να εμφανιστει ο Κρυμμένος αριθμός.  <== 
					{
						printf("Προσπάθεια %d: Ο Αριθμός που έδωσες ειναι το %d\n\n",counter++,A);
						printf("\t(%d > Χ)\n\n",A,random); 
						printf("====>");
						scanf("%d",&A);
					}
					else if (A<random) //αντικατάσταση του (Χ) με (%d) Για να εμφανιστει ο Κρυμμένος αριθμός.  <==
					{
						printf("Προσπάθεια %d: Ο Αριθμός που έδωσες ειναι το %d\n\n",counter++,A);	
						printf("\t(%d < X)\n\n",A,random);
						printf("====>");
						scanf("%d",&A);
					}
					else if (A==random)
					{
						printf("Προσπάθεια %d: Ο Αριθμός που έδωσες ειναι το %d\n\n",counter++,A);
						system("Color A");
						printf("\t\tΜπράβο!\n");
						printf("\t  Βρήκες τον αριθμό.\n\n");
						printf("\t\t(%d)\n",random);
						sleep(4);
						exit(1);
					}	
					if (counter==11)
						{
							system("CLS");
							system("COLOR C");
							printf("Έφτασες τις 10 προσπάθειες χωρίς να βρείς τον αριθμό!\n\n");
							printf("      Εχασες!\n\n");
							printf("Ο Αριθμός ήταν το (%d)\n",random);
							sleep(4);
							exit(1);
						}				
				}while(counter<11);	
			}
	
	
	system("PAUSE");
	return 0;
	
}


