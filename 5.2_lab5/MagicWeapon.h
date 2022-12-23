#pragma once
#include "Weapon.h"

class MagicWeapon : public Weapon {

private:

    float otherDamage;

public:

    MagicWeapon();

    MagicWeapon(string name, float damage, float weight, Types type, float otherDamage);

    float getOtherDamage();

    float getDamage() override; 

    void outputting() override;

};