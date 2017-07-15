#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE

#include <iostream>
#include <string>
#include "arme.h"
class Personnage//prototype de mon objets
    {
        public:
        Personnage();//Mon constructeur
        ~Personnage();
        Personnage(std::string mon_arme, int degat_nouveau);
        void degats_recu (int degats);
        void boire_potion (int quantite);
        void attaquer(Personnage &cible);
        void changer_arme(std::string nouvelle_arme, int degats_nouveau);
        void info();
        bool est_vivant();

        private:
        // principe d'encapsulation: mes attribut doivent etre prives et mes methodes publiiques.
        int a_vie;
        int a_mana;
        Arme a_arme;//Il est deconseiller d'include <using namespace std> dans un fichier d'entete
        int a_degatsArme;


    };

#endif // PERSONNAGES_H_INCLUDED
