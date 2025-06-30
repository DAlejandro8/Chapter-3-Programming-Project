// Chapter 3 Programming Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <random>
using namespace std;

int main()
{
    
    std::random_device first;
    std::uniform_int_distribution<int> randomReal(0, 100);
    std::random_device second;

    int one = randomReal(first);//first generated number
    int two = randomReal(second);//second generated number
    int total = one + two;//
  
    std::cout << one << "+" << two << std::endl;//question
   


    std::cout<< "Press enter to check your answer.\n";
    




        std::cin.get();



  
    std::cout << one << "+" << two << "=" <<total<<std::endl;//answer to problem and full question



    return 0;
}


