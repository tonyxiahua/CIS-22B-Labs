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
    bool again=true;                                    //This is the varibale which I use to jump out the do while loop
    const int MAX = 20;
    char pwd[MAX];
    
    /************************************************************
                        Information Box
     *************************************************************/
    cout << "\t\t\t\t\tPassword Verifier"<<endl;
    cout << "1. The password should be at least six characters long. And the maximum size is 20." << endl;
    cout << "2. The password should contain at least one uppercase and at least one lowercase letter." << endl;
    cout << "3. The password should have at least one digit." << endl;
    cout << "*************************************************************" << endl;
    cout << endl;
    /************************************************************
                        Do-while Loop
     *************************************************************/
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
                         again=false;                   // Check if everything is correct then jump out the loop
                    }
                }
            }
        }
    }
    while (again==true);                                //Show the success information to make user know the setting password is correct
    {
        cout << "*************************************************************" << endl;
        cout << "\t\t\tCONGRATULATIONS! PASSWORD SETTING! SUCCESS!"<<endl;
        cout << "*************************************************************" << endl;
    }
    
    system("pause");
    return 0;
}

/************************************************************
        Check the box has enough character or digits
 *************************************************************/
bool character(char *p)
{
    if (strlen(p)>=6 && strlen(p) <= 20)                 // Make sure is greater than 6 elements and less than 20 elements
    {
        return true;
    }
    else
    {
        cout << "Please enter the password BETWEEN 6 to 20 CHARACTERS and DIGITS. " << endl;
        cout << endl;                                   //Show the error information
        return false;
    }
}

/************************************************************
            Check the box has least one uppercase
 *************************************************************/
bool upperca(char *p)
{
    int counter=0;
    for(int i=0;i<strlen(p);i++)
    {
        if(isupper(p[i]))
        {
            counter++;                                  //Counter use to calculate how many times uppercase showed up
        }
    }
    if (counter>0)                                      //If the counter is 0 that meaings they don't have uppercase letter
        return true;
    else
    {
        cout << "You don't have A UPPERCASE LETTER in your password!"<<endl;
        cout << endl;                                   //Show the error information
        return false;
    }
}

/************************************************************
            Check the box has least one lowercase
 *************************************************************/
bool lowerca(char *p)
{
    int counter=0;
    for(int i=0;i<strlen(p);i++)
    {
        if(islower(p[i]))
        {
            counter++;                                  //Counter use to calculate how many times lowercase showed up
        }
    }
    if (counter>0)                                      //If the counter is 0 that meaings they don't have lowercase letter
        return true;
    else
    {
        cout << "You don't have A LOWERCASE LETTER in your password!"<<endl;
        cout << endl;                                   //Show the error information
        return false;
    }
}

/************************************************************
            Check the box has least one digit
 *************************************************************/
bool digit(char *p)
{
    int counter=0;
    for(int i=0;i<strlen(p);i++)
    {
        if(isdigit(p[i]))
        {
            counter++;                                  //Counter use to calculate how many times digit showed up
        }
    }
    if (counter>0)                                      //If the counter is 0 that meaings they don't have digit
        return true;
    else
    {
        cout << "You don't have A DIGIT NUMBER in your password!"<<endl;
        cout << endl;                                   //Show the error information
        return false;
    }
}
