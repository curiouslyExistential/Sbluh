/*
    aspectCalculate.cpp
    Makes sure the user is typing using valid characters, and extracts the first and last
    letter of the first and last name for later use in determining a Class or Aspect.

    This file is part of Sbluh.

    Copyright (C) 2013  Dorion Beaudin.
    Refer to COPYING.md for license information.
*/


#include <iostream>
#include "sbluh.h"
#include <algorithm>

int listAspect(char input)
{
    char a=input-'A';//how far after 'A' is input?
    a++;//add one to that, so that 'A' gives 1 instead of 0
    return (int)a;//make the result an integer, and return it.
    
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

