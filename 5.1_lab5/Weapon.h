#pragma once
#include <iostream>

using namespace std;

class Weapon {

    friend class player;

public:

    enum Types 
    {
        ONEHANDED,  
        TWOHANDED,  
        BOW,        
        CROSSBOW    
    };

    Weapon(string name, float damage, float weight, Types type); 

    Weapon();

    ~Weapon();

    void outputting();

    bool canlift(float maxWeight);

    float sumWeights(float addedWeight);

    float sumWeights(Weapon* addedWeapon);

    string getName();

    float getDamage();

    float getWeight();

    void setDamage(float addDamage);

    Types getType(); 

private:

    string name;
    float damage;
    float weight;
    Types type; 
};
