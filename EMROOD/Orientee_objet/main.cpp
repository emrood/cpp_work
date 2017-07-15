#include <iostream>
#include <string>
#include "Personnages.h"
#include "arme.h"
using namespace std;

int main()
{
    Personnage David, Goliath("epee eguise", 5);
    David.attaquer(Goliath);
    Goliath.boire_potion(30);
    Goliath.info();
    David.info();
    Goliath.attaquer(David);
    David.changer_arme("Degulineur", 10);
    David.attaquer(Goliath);
    David.info();
    Goliath.info();
}
