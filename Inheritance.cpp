#include <iostream>
using namespace std;

class Grandfather
{
	private:
		string surname;
	public:
		Grandfather(string surn)
		{
			surname = surn;
		}
		
		void print()
		{
			cout<<"To eponimo tou, pou to pire apo ton pappou tou, einai: "<<surname<<endl;
		}
};

class Father : public Grandfather
{
	private:
		string name;
	
	public:
		Father(string surn, string n) : Grandfather(surn)
		{
			name = n;
		}
		void print()
		{
			Grandfather::print();
			cout<<"To patronimo tou, pou to pire apo ton patera tou einai : "<<name<<"\n\n";
		}
};

class SpoudastisTep
{
	private:
		string pvts;
	public:
		SpoudastisTep(string iek)
		{
			pvts = iek;
		}
		
	void print()
	{
		cout<<" spoudazei sto IEK: "<<pvts<<endl;
	}
};

class Son: public Father, public SpoudastisTep
{
	private:
		int age;
		string onoma;
	public:
		Son(string surn, string n , string iek, string onm, int ilikia) :Father(surn,n),SpoudastisTep(iek)
		{
			onoma = onm;
			age = ilikia;
		}
		void print()
		{
			cout <<"O "<<onoma;
			cout<<" me ilikia "<<age;
			SpoudastisTep::print();
			Father::print();
		}
};

int main()
{
	system("Color E");
	Son s1("Pappas", "Ioannou", "IEK_2024", "Nikos", 20);
	s1.print();
	
	system("Pause");
	return 0;
}
