#include <iostream>
using namespace std;
int main(){
    int n, sommation, compteur;
    float moyenne;
    sommation = compteur = 0;
    do
    {
        cout << "Entrez le nombre de notes que vous allez entrez : " << endl;
        cin >> n;
    }while(n<=0);
    int Notes[20];
    cout << " Nous allons entrez les notes les uns apres les autres : " << endl;
    for(int i = 0; i <= n-1; i++){
        cout << "Entrez la "<<i+1<<"e note : ";
        cin >> Notes[i];
        sommation = sommation + Notes[i];
    }
    moyenne = float(sommation)/float(n);
    cout << "La moyenne arithmetique est : " << moyenne << endl;
    for (int i = 0; i <= n-1; i++){
        if (Notes[i]>moyenne){
            compteur++;
        }
    }
    cout << "\nIl y a " << compteur << " note(s) superieure(s) a la moyenne arithmetique " << endl;

}
