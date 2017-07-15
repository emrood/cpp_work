#include <iostream>
#include <conio.h>
using namespace std;
int main() {
    cout << " ******* Debut du programme ********" << endl;
    int n;
    do
    {
        cout << " Entrez une valeur pour n (>=2) : " << endl;
        cin >> n;
    }while(n<2);
    int T[n];
    int compt1, compt2, multi; // compt1 = somme des elements pairs, compt2 = somme des elements impairs;
    compt1 = compt2 = 0;
    multi = 1;
    cout << " Nous allons remplir le vecteur " << endl;
    for (int i = 0; i <= n-1 ; i++) {
        cout << " Entrez une valeur pour: T["<<i<<"]"<<endl;
        cin >> T[i];
        if(T[i]%2 == 0){
            multi = multi * T[i];
            compt1++;
        }
        else{
            compt2++;
        }
    }
    cout << " Notre vecteur est: \n\ " << " | ";
    for (int i = 0; i <= n-1 ; i++) {
        cout << T[i] << " | ";
    }
    cout << " \n\ Le nombre d'elements pairs est : " << compt1 << " et le nombre d'elements impairs est : " << compt2 << endl;
    cout << " Le produit des elements pairs est multi = " << multi << endl;
}
