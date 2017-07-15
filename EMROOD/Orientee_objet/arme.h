#ifndef DEF_ARME
#define DEF_ARME

#include <iostream>
#include <string>

class Arme
{
public:
    Arme();
    Arme(std::string nom_arme, int degats);
    void changer(std::string nouvel_arme, int new_degat);
    void afficher();
    int get_degats() const;

private:
    std::string m_arme;
    int degat_inf;


};


#endif // ARME_H_INCLUDED
