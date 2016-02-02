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
bool test(char *);

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
	while (!test(pwd) && strlen(pwd) > 20);
	cout << "You don't have enough numebr of digits or characters" << endl;
	system("pause");
	return 0;
}

bool test(char *p)
{
	if (strlen(p) < 20)
	{
		return false;
	}
	else
		return true;
}
