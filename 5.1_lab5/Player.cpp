#include "Player.h"
#include <string>

Player::Player(float strength) {
    this->strength = strength;
};

float Player::getDamage(Weapon weapon) {
    return (weapon.getDamage() + strength);
};
