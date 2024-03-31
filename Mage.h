#pragma once

class Mage{
public:
	string name;
	int HP;
	int damage_min;
	int damage_max;

	Mage() :name("Mage"), HP(65), damage_min(10), damage_max(30) {}
};