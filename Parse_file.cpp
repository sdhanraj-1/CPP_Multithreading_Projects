#include <iostream>
#include <fstream>
#include <stdlib.h>
#include "statistics.h"

void printfile(){
   // ofstream myfile; 
    //myfile.open ("BerkShireHathaway_2020_Letter_To_Shareholders.txt"); 
    std::ifstream myfile;
    myfile.open ("F:/CPP_Multithreading_Repo/CPP_Multithreading_Projects/BerkShireHathaway_2020_Letter_To_Shareholders.txt"); 
    std::string line;

    if (!myfile.is_open())
    {

        std::cout << "File Not Open" << '\n';
    }

    else{
        while ( std::getline (myfile,line) )
        {
        std::cout << line << '\n';
        }
    }

    myfile.close();

}
