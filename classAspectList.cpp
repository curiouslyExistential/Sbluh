/*
    classAspectList.cpp
    A vast list of classes and aspects.

    This file is part of Sbluh.

    Copyright (C) 2013  Dorion Beaudin.
    Refer to COPYING.md for license information.
*/

#include <iostream>
#include "sbluh.h"

std::string sbluhClass(int input)
{
    //A
    if(input == 2 || input == 3)
    {
        return "Maid";
    }

    //B
    else if(input == 4 || input == 5)
    {
        return "Mage";
    }

    //C
    else if(input == 6 || input == 7)
    {
        return "Witch";
    }

    //D
    else if(input == 8 || input == 9)
    {
        return "Knight";
    }

    //E
    else if(input == 10 || input == 11)
    {
        return "Thief";
    }

    //F
    else if(input == 12 || input == 13)
    {
        return "Blacksmith";
    }

    //G
    else if(input == 14 || input == 15)
    {
        return "Citizen";
    }

    //H
    else if(input == 16 || input == 17)
    {
        return "Rogue";
    }

    //I
    else if(input == 18 || input == 19)
    {
        return "Runner";
    }

    //J
    else if(input == 20 || input == 21)
    {
        return "Heir";
    }

    //K
    else if(input == 22 || input == 23)
    {
        return "Seer";
    }

    //L
    else if(input == 24 || input == 25)
    {
        return "Slayer";
    }

    //M
    else if(input == 26 || input == 27)
    {
        return "Magician";
    }

    //N
    else if(input == 28 || input == 29)
    {
        return "Bard";
    }

    //O
    else if(input == 30 || input == 31)
    {
        return "Scout";
    }

    //P
    else if(input == 32 || input == 33)
    {
        return "Archer";
    }

    //Q
    else if(input == 34 || input == 35)
    {
        return "Runner";
    }

    //R
    else if(input == 36 || input == 37)
    {
        return "Seer";
    }

    //S
    else if(input == 38 || input == 39)
    {
        return "Sylph";
    }

    //T
    else if(input == 40 || input == 41)
    {
        return "Prince";
    }

    //U
    else if(input == 42 || input == 43)
    {
        return "Alchemist";
    }

    //V
    else if(input == 44 || input == 45)
    {
        return "Keeper";
    }

    //W
    else if(input == 46 || input == 47)
    {
        return "Jester";
    }

    //X
    else if(input == 48 || input == 49)
    {
        return "Muse";
    }

    //Y
    else if(input == 50 || input == 51)
    {
        return "Lord";
    }

    //Z
    else if(input == 52)
    {
        return "Waste";
    }

    //User probably didn't enter a letter.
    else
    {
        return "Glitch";
    }
}


std::string sbluhAspect(int input)
{
    //A
    if(input == 2 || input == 3)
    {
        return "Heart";
    }

    //B
    else if(input == 4 || input == 5)
    {
        return "Energy";
    }

    //C
    else if(input == 6 || input == 7)
    {
        return "Dimension";
    }

    //D
    else if(input == 8 || input == 9)
    {
        return "Light";
    }

    //E
    else if(input == 10 || input == 11)
    {
        return "Flow";
    }

    //F
    else if(input == 12 || input == 13)
    {
        return "Void";
    }

    //G
    else if(input == 14 || input == 15)
    {
        return "Rhythm";
    }

    //H
    else if(input == 16 || input == 17)
    {
        return "Space";
    }

    //I
    else if(input == 18 || input == 19)
    {
        return "Infinity";
    }

    //J
    else if(input == 20 || input == 21)
    {
        return "Quanta";
    }

    //K
    else if(input == 22 || input == 23)
    {
        return "Mind";
    }

    //L
    else if(input == 24 || input == 25)
    {
        return "Doom";
    }

    //M
    else if(input == 26 || input == 27)
    {
        return "Rage";
    }

    //N
    else if(input == 28 || input == 29)
    {
        return "Information";
    }

    //O
    else if(input == 30 || input == 31)
    {
        return "Hope";
    }

    //P
    else if(input == 32 || input == 33)
    {
        return "Flame";
    }

    //Q
    else if(input == 34 || input == 35)
    {
        return "Constellation";
    }

    //R
    else if(input == 36 || input == 37)
    {
        return "Blood";
    }

    //S
    else if(input == 38 || input == 39)
    {
        return "Electricity";
    }

    //T
    else if(input == 40 || input == 41)
    {
        return "Breath";
    }

    //U
    else if(input == 42 || input == 43)
    {
        return "End";
    }

    //V
    else if(input == 44 || input == 45)
    {
        return "Earth";
    }

    //W
    else if(input == 46 || input == 47)
    {
        return "Heart";
    }

    //X
    else if(input == 48 || input == 49)
    {
        return "Time";
    }

    //Y
    else if(input == 50 || input == 51)
    {
        return "Water";
    }

    //Z
    else if(input == 52)
    {
        return "0x000F";
    }

    //User probably didn't enter a letter for the first letter in their name.
    else
    {
        return "Error";
    }
}

