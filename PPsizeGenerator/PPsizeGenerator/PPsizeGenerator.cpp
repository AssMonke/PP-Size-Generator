// PPsizeGenerator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <time.h>

int main()
{
gen:
    std::string PP = "8=";
    std::string shaft = "=";
    std::string tip = "D";

    srand(time(NULL));
    int ranLength = rand() % 12;

    for (int i = 0; i < ranLength; i++) 
    {
        PP.append(shaft);
    }

    PP.append(tip);

    std::cout << PP << std::endl;
    std::cout << " " << std::endl;
    std::cout << "Press enter to generate another PP." << std::endl;
    std::cin.get();

    goto gen;

    return 0;
}