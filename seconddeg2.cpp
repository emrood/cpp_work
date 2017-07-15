#include <iostream>
#include <math.h>
using namespace std;
int main(){
    float a, b, c, x, delta, x1, x2;
    int i;
    cout << "Nous allons resoudre des equations de la forme 'ax2+bx+c=0' ou encore 'bx+c=0' \n\ C'est super!!! Nous pouvons resoudre jusqu'a 10 000 equations "<< "\n\ (Si vous voulez effectuer une equation du premier degre, veillez entrez 0 pour a)" <<"\n\Vous allez entrez les valeurs de a, b et c et le programme se chargera de faire le reste \n\Commencons!!!" << endl;
    for (i = 0; i <= 10000; i++){
    cout << "Svp, entrez une valeur pour a:" << endl;
    cin >> a;
    cout << "Et maintenant, entrez une valeur pour b:" << endl;
    cin >> b;
    cout << "Enfin, entrez une valeur pour c:" << endl;
    cin >> c;
    if (a == 0) {
        cout << "On a une equation du premier degre " << endl; // On a une equation du type bx+c
        if ( b > 0) {
            if ( c > 0) {
                cout << "Votre equation est :\n\ " <<  b << "x" << "+" << c << "=0" <<endl;
            }
            else{
            cout << "Votre equation est :\n\ " << b << "x" << c << "=0" << endl;
            }
        }
        else {
            if (c > 0) {
            cout << "Votre equation est : \n\ "<< b << "x+" << c << "=0" << endl;
            }
            else {
                cout << "Votre equation est :\n\ " <<  b << "x" << c << "=0" <<endl;
            }
        }
        if ((b == 0) && (c == 0)) {
            cout << "On a une infinite de solution" << endl;
        }
        if ((b == 0) && (c != 0)) {
            cout << "La resolution de cette equation est impossible" << endl;
        }
        if (b != 0) {
            x = -c/b;
            cout << "Le resultat est: x = " << x << endl;
        }
    }
    else {
        if ( b > 0) {
            if ( c > 0) {
                cout << "Votre equation est : \n\ " << a << "x2+" << b<< "x" << "+" <<c<< "=0" << endl;
                }
            else{
                cout << "Votre equation est :\n\ " << a << "x2+" << b << "x" << c << "=0" << endl;
                }
            }
        if ( b < 0) {
            if (c > 0) {
                cout << "Votre equation est : \n\ " << a << "x2" << b << "x+" << c << "=0" << endl;
                    }
            else {
                cout << "Votre equation est: \n\ " << a << "x2" << b << "x" << c << "=0" << endl;
            }
        }
        if (b == 0){
            if (c > 0){
                cout << "Votre equation est: \n\ " << a << "x2+" << c << "=0" << endl;
            }
            else {
                cout << "Votre equation est: \n\ " << a << "x2" << c << "=0" << endl;
                }
            }

        delta = (b*b) - 4*a*c;
        if (delta < 0) {
            cout << "Impossible a resoudre car delta est inferieure a '0' " << endl;
            }
        if (delta == 0) {
            x = b / (2*a);
            cout << " delta = 0 donc L'equation admet une solution unique: \n\ " << "x = " << x << endl;
            }
        if (delta > 0) {
            x1 =  ( (- b) - sqrt(delta))/ (2*a);
            x2 = ( (- b) + sqrt(delta))/ (2*a);
            cout << "l'equation admet une racine double \n\ " << "les resultats sont : \n\ x1 = " << x1 << " et x2 = " << x2 << endl;
            }
        }
    cout << "\n\ \n\ On va resoudre une autre...." << endl;
    }
}
