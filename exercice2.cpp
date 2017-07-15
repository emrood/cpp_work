#include <iostream>
using namespace std;
int main(){
    cout << "****** Debut du programme ******" << endl;
    int n, somme_positif, somme_negatif, temoin, compt_13, compt_positif, compt_negatif;
    somme_positif = somme_negatif = compt_positif = compt_negatif = compt_13 = temoin = 0;
    do
    {
        cout << " Entrez le nombre de case du vecteur, elle doit etre superieure ou egale a 2 : " << endl;
        cin >> n;
    }while(n<2);
    int vecteur[n];
    cout << " Nous allons remplir le vecteur " << endl;
    for (int i = 0; i <= n-1; i++){
        cout << " Entrez une valeur pour V["<<i<<"]"<<endl;
        cin >> vecteur[i];
        if ( vecteur[i] >= 0){
            somme_positif = somme_positif + vecteur[i];
            compt_positif++;
        }
        if ( vecteur[i] < 0){
            somme_negatif = somme_negatif + vecteur[i];
            compt_negatif++;
        }
        if (vecteur[i] == 13 ){
            temoin = 1;
            compt_13++;
        }
    }
    cout << " Le vecteur est : " << endl;
    cout << " V["<<n<<"] = ";
    for (int i = 0; i <= n-1; i++){
        cout << " | " << vecteur[i];
    }
    cout << "| " << endl;
    cout << " Le nombre d'elements positifs est : " << compt_positif << " \n ...Et le nombre d'elements negatif est : " << compt_negatif << endl;
    cout << " La moyenne arithmetique des nombres positifs est : " << float(somme_positif)/float(compt_positif) << endl;
    cout << " La moyenne arithmetique des nombres negatifs est : " << float(somme_negatif)/float(compt_negatif) << endl;
    if ( temoin == 1 ){
        cout << " 13 fait partie des elements du vecteurs; \n Le nombre de 13 est : "<< compt_13 << endl;
    }
    if ( temoin == 0){
        cout << " Le nombre 13 ne fait partie du vecteur " << endl;
    }
}
