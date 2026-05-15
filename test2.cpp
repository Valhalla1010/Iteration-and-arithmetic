#include <iostream>
#include <fstream>


int main()
{
    
    std::ifstream file("values.txt"); // Open file

    if(!file){
        std::cout << "could not open file" << std::endl;
        return 1;
    }

    long tal;
    long sum = 0;
    long max = 0;
    long min = 0;
    long antal = 0;

    while( file >> tal ){
        if(antal == 0){
            max = tal;
            min = tal;
            sum = tal;
        }
        else{
            sum += tal;
            if(tal > max){
                max = tal;
            }
            if (tal < min){
                min = tal;
            }
            
        }
        antal++;
    }

    std::cout << "Max: " << max << std::endl;
    std::cout << "Min: " << min << std::endl;
    std::cout << "Antal siffror: " << antal << std::endl;
    std::cout << "Summan: " << sum << std::endl;
    std::cout << "MedelVärde: " << (double)sum / antal << std::endl;

    file.close();
    return 0;

}