#pragma once
#include <iostream>
using namespace std;
#include "FIGHTScreen.h"
#include "Heal.h"
#include <windows.h>

void EnemyAttack(int& CurrentHP, int& GoonDamage){
    
    Sleep(2000);
    cout <<" " << endl;
    Sleep(2000);
    cout << "The Enemy has attacked!" << endl;
    Sleep(2000);
    cout << "The Enemy did: " << GoonDamage << endl;
    Sleep(2000);
    cout << "Player HP: "<< CurrentHP << " - " << GoonDamage << endl;
    CurrentHP -= GoonDamage;
    Sleep(2000);
    cout << "CurrentHP: " << CurrentHP << endl;
    Sleep(2000);
    cout << "Players Turn: " << endl;
            
}