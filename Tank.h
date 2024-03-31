#pragma once

class Tank{
public:
	string name;
	int HP;
	int damage_min ;
	int damage_max ;

	Tank() :name("Tank"), HP(100), damage_min(6), damage_max(14) {}
};