/*
    aspect.cpp
    Takes the user's first and last name, and prints out a Class and an Aspect.

    This file is part of Sbluh

    Copyright (C) 2013  Dorion Beaudin.
    Refer to COPYING.md for license information.
*/

#include <iostream>
#include "sbluh.h"
#include <algorithm>

extern int playerClass;
extern int playerAspect;

void results(int firstNameConverted, int lastNameConverted, std::string firstName, std::string lastName, bool initialization)
{
    if(initialization == false)
    {
        using namespace std;
        cout << firstName << " " << lastName << "'s title is " << sbluhClass(firstNameConverted) << " of " << sbluhAspect(lastNameConverted) << "." << endl << endl;
    }
    else if(initialization == true)
    {
        playerClass = firstNameConverted;
        playerAspect = lastNameConverted;
    }
}

typedef std::string::value_type char_t;

char_t up_char( char_t ch )
{
    return std::use_facet< std::ctype< char_t > >( std::locale() ).toupper( ch );
}

std::string toupper( const std::string &src )
{
    std::string result;
    std::transform( src.begin(), src.end(), std::back_inserter( result ), up_char );
    return result;
}

void aspectMain(bool x)
{
    using namespace std;

    cout << "Enter First name: " << endl << endl;
    string firstName = input();
    string firstNameUpper = toupper(firstName);
    cout << endl << endl;

    cout << "Enter Last name: " << endl << endl;
    string lastName = input();
    string lastNameUpper = toupper(lastName);
    cout << endl << endl;


    if(firstNameUpper == "JOHN" && lastNameUpper == "EGBERT")
    {
        int canonClass = 20;
        int canonAspect = 40;
        results(canonClass, canonAspect, firstName, lastName, x);
    }
    else if(firstNameUpper == "DAVE"&& lastNameUpper == "STRIDER")
    {
        int canonClass = 8;
        int canonAspect = 48;
        results(canonClass, canonAspect, firstName, lastName,  x);
    }
    else if(firstNameUpper == "ROSE" && lastNameUpper == "LALONDE")
    {
        int canonClass = 22;
        int canonAspect = 8;
        results(canonClass, canonAspect, firstName, lastName,  x);
    }
    else if(firstNameUpper == "JADE" && lastNameUpper == "HARLEY")
    {
        int canonClass = 6;
        int canonAspect = 16;
        results(canonClass, canonAspect, firstName, lastName,  x);
    }
    else
    {
        int firstNameConverted = calc(firstName);
        int lastNameConverted = calc(lastName);
        results(firstNameConverted, lastNameConverted, firstName, lastName,  x);
    }
}
