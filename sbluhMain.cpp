/*
    sbluhMain.cpp
    Checks if there's an update. If not, it runs the rest of the program. If so, it asks the user
    if they want to update. If not, then the program proceeds normally.

    This file is part of Sbluh.

    Copyright (C) 2013  Dorion Beaudin.
    Refer to COPYING.md for license information.
*/

#include "sbluh.h"

int main()
{
    if (UpdateAvailable())
    {
        update();
    }
    else
    {
        init();
    }
    return 0;
}
