#pragma once
#include "Weapon.h"
#include <iostream>
using namespace std;

class Player {

public:
    Player(float strength);

    float getDamage(Weapon weapon);

private:

    float strength;
};
