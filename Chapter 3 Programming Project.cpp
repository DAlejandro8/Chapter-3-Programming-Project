// Chapter 3 Programming Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
  



    double prin;

    std::cout << "Choose a savings account balance.";
    std::cin >> prin;


    double rate;

    std::cout << "What is the interest rate?";
    std::cin >> rate;


    double comp;

    std::cout << "Times the interest is compounded during the year?";
    std::cin >> comp;


    double amount = prin * pow(1 + ((rate/100) / comp), comp);


        std::cout << "Interest Rate:                  "<<rate<<"%\n";
        std::cout << "Times Compounded:               " << comp << std::endl;
        std::cout << "Principal:                     $" << prin << std::endl;
        std::cout << "Interest:                      $" << amount-prin << std::endl;
        std::cout << "Amount in Savings:             $" << amount << std::endl;















}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
