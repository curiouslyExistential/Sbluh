/*
    init.cpp
    Does most of the heavy lifting in terms of setting the user up, and creating all the variables,
    as well as reading from the save file and checking if it even exists yet.

    This file is part of Sbluh.

    Copyright (C) 2013  Dorion Beaudin.
    Refer to COPYING.md for license information.
*/

#include <iostream>
#include "sbluh.h"
#include "base64.h"
#include "globalVars.h"
#include <Windows.h>
#include "rude/config.h"
#include <string>
#include <fstream>
#include <stdlib.h>


std::string VersionNumber = "0.1.1";
std::string Handle = "Null";
int playerClass = 0;
int playerAspect = 0;
std::string playerBlood;
std::string ClientUUID = "Null";
std::string ClientUUID64 = "Null";

std::string exePath()
{
    char buffer[MAX_PATH];
    GetModuleFileName( NULL, buffer, MAX_PATH );
    std::string::size_type pos = std::string( buffer ).find_last_of( "\\/" );
    return std::string( buffer ).substr( 0, pos);
}

bool fexists(const char *filename)
{
  std::ifstream ifile(filename);
  return ifile;
}

 void cls()
 {
    system("cls");
    //I know. It's terrible to use this. Really bad. But I can't figure out how else to do it.
 }

using namespace rude;
void init()
{
    std::string CurrentPath = exePath();
    std::string ConfigPath = CurrentPath + "\\" + "playerData.ini";

    Config config;

    std::string str = ConfigPath;
    const char * c = str.c_str();

    config.setConfigFile(c);

    if (fexists(c))
    {
        config.load();
        config.setSection("Player Data");
        Handle = config.getStringValue("Handle");
        playerClass = config.getIntValue("Class");
        playerAspect = config.getIntValue("Aspect");
        playerBlood = config.getStringValue("Blood Colour");
        ClientUUID64 = config.getStringValue("ClientUUID64");
        ClientUUID = base64_decode(ClientUUID64);
    }
    else
    {
        ClientUUID64 = "Null";
    }
    //system("Title SBLUH SERVER");
    SetConsoleTitle(("SBLUH SERVER"));
    std::cout << "SBLUH version " << VersionNumber << std::endl << std::endl;
    std::cout << "(C) SKAIANET SYSTEMS INCORPERATED. ALL RIGHTS RESERVED." << std::endl << std::endl;
    std::cout << "SBLUH debug server is running..." << std::endl << std::endl;

    if(ClientUUID64 == "Null")
    {
        std::cout << std::endl << std::endl << "=========PLAYER FIRST TIME INIT=========" << std::endl << std::endl;
        playerData();
        cls();
        main();
    }
    else
    {
        using namespace std;
        cout << "Welcome, " << Handle << "." << endl << endl;
        cout << "===PLAYER PROFILE===" << endl << endl;
        cout << "Class: " << sbluhClass(playerClass) << endl;
        cout << "Aspect: " << sbluhAspect(playerAspect) << endl;
        cout << "Blood: " << playerBlood << endl << endl;
        cout << "Client UUID: " << ClientUUID64 << endl << endl;
    }
    console();
}
