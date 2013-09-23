/*
    console.cpp
    The thing that makes it all work. A simple console that allows users to enter commands,
    and thus navigate the program.

    This file is part of Sbluh.

    Copyright (C) 2013  Dorion Beaudin.
    Refer to COPYING.txt for liscense information.
*/

#include <iostream>
#include "sbluh.h"

void console()
{
    while(1)
    {
        int enterSpam = 0;
        std::string stuff = input();
        std::cout << std::endl << std::endl;
        if (stuff == "help:help")
        {
            std::cout << "Displays commands." << std::endl << std::endl;
        }
        else if(stuff == "help")
        {
            help();
        }
        else if (stuff == "help:aspect")
        {
            std::cout << "Displays your Class and Aspect Title." << std::endl << std::endl;
        }
        else if(stuff == "aspect")
        {
            aspectMain(0);
        }
        else if(stuff == "help:bloodCalc")
        {
            std::cout << "Calculates your blood colour based on your Sun sign, and your Moon sign" << std::endl << std::endl;
        }
        else if(stuff == "bloodCalc")
        {
        bloodMain(0);
        }
        else if (stuff == "help:sweepCalc")
        {
            std::cout << "Converts Years to Alternian Solar Sweeps, and vice versa." << std::endl << std::endl;
        }
        else if(stuff == "sweepCalc")
        {
            sweepCalc();
        }
        else if(stuff == "help:playerData")
        {
            std::cout << "Allows the user to alter their previously entered user information stored in the save file." << std::endl << std::endl;
        }
        else if(stuff == "playerData")
        {
            playerData();
        }
        else if(stuff == "help:displayPlayerData")
        {
            std::cout << "Prints current user's information, loaded previously from a save." << std::endl << std::endl;
        }
        else if(stuff == "displayPlayerData")
        {
            displayPlayerData();
        }
        else if(stuff == "")
        {
            enterSpam++;
            if(enterSpam >= 10)
            {
                std::cout << "Enter mashing detected." << std::endl;
                enterSpam = 0;
            }
        }
        else
        {
            std::cout << "'" << stuff << "' is not a valid command. Type 'help' for a list of commands." << std::endl << "Type help:<command> for more information on a command." << std::endl << std::endl;
        }
    }
}
