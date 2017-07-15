#include <iostream>
#include <conio.h>
using namespace std;
int main () {
    int matrice[3][4];
    cout << "******* Nous allons remplir le tableau *****" << endl;
    for (int i = 0; i <= 2; i++){
            for (int j = 0; j <= 3; j++){
                cout << "Entrez une valeur pour T["<<i<<"]["<<j<<"]  = ";
                cin >> matrice[i][j];
            }
    }
    cout << " Notre Tableau est : " << endl;
    for (int i = 0; i <= 2; i++){
            cout << "| ";
        for ( int j = 0; j <= 3; j++){
            cout << matrice[i][j] << " | ";
        }
            cout << endl;
    }
    cout << " Les elements de la deuxieme lignes sont : ";
    for (int j = 0; j <= 3 ; j++){
        cout << " | " << matrice[1][j];
    }
    cout << " | " << endl;
    cout << " Les elements de la troisieme colonne sont : ";
    for ( int i = 0; i <= 2; i++){
        cout << " | " << matrice[i][2];
    }
    cout << " | " << endl;
    int pairs = 0;
    for (int i = 0; i <= 2; i ++){
        for ( int j = 0; j <= 3; j++){
            if (matrice[i][j] % 2 == 0){
                pairs = pairs + matrice[i][j];
            }
        }
    }
    cout << " La somme des elements pairs est : " << pairs << endl;
    cout << " Les elements impairs de la premiere colonne sont : | ";
    for (int i = 0; i <= 2; i++){
        if ( matrice[i][0] %2 != 0){
            cout << matrice[i][0] << " | ";
        }
    }
    cout << endl;
    int grand = matrice[0][0];
    for (int i = 0; i <= 2; i++){
        for (int j = 0; j <= 3; j++){
            if (grand < matrice[i][j]){
                grand = matrice[i][j];
            }
        }
    }
    cout << "Le plus grand element de la matrice est : " << grand << endl;
    cout << "La moyenne arithmetique de la deuxieme colonne est : ";
    int somme2 = 0;
    int moy2;
    for (int i = 0; i <= 2; i++){
        somme2 = somme2 + matrice[i][1];
    }
    moy2 = somme2 / 3;


}


