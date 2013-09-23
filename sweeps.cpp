#include <iostream>
#include "sbluh.h"

void sweepCalc()
{
start:
    //This value value determines what method is used to gain the answer.

    //This section selects which way to convert the years and sweeps. It then sends that data off to req()
    using namespace std;
    cout << "Select Mode" << std::endl << std::endl << "Sweeps to Years: 0" << std::endl << "Years to Sweeps: 1" << std::endl << std::endl;
    string sweeps = input();
    cout << endl;

    if(sweeps == "0")
    {
        req(sweeps);
    }
    else if(sweeps == "1")
    {
        req(sweeps);
    }
    else
    {
        cout << endl << "You have entered an invalid option";
        cout << endl << endl;
        goto start;
    }

    //Keeps the program from immediately closing. No longer required now that the program loops.

    //cin.clear();
    //cin.ignore(255, '\n');
    //cin.get();

    std::cout << std::endl;
}

