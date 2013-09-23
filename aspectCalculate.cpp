/*
    aspectCalculate.cpp
    Makes sure the user is typing using valid characters, and extracts the first and last
    letter of the first and last name for later use in determining a Class or Aspect.

    This file is part of Sbluh.

    Copyright (C) 2013  Dorion Beaudin.
    Refer to COPYING.txt for liscense information.
*/


#include <iostream>
#include "sbluh.h"
#include <algorithm>

int listAspect(char input)
{
    if(input == 'A')
    {
        return 1;
    }
    else if(input == 'B')
    {
        return 2;
    }
    else if(input == 'C')
    {
        return 3;
    }
    else if(input == 'D')
    {
        return 4;
    }
    else if(input == 'E')
    {
        return 5;
    }
    else if(input == 'F')
    {
        return 6;
    }
    else if(input == 'G')
    {
        return 7;
    }
    else if(input == 'H')
    {
        return 8;
    }
    else if(input == 'I')
    {
        return 9;
    }
    else if(input == 'J')
    {
        return 10;
    }
    else if(input == 'K')
    {
        return 11;
    }
    else if(input == 'L')
    {
        return 12;
    }
    else if(input == 'M')
    {
        return 13;
    }
    else if(input == 'N')
    {
        return 14;
    }
    else if(input == 'O')
    {
        return 15;
    }
    else if(input == 'P')
    {
        return 16;
    }
    else if(input == 'Q')
    {
        return 17;
    }
    else if(input == 'R')
    {
        return 18;
    }
    else if(input == 'S')
    {
        return 19;
    }
    else if(input == 'T')
    {
        return 20;
    }
    else if(input == 'U')
    {
        return 21;
    }
    else if(input == 'V')
    {
        return 22;
    }
    else if(input == 'W')
    {
        return 23;
    }
    else if(input == 'X')
    {
        return 24;
    }
    else if(input == 'Y')
    {
        return 25;
    }
    else if(input == 'Z')
    {
        return 26;
    }
    else
    {
        return 0;
    }
}

template <typename C>
typename C::reference back(C& container)
{
    return container.back();
}

template <typename C>
typename C::const_reference back(const C& container)
{
    return container.back();
}

char& back(std::string& str)
{
    return *(str.end() - 1);
}

char back(const std::string& str)
{
    return *(str.end() - 1);
}

int calc(std::string in)
{
    using namespace std;
    string data = in;
    transform(data.begin(), data.end(), data.begin(), ::toupper);
    string inputUpper = data;
    char beginConvert = inputUpper.at(0);

    char endConvert = back(inputUpper);

    int finalStuff = listAspect(beginConvert) + listAspect(endConvert);

    return finalStuff;
}

