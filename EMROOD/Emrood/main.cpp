#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include "roodly.h"
using namespace std;
double carre(double entry){
    double resultat;
     resultat = entry * entry;
     return resultat;
}
void rectangle(int& longueur, int& largeur){
    for(int i = 0; i < longueur; i++){
        for(int j = 0; j < largeur; j++){
            cout << "*";
        }
        cout << endl;
    }
}

double calcule(vector<double> const& mes_notes){
    double moyenne, somme = 0;
    for (int v = 0; v < mes_notes.size(); v++){
        somme += mes_notes[v];
    }
    moyenne = somme / mes_notes.size();

    return moyenne;
}
int nbrsecond(int second,int minutes = 0, int heure = 0);
int nbrsecond(int second, int minutes, int heure){
    int total = 0;
    total += (heure * 60 * 60);
    total += (minutes * 60);
    total += second;
    return total;
}

int main()
{
    cout << "Hello world!" << endl;
    string nomUtilisateur;
    double piUtilisateur(-1.);
    int age;
    cout << "Quel est votre age ?" << endl;
    cin >> age;
    cin.ignore();
    cout << "Quel est votre nom ? " << endl;
    getline(cin, nomUtilisateur);
    cout << "Combien vaut Pi ?"<< endl;
    cin >> piUtilisateur;
    cout << "Vous vous appelez " << nomUtilisateur << " et vous dite que pi vaut " << piUtilisateur << endl;
    for(int i = 2; i <= 20; i++){
        cout << "Le carre de " << i << " est : " << carre(i) << endl;
    }
    int longueur, largeur;
    cout << "Nous allons dessiner un rectangle ou un carre " << endl;
    cout << "Entrez la longeur :";
    cin >> longueur;
    cout << "Entrez la largeur :";
    cin >> largeur;
    rectangle(longueur, largeur);
    int heure, minutes, second, resultat;
    cout << "Entrez le nombre d'heure : ";
    cin >> heure;
    cout << "Entrez le nombre de minutes : ";
    cin >> minutes;
    cout << "Entrez le nombre de second : ";
    cin >> second;
    resultat = nbrsecond(second, minutes, heure);
    cout <<"Le nombre de second contenu dans " << heure << "heures, " << minutes <<" minutes et " << second << " seconds est: " << resultat << endl;
    resultat = nbrsecond(45, 10);
    cout << "45 secondes, 10 minutes = " << resultat << endl;
    vector<double>EMROOD(3, 4.0);
    for (int i = 0; i < 3; i++){
        cout << EMROOD[i] << " | ";
    }
    EMROOD.push_back(12.5);
    cout << endl;
    for (int i = 0; i < 4; i++){
        cout << EMROOD[i] << " | ";
    }
    cout << endl << EMROOD.size() << endl;
    cout << "****************" << endl << endl;
    /*int taille;
    cout << "Entrez la taille du tableau : ";
    cin >> taille;
    double tab[taille];
    cout << "Entrez vos notes : ";
    for(int u = 0; u < taille; u++){
        cin >> tab[u];
    }
    double resultat2;
    resultat2 = calcule(tab[taille], taille);
    cout << "Votre moyenne est : " << resultat2 << endl;
    */
    vector<double> mes_notes;
    double note;
    int z = 0;
    do{
        cout << " Entrez une note ";
        cin >> note;
        mes_notes.push_back(note);
        z++;
    }while(z <= 7);
    cout << "La liste de vos notes est : ";
    for(int i = 0; i < mes_notes.size(); i++){
        cout << mes_notes[i] << " | ";
    }
    cout << endl;
    double resultat2;
    resultat2 = calcule(mes_notes);
    cout << "///// : " << resultat2 << endl;
    return 0;
}
