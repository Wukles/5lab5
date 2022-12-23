#include <iostream>
#include "Weapon.h"
#include "MagicWeapon.h"

struct player { 

    unsigned int id;
    string login;
    string password;

    void outpittingplayer() { 
        cout << "Player id - " << id <<
            ", Player login - " << login <<
            ", Player password - " << password;
    };
};

int main()
{
    setlocale(LC_ALL, "");

    Weapon boomerang;
    Weapon::Types type = boomerang.getType();
    if (type == Weapon::Types::ONEHANDED) cout << "Одноручное оружие";
    else if (type == Weapon::Types::TWOHANDED) cout << "Двуручное оружие";
    else if (type == Weapon::Types::BOW) cout << "Лук";
    else if (type == Weapon::Types::CROSSBOW) cout << "Арбалет";
    cout << endl;

    player player1;
    player1.id = 1;
    player1.login = "player1 login";
    player1.password = "player1 password";

    player player2 = { 2, "player2 login", "player2 password" };

    player1.outpittingplayer();
    cout << endl;
    player2.outpittingplayer();
    cout << endl;

    MagicWeapon frostStaff;
    
    frostStaff.outputting();
    cout << ", урон - " << frostStaff.getOtherDamage() << endl;
    type = frostStaff.getType();
    if (type == Weapon::Types::ONEHANDED) cout << "Одноручное оружие";
    else if (type == Weapon::Types::TWOHANDED) cout << "Двуручное оружие";
    else if (type == Weapon::Types::BOW) cout << "Лук";
    else if (type == Weapon::Types::CROSSBOW) cout << "Арбалет";
    cout << endl;

    MagicWeapon amberCrossbow = MagicWeapon("однокрылый арбалет", 9, 8, Weapon::CROSSBOW, 3);
    amberCrossbow.outputting();
    cout << ", урон - " << amberCrossbow.getOtherDamage() << endl;
    type = amberCrossbow.getType();
    if (type == Weapon::Types::ONEHANDED) cout << "Одноручное оружие";
    else if (type == Weapon::Types::TWOHANDED) cout << "Двуручное оружие";
    else if (type == Weapon::Types::BOW) cout << "Лук";
    else if (type == Weapon::Types::CROSSBOW) cout << "Арбалет";
    cout << endl;
}
