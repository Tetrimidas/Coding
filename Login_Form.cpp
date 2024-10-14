#include <iostream>
#include <cstring>
using namespace std;

class Data
{
	private:
		int Id;
		string Username = "123d"; //san default ... tis siggekrimenes tis allazw mesa stis setters
		string Email = "1234d";
		string Password = "12345d";
		

	public:
		void setAll(int,string,string,string);
		void setId(int);
		void setUsername(string);
		void setPassword(string);
		void setEmail(string);
		
		int getId() const;
		string getUsername() const;
		string getPassword() const;
		string getEmail() const;
		void print() const;
};	

	//Set Methods

void Data::setId(int Id)
{
	this-> Id = Id;
}
void Data::setUsername(string Username)
{
	this -> Username = Username;
}
void Data::setEmail(string Email)
{
	this -> Email = Email;
}
void Data::setPassword(string Password)
{
	this -> Password = Password;
}


	//Get Methods

int Data::getId() const
{
	return Id;
}
string Data::getUsername() const
{
	return Username;
}
string Data::getEmail() const
{
	return Email;
}
string Data::getPassword() const
{
	return Password;
}


	//Print Method
void Data::print() const
{
	string user, pass, email;

	cout<<"\n\n\n\tLOGIN";
	cout<<"\n\nEnter Your Username: ";
	cin >> user;
	cout<<"\nEnter Your Email: ";
	cin >> email;
	cout<<"\nEnter Your Password: ";
	cin >> pass;
	
	if (user==getUsername() && email==getEmail() && pass==getPassword())
	{
		cout<<"\n\tHello and Welcome\n\n\n"<<endl<<endl;
	}
	else
	{
		//system("cls");
		cout<<"\n\n\tIncorrect Username , Email or Password!"<<endl<<endl;
	}
	
}

int main()
{
	system("chcp 1253>nul");
	system("color E ");
	
	Data login;
	string name, mail, passwordd;
	
	cout<<"\tRegister"<<endl<<endl;
	cout<<"Desired Username: ";
	cin>>name;
	login.setUsername(name);
	cout<<"\nDesired Email-Address: ";
	cin>>mail;
	login.setEmail(mail);
	cout<<"\nDesired Password: ";
	cin>>passwordd;
	login.setPassword(passwordd);
	
//	login.setUsername("Dash123");
//	login.setEmail("Dash1234");
//	login.setPassword("Dash12345");

	login.print();
	
	system("pause");
	return 0;
}
