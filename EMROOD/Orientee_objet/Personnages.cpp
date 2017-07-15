
#include "Personnages.h"
#include "arme.h"

using namespace std;
//definition de mon objet
//abscence de <class Personnage>
//abscence des attributs
        Personnage::Personnage() : a_vie(70), a_mana(60)
        {

        }
        Personnage::Personnage(std::string mon_arme, int dega_nouveau) : a_vie(70), a_mana(60), a_arme(mon_arme, dega_nouveau)
        {

        }
        Personnage::~Personnage()
        {

        }
        void Personnage::info()
        {
            cout << "Ce personnage a " << a_vie << " point(s) de vie, " << endl;
            cout << a_mana << " de magie et a comme arme un " << endl;

        }
        void Personnage::degats_recu(int n_degats)
        {
            a_vie -= n_degats;
            if (a_vie < 0){
                a_vie = 0;
            }
        }
        void Personnage::boire_potion (int quantite)
        {
            a_vie += quantite;
            if (a_vie > 100){
                a_vie = 100;
            }
        }
        void Personnage::attaquer(Personnage &cible)
        {
            cible.degats_recu(a_arme.get_degats());
        }
        void Personnage::changer_arme(string nouvelle_arme, int degats_nouveau)
        {
            a_arme.changer(nouvelle_arme, degats_nouveau);
        }
        bool Personnage::est_vivant()
        {
            if(a_vie > 0){
                return true;
            }
            else{
                return false;
            }
        }
