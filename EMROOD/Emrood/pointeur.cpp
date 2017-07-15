#include <iostream>
#include <conio.h>
using namespace std;
int main(){
    int ageUtilisateur = 16;
    int *pointeur(0);
    pointeur = &ageUtilisateur;
    cout << "L'adresse memoire de mo premiere variable est : " << &ageUtilisateur << endl;
    cout << "La valeur stocker dans mon pointeur est : " << pointeur << endl;
    cout << "La valeur stocker dans la variable pointee est : " << *pointeur << endl;
    cout << " La valeur de ma variable est : " << ageUtilisateur << endl;
    int *pointeur2(0);
    pointeur2 = new int;
    cout << "La valeur de pointeur2 est : " << pointeur2 << endl;
    *pointeur2 = 4;
    cout << "La valeur pointee est : " << *pointeur2 << endl;
    delete pointeur2;
    pointeur2 = 0;

}
