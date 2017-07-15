#include <iostream>
#include <fstream>
#include <conio.h>
#include <string>
using namespace std;
int main(){
    int a = 4;
    char Id;
    int cherche;
    int temoin = 0;
    string info;
    cout << "Entrez l'identifiant souhaite : ";
    cin >> cherche;
    ifstream esih("info1.txt", ios::in);
    if(esih){
        while(esih.get(Id)){
            if (Id == cherche){
                temoin = 1;
                getline(esih, info);
                break;
            }
            else{
                cout << "Cet identifiant n'existe pas " << endl;
            }
        }
        cout << info << endl;
        esih.close();
    }
    else{
        cerr << "Ce fichier n'existe pas"<<endl;
    }

}

