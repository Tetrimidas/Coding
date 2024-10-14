#include <iostream>
#include <cstring>
#include <time.h>
#include <unistd.h>
using namespace std;

void jackPotCheck(int One, int Two, int Three)
{
    if (One == Two && Two == Three)
    {
        cout << "\n\tJack Pot " << endl << endl;
        throw "\tExit of While loop\n\n";
		system("Pause");
    }
}

void numbers(int counter,int One, int Two, int Three)
{
	cout<<endl<<"\t"<<"("<<counter<<")Your numbers are the following: "<<One<<" "<<Two<<" "<<Three<<endl<<endl;
	
	int Max=0, Min=One, Middle=0;
	
			//Max
	if(Max<One)
	{
		Max = One;
	}
	if(Max<Two)
	{
		Max = Two;
	}
	if(Max<Three)
	{
		Max = Three;
	}
			//Min
	if(Min>One)
	{
		Min = One;
	}
	if(Min>Two)
	{
		Min = Two;
	}
	if(Min>Three)
	{
		Min = Three;
	}
	
			//Middle
	if(One != Max && One != Min)
	{
		Middle = One;
	}
	else if(Two != Max && Two != Min)
	{
		Middle = Two;
	}
	else if(Three != Max && Three != Min)
	{
		Middle = Three;
	}
	else
	{
		Middle = One;
	}
	
	cout<<"The Highest Number is "<<Max<<endl;
	cout<<"The Middle Number is "<<Middle<<endl;
	cout<<"The Lower Number is "<<Min<<endl;
	
	jackPotCheck(One,Two,Three);
	
}

int main()
{
	system("CHCP 1253>nul");
	system("Color E");
	
	int random1, random2, random3;
	int Alive = 1;
	int counter = 1;
	
	srand(time(0));
	
	try
	{
		while(Alive == 1)
		{
			random1 = 1+ rand()%10;
			random2 = 1+ rand()%10;
			random3 = 1+ rand()%10;
		
			numbers(counter++,random1,random2,random3);
		}
	}
	catch(const char* msg)
	{
		cout<<msg<<endl;
	}

	system("pause");
	return 0;
}
