#include <iostream>
#include "Weapon.h"
#include "MagicWeapon.h"
#include <iostream>

bool operator > (Weapon item1, Weapon item2) { // 5.2.4
    return item1.getDamage() > item2.getDamage();
};

bool operator < (Weapon item1, Weapon item2) { // 5.2.4
    return item1.getDamage() < item2.getDamage();
};

int main()
{
    setlocale(LC_ALL, "");

    Weapon boomerang;
    boomerang.outputting();
    cout << endl << "Damage (damage) - " << boomerang.getDamage() << endl;

    MagicWeapon frostStaff;
    frostStaff.outputting();
    cout << endl << "Damage (damage + extraDamage) - " << frostStaff.getDamage() << endl;


    Weapon axe = Weapon("Топор", 7, 5, Weapon::TWOHANDED);
    MagicWeapon amberCrossbow = MagicWeapon("Янтарный Арбалет", 2, 3.25, Weapon::CROSSBOW, 1.75);

    axe.outputting();
    cout << endl;
    amberCrossbow.outputting();
    cout << endl << "Урон больше у оружия - ";
    if (axe > amberCrossbow) cout << axe.getName();
    else cout << amberCrossbow.getName();
    cout << endl;
    cout << "Сравним " << boomerang.getName() << " и " << frostStaff.getName() <<
        " : урон меньше у оружия - ";
    if (boomerang < frostStaff) cout << boomerang.getName();
    else cout << frostStaff.getName();
    cout << endl;

}

