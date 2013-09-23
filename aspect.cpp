/*
    aspect.cpp
    Takes the user's first and last name, and prints out a Class and an Aspect.

    This file is part of Sbluh

    Copyright (C) 2013  Dorion Beaudin.
    Refer to COPYING.txt for liscense information.
*/

#include <iostream>
#include "sbluh.h"
#include <algorithm>

extern int playerClass;
extern int playerAspect;

void aspectMain(bool x)
{
    using namespace std;

    cout << "Enter First name: " << endl << endl;
    string firstName = input();
    cout << endl << endl;

    cout << "Enter Last name: " << endl << endl;
    string lastName = input();
    cout << endl << endl;

    if(x == false)
    {
    cout << firstName << " " << lastName << "'s title is " << sbluhClass(calc(firstName)) << " of " << sbluhAspect(calc(lastName)) << "." << endl << endl;
    }
    else if(x == true)
    {
    playerClass = calc(firstName);
    playerAspect = calc(lastName);
    }
}
