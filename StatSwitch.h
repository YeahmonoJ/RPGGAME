#include "Tank.h"
#include "Mage.h"
#include "Fighter.h"
#include <iostream>
#include "ClassSelection.h"
#include <string>
#include <windows.h>
using namespace std;

void StatSwitch (int Selection,int& HP,int& Min_Damage,int& Max_Damage, string& name){
    Tank Tank;
    Mage Mage;
    Fighter Fighter;
    
    char confirm;

    if (Selection == 0) {
        while(true) {
            Sleep(2000);
            cout << "You have choosen a Tank: " << endl;
            Sleep(2000);
            cout <<"Press Y to confirm" << endl << "Press N to be taken back!" << endl;
            cin >> confirm;

            if (confirm == 'Y' || confirm == 'y'){ 
                
                name = Tank.name;
                HP = Tank.HP;
                Min_Damage = Tank.damage_min;
                Max_Damage = Tank.damage_max;
                Sleep(2000);
                cout<<"You have confirmed your class: " << name << endl;
                Sleep(2000);
                cout << "Your HP: " << HP << " Here is the lowest damage you can do: " << Min_Damage << " Heres the highest damage you can do: " << Max_Damage << endl;
                return;
            }

            if (confirm == 'N' || confirm == 'n'){

                Sleep(2000);
                cout<<"Taking you back to the starter screen: " << endl;
                StatSwitch(ClassSelection(),HP, Min_Damage, Max_Damage,name);
                return;
            }    
        }
    }

    if (Selection == 1) {
        while(true) {
            Sleep(2000);
            cout << "You have choosen a Mage: " << endl;
            Sleep(2000);
            cout <<"Press Y to confirm" << endl << "Press N to be taken back!" << endl;
            cin >> confirm;

            if (confirm == 'Y' || confirm == 'y'){ 
                name = Mage.name;
                HP = Mage.HP;
                Min_Damage = Mage.damage_min;
                Max_Damage = Mage.damage_max;
                Sleep(2000);
                cout<<"You have confirmed your class: " << name << endl;
                Sleep(2000);
                cout <<"Your class: " << name<<" Your HP: " << HP << " Here is the lowest damage you can do: " << Min_Damage << " Heres the highest damage you can do: " << Max_Damage << endl;
                return;
            }

            if (confirm == 'N' || confirm == 'n'){
                Sleep(2000);
                cout<<"Taking you back to the starter screen: " << endl;
                StatSwitch(ClassSelection(),HP, Min_Damage, Max_Damage,name);
                return;
            }    
        }
    }


    if (Selection == 2) {
        while(true) {
            Sleep(2000);
            cout << "You have choosen a Fighter: " << endl;
            Sleep(2000);
            cout <<"Press Y to confirm" << endl << "Press N to be taken back!" << endl;
            cin >> confirm;

            if (confirm == 'Y' || confirm == 'y'){ 
                name = Fighter.name;
                HP = Fighter.HP;
                Min_Damage = Fighter.damage_min;
                Max_Damage = Fighter.damage_max;
                Sleep(2000);
                cout<<"You have confirmed your class: " << name << endl;
                Sleep(2000);
                cout <<"Your class: " << name<<" Your HP: " << HP << " Here is the lowest damage you can do: " << Min_Damage << " Heres the highest damage you can do: " << Max_Damage << endl;
                return;
            }

            if (confirm == 'N' || confirm == 'n'){
                Sleep(2000);
                cout<<"Taking you back to the starter screen: " << endl;
                StatSwitch(ClassSelection(),HP, Min_Damage, Max_Damage,name);
                return;
            }    
        }
    }
}