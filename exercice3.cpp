#include <iostream>
#include <conio.h>
using namespace std;
int main(){
    cout << "DEBUT !!!! \n Nous allons faire la somme de deux vecteurs" << endl;
    int n;
    do
    {
        cout << "Entrez la dimension des vecteurs : ";
        cin >> n;
    }while(n<2);
    int V[n], T[n], S[n];
    cout << " Nous allons remplir les deux vecteurs simultanement " << endl;
    for (int i = 0; i <= n-1; i++){
        cout << " Entrez une valeur pour V["<<i<<"]"<<endl;
        cin >> V[i];
        cout << " Entrez une valeur pour T["<<i<<"]"<<endl;
        cin >> T[i];
        S[i] = T[i] + V[i];
    }
    cout << " Les vecteurs sont : " << endl;
    cout << " V["<<n<<" ] = ";
    for (int i = 0; i <= n-1; i++){
        cout << " | " << V[i];
    }
    cout << "| " << endl << endl;
    cout << " T["<<n<<" ] = ";
     for (int i = 0; i <= n-1; i++){
        cout << " | " << T[i];
    }
    cout << "| " << endl;
    cout << " \n La somme de ces deux vecteurs est: " << endl;
    cout << " S["<<n<<"] = ";
    for(int i = 0; i <= n-1; i++){
        cout << " | " << S[i];
    }
    cout << "| " << endl;

}
