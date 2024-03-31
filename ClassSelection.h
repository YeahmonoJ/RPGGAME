#pragma once
#include <iostream>
using namespace std;

int ClassSelection() {
	int Class_Selection;
	cout << "Pick a class" << endl;
	Sleep(2000);
	cout << "0: Tank: A class with High HP" << endl;
	Sleep(2000);
	cout << "1: Mage: A class with high DPS" << endl;
	Sleep(2000);
	cout << "2: Fighter: A class with high Damage" << endl;
	cin >> Class_Selection;
	return Class_Selection;


}