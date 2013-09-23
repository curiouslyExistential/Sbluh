/*
    playerData.cpp
    Called if either the user calls it manually, or if the program notices that playerData.ini
    does not exists. Sets up the file in question by subjecting the user to a short questionare.

    This file is part of Sbluh.

    Copyright (C) 2013  Dorion Beaudin.
    Refer to COPYING.txt for liscense information.
*/

#include <iostream>
#include "sbluh.h"
#include "base64.h"
#include "globalVars.h"
#include <Windows.h>
#include "rude/config.h"
#include <string>
#include <sstream>

extern std::string Handle;
extern int playerClass;
extern int playerAspect;
extern std::string playerBlood;
extern std::string VersionNumber;
extern std::string ClientUUID;
extern std::string ClientUUID64;
extern std::string exePath();

using namespace rude;
void playerData() {

    std::cout << "Enter your handle in the format of: firstwordSecondword" << std::endl << std::endl;
    Handle = input();

    std::cout << std::endl << std::endl;
    aspectMain(1);

    std::cout << std::endl;
    bloodMain(1);

    std::stringstream ss;
    ss << VersionNumber << "||" << Handle << "||" << playerClass << "||" << playerAspect << "||" << playerBlood << "||" << "end";

    const std::string s = ss.str();

    ClientUUID64 = base64_encode(reinterpret_cast<const unsigned char*>(s.c_str()), s.length());
    ClientUUID = base64_decode(ClientUUID64);

    Config config;
    std::string CurrentPath = exePath();
    std::string ConfigPath = CurrentPath + "\\" + "playerData.ini";

    std::string str = ConfigPath;
    const char * c = str.c_str();

    config.setConfigFile(c);
    config.setSection("Player Data", true);

    str = Handle;
    c = str.c_str();
	config.setStringValue("Handle", c);

    str = playerBlood;
    c = str.c_str();
    config.setStringValue("Blood Colour", c);

	config.setIntValue("Class", playerClass);

	config.setIntValue("Aspect", playerAspect);

	str = ClientUUID64;
	c = str.c_str();
	config.setStringValue("ClientUUID64", c);

	config.save();
}
