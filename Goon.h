#pragma once

class Goon{
public:
    string name;
    
	int HP;
	int damage_min ;
	int damage_max ;

	Goon() :name("Goon"), HP(35), damage_min(4), damage_max(18) {}
};
