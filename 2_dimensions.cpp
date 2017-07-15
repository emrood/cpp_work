#include <iostream>
using namespace std;
int main(){
    int matrice[3][3];
    int n
    int entry;

    cout << " Nous allons travailler sur une matrice carre de d'ordre 3 \n\ remplissons le tableau " << endl;
    for (int i = 0; i <= 2; i++){
        for (int j = 0; j <= 2; j++){
            cout << "Entrer une valeur pour Tab"<<"["<<i<<"]"<<"["<<j<<"] :"<< endl;
            cin >> entry;
            matrice[i][j] = entry;
        }
    }
    cout << "Notre matrice est : " << endl;
    for (int i = 0; i <= 2; i++){
            cout <<"| ";
        for (int j = 0; j <= 2; j++){
                cout << matrice[i][j] << " , ";
        }
            cout << " |"<< endl;
    }
    int max, min;
    int trace, trace2, compteur5 = 0;
    max = min = matrice[0][0];
    for (int i = 0; i <= 2; i++){
        for (int j = 0; j <= 2; j++){
                if ( max < matrice[i][j]){
                    max = matrice[i][j];
                }
                if (min > matrice[i][j]){
                    min = matrice[i][j];
                }
                if (matrice[i][j] > 5){
                    compteur5++;
                }
                /*
                if ( i == j){
                    trace = trace + matrice[i][j];
                }
                if ( i + j == 2){
                    trace2 = trace2 + matrice[i][j];
                }
                */

            }
        }
    cout << " Le plus grand element de la matrice est : " << max << " et le plus petit element est : " << min << endl;
    cout << " Le nombre d'elements superieur a 5 est : " << compteur5 << endl;
    int somme2 = 0;
    for(int j = 0; j <= 2; j++) {
        somme2 = somme2 + matrice[1][j];
    }
    cout << " La somme des elements de la deuxieme ligne  est : " << somme2/* << " \n\ la trace principale de la matrice est egale a : " << trace << " et la trace secondaire est egale a " << trace2 */<< endl;



}
