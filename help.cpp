/*
    help.cpp
    A simple help text, called when the user types "help".

    This file is part of Sbluh.

    Copyright (C) 2013  Dorion Beaudin.
    Refer to COPYING.txt for liscense information.
*/

#include <iostream>
#include "sbluh.h"

void help()
{
    std::cout << "Available commands are: help, aspect, bloodCalc, sweepCalc, playerData, displayPlayerData";
    std::cout << std::endl << "Type help:<command> for more information about a command." << std::endl << std::endl;
}
