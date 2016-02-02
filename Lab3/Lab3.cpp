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
#include <>
using namespace std;
bool test(char *);

int main()
{
  const int MAX=10;
  char pwd[MAX]={'\0'};

  do
  {
   cout << "Enter password: " <<endl;
   cin.getline(pwd, MAX);
   cout << "You entered " << pwd <<endl;
  }

  while(!test(pwd));

  system("pause");
  return 0;
}

bool test(char *p)
{
 if (strlen(p) < 10)
 {
  return false;
 }
 else
  return ture;
}
