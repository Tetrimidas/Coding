#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

int main ()
{
	system("CHCP 1253>nul");
	system("COLOR E");
	
	int A,counter,random,Start;
		
	printf("���� ��� ������ ������� ������ 'X' ��� �������� ������� ��� 1 ��� �� 1000!\n\n");
	printf("�������� 10 �����������\n\n");
	printf("�� ������� (<) ��� (>) �� �� ��������� �� ����� ��� ������ ������ �!\n\n");
	printf("���� ��� 10 ����������� ������ !\n\n");
	printf("�� ������ �������� ����� ��� ����������� 1 ��� 1000, ������ ����������!\n\n\n");
	printf("\t\t��� �� ���������� ����  (1)\n\n");
	printf("\t\t��� ����� ����  (2)\n\n");
	printf("====>");
	scanf("%d",&Start);
	
	while(Start!=1&&Start!=2)
	{
		
		do
		{
				system("CLS");
				printf("�������: 1 � 2\n\n");
				sleep(2);
				system("CLS");
				printf("���� ��� ������ ������� ������ 'X' ��� �������� ������� ��� 1 ��� �� 1000!\n\n");
				printf("�������� 10 �����������\n\n");
				printf("�� ������� (<) ��� (>) �� �� ��������� �� ����� ��� ������ ������ �!\n\n");
				printf("���� ��� 10 ����������� ������ !\n\n");
				printf("�� ������ �������� ����� ��� ����������� 1 - 1000, ������ ����������!\n\n\n");
				printf("\t\t��� �� ���������� ����  (1)\n\n");
				printf("\t\t��� ����� ����  (2)\n\n");
				printf("====>");
				scanf("%d",&Start);
				
				
					
		}while(Start!=1&&Start!=2);
	}
	while(Start==2)
	{
		do
		{
			system("CLS");
			printf("�������� (2) ��� �����!\n\n");
			sleep(2);
			printf("����������� ��� ������������!");
			sleep(3);
			exit (1);
		}while(Start==2);
	}
	do
		{
			system("CLS");
			printf("(��������� ��� ������ ������ �� 10 �����������)\n\n");
			printf("�������� 10 �����������\n\n");
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
					printf("(��������� ��� ������ ������ �� 10 �����������)\n\n");
					
					if (A>1000||A<1)
					{
						system("Color C");
						printf("\a�� �������� ������ ��������� �������� ������� ��� 1 ��� ��� 1000!\n\n");
						printf("\t���������� ������ ����������!\n\n");
						printf("\t\t������!\n\n");
						sleep(6);
						exit(1);
					}	
					else if (A>random) //������������� ��� (�) �� (%d) ��� �� ���������� � ��������� �������.  <== 
					{
						printf("���������� %d: � ������� ��� ������ ����� �� %d\n\n",counter++,A);
						printf("\t(%d > �)\n\n",A,random); 
						printf("====>");
						scanf("%d",&A);
					}
					else if (A<random) //������������� ��� (�) �� (%d) ��� �� ���������� � ��������� �������.  <==
					{
						printf("���������� %d: � ������� ��� ������ ����� �� %d\n\n",counter++,A);	
						printf("\t(%d < X)\n\n",A,random);
						printf("====>");
						scanf("%d",&A);
					}
					else if (A==random)
					{
						printf("���������� %d: � ������� ��� ������ ����� �� %d\n\n",counter++,A);
						system("Color A");
						printf("\t\t������!\n");
						printf("\t  ������ ��� ������.\n\n");
						printf("\t\t(%d)\n",random);
						sleep(4);
						exit(1);
					}	
					if (counter==11)
						{
							system("CLS");
							system("COLOR C");
							printf("������� ��� 10 ����������� ����� �� ����� ��� ������!\n\n");
							printf("      ������!\n\n");
							printf("� ������� ���� �� (%d)\n",random);
							sleep(4);
							exit(1);
						}				
				}while(counter<11);	
			}
	
	
	system("PAUSE");
	return 0;
	
}


