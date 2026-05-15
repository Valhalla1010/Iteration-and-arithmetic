// David Marzban
// 2021-12-10
// DT028G
// Laboration 3





#include<iostream>
#include<fstream>
#include<iomanip>
#include <string>
#include "mergeSort.h"
#include "sortering.h"
using namespace std;

void slutSort (string file , string file2 , string file3, string fileout)
{


bool D , M , S , newfile ; // antingen sant eller falsk
    
D=soterat(file); 
   
M=soterat(file2);

S=soterat(file3);

if (D==true && M==true) // om två variabler är sanna när båda variabler är sanna.
   {
   
  merge(file, file2, fileout); // jämför och sorterar fösrsta filen med andra filen.
  newfile=soterat(fileout); // resultat

  cout<<file<<" and "<<file2<<" is sorted "<<endl; //skriva ut D och M

   }

   if(M==true && S==true) //om två variabler är sanna när båda variabler är sanna
   {
   
  merge(file2, file3, fileout); //jämför och sortera andra filen med tredje
  newfile=soterat(fileout); 

   cout<<file2<<" and "<<file3<<" is sorted "<<endl; //skriva ut M och S

   }

   if(D==true && S==true) // om två variabler är sanna när båda variabler är sanna
   {
   
  merge(file,file3,fileout); // jämför och sortera första filen med tredje
  newfile=soterat(fileout);

cout<<file<<" and "<<file3<<" is sorted "<<endl; //skriva ut D och S
  
   }

   
    if(newfile==true) //om newfile är sant 
    {
        cout<<" Den nya file är sorterad. "<<endl; // skriva ut
    }
    else  // annars om newfile är inte sant
    {
        cout<<"Den nya filen är inte skapad. "<<endl; // skriva ut
    }
}
  
   
    