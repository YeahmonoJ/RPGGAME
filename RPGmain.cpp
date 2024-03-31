// Creating a turn based game where the player picks a class and then fights an enemy or waves of enemy. 



// Standard library 
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <cstdlib>
#include <ctime>

// Game Logic
#include "ClassSelection.h"
#include "StatSwitch.h"
#include "Heal.h"
#include "FIGHTScreen.h"
#include "EnemyAttack.h"
#include "PlayerAttack.h"

// Player Classes
#include "Tank.h"
#include "Mage.h"
#include "Fighter.h"
#include "Goon.h"

// Enemy Classes
#include "Goon.h"
using namespace std;
int main() {
	while (true)
	{

		string name;
		Tank Tank;
    	Mage Mage;
    	Fighter Fighter;
		Goon Goon;


		
		// srand(time(NULL)) generates a random number everytime a rand() is called.
		// Without it the random number would only stay as one value  
		// I was only able to get srand to work in the main file as passing by reference seems to only give one value after being randomly selected. 
		srand(time(NULL));

		int Selection = 1 + rand() % 3;

		// When selecting our class these values will change if passed by reference. 
		int HP, Min_damage, Max_Damage;
		
		StatSwitch(ClassSelection(), HP, Min_damage, Max_Damage,name);

		int Current_HP = HP;
		int Goon_HP = Goon.HP;
		int Goon_CurrentHP = Goon_HP;
		int Loop_breaker = 0;
		if (Selection == 1 || Selection == 2){
			cout << "Player Goes first" << endl;
			
			while(Loop_breaker != 1) {
				
				int Damage = Min_damage + rand() % (Max_Damage - Min_damage + 1);
				int Goon_Damage = Goon.damage_min + rand() % (Goon.damage_max - Goon.damage_min);


				PlayerAttack(HP, Current_HP,Damage, Goon_CurrentHP, Loop_breaker);
				EnemyAttack(Current_HP, Goon_Damage);
				

			}

		}else {
			cout << "The Enemy has spotted you first!" << endl;
			
			while(Loop_breaker!= 1) { 

				int Damage = Min_damage + rand() % (Max_Damage - Min_damage + 1);
				int Goon_Damage = Goon.damage_min + rand() % (Goon.damage_max - Goon.damage_min);


				EnemyAttack( Current_HP, Goon_Damage);
				PlayerAttack(HP, Current_HP,Damage, Goon_CurrentHP,Loop_breaker);
				
			}
		}


			
			}
		
		return 0;
	
}


