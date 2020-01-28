// BalancedNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
std::string balancedNum(unsigned long long int number)
{
    std::string sNum = std::to_string(number);
    std::size_t iLen = sNum.length();
    int iTmp = 0, iRem = 0;
    int iRes1 = 0, iRes2 = 0;
    iLen % 2 == 0 ? iRem = 1 : iRem = 0;
    while (iTmp < (int)(iLen/2-iRem))
        iRes1 += (sNum[iTmp++] - '0');
    iTmp+=iRem+1;
    while (iTmp < iLen)
        iRes2 += (sNum[iTmp++] - '0');

    std::cout << "iRes1: " << iRes1 << std::endl;
    std::cout << "iRes2: " << iRes2 << std::endl;

    
    return "Hello";
}
int main()
{
    balancedNum(713);
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
