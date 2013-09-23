#include "sbluh.h"
#include <iostream>

extern std::string Handle;
extern std::string VersionNumber;
extern std::string ClientUUID;
extern std::string ClientUUID64;

void displayPlayerData()
{
    using namespace std;
    cout << endl << "Your version is: " << VersionNumber << endl;
    cout << "Your handle is: " << Handle << endl;
    cout << "Your ClientUUID (Decoded) is: " << ClientUUID << endl;
    cout << "Your ClientUUID (Base64 Encoded) is: " << ClientUUID64 << endl;
}
