#include "Weapon.h"
#include <string>

Weapon::Weapon(string name, float damage, float weight, Types type) {
    this->name = name;
    this->damage = damage;
    this->weight = weight;
    this->type = type; 
};

Weapon::Weapon() : Weapon("Бумеранг", 5, 1, ONEHANDED) {};

Weapon::~Weapon() {
    outputting();
    cout << " // удален" << endl;
};

void Weapon::outputting() {
    cout << "Weapon : " << name <<
        ", damage - " << damage <<
        ", weight - " << weight <<
        ", type - " << type; 
};

bool Weapon::canlift(float maxWeight) {
    if (maxWeight < weight) return true;
    return false;
};

float Weapon::sumWeights(float addedWeight) {
    return (weight + addedWeight);
};

float Weapon::sumWeights(Weapon* addedWeapon) {
    return sumWeights((*addedWeapon).weight);
};

string Weapon::getName() {
    return name;
};

float Weapon::getDamage() {
    return damage;
};

float Weapon::getWeight() {
    return weight;
};

void Weapon::setDamage(float addDamage) {
    damage = addDamage;
};

Weapon::Types Weapon::getType() { 
    return type;
};