// Stop gninnipS My sdroW!.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <sstream>

std::string spinWords(const std::string& str)
{
    std::vector<std::string> sString;
    std::string buf, sRes;
    std::stringstream ss(str);
    while (ss >> buf)
    {
        sString.push_back(buf);
    }
    buf.clear();
    for (auto word : sString)
    {
        if (word.length() >= 5)
        {
            int i = word.length() - 1;
            while (i>= 0)
                buf+= word.at(i--);
            sRes += buf;
            buf.clear();
        }
        else
            sRes += word;
        sRes += " ";
        std::cout << sRes << std::endl;
    }
    const auto strBegin = sRes.find_first_not_of(" \t");
    if (strBegin == std::string::npos)
        return ""; // no content
    const auto strEnd = sRes.find_last_not_of(" \t");
    const auto strRange = strEnd - strBegin + 1;

    return sRes.substr(strBegin, strRange);
    return sRes;
} 
std::string spinWords2(const std::string& str)
{
    std::string buf, sRes;
    std::stringstream ss(str);
    while (ss >> buf)
    {
        if (buf.length() >= 5)
            std::reverse(buf.begin(), buf.end());
        sRes += buf;
        sRes += ' ';
    }
    sRes.pop_back();
    return sRes;

}
int main()
{
    std::string str = "Welcome   ";
    std::string sRes = spinWords2(str);
    std::cout << sRes <<" Len:"<<str.length()<< std::endl;
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
