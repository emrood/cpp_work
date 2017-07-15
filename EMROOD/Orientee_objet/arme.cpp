
#include "arme.h"


Arme::Arme() : m_arme("pistolet a bille"), degats_inf(10)
{

}
Arme::Arme(std::string nom_arme, int degats) : m_arme(nom_arme), degats_inf(degats)
{

}
void Arme::changer(std::string nouvel_arme, int new_degat)
{
    m_arme = nouvel_arme;
    degats_inf = new_degat;
}
void Arme::afficher()
{
    cout << "Arme : " << m_arme << "(degat : " << degats_inf << endl;
}
int Arme::get_degats() const
{
    return degats_inf;
}
