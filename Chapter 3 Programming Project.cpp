// Chapter 3 Programming Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <random>

int main()
{
    
    std::random_device first;
    std::uniform_real_distribution<int> randomReal(0.0, 500);







    double Ncookies;

    std::cout << "How many cookies would you like to make?";
    std::cin >> Ncookies;

    double ratio = Ncookies / 48;

    double sugar = 1.5 * ratio;
    double flour = ratio;
    double butter = 2.75 * ratio;

    std::cout << "To bake " << Ncookies << " cookies, you need " << sugar << " cups of sugar, " << flour << " cups of flour, and " << butter << " cups of buter. \n";






}


