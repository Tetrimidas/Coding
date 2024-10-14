#include <iostream>
#include <cstring>
using namespace std;

void posiblePasswordFinder(string &password, string &uppers, string &lowers, string &digits, int length, int num=0)
{
    if (num == length)
    {
        cout << password << endl;
        return;
    }

    for (char c : uppers)
    {
        password[num] = c;
        posiblePasswordFinder(password, uppers, lowers, digits, length, num + 1);
    }

    for (char c : lowers)
    {
        password[num] = c;
        posiblePasswordFinder(password, uppers, lowers, digits, length, num + 1);
    }

    for (char c : digits)
    {
        password[num] = c;
        posiblePasswordFinder(password, uppers, lowers, digits, length, num + 1);
    }
    
}

void findPassword(int length)
{
    string uppers = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string lowers = "abcdefghijklmnopqrstuvwxyz";
    string digits = "0123456789";
    string password(length, '\0');
    posiblePasswordFinder(password, uppers, lowers, digits, length, 0);
}

int main()
{
    system("CHCP 1253 > nul");
    system("Color E");
    
	int length;
    
	cout << "Enter the length of the passwords: ";
    cin >> length;

    findPassword(length);
    
	system("Pause");
    return 0;
}

