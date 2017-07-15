#include <iostream>
using namespace std;
int main(){
    int n;
    do
    {
        cout << "Veillez entrez une valeur superieure ou egale a 2 pour la dimension des tableaux: ";
        cin >> n;
    }while(n<2);

    int Tab1[n][n];
    int Tab2[n][n];
    int multi[n][n];
    cout << "Nous allons remplir les tableaux **** \n ****** Remplissons le premier *****" << endl;
    for ( int i = 0; i <= n-1; i++){
        for (int j = 0; j <= n-1; j++){
            cout << " Entrez une valeur pour tableau1["<<i<<"]["<<j<<"] : ";
            cin >> Tab1[i][j];
        }
    }
    cout << "Notre premier tableau est : " << endl;
    for ( int i = 0; i <= n-1; i++){
        cout << " | ";
        for (int j = 0; j <= n-1; j++){
            cout << Tab1[i][j] << " | ";
        }
        cout << endl;
    }
    cout << " \n\n ****** Remplissons le deuxieme tableau******" << endl;
    for ( int i = 0; i <= n-1; i++){
        for (int j = 0; j <= n-1; j++){
            cout << " Entrez une valeur pour tableau2["<<i<<"]["<<j<<"] : ";
            cin >> Tab2[i][j];
        }
    }
    cout << "Notre second tableau est : " << endl;
    for ( int i = 0; i <= n-1; i++){
        cout << " | ";
        for (int j = 0; j <= n-1; j++){
            cout << Tab2[i][j] << " | ";
        }
        cout << endl;
    }
    for ( int i = 0; i <= n-1; i++){
        for (int j = 0; j <= n-1; j++){
                multi[i][j] = Tab1[i][j] * Tab2[j][i];
            }
    }
    cout << "\n\n La Multiplication des tableaux donne: " << endl;
    for ( int i = 0; i <= n-1; i++){
        cout << " | ";
        for (int j = 0; j <= n-1; j++){
            cout << multi[i][j] << " | ";
        }
        cout << endl;
    }
}
