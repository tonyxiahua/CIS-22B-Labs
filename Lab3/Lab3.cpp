/************************************************************
CIS 22B - section 04Y
Lab3:
Author: HUA XIA
Date: Feb 2nd 2016
*************************************************************/

#include <iostream>
#include <string>
#include <stdlib.h>
#include <cctype>
//#include <>
using namespace std;
bool character(char *);

int main()
{
	const int MAX = 20;
	char pwd[MAX]; //= { '\0' };
	do
	{
		cout << "Enter password: " << endl;
		cin.getline(pwd, MAX);
		cout << "You entered " << pwd << endl;
	}
	while (!character(pwd) && strlen(pwd) > 20 &&!);
	system("pause");
	return 0;
}

bool character(char *p)
{
	if (strlen(p) < 20 && strlen(p)>6)
	{
		return false;
	}
	else
	{
		cout << endl;
		cout << endl;
		cout << "You don't have enough numebr of digits or characters." << endl;
		cout << "Please enter the password between 6 to 20 characters and digits. " << endl;
		cout << endl;
		cout << endl;
		return true;
	}
}

//bool upper (isupper)
