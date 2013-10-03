/*
    sweeps.cpp
    Sets up variables for the actual calculations, and which mode it should run in.

    This file is part of Sbluh.

    Copyright (C) 2013  Dorion Beaudin.
    Refer to COPYING.md for license information.
*/

#include <iostream>
#include "sbluh.h"

void sweepCalc()
{
start:
    //This value value determines what method is used to gain the answer.

    //This section selects which way to convert the years and sweeps. It then sends that data off to req()
    using namespace std;
    cout << "Select Mode" << std::endl << std::endl << "Sweeps to Years: 0" << std::endl << "Years to Sweeps: 1" << std::endl << std::endl;
    string sweeps = input();
    cout << endl;

    if(sweeps == "0")
    {
        req(sweeps);
    }
    else if(sweeps == "1")
    {
        req(sweeps);
    }
    else
    {
        cout << endl << "You have entered an invalid option";
        cout << endl << endl;
        goto start;
    }
    std::cout << std::endl;
}

