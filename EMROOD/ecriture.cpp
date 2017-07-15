#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;
int main(){
    ofstream roodly("emroody.txt", ios::app);
    if(roodly){
        string ligne;
        cout << "Entrez les information : " << endl;
        getline(cin, ligne);
        roodly << ligne << endl;
        roodly.close();
    }
    else{
        cerr << "Impossible d'ouvrir le fichier" << endl;
    }
    ifstream emrood("emroody.txt", ios::in);
    if (emrood){
        string zebede;
        while(getline(emrood, zebede)){
            cout << zebede << endl;
        }
        int position = emrood.tellg();
        cout << "Nous sommes a la position : " << position << endl;
    }
    else{
        cerr << "Fichier manquant " << endl;
    }
    if (roodly){
        roodly.seekp(4, ios::beg);
        double nbr;
        cin >> nbr;
        roodly << nbr;
    }

}
