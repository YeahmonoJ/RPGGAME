#pragma once
#include <iostream>
using namespace std;
#include "FIGHTScreen.h"
#include "Heal.h"
#include <windows.h>

void PlayerGoesFirst(int Player_MaxHP,int& CurrentHP, int& PlayerDamage,int& GoonCurrentHP, int& Loop_Breaker){


    char Options;
    Sleep(2000);
    cout << "Players Turn: " << endl;
    FightScreen();
    cin >> Options;
    if (CurrentHP <= 0) {
        cout << "Enemy Wins!" << endl;
		cout <<"Game Over!" << endl;
        exit(0);
        Loop_Breaker = 1;
	} else if (GoonCurrentHP <= 0) {
        cout << "Player Wins!" << endl;
        cout << "Congrats on test 1" << endl;
        Loop_Breaker = 1;
	}        

    if (Options == 'A'|| Options == 'a'){
        Sleep(2000);
        cout << "The Player has attacked!" << endl;
        Sleep(2000);
        cout << "The Player did: " << PlayerDamage << endl;
        Sleep(2000);
        cout << "Goon HP: " << GoonCurrentHP << " - " << PlayerDamage << endl;
        GoonCurrentHP -= PlayerDamage;
        Sleep(2000);
        cout << "Goons remaining health: " << GoonCurrentHP << endl;
    } else if (Options == 'H' || Options == 'h') {
        Heal(CurrentHP,Player_MaxHP);

    } else  {
        Sleep(2000);
        cout << "Invalid input" << endl;
            }
        
    if (CurrentHP <= 0) {
        cout << "Enemy Wins!" << endl;
		cout <<"Game Over!" << endl;
        exit(0);
        Loop_Breaker = 1;
	} else if (GoonCurrentHP <= 0) {
        cout << "Player Wins!" << endl;
        cout << "Congrats on test 1" << endl;
        Loop_Breaker = 1;
					
				}    
            
}