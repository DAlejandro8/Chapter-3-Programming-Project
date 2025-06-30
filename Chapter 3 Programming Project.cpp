// Chapter 3 Programming Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    
    double Ncookies;

    std::cout << "How many cookies would you like to make?";
    std::cin >> Ncookies;

    double ratio = Ncookies / 48;//the recipe is for 48 cookies

    double sugar = 1.5 * ratio;
    double flour = ratio;//it's a one to one ratio so I just made it equal
    double butter = 2.75 * ratio;

   std:: cout << "To bake " << Ncookies << " cookies, you need " << sugar << " cups of sugar, " << flour << " cups of flour, and " << butter << " cups of buter. \n";
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
    
}

