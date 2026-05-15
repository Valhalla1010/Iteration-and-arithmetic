// David Marzban
// 2021-12-10
// DT028G
// Laboration 3


#include<iostream>
#include <string>
#include<iomanip>
#include<fstream>
#include "sortering.h"

using namespace std;

void merge(string file1, string file2, string fileout)
{
    ifstream myfile(file1); //läsa från filer
    ifstream myfile2(file2); //läsa från filer
    ofstream outfile(fileout); //skriva på filer
    ;

    int x,y;
    myfile>>x; // assigns value to the variable x. input ett nytt värde från my file till.    
    myfile2>>y;  //assigns value to the variable y


    while(!myfile.eof() && !myfile2.eof()) // om inte i slutet av filen, fortsätt att läsa. (&&)om två variabler är sanna när båda variabler är sanna
    {
        if(x<y) // om det är mindre
        {
            outfile<<x<<" "; //om det är mindre skriva ut x
            myfile>>x; //input ett nytt värde från my file till. gör som Cin. assigns value to the variable x
        }
        else 
        {
            outfile<<y<<" "; //men om det är större skriva ut y
            myfile2>>y; //ligger ett värde från my file till. gör som Cin. assigns value to the variable x
        }

    } // den här loppen jämför de rester av värdena som finns kvar i någon av filerna
    while(!myfile.eof()) 
    {
        outfile<<x<<" "; 
        myfile>>x;   //ligger ett värde från my file till. gör som Cin. assigns value to the variable x
    }
    while(!myfile2.eof()) // om inte i slutet av filen, fortsätt att läsa 
    {
        outfile<<y<<" "; //
        myfile2>>y;    //ligger ett värde från my file till. gör som Cin. assigns value to the variable x
    }



}