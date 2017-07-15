#include <iostream>
#include <cmath>
#include <string>
using namespace std;
double carre(double entry){
    double resultat;
     resultat = entry * entry;
     return resultat;
}
int nbrsecond(int& heure, int& minutes, int& second){
    int total = 0;
    total += (heure * 60 * 60);
    total += (minutes * 60);
    total += second;
    return total;
}
int main()
{
    for(int i = 2; i <= 20; i++){
        cout << "Le carre de " << i << "est" << carre(i) << endl;
    }
    return 0;
    int heure, minutes, second, resultat;
    cout << "Entrez le nombre d'heure : ";
    cin >> heure;
    cout << "Entrez le nombre de minutes : ";
    cin >> minutes;
    cout << "Entrez le nombre de second : ";
    cin >> second;
    resultat = nbrsecond(heure, minutes, second);
    cout <<"Le nombre de second contenu dans " << heure << "heures, " << minutes <<" minutes et " << second << " seconds est: " << resultat << endl;

}
