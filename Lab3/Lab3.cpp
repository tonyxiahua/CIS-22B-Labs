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
#include <cstring>

using namespace std;

bool character(char *);
bool upperca(char *);
bool lowerca(char *);
bool digit(char *);

int main()
{
    bool again=true;
    const int MAX = 20;
    char pwd[MAX];
    cout << "\t\t\t\t\tPassword Verifier"<<endl;
    cout << "1. The password should be at least six characters long. And the maximum size is 20." << endl;
    cout << "2. The password should contain at least one uppercase and at least one lowercase letter." << endl;
    cout << "3. The password should have at least one digit." << endl;
    cout << "*************************************************************" << endl;
    cout << endl;
    do
    {
        cout << "Enter password: " << endl;
        cin.getline(pwd, MAX);
        cout <<"\t\t\t\t\tInput Result"<<endl;
        if (character(pwd)==true)
        {
            if(upperca(pwd)==true)
            {
                if(lowerca(pwd)==true)
                {
                    if(digit(pwd)==true)
                    {
                         again=false;
                    }
                }
            }
        }
    }
    while (again==true);
    {
        cout << "*************************************************************" << endl;
        cout << "\t\t\tCONGRATULATIONS! PASSWORD SETTING! SUCCESS!"<<endl;
        cout << "*************************************************************" << endl;
    }
    system("pause");
    return 0;
}

/**
 Check the box
*/

bool character(char *p)
{
    if (strlen(p) < 20 && strlen(p)>=6)
    {
        return true;
    }
    else
    {
        cout << "Please enter the password BETWEEN 6 to 20 CHARACTERS and DIGITS. " << endl;
        cout << endl;
        return false;
    }
}

bool upperca(char *p)
{
    int counter=0;
    for(int i=0;i<strlen(p);i++)
    {
        if(isupper(p[i]))
        {
            counter++;
        }
    }
    if (counter>0)
        return true;
    else
    {
        cout << "You don't have A UPPERCASE LETTER in your password!"<<endl;
        cout << endl;
        return false;
    }
}


bool lowerca(char *p)
{
    int counter=0;
    for(int i=0;i<strlen(p);i++)
    {
        if(islower(p[i]))
        {
            counter++;
        }
    }
    if (counter>0)
        return true;
    else
    {
        cout << "You don't have A LOWERCASE LETTER in your password!"<<endl;
        cout << endl;
        return false;
    }
}


bool digit(char *p)
{
    int counter=0;
    for(int i=0;i<strlen(p);i++)
    {
        if(isdigit(p[i]))
        {
            counter++;
        }
    }
    if (counter>0)
        return true;
    else
    {
        cout << "You don't have A DIGIT NUMBER in your password!"<<endl;
        cout << endl;
        return false;
    }
}
