/*
    input.cpp
    Handles user input.

    This file is part of Sbluh.

    Copyright (C) 2013  Dorion Beaudin.
    Refer to COPYING.md for license information.
*/

#include <iostream>
#include "sbluh.h"

std::string input()
{
    std::cout << std::endl << std::endl << "==> ";
    std::string inputS;
    std::cin >> inputS;
    return inputS;
}

