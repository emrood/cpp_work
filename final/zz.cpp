#include <iostream>
#include <math.h>
#include <fstream>
using namespace std;
int main(){
     ifstream emrood("info1.txt", ios::in);
        if (emrood){
            string contenu;
            while (getline(emrood, contenu)){
              cout << contenu << endl;
            }
            emrood.close();
        }
        else{
            cerr << "impossible d'ouvrir le fichier !" << endl;
        }
}

