#include "Menus.h"
#include<iostream>
#include <iomanip>
using namespace std;

////displays unsolved's (default) game menu
void Menu1::menu() {
    system("Color 8F");
    cout << setw(87) << " _    _ _   _  _____  ____  _ __      ________ _____  " << endl;
    cout << setw(87) << "| |  | | \\ | |/ ____|/ __ \\| |\\ \\    / /  ____|  __ \\ " << endl;
    cout << setw(87) << "| |  | |  \\| | (___ | |  | | | \\ \\  / /| |__  | |  | |" << endl;
    cout << setw(87) << "| |  | | . ` |\\___ \\| |  | | |  \\ \\/ / |  __| | |  | |" << endl;
    cout << setw(87) << "| |__| | |\\  |____) | |__| | |___\\  /  | |____| |__| |" << endl;
    cout << setw(87) << " \\____/|_| \\_|_____/ \\____/|______\\\/   |______|_____/ " << endl;

    cout << setw(71) << " _____________________" << endl;
    cout << setw(72) << "|                     |" << endl;
    cout << setw(72) << "|     1. START        |" << endl;
    cout << setw(72) << "|_____________________|" << endl;


    cout << setw(71) << " _____________________" << endl;
    cout << setw(72) << "|                     |" << endl;
    cout << setw(72) << "|   2. HOW TO PLAY    |" << endl;
    cout << setw(72) << "|_____________________|" << endl;

    cout << setw(71) << " _____________________" << endl;
    cout << setw(72) << "|                     |" << endl;
    cout << setw(72) << "|   3. EXIT GAME      |" << endl;
    cout << setw(72) << "|_____________________|" << endl;

}

////displays unsolved's "solved" game menu
void SolveMenu::menuSolved() {
    system("Color 8F");
    cout << setw(83) << "_____   ____   _  __      __ ______  _____ " << endl;
    cout << setw(84) << " / ____| / __ \\ | | \\ \\    / /|  ____||  __ \\ " << endl;
    cout << setw(84) << "| (___  | |  | || |  \\ \\  / / | |__   | |  | |" << endl;
    cout << setw(84) << " \\___ \\ | |  | || |   \\ \\/ /  |  __|  | |  | |" << endl;
    cout << setw(84) << "  ___) || |__| || |____\\  /   | |____ | |__| |" << endl;
    cout << setw(84) << "|_____/  \\____/ |______|\\/    |______||_____/ " << endl;

    cout << setw(71) << " _____________________" << endl;
    cout << setw(72) << "|                     |" << endl;
    cout << setw(72) << "|      1. START       |" << endl;
    cout << setw(72) << "|_____________________|" << endl;


    cout << setw(71) << " _____________________" << endl;
    cout << setw(72) << "|                     |" << endl;
    cout << setw(72) << "|   2. HOW TO PLAY    |" << endl;
    cout << setw(72) << "|_____________________|" << endl;

    cout << setw(71) << " _____________________" << endl;
    cout << setw(72) << "|                     |" << endl;
    cout << setw(72) << "|    3. EXIT GAME     |" << endl;
    cout << setw(72) << "|_____________________|" << endl;

}