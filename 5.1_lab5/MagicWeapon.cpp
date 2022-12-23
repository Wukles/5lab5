#include "MagicWeapon.h"
#include <string>

MagicWeapon::MagicWeapon(string name, float damage, float weight, Types type, float otherDamage) :  
	Weapon(name, damage, weight, type) {
	this->otherDamage = otherDamage;
};

MagicWeapon::MagicWeapon() : MagicWeapon("морозный посох", 3, 6, TWOHANDED, 4) {}; 

float MagicWeapon::getOtherDamage() {
	return otherDamage;
};