#include <iostream>
#include <math.h>
#include <string>
using namespace std;
int main() {
    string mot, b, c, Maj, Min, comp1, compt2;
    cout << "Entrez un nom quelconque" <<  endl;
    cin >> mot;
    cout << "Vous venez d'entrez : " << endl;
    cout << mot << endl;
    cout << "votre mot contient "<< mot.length() << " caracteres" << endl;
    int i;
    cout << "...Et sur une ligne, on trouvera : " << endl;
    for (i = 0; i < mot.length(); i++) {
        cout << mot[i] << endl;
    }
    cout << "il s'ecrit a l'envers: " << endl;
    b = "";
    int e;
    for (e = 0; e < mot.length(); e++) {
        b = mot[e] + b;
    }
    cout << b << endl;




}
