#pragma once
#include <iostream>
using namespace std;
#include "FIGHTScreen.h"
#include "Heal.h"
#include "EnemyFirst.h"
#include "PlayerGoesFirst.h"

void Who_Goes_First(int& selection,int Player_MaxHP,int& CurrentHP, int& PlayerDamage,int& GoonCurrentHP,int& GoonDamage){
    
    
    if (selection == 1 || selection == 2){
       PlayerGoesFirst( Player_MaxHP, CurrentHP,  PlayerDamage,GoonCurrentHP, GoonDamage);
        
    } else {
        EnemyFirst( Player_MaxHP, CurrentHP,  PlayerDamage,GoonCurrentHP, GoonDamage);

    }

        
       


    
}