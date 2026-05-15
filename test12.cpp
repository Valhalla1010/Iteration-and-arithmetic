// David Marzban
// 2021-11-22
// DTO28G
// Laboration 1


#include <iostream>
#include <string>
#include <sstream>

using namespace std;
int main()
{
    string tal1; // Det inmatade talet av typer string
    int max=0, min=0, antal=0, sum=0 ; 
    long tal;
    double medelvarde; // med=medelvärde

    cout<< " Skriv här! " <<endl;
    while (cin>>tal) // Loopen körs tills CTRL+D trycks
    {
        
    
        if(antal == 0) // Denna if sats garanterar att min- ocg max-värde blir rätt ifall det matas in endast 1 heltal
        {
        sum = tal;
        max = tal;
        min = tal;
        }
        else
        {
        sum = sum + tal;
        }
        antal++;

        if(max<tal) 
        {
            max = tal;
        }   
        if(min>tal)
        {
            min = tal;
        }
    }

    cout << " Max: " << max <<'\n' << " Min: " << min << '\n' << " Antal siffror: " << antal << '\n' 
    << " Summan: " << sum << '\n' << " Medelvärde: "<< (double)sum/(double)antal << endl;    

  return 0;
  
}