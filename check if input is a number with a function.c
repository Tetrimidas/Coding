#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> //��� �� bool
#include <ctype.h> //��� ��� isdigit()
#include <string.h>//��� ��� strlen()

#define STR_SIZE 2000000 //�� ������� ������������

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
		
		if(strlen(temp)==0)	//�� ������� ������ ENTER
			flag=0;	//� flag ������� false ���� �� ����������� input
		
		else if((temp[0]=='+' || temp[0]=='-') && strlen(temp)==1)
			flag=0;
		
		else if(temp[0]!='+' && temp[0]!='-') //�� ��� ������� ����� + �/��� - �� �� ������ �� ���������
		{
			for(i=0; i<strlen(temp); i++)
			{
				if(isdigit(temp[i])!=0) //�� ���� ������� ����� ��� 0 �� ��� 9 ���� � flag �� ���������� true
					flag = flag & 1;//bitwise and (����� and bit ���� bit)
				else				//������ �� ����� false
					flag = flag & 0;//bitwise and (����� and bit ���� bit)
			}
		}
		
		//�� ����� ++3 � +-3 � -+3 � --3 �� ��� ���������
		else if((temp[0]=='+'&&temp[1]=='+')|| (temp[0]=='+'&&temp[1]=='-') || (temp[0]=='-'&&temp[1]=='+') || (temp[0]=='-'&&temp[1]=='-')) //�� ������� ����� + �/��� - �� �� ������ �� ���������
			flag = 0; //� flag �� ����� false
		
		//�� ����� + � - ���� ���� ���� �� ������� ������� ��� ����� ���� + ���� -	
		else if((temp[0]=='+'&&temp[1]!='+')|| (temp[0]=='+'&&temp[1]!='-')||(temp[0]=='-'&&temp[1]!='+') || (temp[0]=='-'&&temp[1]!='-')) //�� ������� ����� + ��� ��� ������� ���� - (� �� �������) �� �� ������ �� ��������� 
		{	
			for(i=1; i<strlen(temp); i++)
			{
				if(isdigit(temp[i])!=0) //�� ���� ������� ����� ��� 0 �� ��� 9 ���� � flag �� ���������� true
					flag = flag & 1;//bitwise and (����� and bit ���� bit)
				else				//������ �� ����� false
					flag = flag & 0;//bitwise and (����� and bit ���� bit)
			}
		}		
		
		if(flag==0) //�� � flag ����� false, ���� �� ������� �� ���� ������
		{
			printf("\n\n��� ������ ������!\a\n�������� ����������� ����!\n\n");
			system("pause");
			system("cls");
		}
	}while(flag==0); //��� � flag ��������� false �� ��������� �� ������ �� ���� ������
	
	return atoi(temp);//����� ���� ��� �� while ������� �� ���� ����� �������� �� ��� �� string, 
					  //����� ������������ �� string �� ������	
}

float floatAfterCheck(char *msg)
{
	char temp[STR_SIZE];
	int i, count, flag=0;
	float arith;
	
	do
	{
		flag=1; //� flag ����� ������ true
		count=0;
		
		printf("%s", msg);
		gets(temp);
		
		if(strlen(temp)==0)	//�� ������� ������ ENTER
			flag=0;	//� flag ������� false ���� �� ����������� input
		else
		{
			//������� �� �������� 2 � ������������ �������
			for(i=0; i<strlen(temp)-1; i++)
				if(temp[i]=='.')
					count++;
			
			if (count>=2)//�� �������� ������� (.) ������������ ��� ����, ������ ��� 2 ��� ����,
				flag=0; //���� �� flag falseelse
				
			if(temp[0] == '.' || temp[strlen(temp)-1] == '.')	//������� �� � ������� ������ � ��������� �� ������(.)
				flag=0;
			
			if((temp[0]=='+' || temp[0]=='-') && strlen(temp)==1)
				flag=0;
				
			if(temp[0]!='+' && temp[0]!='-')
			{
				//������� �� ��� �� �������� ������� ����� �������	
				if(count<=1)//�� ������� � ��� � ������ ������ (.)
				{
					for(i=0; i<strlen(temp); i++)
					{
						if(temp[i]=='.')//�� ���� ����������� ������� �� ������ (.)
							continue;   //������� ��
						else
						{
							if(isdigit(temp[i])!=0) //�� ���� ������� ����� ��� 0 �� ��� 9 ���� � flag �� ���������� true
								flag = flag * 1;//bitwise and (����� and bit ���� bit)
							else					//������ �� ����� false
								flag = flag * 0;//bitwise and (����� and bit ���� bit)
						}
					}
				}	
			}
			
			//�� ����� ++3 � +-3 � -+3 � --3 �� ��� ���������
			if((temp[0]=='+'&&temp[1]=='+') || (temp[0]=='+'&&temp[1]=='-') || (temp[0]=='-'&&temp[1]=='+') || (temp[0]=='-'&&temp[1]=='-')) //�� ������� ����� + �/��� - ��� ���� + �/��� - �� ��� �� ������ �� ���������
				flag = 0; //� flag �� ����� false
			
			if((temp[0]=='+'&&temp[1]=='.') || (temp[0]=='-'&&temp[1]=='.')) //�� ������� ����� + �/��� - ��� ���� . �� ��� �� ���������
				flag = 0; //� flag �� ����� false
				
			//�� ����� + � - ���� ���� ���� �� ������� ������� ��� ����� ���� + ���� -	
			if((temp[0]=='+'&&temp[1]!='+') || (temp[0]=='+'&&temp[1]!='-') || (temp[0]=='-'&&temp[1]!='+') || (temp[0]=='-'&&temp[1]!='-')) //�� ������� ����� + ��� ��� ������� ���� - (� �� �������) �� �� ������ �� ��������� 
			{	
				for(i=1; i<strlen(temp); i++)
				{
					if(temp[i]=='.')//�� ���� ����������� ������� �� ������ (.)
						continue;   //������� ��
					else
					{
						if(isdigit(temp[i]) != 0) //�� ���� ������� ����� ��� 0 �� ��� 9 ���� � flag �� ���������� true
							flag = flag * 1;//bitwise and (����� and bit ���� bit)
						else					//������ �� ����� false
							flag = flag * 0;//bitwise and (����� and bit ���� bit)
					}
				}
			}
		}
		
		if(flag==0) //�� � flag ����� false, ���� �� ������� �� ���� ������
		{
			printf("\n\n��� ������ ������! \a\n�������� ����������� ����!\n\n");
			system("pause");
			system("cls");
		}
	}while(flag==0); //��� � flag ��������� false �� ��������� �� ������ �� ���� ������
	
	return atof(temp);//����� ���� ��� �� while ������� �� ���� ����� �������� �� ��� �� string, 
					  //����� ������������ �� string �� ������
}

int main()
{
	system("chcp 1253 > nul");

	int temp1;
	float temp2;
	
	temp1 = intAfterCheck("���� ���� �������: ");
	printf("� �������� ������� ��� ������ ����� � %d.\n\n", temp1);
	
	temp2 = floatAfterCheck("���� ���� ����������� ������: ");
	printf("� ������� ��� ������ ����� � %.2f.\n\n", temp2);
	
	system("pause");
	return 0;
}
