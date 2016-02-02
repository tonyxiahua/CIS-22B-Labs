/************************************************************
 CIS 22B - section 04Y
 Lab2:
 Author: HUA XIA
 Date: Jan 26th 2016
 *************************************************************/

#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>


using namespace std;

double *readData(string &filename,int &numberOfScores,int &i);//Function to read Data

double calculateAverage(double*,int &);
double calculateMedian(double*,int &);
double calculateMode(double*,int &);

void printScore(int , double*,double,double,double);//
/************************************************************/
//This is the quick sort Function
int compar(const void* a, const void* b)
{
    return (*(double *)a - *(double *)b);
}

int main()
{
    string filename;
    int numberOfScores;
    double *grade;
    int i = 0;
    
    cout << "Please enter the file name: " << endl;
    cin >> filename;
    
    grade=readData(filename,numberOfScores,i);
    /************************************************************/
    //                  Quick Sort The Grade
    
    qsort(grade,numberOfScores, sizeof(double), compar);
    /************************************************************/
    //                  Calculate The Grade
    
    double Average ;
    Average = calculateAverage(grade,numberOfScores);
    cout << Average <<endl;
    
    double Median ;
    Median = calculateMedian(grade,numberOfScores);
    cout << Median <<endl;
    
    double Mode ;
    Mode = calculateMode(grade,numberOfScores);
    cout << Mode << endl;
    /************************************************************/
    //                  Print the Result
    printScore(numberOfScores, (double *)grade,Average,Median,Mode);
    
    /************************************************************/
    //                  Clean up and enjoy weekend
    system("pause");
    delete [] grade;
    return 0;
}

/***********************************************************
 This Function is use to get the data from the TXT file
 ************************************************************/
double *readData(string &filename,int &numberOfScores,int &i)
{
    double *scores;
    ifstream input;
    input.open(filename.c_str());
    if (input.fail())
    {
        cout << "File not found." << endl;
        system("pause");
        return 0;
    }
    else
    {
        cout << "File found." << endl;
        cout << "The unsorted scores are :" << endl;
        input >> numberOfScores;
        scores = new double[numberOfScores];
        
        while (i < numberOfScores && input >> scores[i])
        {
            cout << scores[i] << " ";
            i++;
        }
        cout << endl;
        input.close();
    }
    return scores;
}
/***********************************************************
 This Function is use to calculate the Average of the grade
 ************************************************************/
double calculateAverage(double*scores,int &numberOfScores)
{
    double sum;
    int counter;
    for(counter=0;counter<numberOfScores;counter++)
    {
        sum+=scores[counter];
    }
    sum=sum/counter;
    return sum;
}
/***********************************************************
 This Function is use to calculate the Median of the grade
 ************************************************************/
double calculateMedian(double*scores,int &numberOfScores)
{
    int temp = 0;
    if(numberOfScores%2!=0)
    {
        temp = ((numberOfScores+1)/2)-1;
        return scores[temp];
    }
    else
    {
        temp = (scores[(numberOfScores/2)-1] + scores[numberOfScores/2])/2;
        return temp;
    }
}
/***********************************************************
 This Function is use to calculate the Mode of the grade
 ************************************************************/
double calculateMode(double*scores,int &numberOfScores)
{
    int *newarr = new int[numberOfScores];
    for (int i = 0; i < numberOfScores; i++)
    {
        newarr[i] = 0;//make a new array to contain the score
        int j = 0;
        while ((j < i) && (scores[i] != scores[j]))
        {
            if (scores[i] != scores[j])
            {
                j++; //check the most
            }
        }
        (newarr[j])++;//at the end make array add
    }
    int Repeat = 0;
    for (int i = 1; i < numberOfScores; i++)
    {
        if (newarr[i] > newarr[Repeat])
        {
            Repeat = i;
        }
    }
    return scores[Repeat];
}

/***********************************************************
 This Function is use to print the scores of the array
 by using the pointer
 ************************************************************/
void printScore(int numberOfScores, double*scores,double Average,double Median,double Mode)
{
    cout <<"************************************************************"<<endl;
    cout <<"\t\tOutput"<<endl;
    cout << "This is the sorted scores :" <<endl;
    for(int b=0;b<numberOfScores;b++)
    {
        cout << scores[b] << " ";
    }
    cout <<endl;
    cout.precision(6);
    cout <<"Average Score: " <<Average <<endl;
    cout <<"Median Score: "<< Median << endl;
    cout <<"Mode: " << Mode <<endl;
}
