#pragma once

class Fighter{
public:
	string name;
	int HP;
	int damage_min;
	int damage_max;

	Fighter() :name("Fighter"), HP(80), damage_min(6), damage_max(24) {}
};

