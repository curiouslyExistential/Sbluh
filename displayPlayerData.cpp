/*
    displayPlayerData.cpp
    Displays the current player's data, as per the information stored in the save file.

    This file is part of Sbluh.

    Copyright (C) 2013  Dorion Beaudin.
    Refer to COPYING.txt for liscense information.
*/

#include "sbluh.h"
#include <iostream>

extern std::string VersionNumber;
extern std::string Handle;
extern std::string playerBlood;
extern int playerClass;
extern int playerAspect;
extern std::string ClientUUID;
extern std::string ClientUUID64;

void displayPlayerData()
{
    using namespace std;
    cout << endl << "Your version is: " << VersionNumber << endl;
    cout << "Your handle is: " << Handle << endl;
    cout << "Your blood colour is: " << playerBlood << endl;
    cout << "Your title is: " << sbluhClass(playerClass) << " of " << sbluhAspect(playerAspect) << endl;
    cout << "Your ClientUUID (Decoded) is: " << ClientUUID << endl;
    cout << "Your ClientUUID (Base64 Encoded) is: " << ClientUUID64 << endl;
}
