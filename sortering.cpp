// David Marzban
// 2021-12-10
// DT028G
// Laboration 3




#include<iostream>
#include<fstream>
#include<iomanip>
#include <string>
#include "sortering.h"
using namespace std;


int soterat(string fill)
{

bool status=true; // sant eller falskt värde. spara två värden sant (1) eller falskt (0)
int p1=0,tal=0;
   
    
    ifstream myfile(fill);
    
    
    
  myfile>>p1; // input ett värde från my file till. gör som Cin. assigns value to the variable p1. input.

    while(!myfile.eof() ) /// om inte i slutet av filen, fortsätt att läsa.
        
    {
         

       myfile>>tal;// input ett värde från my file till tal.
        if(tal>=p1) //jämför om talet är större än eller lika med p1 
         {
           p1=tal;  
           status=true;  
          }
        else
        {
            status=false;
            break;
        }
        
    }

    myfile.close();
 
 

    return status; // om det är sannt, de kommer köra merge på den. 
  
}

