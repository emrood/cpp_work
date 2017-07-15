#include <iostream>
#include <string>
using namespace std;


int main()
{
    Personnage David, Goliath;
    David.attaquer(Goliath);
    Goliath.boire_potion(30);
    Goliath.attaquer(David);
    David.changer_arme("Degulineur", 10);
    David.attaquer(Goliath);


}
