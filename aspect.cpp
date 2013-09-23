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
