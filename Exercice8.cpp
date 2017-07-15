#include <iostream>
#include <conio.h>
using namespace std;
int main () {

    int matrice[3][4];
    cout << "Insertion des elements dans la matrice !!! " << endl;
    for (int i = 0; i <= 2; i++){
            for (int j = 0; j <= 3; j++){
                cout << "Inserez une valeur pour T["<<i<<"]["<<j<<"]  = ";
                cin >> matrice[i][j];
            }
    }
    cout << " La matrice est : " << endl;
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
    int somme2 = 0;
    int petit2 = matrice[0][1];
    int petit3 = matrice[2][0];
    int grand = matrice[0][0];
    for (int i = 0; i <= 2; i ++){
        for ( int j = 0; j <= 3; j++){
            if (matrice[i][j] % 2 == 0){
                pairs = pairs + matrice[i][j];
            }
            if (grand < matrice[i][j]){
                grand = matrice[i][j];
            }
            if (j == 1) {
                somme2 = matrice[i][1] + somme2 ;
            }
            if(petit3 > matrice[2][j]){
                petit3 = matrice[2][j];
            }
            if (petit2 > matrice[i][1]){
                petit2 = matrice[i][1];
            }
        }
    }
    cout << " La somme des elements de la colonne 2 est: " << somme2 << endl;
    cout << " La somme des elements pairs est : " << pairs << endl;
    cout << "Le plus grand element de la matrice est : " << grand << endl;
    cout << "La moyenne arithmetique de la deuxieme colonne est : "<< float(somme2)/3.0 << endl;
    cout << "Le plus petit element de la troisieme ligne est: " << petit3 << endl;
    cout << "Le plus petit element de la deuxieme colonne est: " << petit2 << endl;
    cout << " Les elements impairs de la premiere colonne sont : | ";
    for (int i = 0; i <= 2; i++){
        if ( matrice[i][0] %2 != 0){
            cout << matrice[i][0] << " | ";
        }
    }
    cout << endl;

}



