#include <iostream>
#include <fstream>
#include <cstring>
#include <unistd.h>
using namespace std;

void createFile(string messege, string fileName, int fileNumber)
{
	string baseFileName = fileName + " " + to_string(fileNumber) + ".bat";
	
	fstream Write;
	Write.open(baseFileName,ios::out);
	Write<<messege;
	Write.close();
	
//	fstream Read;
//	Read.open(baseFileName,ios::in);
//	
//	if(!Read)
//	{
//		cout<<"cannot find the file...";
//		sleep(3);
//		exit(1);
//	}
//	
//	getline(Read, messege);
//	cout<<"The messege inside is: "<<messege<<endl;
}

void theWhileLoop()
{
	int a = 0, b = 2, plus=1;
	
	while(a < b)
	{
		createFile("ipconfig\npause","Hahaha",plus++);
		a++;
	}
}

int main()
{
	system("chcp 1253 > nul");
	system("color E");
	
	theWhileLoop();
		
//	system("pause");
	return 0;
}
