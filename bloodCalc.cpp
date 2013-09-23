#include <iostream>
#include "sbluh.h"
#include <algorithm>

int bloodCalc(std::string sign)
{
    int x = 0;

    std::string data = sign;
    transform(data.begin(), data.end(), data.begin(), ::toupper);

    if(data == "ARIES")
    {
        x = x + 1;
        return x;
    }
    else if(data == "TAURUS")
    {
        x = x + 2;
        return x;
    }
    else if(data == "GEMINI")
    {
        x = x + 3;
        return x;
    }
    else if(data == "CANCER")
    {
        x = x + 4;
        return x;
    }
    else if(data == "LEO")
    {
        x = x + 5;
        return x;
    }
    else if(data == "VIRGO")
    {
        x = x + 6;
        return x;
    }
    else if(data == "LIBRA")
    {
        x = x + 7;
        return x;
    }
    else if(data == "SCORPIO")
    {
        x = x + 8;
        return x;
    }
    else if(data == "SAGITTARIUS")
    {
        x = x + 9;
        return x;
    }
    else if(data == "CAPRICORN")
    {
        x = x + 10;
        return x;
    }
    else if(data == "AQUARIUS")
    {
        x = x + 11;
        return x;
    }
    else if(data == "PISCES")
    {
        x = x + 12;
        return x;
    }
    else
    {
        return 4;
    }
}

std::string sbluhBlood(std::string sign, std::string sign2)
{
    int data = bloodCalc(sign) + bloodCalc(sign2);

    if(data == 2 || data == 3)
    {
        return "Burgundy";
    }
    else if(data == 4 || data == 5)
    {
        return "Brown";
    }
    else if(data == 6 || data == 7)
    {
        return "Yellow";
    }
    else if(data == 8)
    {
        return "Mutant";
    }
    else if(data == 9)
    {
        return "Lime";
    }
    else if(data == 10 || data == 11 || data == 13)
    {
        return "Green";
    }
    else if(data == 12)
    {
        return "Jade";
    }
    else if(data == 14 || data == 15)
    {
        return "Teal";
    }
    else if(data == 16 || data == 17)
    {
        return "Cerulean";
    }
    else if(data == 18 || data == 19)
    {
        return "Indigo";
    }
    else if(data == 20 || data == 21)
    {
        return "Purple";
    }
    else if(data == 22 || data == 23)
    {
        return "Violet";
    }
    else if(data == 24)
    {
        return "Fuchsia";
    }
    else
    {
        return "CALC ERROR";
    }
}

