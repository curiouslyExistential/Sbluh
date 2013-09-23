#ifndef SBLUH_H
#define SBLUH_H

int main();
void sweepCalc();
double conv(double x, bool sweeps);
void aspectMain(bool initialization);
void help();
void logon();
void init();
void update();
void bloodMain(bool initialization);
bool UpdateAvailable();
void data();
void playerData();
void displayPlayerData();

#include <string>
void console();
std::string input();
int req(std::string sweeps);
double checkInput(std::string input);
int calc(std::string in);
std::string sbluhClass(int input);
std::string sbluhAspect(int input);
std::string sbluhBlood(std::string sign, std::string sign2);
int bloodNumber(std::string data);

#endif

