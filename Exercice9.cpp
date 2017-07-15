#include <iostream>
using namespace std;
int main () {
    int n, somme_principale, somme_secondaire;
    somme_principale = somme_secondaire = 0;
    do
    {
        cout << "Entrez la dimensions du tableau (une valeur >=2) : ";
        cin >> n;
    }while(n<2);
    cout << endl;
    int V[n][n];
    cout << " Nous allons remplir la matrice " << endl;
    for (int i = 0; i <= n-1; i++){
            for (int j = 0; j<= n-1; j++){
                cout << " Entrez une valeur pour V["<<i<<"]["<<j<<"]"<<endl;
                cin >> V[i][j];
            }
    }
    cout << " Le vecteur est : ";
    cout << " V["<<n<<"]["<<n<<"] = " << endl;
    for (int i = 0; i <= n-1; i++){
            for (int j = 0; j<= n-1; j++){
                cout << " | " << V[i][j];
                if( i == j){
                    somme_principale = somme_principale + V[i][j];
                }
                if ( i + j == n-1 ){
                    somme_secondaire = somme_secondaire + V[i][j];
                }
            }
       cout << " | " << endl;
    }
    cout << "La somme des elements de la diagonale principale est : " << somme_principale << endl;
    cout << "La somme des elements de la diagonale secondaire est : " << somme_secondaire << endl;
    if (somme_principale > somme_secondaire){
        cout << "La trace principale est superieure a la trace secondaire " << endl;
    }
    if (somme_principale < somme_secondaire){
        cout << "La trace secondaire est superieure a la trace principale " << endl;
    }
    if (somme_principale == somme_secondaire){
        cout << " Les deux traces sont egales " << endl;
    }

}

