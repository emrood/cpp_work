#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Entrez la valeur de N : ";
    cin >> n;
    int Tab1[50][50];
    int Tab2[50][50];
    int multi[50][50];
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
                multi[i][j] = Tab1[j][i] * Tab2[i][j];
            }
    }
    cout << "\n\n La Multiplication de ces deux tableaux donne: " << endl;
    for ( int i = 0; i <= n-1; i++){
        cout << " | ";
        for (int j = 0; j <= n-1; j++){
            cout << multi[i][j] << " | ";
        }
        cout << endl;
    }

}
