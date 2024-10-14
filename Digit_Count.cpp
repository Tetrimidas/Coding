#include <iostream>
#include <cstring>
using namespace std;

void getDigit(int &number)
{
	int numb;
	int digit = 0;
	
	cout<<"Give me a Number and i will calculate the Digits: ";
	cin>>number;
	numb = number;
	
	
	while(numb!=0)
	{
		numb= numb/10;
		digit++;
	}
	
	cout<<"The Digits of "<<number<<" is "<<digit<<endl;
}

int main()
{
	system("chcp 1253>nul");
	system("color E");
	
	int num;
	
	getDigit(num);
	
	system("Pause");
	return 0;
}


