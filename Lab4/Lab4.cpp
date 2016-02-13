
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main()
{
    ifstream inputFile;
    string line;
    
    struct Movie
    {
        string title;
        string director;
        string year;
        string duration;
    } m;
    
    inputFile.open("Movie_entries.txt");
    while (getline(inputFile, line))   // reads a line from the file
    {
        cout << line << endl;
        stringstream lineStream(line);   // transforms the line into a stream
        
        // get fields from the string stream; fields are separated by comma
        getline(lineStream, m.title, ',');
        getline(lineStream, m.director, ',');
        getline(lineStream, m.year, ',');
        getline(lineStream, m.duration, ',');
        
        cout << "\tTitle: " << m.title << endl;
        cout << "\tDirector: " << m.director << endl;
        cout << "\tyear: " << m.year << endl;
        cout << "\tduration: " << m.duration << endl << endl;
    }
    inputFile.close();
}

