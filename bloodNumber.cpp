/*
    bloodNumber.cpp
    Assigns a numetical value to a sign.

    This file is part of Sbluh.

    Copyright (C) 2013  Dorion Beaudin.
    Refer to COPYING.txt for liscense information.
*/

#include <iostream>
#include "sbluh.h"
#include <algorithm>

int bloodNumber(std::string data)
{
    if(data == "ARIES")
    {
        return 1;
    }
    else if(data == "TAURUS")
    {
        return 2;
    }
    else if(data == "GEMINI")
    {
        return 3;
    }
    else if(data == "CANCER")
    {
        return 4;
    }
    else if(data == "LEO")
    {
        return 5;
    }
    else if(data == "VIRGO")
    {
        return 6;
    }
    else if(data == "LIBRA")
    {
        return 7;
    }
    else if(data == "SCORPIO")
    {
        return 8;
    }
    else if(data == "SAGITTARIUS")
    {
        return 9;
    }
    else if(data == "CAPRICORN")
    {
        return 10;
    }
    else if(data == "AQUARIUS")
    {
        return 11;
    }
    else if(data == "PISCES")
    {
        return 12;
    }
    else
    {
        std::cout << "INVALID SIGN!";
        return 4;
    }
}

