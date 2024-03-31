#pragma once
#include <iostream>
#include <windows.h>
using namespace std;

void Heal(int& Current_HP, int MaxHP){
    int heals = 20;

    if (Current_HP + heals >= MaxHP){
        Sleep(2000);
        cout << "Heal exceed max HP" << endl;
        Current_HP = MaxHP;
    }

    else {
        Current_HP += heals;
        Sleep(2000);
        cout << "Healed for 20HP" << endl << " Here is your current HP: " << Current_HP <<endl;

    }

    return;

}