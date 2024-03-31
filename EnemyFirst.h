#pragma once
#include <iostream>
using namespace std;
#include "FIGHTScreen.h"
#include "Heal.h"
#include <windows.h>

void EnemyFirst(int Player_MaxHP,int& CurrentHP, int& PlayerDamage,int& GoonCurrentHP,int& GoonDamage){
    char Options;
    Sleep(2000);
    cout << "Enemy goes first" << endl;
        while (true)
        {

            
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
            FightScreen();
            cin >> Options;
            
            if (Options == 'A'|| Options == 'a'){
                Sleep(2000);
                cout << "The Player has attacked!" << endl;
                Sleep(2000);
                cout << "The Player did: " << PlayerDamage << endl;
                Sleep(2000);
                cout << "Goon HP: " << GoonCurrentHP << " - " << PlayerDamage << endl;
                Sleep(2000);
                GoonCurrentHP -= PlayerDamage;
                Sleep(2000);
                cout << "Goons remaining health: " << GoonCurrentHP << endl;
            } 
            else if(Options == 'H' || Options == 'h') {
                Heal(CurrentHP,Player_MaxHP);

            }else {
                cout << "Invalid input" << endl;
            }
            if (CurrentHP <= 0){
                CurrentHP = 0;
                Sleep(2000);
                cout << "You have Died!!!!" << endl <<"Game Over" <<endl;
                break;
            }
            else if (GoonCurrentHP <= 0){
                GoonCurrentHP = 0;
                Sleep(2000);
                cout << "You have defeated Goon" << endl;
                break;
            }

        }
}