#include <iostream>
#include "sbluh.h"
#include <algorithm>

extern std::string playerBlood;

void bloodMain(bool x)
{
    using namespace std;
    cout << "Valid signs are: Aries, Taurus, Gemini, Cancer, Leo, Virgo, Libra, Scorpio," << endl << " Sagittarius, Capricorn, Aquarius, and Pisces.";
    cout << endl << endl;
    cout << "Enter Sun Sign: " << endl << endl;
    string sign = input();
    cout << endl << endl;

    cout << "Enter Moon Sign: " << endl << endl;
    string sign2 = input();
    cout << endl << endl;

    if(x == false)
    {
        cout << "User's blood colour is " << sbluhBlood(sign, sign2) << "." << endl << endl;
    }
    else if(x == true)
    {
        playerBlood = sbluhBlood(sign, sign2);
    }
}

