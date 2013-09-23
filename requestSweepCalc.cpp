/*
    requestSweepCalc.cpp
    Makes sure that the user is in fact sending a 1 or a 0, switches sweeps.cpp behavior as neccesary.

    This file is part of Sbluh.

    Copyright (C) 2013  Dorion Beaudin.
    Refer to COPYING.txt for liscense information.
*/

#include <iostream>
#include "sbluh.h"

int req(std::string stuff)
{
    if(stuff == "1")
    {
        bool sweeps = 1;
        // If the user has selected "Years to Sweeps", this is run. It requests the number of years.
        // If it's set to "Sweeps to Years", then the question is altered accordingly.
        // The convert() function is then called.
        // The convert() function does most of the actual converting, as per it's namesake.
        using namespace std;
        cout << "Enter Years" << endl << endl;
        string value = input();
        cout << endl << endl;
        cout << value << " years = " << conv(checkInput(value), sweeps) << " sweeps." << endl;
    }
    else if(stuff == "0")
    {
        bool sweeps = 0;
        using namespace std;
        cout << "Enter Sweeps" << endl << endl;
        string value = input();
        cout << endl << endl;
        cout << value << " sweeps = " << conv(checkInput(value), sweeps) << " years." << endl;
    }
    else
    {
        using namespace std;
        cout << "You have entered an invalid number." << endl << endl;
        sweepCalc();
    }
    return 0;
}

