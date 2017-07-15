#include <iostream>
using namespace std;
int main() {
    int nombre;
    int facto( int nombre){
        int factoriel = 1;
        for(int i = 1; i <= nombre; i++){
           factoriel = factoriel * i;
        }
        return facto;
    }
cout << "Entrez un nombre : ";
cin >> nombre;
int factoriel = facto(nombre);
cout << "La factoriel de " << nombre << " est : " << factoriel << endl;

}
