#include <iostream>
using namespace std;
int main() {
    int x;
    int tab[2][2];
    int ligne = 0;
    int colonne = 0;
    int i, j;
    int temoin = 0;
    cout << "Entrer une valeur pour x : " << endl;
    cin >> x;
    cout << "Remplissons le tableau " << endl;
    for(i = 0; i <= 2; i++){
        for(j = 0; j <=2; j++){
            cout << " entrez une valeur pour " <<"Tab["<<i<<","<<j<<"]"<<endl;
            cin >> tab[i][j];
        }
    }
    cout << "Le tableau est presente comme suite :" << endl;
    for(i = 0; i <= 2; i++){
        cout << " | ";
        for(j = 0; j <=2; j++){
                cout << " " << tab[i][j];
          }
        cout <<" | \n\ ";
    }
    i = j = 0;
    while((temoin = 0) && (i <= 2) && (j <=2)){
        if (tab[i][j] = x){
            temoin = temoin + 1;
            ligne = ligne + i;
            colonne = colonne + j;
        }
        i++;
        j++;
    }
    if(temoin = 0){
        cout << "x ne se trouve pas dans cette matrice " << endl;
    }
    if (temoin = 1){
        cout << "La premiere position de x se trouve a la ligne :" <<ligne<< " et a la colonne : " << colonne << endl;
    }


}
